#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Boolean>>
struct Action_2_t32C4F245B4E34F3E75EB2622FF3A09000BBCC5CC;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Byte>>
struct Action_2_tDA97EDBE429ED2C7D453259DE293890FAA6C8C55;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Char>>
struct Action_2_t33791FEB2DA8B84E885BE1DFB05D5DC133B7296A;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Color>>
struct Action_2_t8222FB3BEF71C43EFFAB68C42DE9E6A152D7EECA;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Color32>>
struct Action_2_tAFE7500F9F3AA561F802D1FD46B7A17299E05AF1;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Decimal>>
struct Action_2_tB107F3FBE953BACA692B9F89D827CC5DF41019A7;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Double>>
struct Action_2_t9FE4B1AC7E07191CD0D48E2F6FB7AA8F527480B0;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Guid>>
struct Action_2_tC536935B7F272AAF6F33C053CD9CC57B002F4D18;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Int16>>
struct Action_2_tEB1E638A3701040FD002FAA3C403432DE1862230;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Int32>>
struct Action_2_tF845E186400C0206D0CF0FCDA7A6B30FE653942E;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Int64>>
struct Action_2_tB888C37C76CFA32600FA71677BC735B0CAAC8BBA;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Matrix4x4>>
struct Action_2_t050CC308352AC79782FF797E3B5A58DF55ABFF50;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Plane>>
struct Action_2_tFCD3C2CFD8A9C952BEEB6D0AB4A1ED244B5442BA;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Quaternion>>
struct Action_2_t0806EC55DFE222CCCC8DD49A8B8F1862139A0F38;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Ray>>
struct Action_2_t0C49C092457DFC849872F5D649F3E954ADB1F282;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Rect>>
struct Action_2_t4D33F4DB8215CF4B1EB57F0DB6CDD9F271184548;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.SByte>>
struct Action_2_tE23A3E0227F5C96DDBCC4F26952661D64F69FC9E;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.Single>>
struct Action_2_t3942B8126059BB637D0993B1978F244B1E6E0C84;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.UInt16>>
struct Action_2_t5533E3CB6230C4C9B01E5B66F0207B4C32E6C3EA;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.UInt32>>
struct Action_2_tD689C636DCEEF70D3B7F49F3F22417396F4216A6;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<System.UInt64>>
struct Action_2_tAEB746DFFC5CC9D6DB12B82B1951DDDEA07C663A;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Vector2>>
struct Action_2_tB4EAB6BBB8C1A037EC32255CC1143E77269EAEB6;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Vector2Int>>
struct Action_2_t572E1E6B43C351F24F8627C7745175901B8A254B;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Vector3>>
struct Action_2_tF6AC972A6E15B2510D1FEB56FC1D0B9A36DF8973;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Vector3Int>>
struct Action_2_t4EE52DF32AC59097FB65A619A4AF23D583DEFF6B;
// System.Action`2<Mirror.NetworkWriter,System.Nullable`1<UnityEngine.Vector4>>
struct Action_2_tDEAF4576004CB08FF62B1FAEF4F7FEE3FEF98B49;
// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47;
// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B;
// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922;
// System.Action`2<Mirror.NetworkWriter,System.ByteEnum>
struct Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE;
// System.Action`2<Mirror.NetworkWriter,Mirror.ChangeOwnerMessage>
struct Action_2_tB60920C8C2525FE2AA7D7806382EB3E48443EE4B;
// System.Action`2<Mirror.NetworkWriter,System.Char>
struct Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.ClientMatchMessage>
struct Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575;
// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379;
// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2;
// System.Action`2<Mirror.NetworkWriter,System.Double>
struct Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B;
// System.Action`2<Mirror.NetworkWriter,Mirror.EntityStateMessage>
struct Action_2_t653196CC7CBB49847172366EA7A62A79DE2D639C;
// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309;
// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869;
// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722;
// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.MatchInfo>
struct Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.MatchPlayerData>
struct Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE;
// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6;
// System.Action`2<Mirror.NetworkWriter,System.Object>
struct Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF;
// System.Action`2<Mirror.NetworkWriter,OnPlayerExitMessage>
struct Action_2_t14A25F67EDC89F1C7660F9DD13BBB03FFDADE282;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Action_2_tD120F789AEEE3408457B90CA0818E2032F869041;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64;
// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18;
// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3;
// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.MultipleMatch.ServerMatchMessage>
struct Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C;
// System.Action`2<Mirror.NetworkWriter,Mirror.Discovery.ServerRequest>
struct Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB;
// System.Action`2<Mirror.NetworkWriter,Mirror.Discovery.ServerResponse>
struct Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4;
// System.Action`2<Mirror.NetworkWriter,System.Single>
struct Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7;
// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC;
// System.Action`2<Mirror.NetworkWriter,Mirror.Stats>
struct Action_2_t37E2363A645D6C43032225E6B0201DC93E14ED18;
// System.Action`2<Mirror.NetworkWriter,Mirror.TimeSnapshotMessage>
struct Action_2_tF5FC82D20DE5B6FE8CFB6437D816DC5E1FDD8846;
// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F;
// System.Action`2<Mirror.NetworkWriter,System.UInt16Enum>
struct Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990;
// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401;
// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage>
struct Action_2_t67F3DEC5878430362B56B1C2CF45AEAAC8D4B2AC;
// System.Action`2<Mirror.NetworkWriter,Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage>
struct Action_2_t16FF6B409C4A282BEDC827AA5BB2FF76EF424103;
// System.Action`2<Mirror.NetworkWriter,CustomMessages/CreateLobbyMessage>
struct Action_2_t6058AAAE50DEC49B3788BA989A6506AD6DCB4BBF;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.DeviceAuthenticator/AuthRequestMessage>
struct Action_2_t4CF87F9CF523799FB253B1C38707F3E195B757A3;
// System.Action`2<Mirror.NetworkWriter,Mirror.Authenticators.DeviceAuthenticator/AuthResponseMessage>
struct Action_2_t8A03F8A3BDFF3A35B303C29745AA35D8F307117D;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.LayerMask>
struct EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E;
// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tA55660D7B36BC919063457215A12594F309CFDF1;
// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E;
// System.Func`2<Mirror.Examples.MultipleMatch.PlayerInfo,System.Boolean>
struct Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269;
// System.Func`2<Unity.Mathematics.float3,System.Boolean>
struct Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_tABC441119E42D460CA5B9DED9C1D1A2BD8C836DD;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct IEnumerable_1_tF316739C8BD63390C6735A523D11111CDB165479;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_tBA0E6E878DA8F8DD29D887670962BCC85E2FCB3E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct IEnumerable_1_tB86FCE9DACD7D91AA784F0DEBB8EECE9B51333AD;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerable`1<Unity.Mathematics.float3>
struct IEnumerable_1_tE6FE2A92BEFC9DD4F45302076646BA0D6F4807D9;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_t02C24C8A9AB2516412261243B17D8239575F3E86;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct IEnumerator_1_t78FAD0C53FCC05439B0133A0FC24595AD24EC918;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_tAA2BE9F7B57F3BA20E480FBFDAC12A6CFDB0D296;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct IEnumerator_1_tD9F963B84D6B3C20B926DE7C0827982BC4355B6F;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9C426231952B863270D78D88F9DB5B4E9A16CC6A;
// System.Collections.Generic.IEnumerator`1<Unity.Mathematics.float3>
struct IEnumerator_1_tB485EF79267D439DD3A02E073C24196FEC5EDD52;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF;
// System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>
struct Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7;
// UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>
struct VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D;
// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0;
// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>
struct WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>
struct WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>
struct WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>
struct WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>
struct WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.LayerMask>
struct EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int64_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___current_2)); }
	inline int64_t get_current_2() const { return ___current_2; }
	inline int64_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int64_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C, ____items_1)); }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* get__items_1() const { return ____items_1; }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C_StaticFields, ____emptyArray_5)); }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Mirror.Writer`1<System.ArraySegment`1<System.Byte>>
struct Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields, ___write_0)); }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * get_write_0() const { return ___write_0; }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Boolean>>
struct Writer_1_t3F09AA52DAD69C5E4B7A7DDC26F188D76A5E32E6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3F09AA52DAD69C5E4B7A7DDC26F188D76A5E32E6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t32C4F245B4E34F3E75EB2622FF3A09000BBCC5CC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3F09AA52DAD69C5E4B7A7DDC26F188D76A5E32E6_StaticFields, ___write_0)); }
	inline Action_2_t32C4F245B4E34F3E75EB2622FF3A09000BBCC5CC * get_write_0() const { return ___write_0; }
	inline Action_2_t32C4F245B4E34F3E75EB2622FF3A09000BBCC5CC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t32C4F245B4E34F3E75EB2622FF3A09000BBCC5CC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Byte>>
struct Writer_1_t83A3C7DFDC08F73C1A802328D615BCED2465AA00  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t83A3C7DFDC08F73C1A802328D615BCED2465AA00_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDA97EDBE429ED2C7D453259DE293890FAA6C8C55 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t83A3C7DFDC08F73C1A802328D615BCED2465AA00_StaticFields, ___write_0)); }
	inline Action_2_tDA97EDBE429ED2C7D453259DE293890FAA6C8C55 * get_write_0() const { return ___write_0; }
	inline Action_2_tDA97EDBE429ED2C7D453259DE293890FAA6C8C55 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDA97EDBE429ED2C7D453259DE293890FAA6C8C55 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Char>>
struct Writer_1_t9E763B55A554FB7E5E4DE65309C90236DB64FF7D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9E763B55A554FB7E5E4DE65309C90236DB64FF7D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t33791FEB2DA8B84E885BE1DFB05D5DC133B7296A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9E763B55A554FB7E5E4DE65309C90236DB64FF7D_StaticFields, ___write_0)); }
	inline Action_2_t33791FEB2DA8B84E885BE1DFB05D5DC133B7296A * get_write_0() const { return ___write_0; }
	inline Action_2_t33791FEB2DA8B84E885BE1DFB05D5DC133B7296A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t33791FEB2DA8B84E885BE1DFB05D5DC133B7296A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Color>>
struct Writer_1_t2E31F58771768DAC3900EE0467FFF61A7DF8AB4F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2E31F58771768DAC3900EE0467FFF61A7DF8AB4F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8222FB3BEF71C43EFFAB68C42DE9E6A152D7EECA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2E31F58771768DAC3900EE0467FFF61A7DF8AB4F_StaticFields, ___write_0)); }
	inline Action_2_t8222FB3BEF71C43EFFAB68C42DE9E6A152D7EECA * get_write_0() const { return ___write_0; }
	inline Action_2_t8222FB3BEF71C43EFFAB68C42DE9E6A152D7EECA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8222FB3BEF71C43EFFAB68C42DE9E6A152D7EECA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Color32>>
struct Writer_1_t0ABD121AC31CBADAA9FC76B2AE6BC597A91B0CB0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0ABD121AC31CBADAA9FC76B2AE6BC597A91B0CB0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAFE7500F9F3AA561F802D1FD46B7A17299E05AF1 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0ABD121AC31CBADAA9FC76B2AE6BC597A91B0CB0_StaticFields, ___write_0)); }
	inline Action_2_tAFE7500F9F3AA561F802D1FD46B7A17299E05AF1 * get_write_0() const { return ___write_0; }
	inline Action_2_tAFE7500F9F3AA561F802D1FD46B7A17299E05AF1 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAFE7500F9F3AA561F802D1FD46B7A17299E05AF1 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Decimal>>
struct Writer_1_t7BFCB50DB9ACEF848DFFA807AE20638A35909F16  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7BFCB50DB9ACEF848DFFA807AE20638A35909F16_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB107F3FBE953BACA692B9F89D827CC5DF41019A7 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7BFCB50DB9ACEF848DFFA807AE20638A35909F16_StaticFields, ___write_0)); }
	inline Action_2_tB107F3FBE953BACA692B9F89D827CC5DF41019A7 * get_write_0() const { return ___write_0; }
	inline Action_2_tB107F3FBE953BACA692B9F89D827CC5DF41019A7 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB107F3FBE953BACA692B9F89D827CC5DF41019A7 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Double>>
struct Writer_1_t507EFFC68A1438C425F771C0DF9603891EE4A8EB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t507EFFC68A1438C425F771C0DF9603891EE4A8EB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t9FE4B1AC7E07191CD0D48E2F6FB7AA8F527480B0 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t507EFFC68A1438C425F771C0DF9603891EE4A8EB_StaticFields, ___write_0)); }
	inline Action_2_t9FE4B1AC7E07191CD0D48E2F6FB7AA8F527480B0 * get_write_0() const { return ___write_0; }
	inline Action_2_t9FE4B1AC7E07191CD0D48E2F6FB7AA8F527480B0 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t9FE4B1AC7E07191CD0D48E2F6FB7AA8F527480B0 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Guid>>
struct Writer_1_t4B309BC0E7AC48F13E9AF874E38825A6D40CB147  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4B309BC0E7AC48F13E9AF874E38825A6D40CB147_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tC536935B7F272AAF6F33C053CD9CC57B002F4D18 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4B309BC0E7AC48F13E9AF874E38825A6D40CB147_StaticFields, ___write_0)); }
	inline Action_2_tC536935B7F272AAF6F33C053CD9CC57B002F4D18 * get_write_0() const { return ___write_0; }
	inline Action_2_tC536935B7F272AAF6F33C053CD9CC57B002F4D18 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tC536935B7F272AAF6F33C053CD9CC57B002F4D18 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Int16>>
struct Writer_1_t37151BBA08AB518626BB1899AFF6843BCF58277A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t37151BBA08AB518626BB1899AFF6843BCF58277A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tEB1E638A3701040FD002FAA3C403432DE1862230 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t37151BBA08AB518626BB1899AFF6843BCF58277A_StaticFields, ___write_0)); }
	inline Action_2_tEB1E638A3701040FD002FAA3C403432DE1862230 * get_write_0() const { return ___write_0; }
	inline Action_2_tEB1E638A3701040FD002FAA3C403432DE1862230 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tEB1E638A3701040FD002FAA3C403432DE1862230 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Int32>>
struct Writer_1_t7DB28C5F668FA8AD44AC74C5C4F605AC94181A5E  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7DB28C5F668FA8AD44AC74C5C4F605AC94181A5E_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF845E186400C0206D0CF0FCDA7A6B30FE653942E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7DB28C5F668FA8AD44AC74C5C4F605AC94181A5E_StaticFields, ___write_0)); }
	inline Action_2_tF845E186400C0206D0CF0FCDA7A6B30FE653942E * get_write_0() const { return ___write_0; }
	inline Action_2_tF845E186400C0206D0CF0FCDA7A6B30FE653942E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF845E186400C0206D0CF0FCDA7A6B30FE653942E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Int64>>
struct Writer_1_t7AB1F164480B1D46E7C2D17D688A3F3BD11F36A1  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7AB1F164480B1D46E7C2D17D688A3F3BD11F36A1_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB888C37C76CFA32600FA71677BC735B0CAAC8BBA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7AB1F164480B1D46E7C2D17D688A3F3BD11F36A1_StaticFields, ___write_0)); }
	inline Action_2_tB888C37C76CFA32600FA71677BC735B0CAAC8BBA * get_write_0() const { return ___write_0; }
	inline Action_2_tB888C37C76CFA32600FA71677BC735B0CAAC8BBA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB888C37C76CFA32600FA71677BC735B0CAAC8BBA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Matrix4x4>>
struct Writer_1_tDBB9A051C0C98A837EED3BDD1D205D29D590388A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDBB9A051C0C98A837EED3BDD1D205D29D590388A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t050CC308352AC79782FF797E3B5A58DF55ABFF50 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDBB9A051C0C98A837EED3BDD1D205D29D590388A_StaticFields, ___write_0)); }
	inline Action_2_t050CC308352AC79782FF797E3B5A58DF55ABFF50 * get_write_0() const { return ___write_0; }
	inline Action_2_t050CC308352AC79782FF797E3B5A58DF55ABFF50 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t050CC308352AC79782FF797E3B5A58DF55ABFF50 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Plane>>
struct Writer_1_t29E64125546F3333940FD0BC7F6F91E765A7B473  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t29E64125546F3333940FD0BC7F6F91E765A7B473_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tFCD3C2CFD8A9C952BEEB6D0AB4A1ED244B5442BA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t29E64125546F3333940FD0BC7F6F91E765A7B473_StaticFields, ___write_0)); }
	inline Action_2_tFCD3C2CFD8A9C952BEEB6D0AB4A1ED244B5442BA * get_write_0() const { return ___write_0; }
	inline Action_2_tFCD3C2CFD8A9C952BEEB6D0AB4A1ED244B5442BA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tFCD3C2CFD8A9C952BEEB6D0AB4A1ED244B5442BA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Quaternion>>
struct Writer_1_t2C7B5CE01662D85BDC3566DC7740CB387C8123BE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2C7B5CE01662D85BDC3566DC7740CB387C8123BE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0806EC55DFE222CCCC8DD49A8B8F1862139A0F38 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2C7B5CE01662D85BDC3566DC7740CB387C8123BE_StaticFields, ___write_0)); }
	inline Action_2_t0806EC55DFE222CCCC8DD49A8B8F1862139A0F38 * get_write_0() const { return ___write_0; }
	inline Action_2_t0806EC55DFE222CCCC8DD49A8B8F1862139A0F38 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0806EC55DFE222CCCC8DD49A8B8F1862139A0F38 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Ray>>
struct Writer_1_t808FDC0CD2BA373BE81926277C63A577E4DCB44D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t808FDC0CD2BA373BE81926277C63A577E4DCB44D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0C49C092457DFC849872F5D649F3E954ADB1F282 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t808FDC0CD2BA373BE81926277C63A577E4DCB44D_StaticFields, ___write_0)); }
	inline Action_2_t0C49C092457DFC849872F5D649F3E954ADB1F282 * get_write_0() const { return ___write_0; }
	inline Action_2_t0C49C092457DFC849872F5D649F3E954ADB1F282 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0C49C092457DFC849872F5D649F3E954ADB1F282 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Rect>>
struct Writer_1_t8165CC8432FC5830796D260F2E3A51B307867EE8  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t8165CC8432FC5830796D260F2E3A51B307867EE8_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4D33F4DB8215CF4B1EB57F0DB6CDD9F271184548 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t8165CC8432FC5830796D260F2E3A51B307867EE8_StaticFields, ___write_0)); }
	inline Action_2_t4D33F4DB8215CF4B1EB57F0DB6CDD9F271184548 * get_write_0() const { return ___write_0; }
	inline Action_2_t4D33F4DB8215CF4B1EB57F0DB6CDD9F271184548 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4D33F4DB8215CF4B1EB57F0DB6CDD9F271184548 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.SByte>>
struct Writer_1_tCB4CAD8C3BA62F8D95FDF6A9EE1168E802E958CD  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tCB4CAD8C3BA62F8D95FDF6A9EE1168E802E958CD_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE23A3E0227F5C96DDBCC4F26952661D64F69FC9E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tCB4CAD8C3BA62F8D95FDF6A9EE1168E802E958CD_StaticFields, ___write_0)); }
	inline Action_2_tE23A3E0227F5C96DDBCC4F26952661D64F69FC9E * get_write_0() const { return ___write_0; }
	inline Action_2_tE23A3E0227F5C96DDBCC4F26952661D64F69FC9E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE23A3E0227F5C96DDBCC4F26952661D64F69FC9E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.Single>>
struct Writer_1_t7A7EDBADC29BA512E8E33B70CA15E16E0A8A1F77  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7A7EDBADC29BA512E8E33B70CA15E16E0A8A1F77_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3942B8126059BB637D0993B1978F244B1E6E0C84 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7A7EDBADC29BA512E8E33B70CA15E16E0A8A1F77_StaticFields, ___write_0)); }
	inline Action_2_t3942B8126059BB637D0993B1978F244B1E6E0C84 * get_write_0() const { return ___write_0; }
	inline Action_2_t3942B8126059BB637D0993B1978F244B1E6E0C84 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3942B8126059BB637D0993B1978F244B1E6E0C84 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.UInt16>>
struct Writer_1_tB36B31A0015CC42E6393C99AB252FB561FE7D7E9  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB36B31A0015CC42E6393C99AB252FB561FE7D7E9_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t5533E3CB6230C4C9B01E5B66F0207B4C32E6C3EA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB36B31A0015CC42E6393C99AB252FB561FE7D7E9_StaticFields, ___write_0)); }
	inline Action_2_t5533E3CB6230C4C9B01E5B66F0207B4C32E6C3EA * get_write_0() const { return ___write_0; }
	inline Action_2_t5533E3CB6230C4C9B01E5B66F0207B4C32E6C3EA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t5533E3CB6230C4C9B01E5B66F0207B4C32E6C3EA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.UInt32>>
struct Writer_1_t4C7B4F6A6F72F15B9E428539D10CE154D547D295  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4C7B4F6A6F72F15B9E428539D10CE154D547D295_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD689C636DCEEF70D3B7F49F3F22417396F4216A6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4C7B4F6A6F72F15B9E428539D10CE154D547D295_StaticFields, ___write_0)); }
	inline Action_2_tD689C636DCEEF70D3B7F49F3F22417396F4216A6 * get_write_0() const { return ___write_0; }
	inline Action_2_tD689C636DCEEF70D3B7F49F3F22417396F4216A6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD689C636DCEEF70D3B7F49F3F22417396F4216A6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<System.UInt64>>
struct Writer_1_t5EE85281D77739DD3B6907F45F504D5F04FC6C8F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5EE85281D77739DD3B6907F45F504D5F04FC6C8F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAEB746DFFC5CC9D6DB12B82B1951DDDEA07C663A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5EE85281D77739DD3B6907F45F504D5F04FC6C8F_StaticFields, ___write_0)); }
	inline Action_2_tAEB746DFFC5CC9D6DB12B82B1951DDDEA07C663A * get_write_0() const { return ___write_0; }
	inline Action_2_tAEB746DFFC5CC9D6DB12B82B1951DDDEA07C663A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAEB746DFFC5CC9D6DB12B82B1951DDDEA07C663A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Vector2>>
struct Writer_1_tEB434169EE88D0F8DD7B91147606E030CE422BB6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tEB434169EE88D0F8DD7B91147606E030CE422BB6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB4EAB6BBB8C1A037EC32255CC1143E77269EAEB6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tEB434169EE88D0F8DD7B91147606E030CE422BB6_StaticFields, ___write_0)); }
	inline Action_2_tB4EAB6BBB8C1A037EC32255CC1143E77269EAEB6 * get_write_0() const { return ___write_0; }
	inline Action_2_tB4EAB6BBB8C1A037EC32255CC1143E77269EAEB6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB4EAB6BBB8C1A037EC32255CC1143E77269EAEB6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Vector2Int>>
struct Writer_1_t03A42384A94BFBA11DB1145B41759236109DCA5A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t03A42384A94BFBA11DB1145B41759236109DCA5A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t572E1E6B43C351F24F8627C7745175901B8A254B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t03A42384A94BFBA11DB1145B41759236109DCA5A_StaticFields, ___write_0)); }
	inline Action_2_t572E1E6B43C351F24F8627C7745175901B8A254B * get_write_0() const { return ___write_0; }
	inline Action_2_t572E1E6B43C351F24F8627C7745175901B8A254B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t572E1E6B43C351F24F8627C7745175901B8A254B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Vector3>>
struct Writer_1_t58FC28C350FE586B28BAB5A819785EAF0C962857  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t58FC28C350FE586B28BAB5A819785EAF0C962857_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF6AC972A6E15B2510D1FEB56FC1D0B9A36DF8973 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t58FC28C350FE586B28BAB5A819785EAF0C962857_StaticFields, ___write_0)); }
	inline Action_2_tF6AC972A6E15B2510D1FEB56FC1D0B9A36DF8973 * get_write_0() const { return ___write_0; }
	inline Action_2_tF6AC972A6E15B2510D1FEB56FC1D0B9A36DF8973 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF6AC972A6E15B2510D1FEB56FC1D0B9A36DF8973 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Vector3Int>>
struct Writer_1_tD39C3EAE8044BE025CAD8C901575D78E9DE43274  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tD39C3EAE8044BE025CAD8C901575D78E9DE43274_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4EE52DF32AC59097FB65A619A4AF23D583DEFF6B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tD39C3EAE8044BE025CAD8C901575D78E9DE43274_StaticFields, ___write_0)); }
	inline Action_2_t4EE52DF32AC59097FB65A619A4AF23D583DEFF6B * get_write_0() const { return ___write_0; }
	inline Action_2_t4EE52DF32AC59097FB65A619A4AF23D583DEFF6B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4EE52DF32AC59097FB65A619A4AF23D583DEFF6B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Nullable`1<UnityEngine.Vector4>>
struct Writer_1_t1F148AF83CBD553A3E4E8810C8AB7D4E2C94BBE0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1F148AF83CBD553A3E4E8810C8AB7D4E2C94BBE0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDEAF4576004CB08FF62B1FAEF4F7FEE3FEF98B49 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1F148AF83CBD553A3E4E8810C8AB7D4E2C94BBE0_StaticFields, ___write_0)); }
	inline Action_2_tDEAF4576004CB08FF62B1FAEF4F7FEE3FEF98B49 * get_write_0() const { return ___write_0; }
	inline Action_2_tDEAF4576004CB08FF62B1FAEF4F7FEE3FEF98B49 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDEAF4576004CB08FF62B1FAEF4F7FEE3FEF98B49 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.AddPlayerMessage>
struct Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields, ___write_0)); }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * get_write_0() const { return ___write_0; }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Boolean>
struct Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields, ___write_0)); }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * get_write_0() const { return ___write_0; }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte>
struct Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields, ___write_0)); }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * get_write_0() const { return ___write_0; }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.ByteEnum>
struct Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t47142FCE9AA21E79F109E7908A9A248F9BA99963_StaticFields, ___write_0)); }
	inline Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * get_write_0() const { return ___write_0; }
	inline Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8A51EAF3AA1592DED8AA12B3A57F3FA8B60E56BE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ChangeOwnerMessage>
struct Writer_1_tFCFB6E4189B9527A5271D07F9ABA5E81AA5FADB5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tFCFB6E4189B9527A5271D07F9ABA5E81AA5FADB5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB60920C8C2525FE2AA7D7806382EB3E48443EE4B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tFCFB6E4189B9527A5271D07F9ABA5E81AA5FADB5_StaticFields, ___write_0)); }
	inline Action_2_tB60920C8C2525FE2AA7D7806382EB3E48443EE4B * get_write_0() const { return ___write_0; }
	inline Action_2_tB60920C8C2525FE2AA7D7806382EB3E48443EE4B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB60920C8C2525FE2AA7D7806382EB3E48443EE4B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Char>
struct Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields, ___write_0)); }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * get_write_0() const { return ___write_0; }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.ClientMatchMessage>
struct Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t70BEF55E9DD857C35B13BE57593956CB41C3436C_StaticFields, ___write_0)); }
	inline Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * get_write_0() const { return ___write_0; }
	inline Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t56E865D41C3ECF4A16ECB94A134B04FE30AED144 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color>
struct Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields, ___write_0)); }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * get_write_0() const { return ___write_0; }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color32>
struct Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields, ___write_0)); }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * get_write_0() const { return ___write_0; }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.CommandMessage>
struct Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields, ___write_0)); }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * get_write_0() const { return ___write_0; }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Decimal>
struct Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields, ___write_0)); }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * get_write_0() const { return ___write_0; }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Double>
struct Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields, ___write_0)); }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * get_write_0() const { return ___write_0; }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.EntityStateMessage>
struct Writer_1_t36BAB93C9AF5079360E231166DD3019748BC1E69  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t36BAB93C9AF5079360E231166DD3019748BC1E69_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t653196CC7CBB49847172366EA7A62A79DE2D639C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t36BAB93C9AF5079360E231166DD3019748BC1E69_StaticFields, ___write_0)); }
	inline Action_2_t653196CC7CBB49847172366EA7A62A79DE2D639C * get_write_0() const { return ___write_0; }
	inline Action_2_t653196CC7CBB49847172366EA7A62A79DE2D639C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t653196CC7CBB49847172366EA7A62A79DE2D639C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Guid>
struct Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields, ___write_0)); }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * get_write_0() const { return ___write_0; }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int16>
struct Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields, ___write_0)); }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * get_write_0() const { return ___write_0; }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int32>
struct Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields, ___write_0)); }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * get_write_0() const { return ___write_0; }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int64>
struct Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields, ___write_0)); }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * get_write_0() const { return ___write_0; }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.MatchInfo>
struct Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tFBD488B495BFC499F0DFBE8166A95FE9FB4D426E_StaticFields, ___write_0)); }
	inline Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * get_write_0() const { return ___write_0; }
	inline Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8975C3F1BE19B7E545AE1DB1120E7C1D1FE7F2B0 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.MatchPlayerData>
struct Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t978B4EB4D4D454D0AB878F13EDDE9ACFAE4051D5_StaticFields, ___write_0)); }
	inline Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * get_write_0() const { return ___write_0; }
	inline Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2161DFA8DFD86D7DC6F205CE87052713EEC52B43 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Matrix4x4>
struct Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields, ___write_0)); }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * get_write_0() const { return ___write_0; }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPingMessage>
struct Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields, ___write_0)); }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * get_write_0() const { return ___write_0; }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPongMessage>
struct Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields, ___write_0)); }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * get_write_0() const { return ___write_0; }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NotReadyMessage>
struct Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields, ___write_0)); }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * get_write_0() const { return ___write_0; }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Object>
struct Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0E7DFF7A6BF77BE48E54EA04F3D35722B4AAD445_StaticFields, ___write_0)); }
	inline Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * get_write_0() const { return ___write_0; }
	inline Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t42B3916DAAC2EBAF01DF07FDBD6877932DE57B8B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectDestroyMessage>
struct Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields, ___write_0)); }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * get_write_0() const { return ___write_0; }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectHideMessage>
struct Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields, ___write_0)); }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * get_write_0() const { return ___write_0; }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnFinishedMessage>
struct Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields, ___write_0)); }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnStartedMessage>
struct Writer_1_t68972DB064C6BF5998674584511650B183CAACDE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields, ___write_0)); }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * get_write_0() const { return ___write_0; }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<OnPlayerExitMessage>
struct Writer_1_t093F7E9354155AB492FA1C0741834A006BBCD1E8  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t093F7E9354155AB492FA1C0741834A006BBCD1E8_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t14A25F67EDC89F1C7660F9DD13BBB03FFDADE282 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t093F7E9354155AB492FA1C0741834A006BBCD1E8_StaticFields, ___write_0)); }
	inline Action_2_t14A25F67EDC89F1C7660F9DD13BBB03FFDADE282 * get_write_0() const { return ___write_0; }
	inline Action_2_t14A25F67EDC89F1C7660F9DD13BBB03FFDADE282 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t14A25F67EDC89F1C7660F9DD13BBB03FFDADE282 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Plane>
struct Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields, ___write_0)); }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * get_write_0() const { return ___write_0; }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t87DDA2D8015AA96B34970ED80AA5984FF5E3AFD7_StaticFields, ___write_0)); }
	inline Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * get_write_0() const { return ___write_0; }
	inline Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tD120F789AEEE3408457B90CA0818E2032F869041 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Quaternion>
struct Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields, ___write_0)); }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * get_write_0() const { return ___write_0; }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Ray>
struct Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields, ___write_0)); }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * get_write_0() const { return ___write_0; }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ReadyMessage>
struct Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields, ___write_0)); }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * get_write_0() const { return ___write_0; }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Rect>
struct Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields, ___write_0)); }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * get_write_0() const { return ___write_0; }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.RpcMessage>
struct Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields, ___write_0)); }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * get_write_0() const { return ___write_0; }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.SByte>
struct Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields, ___write_0)); }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * get_write_0() const { return ___write_0; }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneMessage>
struct Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields, ___write_0)); }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * get_write_0() const { return ___write_0; }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.MultipleMatch.ServerMatchMessage>
struct Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t841A019E56AFED8796F4A2B8F0E23E81B2C285E9_StaticFields, ___write_0)); }
	inline Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * get_write_0() const { return ___write_0; }
	inline Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3ABD882F0FC020751D5CC2E5C162C05742DEAA2C * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Discovery.ServerRequest>
struct Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t354118B02FC01FDF484DBD73062D5434A06F5B8F_StaticFields, ___write_0)); }
	inline Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * get_write_0() const { return ___write_0; }
	inline Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6F6D337BC3B25B7903365BF8FE4CA5065EACF3AB * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Discovery.ServerResponse>
struct Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDB16178D93E60C1DA670EC1547155989AB154E64_StaticFields, ___write_0)); }
	inline Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * get_write_0() const { return ___write_0; }
	inline Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6882E8FBE3B5EDD20D66A60F3F9FC8E20D2453A4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Single>
struct Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields, ___write_0)); }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * get_write_0() const { return ___write_0; }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SpawnMessage>
struct Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields, ___write_0)); }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * get_write_0() const { return ___write_0; }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Stats>
struct Writer_1_t3D5842441B01B7D61BC5949A1F724C7A68448059  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3D5842441B01B7D61BC5949A1F724C7A68448059_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t37E2363A645D6C43032225E6B0201DC93E14ED18 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3D5842441B01B7D61BC5949A1F724C7A68448059_StaticFields, ___write_0)); }
	inline Action_2_t37E2363A645D6C43032225E6B0201DC93E14ED18 * get_write_0() const { return ___write_0; }
	inline Action_2_t37E2363A645D6C43032225E6B0201DC93E14ED18 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t37E2363A645D6C43032225E6B0201DC93E14ED18 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.TimeSnapshotMessage>
struct Writer_1_t1A5E646C7DBA9294CC0AAFFFE956024BCA4CB138  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1A5E646C7DBA9294CC0AAFFFE956024BCA4CB138_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF5FC82D20DE5B6FE8CFB6437D816DC5E1FDD8846 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1A5E646C7DBA9294CC0AAFFFE956024BCA4CB138_StaticFields, ___write_0)); }
	inline Action_2_tF5FC82D20DE5B6FE8CFB6437D816DC5E1FDD8846 * get_write_0() const { return ___write_0; }
	inline Action_2_tF5FC82D20DE5B6FE8CFB6437D816DC5E1FDD8846 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF5FC82D20DE5B6FE8CFB6437D816DC5E1FDD8846 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16>
struct Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields, ___write_0)); }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * get_write_0() const { return ___write_0; }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16Enum>
struct Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3F4F5A9BB8DD86099B4A5FAB80EEA3FCE63587C3_StaticFields, ___write_0)); }
	inline Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * get_write_0() const { return ___write_0; }
	inline Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tCE0BC2B1F5BF76C19676981C908A710F1D184990 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt32>
struct Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields, ___write_0)); }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * get_write_0() const { return ___write_0; }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt64>
struct Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields, ___write_0)); }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * get_write_0() const { return ___write_0; }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2>
struct Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields, ___write_0)); }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * get_write_0() const { return ___write_0; }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2Int>
struct Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields, ___write_0)); }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3>
struct Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields, ___write_0)); }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * get_write_0() const { return ___write_0; }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3Int>
struct Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields, ___write_0)); }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * get_write_0() const { return ___write_0; }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector4>
struct Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields, ___write_0)); }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * get_write_0() const { return ___write_0; }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthRequestMessage>
struct Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t6A74B31480A2F8F2654851603FD585C3D7124F14_StaticFields, ___write_0)); }
	inline Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * get_write_0() const { return ___write_0; }
	inline Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t21F9C07D2ED276648CDFEDD9A690DD4C443D89A8 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.BasicAuthenticator/AuthResponseMessage>
struct Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t450C918501B540F3C97F704BA676EBC5E0DE27C6_StaticFields, ___write_0)); }
	inline Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * get_write_0() const { return ___write_0; }
	inline Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tCA2B23619473EF0A9BE135C10D83205A3702DADE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.Chat.ChatAuthenticator/AuthRequestMessage>
struct Writer_1_tB26F250E11828033DA94C8642EC32910EDD279C5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB26F250E11828033DA94C8642EC32910EDD279C5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t67F3DEC5878430362B56B1C2CF45AEAAC8D4B2AC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB26F250E11828033DA94C8642EC32910EDD279C5_StaticFields, ___write_0)); }
	inline Action_2_t67F3DEC5878430362B56B1C2CF45AEAAC8D4B2AC * get_write_0() const { return ___write_0; }
	inline Action_2_t67F3DEC5878430362B56B1C2CF45AEAAC8D4B2AC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t67F3DEC5878430362B56B1C2CF45AEAAC8D4B2AC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Examples.Chat.ChatAuthenticator/AuthResponseMessage>
struct Writer_1_t4E9D599D157BAD5BC42C7FDB31A6D74B2AFB6869  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4E9D599D157BAD5BC42C7FDB31A6D74B2AFB6869_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t16FF6B409C4A282BEDC827AA5BB2FF76EF424103 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4E9D599D157BAD5BC42C7FDB31A6D74B2AFB6869_StaticFields, ___write_0)); }
	inline Action_2_t16FF6B409C4A282BEDC827AA5BB2FF76EF424103 * get_write_0() const { return ___write_0; }
	inline Action_2_t16FF6B409C4A282BEDC827AA5BB2FF76EF424103 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t16FF6B409C4A282BEDC827AA5BB2FF76EF424103 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<CustomMessages/CreateLobbyMessage>
struct Writer_1_tDE283702FE15053F1A60A96245AD0DAB9AFE1938  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDE283702FE15053F1A60A96245AD0DAB9AFE1938_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6058AAAE50DEC49B3788BA989A6506AD6DCB4BBF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDE283702FE15053F1A60A96245AD0DAB9AFE1938_StaticFields, ___write_0)); }
	inline Action_2_t6058AAAE50DEC49B3788BA989A6506AD6DCB4BBF * get_write_0() const { return ___write_0; }
	inline Action_2_t6058AAAE50DEC49B3788BA989A6506AD6DCB4BBF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6058AAAE50DEC49B3788BA989A6506AD6DCB4BBF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.DeviceAuthenticator/AuthRequestMessage>
struct Writer_1_t1D56AB186ECE2D8F85D7EECE998C2FCB4CA1AAEE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1D56AB186ECE2D8F85D7EECE998C2FCB4CA1AAEE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4CF87F9CF523799FB253B1C38707F3E195B757A3 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1D56AB186ECE2D8F85D7EECE998C2FCB4CA1AAEE_StaticFields, ___write_0)); }
	inline Action_2_t4CF87F9CF523799FB253B1C38707F3E195B757A3 * get_write_0() const { return ___write_0; }
	inline Action_2_t4CF87F9CF523799FB253B1C38707F3E195B757A3 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4CF87F9CF523799FB253B1C38707F3E195B757A3 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.Authenticators.DeviceAuthenticator/AuthResponseMessage>
struct Writer_1_t153082BA60C80A72D43688C5D1AFCC6A0263BEAB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t153082BA60C80A72D43688C5D1AFCC6A0263BEAB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8A03F8A3BDFF3A35B303C29745AA35D8F307117D * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t153082BA60C80A72D43688C5D1AFCC6A0263BEAB_StaticFields, ___write_0)); }
	inline Action_2_t8A03F8A3BDFF3A35B303C29745AA35D8F307117D * get_write_0() const { return ___write_0; }
	inline Action_2_t8A03F8A3BDFF3A35B303C29745AA35D8F307117D ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8A03F8A3BDFF3A35B303C29745AA35D8F307117D * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>
struct WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>
struct WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// System.Guid
struct Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3
struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 
{
public:
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields, ___Zero_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Unity.Mathematics.float3
struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields, ___zero_3)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_zero_3() const { return ___zero_3; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___zero_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76, ___current_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_current_2() const { return ___current_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___current_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_2() const { return ___current_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>
struct Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A, ___current_2)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_current_2() const { return ___current_2; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___current_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D, ___m_Value_2)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_Value_2() const { return ___m_Value_2; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>
struct WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	// System.Object UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Position_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Position_0() const { return ___Position_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_pinvoke
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_com
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 
{
public:
	// System.Int32 Mirror.Examples.MultipleMatch.PlayerInfo::playerIndex
	int32_t ___playerIndex_0;
	// System.Boolean Mirror.Examples.MultipleMatch.PlayerInfo::ready
	bool ___ready_1;
	// System.Guid Mirror.Examples.MultipleMatch.PlayerInfo::matchId
	Guid_t  ___matchId_2;

public:
	inline static int32_t get_offset_of_playerIndex_0() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___playerIndex_0)); }
	inline int32_t get_playerIndex_0() const { return ___playerIndex_0; }
	inline int32_t* get_address_of_playerIndex_0() { return &___playerIndex_0; }
	inline void set_playerIndex_0(int32_t value)
	{
		___playerIndex_0 = value;
	}

	inline static int32_t get_offset_of_ready_1() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___ready_1)); }
	inline bool get_ready_1() const { return ___ready_1; }
	inline bool* get_address_of_ready_1() { return &___ready_1; }
	inline void set_ready_1(bool value)
	{
		___ready_1 = value;
	}

	inline static int32_t get_offset_of_matchId_2() { return static_cast<int32_t>(offsetof(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6, ___matchId_2)); }
	inline Guid_t  get_matchId_2() const { return ___matchId_2; }
	inline Guid_t * get_address_of_matchId_2() { return &___matchId_2; }
	inline void set_matchId_2(Guid_t  value)
	{
		___matchId_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_pinvoke
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};
// Native definition for COM marshalling of Mirror.Examples.MultipleMatch.PlayerInfo
struct PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6_marshaled_com
{
	int32_t ___playerIndex_0;
	int32_t ___ready_1;
	Guid_t  ___matchId_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>
struct Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11, ___list_0)); }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * get_list_0() const { return ___list_0; }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11, ___current_3)); }
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  get_current_3() const { return ___current_3; }
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Data_1), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F, ___current_2)); }
	inline PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  get_current_2() const { return ___current_2; }
	inline PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  value)
	{
		___current_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>
struct VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>
struct WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2  : public Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2, ___predicate_4)); }
	inline Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>
struct WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F  : public Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F, ___predicate_4)); }
	inline Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC  : public Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC, ___source_3)); }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* get_source_3() const { return ___source_3; }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC, ___selector_5)); }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28, ___source_3)); }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* get_source_3() const { return ___source_3; }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28, ___selector_5)); }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E  : public Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E, ___source_3)); }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* get_source_3() const { return ___source_3; }
	inline ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E, ___selector_5)); }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681  : public Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681, ___selector_5)); }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD, ___selector_5)); }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150  : public Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150, ___selector_5)); }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
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

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tA55660D7B36BC919063457215A12594F309CFDF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.Examples.MultipleMatch.PlayerInfo,System.Boolean>
struct Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Mathematics.float3,System.Boolean>
struct Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___predicate_4)); }
	inline Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C  : public Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C, ___source_3)); }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * get_source_3() const { return ___source_3; }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C, ___selector_5)); }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C, ___enumerator_6)); }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Data_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625, ___source_3)); }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * get_source_3() const { return ___source_3; }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625, ___selector_5)); }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625, ___enumerator_6)); }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Data_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>
struct WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E  : public Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E, ___source_3)); }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * get_source_3() const { return ___source_3; }
	inline List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E, ___predicate_4)); }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E, ___selector_5)); }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E, ___enumerator_6)); }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Data_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>
struct WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139  : public Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___selector_5)); }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * get_selector_5() const { return ___selector_5; }
	inline Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  m_Items[1];

public:
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
	}
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_gshared_inline (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997_gshared (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Rendering.VolumeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54 (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m5F032BFC65C340C98050D3DF2D76101914774464 (int32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
inline ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_inline (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * __this, const RuntimeMethod* method)
{
	return ((  ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  (*) (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *, const RuntimeMethod*))Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
inline bool Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997 (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *, const RuntimeMethod*))Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_get_value_mB51CC0592DA5AEB51C2A1002335D283B65D222D0_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		int32_t L_0 = (int32_t)__this->get_m_Value_2();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m7D157373E6F3E641D7A1D7FA26F3CA2D70C421F6_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		int32_t L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mC490CE61A02B0A0653947343B22B53FABD8C8906_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		((  void (*) (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE923D5F987441B577192CC881DFDA6EE84DC4598_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		int32_t L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mB700B2F00212FE7473038395F727F150CB5F1DF3_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Interp(T,T,System.Single) */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m365FAA0E37B842EB5C3A0A71653FE5F08BE52811_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * G_B2_0 = NULL;
	VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_mF27318A7208C183C0E74249859343B82DDB54E9D_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		int32_t L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m29087BA2004CB999953BAAFB68837B35D8229A88_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Int32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m12AC65BDA8FAC3B149CC4A714B57D024F7EBB318_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_3;
		L_3 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		NullCheck((EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(!0,!0) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_3, (int32_t)L_4, (int32_t)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		V_2 = (int32_t)L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Int32>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m846B3E448C84AEA3E560FF6ECCE12A0EE8E98862_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mA1D747A92AB1547FDBA73CC4A8DA0F5A54C90C8A_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * ___lhs0, int32_t ___rhs1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_1);
	}
	{
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = ___rhs1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m5F032BFC65C340C98050D3DF2D76101914774464((int32_t*)(int32_t*)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m54FD44CB3256C974105FFC63C722E797C0AA981B_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * ___lhs0, int32_t ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_0 = ___lhs0;
		int32_t L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m94BF0EB0F60D7AFB4645C5B4D2D04C1EE497E060_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this) == ((RuntimeObject*)(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_2;
		L_2 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		int32_t L_3 = (int32_t)__this->get_m_Value_2();
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(!0,!0) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_2, (int32_t)L_3, (int32_t)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m9016DE26A9F96EDE9E8AC043EE8D06AFF4B8486B_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *, VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)__this, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_op_Explicit_mD323D3CEA3969828E3790F1573F2669DED5115F1_gshared (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_m_Value_2();
		return (int32_t)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_get_value_mBBEE644D6FE116B4480B3FA4DEC36A30F6D39530_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		int32_t L_0 = (int32_t)__this->get_m_Value_2();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mAB06E348BE0D1E510C90410DD7C20E322B52EB90_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		int32_t L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m93EAEE80ABDCAAEC8F2D2C9D9D1CC78328F95DC7_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		((  void (*) (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this, (int32_t)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m45867A2D95160443BF8C3F9066B6054EC521347E_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, int32_t ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		int32_t L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mBECEAE59B4B7BB4F419D0CAEE3255F1CACAFE6F1_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		VirtActionInvoker3< int32_t, int32_t, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Interp(T,T,System.Single) */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this, (int32_t)L_1, (int32_t)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m1BF7D74C87C7EF48A3261363FA0F88E0E92C1479_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, int32_t ___from0, int32_t ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * G_B2_0 = NULL;
	VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)(__this));
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_mFB3816FDE0134AAE8CEE22D020FD81CE77F42555_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		int32_t L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m55A93CFC951EF6CACE3A49DD503F4A422B0CD9FC_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mE61DD2B10018C04F9D9607E7B1EB61420441B59D_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * L_3;
		L_3 = ((  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		NullCheck((EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(!0,!0) */, (EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_3, (int32_t)L_4, (int32_t)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		V_2 = (int32_t)L_8;
		Il2CppFakeBox<int32_t> L_9(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), (&V_2));
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_9));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_10));
	}

IL_004c:
	{
		// return hash;
		int32_t L_11 = V_0;
		return (int32_t)L_11;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mF6E839F3AA47EB989463C8B204124DC50009CFF6_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		int32_t L_1 = (int32_t)L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m9F41E819F35BDE212783F8CA11920B0E5C3D4360_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * ___lhs0, int32_t ___rhs1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_1);
	}
	{
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = ___rhs1;
		int32_t L_6 = (int32_t)L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		Il2CppFakeBox<int32_t> L_8(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), (&V_0));
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(&L_8), (RuntimeObject *)L_7);
		return (bool)L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m36ECF4F69BF3934CFBB63A484B778018EA783A4A_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * ___lhs0, int32_t ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_0 = ___lhs0;
		int32_t L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mCBE4B8CED7945F603436FCC6ADDE8D6BE244DC05_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * L_2;
		L_2 = ((  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		int32_t L_3 = (int32_t)__this->get_m_Value_2();
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(!0,!0) */, (EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_2, (int32_t)L_3, (int32_t)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m7239C7067F96C0F6B9AE4886B308C3184819F259_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *, VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)__this, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_op_Explicit_m00A3511E767D9D38E3B9ED1A49724A5C78592846_gshared (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 * L_0 = ___prop0;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get_m_Value_2();
		return (int32_t)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_1_get_value_m1A452E24E79DC734501EAA829F0FD576ACDEAA18_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )__this->get_m_Value_2();
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m6132B1E21104A6BB873C3A033B9C33485A292BE4_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mF7C6E50844833D908540F7E60942799C7DE7CDCC_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, const RuntimeMethod* method)
{
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 ));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = V_0;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		((  void (*) (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mD2764A7D25C53808FC366C16D92ECDD6B3508A22_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m5BA48D486215FBBF4E622067C43F7F4491B84DBA_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = ((  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3;
		L_3 = ((  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		VirtActionInvoker3< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Interp(T,T,System.Single) */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_1, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mE80035334EFA9DA520008D15B252BE6081B1D5B2_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___from0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * G_B2_0 = NULL;
	VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * G_B1_0 = NULL;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)(__this));
			goto IL_000c;
		}
	}
	{
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m1BC994E02F281E8B5253CD48316D3845C10598C7_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mC58E8773973CB91697CC3118992182E1E674A7C6_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = ((  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m3062D60F025EA3F2E8FB86C5D897A16444100F2F_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * L_3;
		L_3 = ((  EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4;
		L_4 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 ));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_5 = V_2;
		NullCheck((EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.LayerMask>::Equals(!0,!0) */, (EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A *)L_3, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_4, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_8;
		L_8 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		V_2 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_8;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), (&V_2));
		NullCheck((RuntimeObject *)L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_9);
		V_2 = *(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)UnBox(L_9);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_10));
	}

IL_004c:
	{
		// return hash;
		int32_t L_11 = V_0;
		return (int32_t)L_11;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m5B3102A3866568EDE9F2D5CD5092E9D0E244C3DA_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m24E433D8B52F6E7D56EA7FCA324C4C9E06E4E0D9_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * ___lhs0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___rhs1, const RuntimeMethod* method)
{
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_1);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_2;
		L_2 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_1);
	}
	{
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_3);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4;
		L_4 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_3);
		V_0 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_4;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_5 = ___rhs1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_6 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		RuntimeObject * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), (&V_0));
		NullCheck((RuntimeObject *)L_8);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_8, (RuntimeObject *)L_7);
		V_0 = *(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)UnBox(L_8);
		return (bool)L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mC03455C636B44C2B43B3C5E283A7CBF27ABCE998_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * ___lhs0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_0 = ___lhs0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_0, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m1648E1646367FAD8B37DA22087A1E040F5F7CA55_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this) == ((RuntimeObject*)(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * L_2;
		L_2 = ((  EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )__this->get_m_Value_2();
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_4 = ___other0;
		NullCheck(L_4);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_5 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 , LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.LayerMask>::Equals(!0,!0) */, (EqualityComparer_1_t63FECC5291EFC8F9179EDADD0B89F2115F87379A *)L_2, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_3, (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m28EA57D1533109CDEFFC5AABE734AE6C14FA0851_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *, VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)__this, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_1_op_Explicit_m83A9AA0ECFE958172E2A9D6987CFF16A609C0039_gshared (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D * L_0 = ___prop0;
		NullCheck(L_0);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0->get_m_Value_2();
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_1_get_value_mE65E2B7A36089C5900E6CC6939A0765AE7E18610_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Value_2();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mD0E8FA4757B4E751ADEEFF7FBFC917E6A11A5A22_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mB65184A34C60C6DB7175928E9C8C86AB15E3B751_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_0 = V_0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		((  void (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m568F98FCF5CE4693885678BF2F5D3F94760E1E78_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		RuntimeObject * L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m153C97DEC262ECFA05726BDCD61045B1DDB7BEE9_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(T,T,System.Single) */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (RuntimeObject *)L_1, (RuntimeObject *)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m6E102B7FCADF33F4E90B71C9EB029A94AF3349E4_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___from0, RuntimeObject * ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B2_0 = NULL;
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B1_0 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(__this));
			goto IL_000c;
		}
	}
	{
		RuntimeObject * L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m0A117F79C518E97F3BE2C7101CC40072E6BC853B_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		RuntimeObject * L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Object>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m429A4BD58295726ADFD93F4A0FD6F1AAAC1D8DA2_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mFCB61FBFD813B341AAD95664777C561E4585CAD5_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_3;
		L_3 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_2;
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_8;
		L_8 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		V_2 = (RuntimeObject *)L_8;
		NullCheck((RuntimeObject *)(V_2));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(V_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m98DEF918D3848ED5AF582300AA707E816743AF66_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_0, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return (String_t*)L_4;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m786AC30A22D485466D5D38A6DC54203621DA8142_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_3);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_3);
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = ___rhs1;
		NullCheck((RuntimeObject *)(V_0));
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_0), (RuntimeObject *)L_5);
		return (bool)L_6;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m6B249A4ED1C3BC3BC82780D4D159C1606CE613F5_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___lhs0;
		RuntimeObject * L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m3E71487399AF0F166D8A1E689B968C6EE8702DAC_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_2;
		L_2 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		RuntimeObject * L_3 = (RuntimeObject *)__this->get_m_Value_2();
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject * L_5 = (RuntimeObject *)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_2, (RuntimeObject *)L_3, (RuntimeObject *)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m43533DA3167983D9D59102963A9256B1B32E87F3_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)__this, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Object>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_1_op_Explicit_m1038E6089685A688180DD20373DAC79B240EC104_gshared (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 * L_0 = ___prop0;
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_m_Value_2();
		return (RuntimeObject *)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_get_value_mE65BB62B1CDB9AC51F677613A6AC89579269FD6B_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		float L_0 = (float)__this->get_m_Value_2();
		return (float)L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mE9E76837EC3E3273CB3DAF7849C80B3F1929D51C_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mBEF459F8B4ADBA28FF6DB59591F77496245A2F89_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		((  void (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (float)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m9388D8BBE0345E067BE973DBC40EF667B21035AC_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		float L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m74F6A9A7D450447087107C3ABF028E88B27970F4_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		float L_1;
		L_1 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		float L_3;
		L_3 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		VirtActionInvoker3< float, float, float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(T,T,System.Single) */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (float)L_1, (float)L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mE3BDAA88E4F5097F27079893DB8C21E4CE3B019D_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___from0, float ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B2_0 = NULL;
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(__this));
			goto IL_000c;
		}
	}
	{
		float L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m2C542C9C6D00DE2C56B40529B66F5955032AD2C3_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		float L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<System.Single>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m45C1D4E723B126F1C19A5FB267143E471B71F020_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		float L_1;
		L_1 = ((  float (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m20049225D5D48AC8488B575D0C55A4D8C77E22C5_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_3;
		L_3 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		float L_5 = V_2;
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_3, (float)L_4, (float)L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		V_2 = (float)L_8;
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<System.Single>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mF22D6B5BA00E0341023E67CE6DE6F2CEF402846D_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mE98D231AFBB47C57BF307778505C205CD254A4D3_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___lhs0, float ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1);
	}
	{
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_3);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_3);
		V_0 = (float)L_4;
		float L_5 = ___rhs1;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Single_Equals_m94AA41817D00A9347BD3565F6BB8993361B81EB1((float*)(float*)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m97786AB4554649425964FD50184021748017459E_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___lhs0, float ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___lhs0;
		float L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m83BCF88BE9EF7A5DEF3FF8209A9AA068874BAE25_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this) == ((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_2;
		L_2 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		float L_3 = (float)__this->get_m_Value_2();
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_4 = ___other0;
		NullCheck(L_4);
		float L_5 = (float)L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_2, (float)L_3, (float)L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8FCF4CD51C849EC469EDDDEA30F81B3C0CC0A69F_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)__this, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<System.Single>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_op_Explicit_m488724D949156654B906ED61056D6E8197C020A2_gshared (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 * L_0 = ___prop0;
		NullCheck(L_0);
		float L_1 = (float)L_0->get_m_Value_2();
		return (float)L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_1_get_value_m7DD26F8D47DDB2B92ED4DC40B30E31D9FE0ED3D5_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_m_Value_2();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m713DB2249619116159C9470F79ADC60615FDCA32_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE4A4AAE761BF96FF1AF03A491B449B3933A01F7B_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = V_0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		((  void (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mB52103D1F81AA55DA4B112171931EA0CE7CC635E_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mDF4558E944EAA8F36B5AAA49113A6B8316033D93_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		VirtActionInvoker3< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(T,T,System.Single) */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mB30FF2C03DE380C289E36F4DD6F92E4F0C306A14_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B2_0 = NULL;
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B1_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m8AF26DC0CE8D1D57985EBFCCE314E3EC57EA6D1A_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mBB5BEC3ECF0A51BE89A05B6C1D78C63453A5E4FF_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mCF169E9F80762BF8A1E42C54B1FA2C0D6AA5C4F7_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * L_3;
		L_3 = ((  EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_2;
		NullCheck((EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		V_2 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_8;
		int32_t L_9;
		L_9 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mE9E79D94F86F79CE0B3D50E47132499AF12ED674_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m122686C553098A9D2A1E4D6CD4612C2B408D259C_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1);
	}
	{
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_3);
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___rhs1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mF5351020BA475F25487B6424851368193DCBE27D_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_0, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m0DA25D290A4E860B65E3CCA55B7C08F02AA3DB41_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * L_2;
		L_2 = ((  EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )__this->get_m_Value_2();
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_4 = ___other0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09 *)L_2, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m280BFF61F817FEAC2CBBD65A638562916BF3F692_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)__this, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_1_op_Explicit_mA5DC14C41E311BC76D34FEEAC7AC29478EBC22D1_gshared (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0->get_m_Value_2();
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_1_get_value_mF93101C5EDDA1B358CD201EB3C5E8FDF0B5A404A_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_m_Value_2();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m2F8D2E49FD6FBC3118DEC5F153A95085465BC59B_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE934FF123822927E73B5F780398087397E4017DA_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = V_0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		((  void (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mD7068B78F5D082BFE2ABA8385B44A87897C659E1_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mAF7D9A651AA6C555402A0D188EB3AA72EC7022BA_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		VirtActionInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(T,T,System.Single) */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m5273C2FF3EB0A07BB6C67BF60C1F3E63EBEFE081_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B2_0 = NULL;
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m9C174EF8E9F5D3637072C0EAA8752389DCE83491_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m0BBB417DE4415268AD2A66B4D0764982FE65C48D_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m713A112A8F84A7F27A4DB2933464D17BBE224E04_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * L_3;
		L_3 = ((  EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_2;
		NullCheck((EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		V_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8;
		int32_t L_9;
		L_9 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m9C2B50A9346DD0AB59B08833586ECBCFB9519661_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m59E7219C79A4ACD0AF0240D5981F052B0AB3706C_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1);
	}
	{
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_3);
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m9027012A345F02BCBD86BAFFE1E59488EC904A79_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m510A1A4B4E767D2C44EBE02BB6DC85998A1B8E92_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this) == ((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * L_2;
		L_2 = ((  EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_m_Value_2();
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_4 = ___other0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7 *)L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8ED0747D259C00F3410EFFAEFD9E26465CF42B65_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)__this, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_1_op_Explicit_m9593E4E68C801602471B97A83E6B063EF3A73A92_gshared (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F * L_0 = ___prop0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0->get_m_Value_2();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1;
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
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_1_get_value_m2EA653B325EEC0AEC56D6C83B8E5386F6E014BC5_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_m_Value_2();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m5D211AE58EC04A1C0C465D26D0BE128583E1521C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mAB9A56F2C8AEDD0D99DAD5941AA305B3DD6E1C84_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = V_0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		((  void (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m459DEF559810C9A959598B2F88EEECF2843E0CF6_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VolumeParameter__ctor_m0F5E882EFAE8F1B7AE0DFF62945878D71CA63D54((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m050EE31E66335F6777B19DCD87F8770519A8A686_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___from0, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___from0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_2 = ___to1;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		VirtActionInvoker3< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float >::Invoke(14 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m6F75A3B8404DB1DAE2349C5A57CA6ECF3CE5F556_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___from0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B2_0 = NULL;
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B1_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7E10707423FD177F1152146C5F61105DF1F8D70C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this, (bool)1);
		// m_Value = x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m82DDA24EB7110F139DC0012D85F6E3D52ABA9155_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m349692A683031E1772EBACF72A98E1B759B5F1AB_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		V_1 = (bool)L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!EqualityComparer<T>.Default.Equals(value, default)) // Catches null for references with boxing of value types
		EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * L_3;
		L_3 = ((  EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = V_2;
		NullCheck((EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_3);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_3, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_7 = V_0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8;
		L_8 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		V_2 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8;
		int32_t L_9;
		L_9 = Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)23))), (int32_t)L_9));
	}

IL_004c:
	{
		// return hash;
		int32_t L_10 = V_0;
		return (int32_t)L_10;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m70BB531EC1A1197D6B56D5B16D3DAB51D2753CBB_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_1);
		NullCheck((VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return (String_t*)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m69D10FDCEBA2FD496EA09620C635BD76CDB36FF0_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1);
	}
	{
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_3);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_3);
		V_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ___rhs1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return (bool)L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m7FA56CEE1136929DA9697CCF037420643A2FA85B_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___lhs0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___rhs1;
		bool L_2;
		L_2 = ((  bool (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_0, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mEB314431E51DD71B3F7BB22A786EE58C19218522_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this) == ((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * L_2;
		L_2 = ((  EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_m_Value_2();
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_4 = ___other0;
		NullCheck(L_4);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_2);
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E *)L_2, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5);
		return (bool)L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m831EC889B40C1B3D9763C7460C62A2C2986AFD5D_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this);
		bool L_7;
		L_7 = ((  bool (*) (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)__this, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (bool)L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_1_op_Explicit_m034A5A9009175E647D10A32FEB621BCA0237E93C_gshared (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0->get_m_Value_2();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0D7A8A052BC9DE6D842234A55DFCDD0FAB6C9057_gshared (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * __this, RuntimeObject* ___source0, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 * WhereEnumerableIterator_1_Clone_mE6DD25223B01E5DA577A87A50EC1A60372BE6DF0_gshared (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_1 = (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * L_2 = (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *, RuntimeObject*, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mCEF7D940B21C37FAC2966547F8428D8BE4C59338_gshared (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m3D143965FBF0E34F74297CA37DF3B3184262857A_gshared (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Color>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = InterfaceFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Color>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_6;
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_7 = (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)__this->get_predicate_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = V_1;
		NullCheck((Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_7, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = V_1;
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m80C6EF5D06412C00F80E8A7A490779AFEB13C2B8_gshared (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * __this, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_1 = (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)__this->get_predicate_4();
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_2 = ___predicate0;
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_3;
		L_3 = ((  Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * (*) (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_1, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * L_4 = (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *, RuntimeObject*, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED9FE30D754A0ABE546A685684F523BC57509D0E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereEnumerableIterator_1_Clone_mB3FE252392A8FEA3638826A2C4D1195A4D3743BB_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_2 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB841131399B8BA11B9D6DB37E11F90B1BFFBDA2D_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m819D14CC69CC48B0B84E497DFF1953AAFFF13333_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mD1B249C431E67DD9B73D781BEA79EF23E556B75E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___predicate0;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_3;
		L_3 = ((  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_4 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCCBCF83DC9048D3F82338174D1833F8EB088E773_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, RuntimeObject* ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereEnumerableIterator_1_Clone_m3F2E30D5F902F3107DCA4D0342E329A9E35CD2B8_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_2 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m303F03CB0C36E67FA3386A339B278E10983613DA_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m428E05857BCB466007F9A6644FA715D3652CA021_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int64_t L_6;
		L_6 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int64_t)L_6;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_8 = V_1;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7, (int64_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int64_t L_10 = V_1;
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mB644E9659730D759B0808E99F0C6E5BC13AC9BC6_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_2 = ___predicate0;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_3;
		L_3 = ((  Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_4 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m867DBDE49D87FE87EF7F31AE17C41FF121DD4767_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, RuntimeObject* ___source0, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereEnumerableIterator_1_Clone_m3C3E0F733FE6E37248E42E4FD1A74453E1A6EEDE_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_2 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m32A0C073D87DEAAC90C3A15AC13E50BB2F64FE48_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m966080FAE497D4A4FF212A0247A81988B0496A52_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Mirror.Examples.MultipleMatch.PlayerInfo>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_6;
		L_6 = InterfaceFuncInvoker0< PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 )L_6;
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_7 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_8 = V_1;
		NullCheck((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_7, (PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_10 = V_1;
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4CEB4FF93635F7045AD0AA8868085A650428A987_gshared (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_1 = (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)__this->get_predicate_4();
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_2 = ___predicate0;
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_3;
		L_3 = ((  Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * (*) (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_1, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_4 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m591288EAD97C8D9D310610BFA96A98922E8AF347_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, RuntimeObject* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereEnumerableIterator_1_Clone_m4ADE59B0DB8541F1FA457BE9CAD3EF2868817E56_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_2 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m64C95774F2781EB65AC8FE5A6CD5043BF61CEED8_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1ABB7BE9CE39660B4C3E276C11F7757E9DDC4BD0_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m1F41645152C3BCC477C7D1665291990DC5239347_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_2 = ___predicate0;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_3;
		L_3 = ((  Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_4 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0B3AA4D17686F593BC8CDAF6D443917E9F2AFC0C_gshared (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * __this, RuntimeObject* ___source0, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A * WhereEnumerableIterator_1_Clone_mDD56D88240D0F063D0DA453BF2D0A80581C2F508_gshared (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_1 = (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * L_2 = (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *, RuntimeObject*, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m6A24E921E37665F2AAAD1DB0713B1AAB368942D7_gshared (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m4E27E4136E6AA64DBF328B933CCC4CB3EA2C128A_gshared (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Mathematics.float3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_6;
		L_6 = InterfaceFuncInvoker0< float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Mathematics.float3>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D )L_6;
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_7 = (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)__this->get_predicate_4();
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_8 = V_1;
		NullCheck((Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_7, (float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_10 = V_1;
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>::Dispose() */, (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.Mathematics.float3>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m6C771229597B53AE01000D37605A912AA74D546B_gshared (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * __this, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_1 = (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)__this->get_predicate_4();
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_2 = ___predicate0;
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_3;
		L_3 = ((  Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * (*) (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_1, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * L_4 = (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *, RuntimeObject*, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m20B96BB5016BB8B192DE6BE4D013000E616192C1_gshared (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC * __this, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 * WhereSelectArrayIterator_2_Clone_mEA06DCCEA7274B9D65A4ED313657A35367180EC1_gshared (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC * __this, const RuntimeMethod* method)
{
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC * L_3 = (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC *, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m59DCCEEF77DA2CD6C6B66BD230A805A71A87D114_gshared (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC * __this, const RuntimeMethod* method)
{
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_1 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_6 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_8 = V_0;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_10 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_11 = V_0;
		NullCheck((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_10, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_14 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m9EFE855D1A705A9BC15F03CFBEAC5F8ADD21E0CF_gshared (WhereSelectArrayIterator_2_tCB97637D799FCAD3115615E9FDA8E5CF80A108EC * __this, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * L_1 = (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *, RuntimeObject*, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m7A38A363236B22C36C8C2BF4F63516E2D3848AF2_gshared (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 * __this, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectArrayIterator_2_Clone_m99C93E3FC25CEA91CE3D7656CF4F2B9C7BB3F76F_gshared (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 * __this, const RuntimeMethod* method)
{
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 * L_3 = (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 *, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mFD0BB15AE81818ACF2C3DE167FEEC039C9954A60_gshared (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 * __this, const RuntimeMethod* method)
{
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_1 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_6 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_8 = V_0;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_10 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_11 = V_0;
		NullCheck((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_10, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_14 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD7CEB242A6561C7394DED1C4CFE2CA44DCC8ED5B_gshared (WhereSelectArrayIterator_2_t08DE4878AA443563B5940613DEBED682F6942F28 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m540DE1811C4BE6CEEA2CF175736D9DE856D93ED0_gshared (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E * __this, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A * WhereSelectArrayIterator_2_Clone_m65F294BB2B333290EACAB9AF1A23B83433645391_gshared (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E * __this, const RuntimeMethod* method)
{
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_0 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E * L_3 = (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E *, ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m5EA6DF00D637E5854D7616FF140DDCCE8B2ABA06_gshared (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E * __this, const RuntimeMethod* method)
{
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_1 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_6 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_8 = V_0;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_7, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_10 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_11 = V_0;
		NullCheck((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_10);
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_12;
		L_12 = ((  float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  (*) (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_10, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36* L_14 = (ContourVertexU5BU5D_tD78F2EA3E732B8F5B5201FA2D894087C252E6F36*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>::Dispose() */, (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB40331A85E1FB5A48674FD6DBF4EBB09BB53B02E_gshared (WhereSelectArrayIterator_2_t0B01A9CEB8E329A3A8AF0121B7C13E85B75F3C8E * __this, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * L_1 = (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *, RuntimeObject*, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mF52E446394C3F8DFB90C987A3244FCCC6BA600AD_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m22ABB7CEF3FF8768C972AF44377BA8D2267B1F4F_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * L_3 = (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mE90B9B8E6833394962A9373FB647D6361B3B6796_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_10 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m51C6FAFCE81BD511E633CBBEC8E2A29EF144F1D7_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m37B6F813DD5D2DBF0B65CEEE8BAA4E079386B942_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mD1461D97262D9D39D4F7B6326C3424D9CEFF4C61_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_3 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD852569E97B9427E112491B734CB6474FB0F35AF_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_10 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2E8CD2871388CA9F41FA9A04A4CB14B36B1D76A7_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9338E041E5B1577F23D307AB6BD376BF06564E98_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectArrayIterator_2_Clone_m0A6FAC6BC2DE5D218C1A9F83DE77C6139D006708_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * L_3 = (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m5439AF2C7917EEF1DAE308071EDCCE14854A6F25_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_10 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_10);
		int64_t L_12;
		L_12 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m6E34B180A2AA1DD530DF94C76E36F2915B8FDCE6_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m09C9367DEC1ED98D9040B4FA8F71075894A152EF_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectArrayIterator_2_Clone_m73A5088F54FFA4A143BF99E1C0C99FE3EC6C3C89_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * L_3 = (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB08AFE5575A520AD10D16E1FEA4F25851BA2861C_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_10 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_10);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_12;
		L_12 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m842412852271AADCF28804A1C3CF3D694993B15F_gshared (WhereSelectArrayIterator_2_tB07DFAD04D54C9A73B7374B15C665E7162497213 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mA3721355CFE21C93FF4EBB3F0CF5456EEFA5EA19_gshared (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * __this, RuntimeObject* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 * WhereSelectEnumerableIterator_2_Clone_mE3EF354F45F18782587CF61E2DD555E539E59790_gshared (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * L_3 = (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 *, RuntimeObject*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB8D564C5BE6B9B60555B5D5A980D8F0FFBA8EE96_gshared (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mE31162ED57F8EA0F26BCF79C89FC7D074BAED8E8_gshared (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = InterfaceFuncInvoker0< ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_11 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m900325C94A45FD735E79A83A8BFEFB12E97B3E70_gshared (WhereSelectEnumerableIterator_2_t082E1B5B13EA24679459FB2484F9A187BB83D681 * __this, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * L_1 = (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *, RuntimeObject*, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m61143B1918818C38D1D533443349245650AE074D_gshared (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * __this, RuntimeObject* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectEnumerableIterator_2_Clone_mA53E13C8384AB0743C1A233E1BFE3DDB7C97B9A6_gshared (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * L_3 = (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD *, RuntimeObject*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m1F32BB3D970382EE067CF21C4DA2C95EBB1AA3BE_gshared (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m4C5AF35515D4FD9CB3C05F9229032D97752B6EE3_gshared (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = InterfaceFuncInvoker0< ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_11 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mBE95C93FF495925BFF0FBD9F83F0EBEA2A6BD00D_gshared (WhereSelectEnumerableIterator_2_t3B7C9E548F0B01F9C6D09D71FCA8E5ACDE0F3FCD * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE6C75142E6FB04A0787211D9478CB488ED6D66BC_gshared (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * __this, RuntimeObject* ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A * WhereSelectEnumerableIterator_2_Clone_m8ABF1755A15D1014C3207A38CED66161DFFB11C8_gshared (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * L_3 = (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 *, RuntimeObject*, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mE6E9699016AA8F1D04ADB680DC988ED50B98696D_gshared (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mDC8F674C2CEF5E75536C2935832D1DE30801CE5F_gshared (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = InterfaceFuncInvoker0< ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_11 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_11);
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_13;
		L_13 = ((  float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  (*) (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>::Dispose() */, (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m61B80AC317B27FC898E0D4197B811899E9F59193_gshared (WhereSelectEnumerableIterator_2_tB01D66CF8983968596A84009CEF5F6EC53E84150 * __this, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * L_1 = (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *, RuntimeObject*, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m24BFAF64B8AEF6BAC15970E8CE4F9192236CCC11_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m48529E6B525DC0A3DE4C3C65EC2F0A1D24A4E263_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * L_3 = (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB529F42305C163995535C0696422D8410CB02BB3_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC11B40068E87BD32531EC0895238F0EF85DDB398_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6B10C66012139D931A3FAC2CF5B589B789C2ABF4_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m942924EB1F576CB7906FC0D1AE34C855DF1084B9_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m1D22FFCBE9EDC4BA771C14DF5EAB0AE3DE0335AE_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_3 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2D488A3025C16C7E87BF820DA7BCF3D6A226DA23_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBC6D67E32DDE2CAE404BDB1BA4DC413948BAD258_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7BE31A8F105546603E49F9E36C977E10736266BC_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE1715111FE127BBB656AF0C4473285A0FEE2B537_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectEnumerableIterator_2_Clone_mBD5077D0F8F948622311102354CBF184E6D848A6_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * L_3 = (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m81800FC99E6FB80846D7DF96755E8D459411C1AF_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9999F84F40C27A273DB4DF3DFF3C4E82E9BD85C9_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_11 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mFDAB51910E8AF7000279D6229E103146B7661FDC_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mF82AA0AA2C5779BB822F08C4AE814149916D9439_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectEnumerableIterator_2_Clone_mF5BB16892B71222555556437C6CCFD8FFA9219E4_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * L_3 = (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m6F20EFDA733BCA152850CADEF1A5613FA90B8BD5_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mDCBC080662D0E8F0711129AD7EEF5491AAB966E4_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_11 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m5403D8244A072F58A818C303B12E3F78AB6F3FE9_gshared (WhereSelectEnumerableIterator_2_t62070F4688997B33723D2DDF3BF5591F6DD6B116 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4ECBB9EDB81DC5D81C2F729F3A528B5345D36418_gshared (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C * __this, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		((  void (*) (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 * WhereSelectListIterator_2_Clone_m002D801C6321DC9447528A3FC50556077FBF5AAE_gshared (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C * __this, const RuntimeMethod* method)
{
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_2 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C * L_3 = (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C *, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5C99254EED16684A96D5361E3BE8A8406B86C533_gshared (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_3 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		NullCheck((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3);
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  L_4;
		L_4 = ((  Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  (*) (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_5 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_inline((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 * L_11 = (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t07574F1E7EF84CF543A9B2FF0E62BB6B96696C64 *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_14 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tDEF6AC46E52D8687C27A6E60B6E0200D50011D76 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDECC30954B416D7786855DD9643B46A7E6DEB8C2_gshared (WhereSelectListIterator_2_t08B768B4AD54F201B800C51471E1C1C5FD1A8E8C * __this, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 * L_1 = (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tEDD9A2C48D1FE8BE0706121F2B6C8A796196FFF2 *, RuntimeObject*, Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3985FFDAB0D05F8E97E8EA849D5A24F16EFFC4FD *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD3F8F885B0AF6977BCFCC072276C87068F087FB2_gshared (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 * __this, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectListIterator_2_Clone_m699590CC3733CE2DB41ABA02182719C678DAE562_gshared (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 * __this, const RuntimeMethod* method)
{
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_2 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 * L_3 = (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 *, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9FEC951E923EFC23AC8A86016D6A795C3275319E_gshared (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_3 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		NullCheck((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3);
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  L_4;
		L_4 = ((  Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  (*) (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_5 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_inline((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 * L_11 = (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tA55660D7B36BC919063457215A12594F309CFDF1 *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_14 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA49B2D74E495EFA26A1F215E3E809BAD571BCDA2_gshared (WhereSelectListIterator_2_t94F415FEA624816E42FAE1274A4EC29F5D5C1625 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m429BD6BE31891961B06ECB6C64AF6D8BCE978A14_gshared (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E * __this, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * ___source0, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * ___predicate1, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		((  void (*) (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A * WhereSelectListIterator_2_Clone_m1B6B9C419A94F245358A5FCE850E012EB6F3C51D_gshared (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E * __this, const RuntimeMethod* method)
{
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_0 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_1 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_2 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E * L_3 = (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E *, List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_0, (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_1, (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC1816C78F69033DDC9FC62D30AAD5FC4D9A3AF18_gshared (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C * L_3 = (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)__this->get_source_3();
		NullCheck((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3);
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  L_4;
		L_4 = ((  Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11  (*) (List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t793A994CE01AE29FEE85500B7E3540653BFE5A0C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_5 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_6;
		L_6 = Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_inline((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_6;
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_7 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A * L_8 = (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)__this->get_predicate_4();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_9 = V_1;
		NullCheck((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD4EF074F88731E713305C48E156AB9F6F0F9324A *)L_8, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C * L_11 = (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)__this->get_selector_5();
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_12 = V_1;
		NullCheck((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_11);
		float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  L_13;
		L_13 = ((  float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  (*) (Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *, ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4ADAECFAD3DFE1FE3B6834A49502FA772B85CB3C *)L_11, (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * L_14 = (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mACDC401A875ECF83AEF9477068CDF02545A1D997((Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)(Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.Mathematics.float3>::Dispose() */, (Iterator_1_tCEC2E244A64F110B247B6A3DF34DE60D4456BA1A *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex,Unity.Mathematics.float3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m918384340B3A615C024FE2469E19186423B5ECC1_gshared (WhereSelectListIterator_2_t8005F348CC0B870A84DE3E85429A840305201D6E * __this, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F * L_1 = (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3450D7A9CB5BBEE711BB0ADD51AC530BD969D13F *, RuntimeObject*, Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t43355C55B1BBA93635101F6AF90867509812D7E5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m895E21AE9AB1E3F19B3147EDC913BB567B1A65C7_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mEE6375B2C79172E13732CA49AAF389493C1C7100_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * L_3 = (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m637B802A50BA94CD511636CAF5D912C6B96B18A1_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7F75FF628D2E99D2BA127B84FDD08DD88048ADB0_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA18E5B755DF06EAE14007C295ACE48C7E0615BAE_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mFEFF616AB589FF68AA4BCFE920814C287AC50268_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_3 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m758147C75B5A6CB8C86D4FEA039965940D0BDD6C_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB03479084DC9989DEAC9938DC78329DC769EFA14_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5F84B643134CB0A72EE2744BF02ED2C51BD7729A_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectListIterator_2_Clone_mBBDDAF037D47316823BF2F2618DD7B86B1C429F7_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * L_3 = (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3872D5CEA2C9BDF338C106938244AF47C95BCDB2_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_11 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBB616ADFF1E5BB22A53112DF8EF998F5049D4954_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m00A5EFD3110BE67160CD1308CD0DCDAD0B0ABC33_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		((  void (*) (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F * WhereSelectListIterator_2_Clone_m3B606B46BD9CCF51F74B95EE46128776B62D8BBB_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_2 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * L_3 = (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA8851E48DE925776AEFEDC3CAB8EF1EF3AF48683_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E * L_11 = (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11);
		PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  L_13;
		L_13 = ((  PlayerInfo_t30063B780B208F87947A4F5D8AA7C57F3DCAAFB6  (*) (Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t9E9BC869D08063751DB362104A4B5E53C52DF98E *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Mirror.Examples.MultipleMatch.PlayerInfo>::Dispose() */, (Iterator_1_t31ADC09A5384BF6FBD3B5D6CF13771F24B662C3F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Mirror.Examples.MultipleMatch.PlayerInfo>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m463EB8CD9BCBBDC82C15944EB5C6081BFEDDD73B_gshared (WhereSelectListIterator_2_t2C5CF65191D02A589A9E71C5F5AAD01AB2E10139 * __this, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 * L_1 = (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t40C743CE16D29C0ADFBB11A8820A52060B7450C8 *, RuntimeObject*, Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC5FA10F2C627F5AD05229D23C3EF8A67BF214E18 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  Enumerator_get_Current_mB9DED66EBA82669AB83832B40F60E1710B5179B4_gshared_inline (Enumerator_t0A364062D6EEDD0B306D570939B5709AEAA88D11 * __this, const RuntimeMethod* method)
{
	{
		ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  L_0 = (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )__this->get_current_3();
		return (ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
