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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>
struct DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E;
// NiobiumStudios.DailyRewardsCore`1<System.Object>
struct DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t74667C424CDD2B5DB81CEC61E57169FA17BCF782;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t83DC1A9F0F77879B6812C63406A0B53B8B159195;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>
struct List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<NiobiumStudios.Reward>
struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656;
// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>
struct OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A;
// NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>
struct OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// NiobiumStudios.DailyRewardUI[]
struct DailyRewardUIU5BU5D_t74343AD48705D5C6F259AB38E91C753927631E7C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// NiobiumStudios.Reward[]
struct RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables
struct BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// NiobiumStudios.DailyRewardUI
struct DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017;
// NiobiumStudios.DailyRewards
struct DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480;
// NiobiumStudios.DailyRewardsInterface
struct DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t398F6D0D455CCAEAA32E0D79E6ACAF9554B1A298;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t914FA36839115F95C08EEE7AD84B1C86C843CD25;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t10F2C525DF749C178EFA3A470BD6D9C00221ADD4;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t989A5D55525E5BD7994ACC2506C5ADFB3F097A7D;
// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper
struct ITelemetryDiagnosticsInstanceWrapper_tE9C80569B5FADDB74AC6BA62B240969EEC271D78;
// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper
struct ITelemetryMetricsInstanceWrapper_tCE178641236A54365C7446885E9FE7A0B95F9EDD;
// Uniject.IUtil
struct IUtil_t57381F702008EC2AD5F50703BDD602CCA678BE66;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MainMenu.MenuPanel
struct MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Google.Play.Review.PlayReviewInfo
struct PlayReviewInfo_t16F8CCF637F3E1B68D14ADD59E23CA9C1D614264;
// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_tC87E368967334D76A150DEE74D0DDFEB9A502935;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Google.Play.Review.ReviewManager
struct ReviewManager_t879B67B4D7B1F5B4161BB7FADC0865BD65941482;
// NiobiumStudios.Reward
struct Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t48E00F03328D89136362A032D73E709EF91A3777;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// NiobiumStudios.DailyRewards/OnClaimPrize
struct OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B;
// NiobiumStudios.DailyRewardsInterface/<>c
struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_tE334F08374C14889F3118AFD0E1F280950C138D6;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3;
IL2CPP_EXTERN_C String_t* _stringLiteral16E254D12EACD94894B21D4A84423579FC61F2BE;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral34FC96AD1E48BE4AF3CD597731EEFBA12AAA281D;
IL2CPP_EXTERN_C String_t* _stringLiteral4013A4BA93521CCEA620C62E0D3703CE0D072CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89;
IL2CPP_EXTERN_C String_t* _stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA;
IL2CPP_EXTERN_C String_t* _stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630;
IL2CPP_EXTERN_C String_t* _stringLiteral6178084923226537EED3751DE48D1B65584FEB7A;
IL2CPP_EXTERN_C String_t* _stringLiteral62A2B5B2AD2683F08D1000F5996434D4DBA8819B;
IL2CPP_EXTERN_C String_t* _stringLiteral65378BF0A8300E57633F5AFF3A014EB9F424E10D;
IL2CPP_EXTERN_C String_t* _stringLiteral67B4991499D6E451C6BC1CEFAADB4F56AA9AFC5A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004;
IL2CPP_EXTERN_C String_t* _stringLiteral76D84FD78CF086C6894260CA7EC7D53676DCB2BC;
IL2CPP_EXTERN_C String_t* _stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E;
IL2CPP_EXTERN_C String_t* _stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99;
IL2CPP_EXTERN_C String_t* _stringLiteral96B78322308D892674F7B399304FF1260CEC8D35;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D8719E480A5A2FF9B8501C0F5F70F5D95475D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB745259D05427371E22469B761DF7A601BC9D41E;
IL2CPP_EXTERN_C String_t* _stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671;
IL2CPP_EXTERN_C String_t* _stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3;
IL2CPP_EXTERN_C String_t* _stringLiteralF5AA128AAB70764CE45AF01BC0E35C43C36511A5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuyingConsumables_OnInitializeFailed_m5694538F97FE409F653882351F6BD84EB23246F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480_m442E78234DB49A12B5639DBE81B8FA41373A30E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_GetFormattedTime_m2A990383B15E8442A1638813712FC4C994BB79DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_InitializeDate_m10B1ED0BD55685257F36FAE9DA2A619D629B43DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_0_m8B81D2244B2D90A990121E5AF026A9E7F2ABB274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_1_m71B505BD713A58980D8549FBF828C89A5DFAB667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_2_mC5B2FA6A8D7A4F5CABC504BADA037F84C0780735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_3_mBF09D6CBA52AE247F6B4DC2D6E307D6A4919A92D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_4_m555D2DDC73D2ED50F4923F49541953588A685105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_5_mA663819E652EB22F5E4E71947AE0568CEC56859E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DailyRewardsInterface_U3CStartU3Eb__22_6_m5E3DD8B6F6C6C479958A41BD8D92A38834600863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5FFB7C082482EA341F784FCBF06F89536B345925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA6CC4A5DDBAA52287105CA74728849C695D7053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7092348A5F978FB9079BF933F952F40AA60D8BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017_m2508D72F1CA72FA86D05A7D06ECBB1F7E41B5057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1BD46D53F0A0E0B28CD9E3C85D1A7D10E386438C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m550AE2E1911A50CFCCFEDA7E8FEE719C4F37EE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFE0681C30A3339275BAB0709BA0A0D0B2F284185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9E8AEF0DDDBB84B07EC59B14D2772988D76B27CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__22_7_m8FBCDB8A61CE13E967A76B1AD060F6B382A24331_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>
struct List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DailyRewardUIU5BU5D_t74343AD48705D5C6F259AB38E91C753927631E7C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DailyRewardUIU5BU5D_t74343AD48705D5C6F259AB38E91C753927631E7C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<NiobiumStudios.Reward>
struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RewardU5BU5D_tD62E71A1D1B5E2ECB0800D47850FB5589F1811F7* ___s_emptyArray_5;
};

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t2CC681047C9428D3A74AD55F014C31823C70D20D  : public RuntimeObject
{
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;
};
struct Il2CppArrayBounds;

// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::<products>k__BackingField
	HashSet_1_t83DC1A9F0F77879B6812C63406A0B53B8B159195* ___U3CproductsU3Ek__BackingField_1;
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::<factory>k__BackingField
	PurchasingFactory_tC87E368967334D76A150DEE74D0DDFEB9A502935* ___U3CfactoryU3Ek__BackingField_2;
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

// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E  : public RuntimeObject
{
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<appleOriginalTransactionID>k__BackingField
	String_t* ___U3CappleOriginalTransactionIDU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Purchasing.Product::<appleProductIsRestored>k__BackingField
	bool ___U3CappleProductIsRestoredU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
};

// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* ___m_Payouts_4;
};

// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39  : public RuntimeObject
{
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___U3CpurchasedProductU3Ek__BackingField_0;
};

// NiobiumStudios.Reward
struct Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D  : public RuntimeObject
{
	// System.String NiobiumStudios.Reward::unit
	String_t* ___unit_0;
	// System.Int32 NiobiumStudios.Reward::reward
	int32_t ___reward_1;
	// UnityEngine.Sprite NiobiumStudios.Reward::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_2;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// NiobiumStudios.DailyRewardsInterface/<>c
struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B  : public RuntimeObject
{
};

struct U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields
{
	// NiobiumStudios.DailyRewardsInterface/<>c NiobiumStudios.DailyRewardsInterface/<>c::<>9
	U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction NiobiumStudios.DailyRewardsInterface/<>c::<>9__22_7
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__22_7_1;
};

// System.Collections.Generic.List`1/Enumerator<NiobiumStudios.DailyRewardUI>
struct Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* ____current_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489  : public AbstractPurchasingModule_t2CC681047C9428D3A74AD55F014C31823C70D20D
{
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::k_Version
	String_t* ___k_Version_2;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_3;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_tE334F08374C14889F3118AFD0E1F280950C138D6* ___U3CstoreInstanceU3Ek__BackingField_8;
	// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryMetricsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9;
	// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryDiagnosticsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10;
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::<appStore>k__BackingField
	int32_t ___U3CappStoreU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::usingMockMicrosoft
	bool ___usingMockMicrosoft_13;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_15;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t48E00F03328D89136362A032D73E709EF91A3777* ___windowsStore_16;
};

struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_StaticFields
{
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t74667C424CDD2B5DB81CEC61E57169FA17BCF782* ___AndroidStoreNameMap_11;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>
struct OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A  : public MulticastDelegate_t
{
};

// NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>
struct OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912  : public MulticastDelegate_t
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

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// NiobiumStudios.DailyRewards/OnClaimPrize
struct OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B  : public MulticastDelegate_t
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>
struct DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isSingleton
	bool ___isSingleton_4;
	// System.String NiobiumStudios.DailyRewardsCore`1::errorMessage
	String_t* ___errorMessage_5;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isErrorConnect
	bool ___isErrorConnect_6;
	// System.DateTime NiobiumStudios.DailyRewardsCore`1::now
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___now_7;
	// System.Int32 NiobiumStudios.DailyRewardsCore`1::maxRetries
	int32_t ___maxRetries_8;
	// NiobiumStudios.DailyRewardsCore`1/OnInitialize<T> NiobiumStudios.DailyRewardsCore`1::onInitialize
	OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* ___onInitialize_9;
	// System.Boolean NiobiumStudios.DailyRewardsCore`1::isInitialized
	bool ___isInitialized_10;
};

struct DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E_StaticFields
{
	// T NiobiumStudios.DailyRewardsCore`1::_instance
	DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* ____instance_11;
};

// Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables
struct BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Purchasing.IStoreController Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::m_StoreController
	RuntimeObject* ___m_StoreController_4;
	// System.String Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::goldProductId
	String_t* ___goldProductId_5;
	// System.String Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::diamondProductId
	String_t* ___diamondProductId_6;
	// UnityEngine.UI.Text Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::GoldCountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GoldCountText_7;
	// UnityEngine.UI.Text Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::DiamondCountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DiamondCountText_8;
	// System.Int32 Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::m_GoldCount
	int32_t ___m_GoldCount_9;
	// System.Int32 Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::m_DiamondCount
	int32_t ___m_DiamondCount_10;
};

// NiobiumStudios.DailyRewardUI
struct DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NiobiumStudios.DailyRewardUI::showRewardName
	bool ___showRewardName_4;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardUI::textDay
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textDay_5;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardUI::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_6;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardUI::imageRewardBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageRewardBackground_7;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardUI::imageReward
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageReward_8;
	// UnityEngine.Color NiobiumStudios.DailyRewardUI::colorClaim
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorClaim_9;
	// UnityEngine.Color NiobiumStudios.DailyRewardUI::colorUnclaimed
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorUnclaimed_10;
	// System.Int32 NiobiumStudios.DailyRewardUI::day
	int32_t ___day_11;
	// NiobiumStudios.Reward NiobiumStudios.DailyRewardUI::reward
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* ___reward_12;
	// NiobiumStudios.DailyRewardUI/DailyRewardState NiobiumStudios.DailyRewardUI::state
	int32_t ___state_13;
};

// NiobiumStudios.DailyRewardsInterface
struct DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas NiobiumStudios.DailyRewardsInterface::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::dailyRewardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dailyRewardPrefab_5;
	// System.Boolean NiobiumStudios.DailyRewardsInterface::isDebug
	bool ___isDebug_6;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::panelDebug
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelDebug_7;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonAdvanceDay
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonAdvanceDay_8;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonAdvanceHour
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonAdvanceHour_9;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonReset
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReset_10;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonReloadScene
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonReloadScene_11;
	// UnityEngine.GameObject NiobiumStudios.DailyRewardsInterface::panelReward
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelReward_12;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardsInterface::textReward
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textReward_13;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonCloseReward
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseReward_14;
	// UnityEngine.UI.Image NiobiumStudios.DailyRewardsInterface::imageReward
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageReward_15;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonClaim
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonClaim_16;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonClose
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonClose_17;
	// UnityEngine.UI.Button NiobiumStudios.DailyRewardsInterface::buttonCloseWindow
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonCloseWindow_18;
	// UnityEngine.UI.Text NiobiumStudios.DailyRewardsInterface::textTimeDue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textTimeDue_19;
	// UnityEngine.UI.GridLayoutGroup NiobiumStudios.DailyRewardsInterface::dailyRewardsGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___dailyRewardsGroup_20;
	// UnityEngine.UI.ScrollRect NiobiumStudios.DailyRewardsInterface::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_21;
	// System.Boolean NiobiumStudios.DailyRewardsInterface::readyToClaim
	bool ___readyToClaim_22;
	// System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI> NiobiumStudios.DailyRewardsInterface::dailyRewardsUI
	List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* ___dailyRewardsUI_23;
	// NiobiumStudios.DailyRewards NiobiumStudios.DailyRewardsInterface::dailyRewards
	DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* ___dailyRewards_24;
};

// MainMenu.MenuPanel
struct MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] MainMenu.MenuPanel::bottomsbuttons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bottomsbuttons_4;
	// UnityEngine.GameObject[] MainMenu.MenuPanel::Panels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Panels_5;
	// UnityEngine.GameObject MainMenu.MenuPanel::content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___content_6;
	// UnityEngine.UI.Text MainMenu.MenuPanel::coins
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coins_7;
	// UnityEngine.UI.Text MainMenu.MenuPanel::diamonds
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___diamonds_8;
	// TMPro.TextMeshProUGUI MainMenu.MenuPanel::SpinTime
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SpinTime_9;
	// TMPro.TextMeshProUGUI MainMenu.MenuPanel::pigtime
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___pigtime_10;
	// TMPro.TextMeshProUGUI MainMenu.MenuPanel::levels
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___levels_11;
	// System.Single MainMenu.MenuPanel::sec
	float ___sec_13;
	// System.Int32 MainMenu.MenuPanel::mins
	int32_t ___mins_14;
	// System.Int32 MainMenu.MenuPanel::hours
	int32_t ___hours_15;
	// Google.Play.Review.ReviewManager MainMenu.MenuPanel::_reviewManager
	ReviewManager_t879B67B4D7B1F5B4161BB7FADC0865BD65941482* ____reviewManager_16;
	// Google.Play.Review.PlayReviewInfo MainMenu.MenuPanel::_playReviewInfo
	PlayReviewInfo_t16F8CCF637F3E1B68D14ADD59E23CA9C1D614264* ____playReviewInfo_17;
};

struct MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7_StaticFields
{
	// MainMenu.MenuPanel MainMenu.MenuPanel::Instance
	MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7* ___Instance_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NiobiumStudios.DailyRewards
struct DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480  : public DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E
{
	// System.Collections.Generic.List`1<NiobiumStudios.Reward> NiobiumStudios.DailyRewards::rewards
	List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* ___rewards_12;
	// System.DateTime NiobiumStudios.DailyRewards::lastRewardTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastRewardTime_13;
	// System.Int32 NiobiumStudios.DailyRewards::availableReward
	int32_t ___availableReward_14;
	// System.Int32 NiobiumStudios.DailyRewards::lastReward
	int32_t ___lastReward_15;
	// System.Boolean NiobiumStudios.DailyRewards::keepOpen
	bool ___keepOpen_16;
	// NiobiumStudios.DailyRewards/OnClaimPrize NiobiumStudios.DailyRewards::onClaimPrize
	OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* ___onClaimPrize_17;
	// System.TimeSpan NiobiumStudios.DailyRewards::debugTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___debugTime_22;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A  : public RuntimeArray
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInitialize__ctor_m79D56D3536D806B0D16A8CBA7809DB2642E77A47_gshared (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewardsCore`1<System.Object>::GetFormattedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewardsCore_1_GetFormattedTime_mB77E0DF417D9877A40761C49B67BA808AECFC804_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___span0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::InitializeDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1_InitializeDate_m457EDC74DD1CF4E88B5232137A2355677D553EAB_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<System.Object>::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1_OnApplicationPause_m629CE24AA44225CFC4777B86BE562ED7ADFF739B_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, bool ___pauseStatus0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsCore_1__ctor_m4DE9CEFA417FD57E3DD06B930D62CE64D25DD689_gshared (DailyRewardsCore_1_t205D30D210821929737EE2FE518C6F2E31AAEBDE* __this, const RuntimeMethod* method) ;

// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_InitializePurchasing_m6687352665C06271AD908869BC0EEFF1A54E735B (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) ;
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_UpdateUI_m6D7B54D49C094FB7FE2E8950467158D462BD18FA (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* StandardPurchasingModule_Instance_m6F638304EE123E1881DF2465316D5C1D3845CE0C (const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Purchasing.Extension.IPurchasingModule>()
inline IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_inline (const RuntimeMethod* method)
{
	return ((  IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3 (RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* ___rest1, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ConfigurationBuilder_AddProduct_m5185C9211186D4C7D0434CE373E38E76F57BD212 (ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* __this, String_t* ___id0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF (RuntimeObject* ___listener0, ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ___builder1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline (PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* __this, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline (ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::AddGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_AddGold_m2B681DBEEA121059EE26CF0070F0B67F12CC6290 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) ;
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::AddDiamond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_AddDiamond_mAA25A98E360A194B1D86FCE62B4A48263050B27E (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<NiobiumStudios.DailyRewards>()
inline DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* Component_GetComponent_TisDailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480_m442E78234DB49A12B5639DBE81B8FA41373A30E1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardsInterface::InitializeDailyRewardsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_InitializeDailyRewardsUI_m62B7882DFA6B9F31A01138D1D39E500B208B64C2 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsInterface::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize__ctor_m01622E897A574238182A1AD112ED602FE0F68817 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>::.ctor(System.Object,System.IntPtr)
inline void OnInitialize__ctor_mA8EA270D2802394FC2F972039E64DB96E7A122F4 (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*, RuntimeObject*, intptr_t, const RuntimeMethod*))OnInitialize__ctor_m79D56D3536D806B0D16A8CBA7809DB2642E77A47_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// NiobiumStudios.Reward NiobiumStudios.DailyRewards::GetReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* DailyRewards_GetReward_mE953E12B8649897F220D0A1B974CEAE350245BD2 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, int32_t ___day0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<NiobiumStudios.DailyRewardUI>()
inline DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* GameObject_GetComponent_TisDailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017_m2508D72F1CA72FA86D05A7D06ECBB1F7E41B5057 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Initialize_mA0FC20485D386C91CCCDB681B95381BFF26B060B (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>::Add(T)
inline void List_1_Add_m1BD46D53F0A0E0B28CD9E3C85D1A7D10E386438C_inline (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* __this, DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*, DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<NiobiumStudios.Reward>::get_Count()
inline int32_t List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void NiobiumStudios.DailyRewards::CheckRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>::GetEnumerator()
inline Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B List_1_GetEnumerator_m550AE2E1911A50CFCCFEDA7E8FEE719C4F37EE7A (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B (*) (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<NiobiumStudios.DailyRewardUI>::Dispose()
inline void Enumerator_Dispose_m5FFB7C082482EA341F784FCBF06F89536B345925 (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<NiobiumStudios.DailyRewardUI>::get_Current()
inline DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* Enumerator_get_Current_m7092348A5F978FB9079BF933F952F40AA60D8BA8_inline (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B* __this, const RuntimeMethod* method)
{
	return ((  DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* (*) (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Refresh_mD1C827A4AADFFD9679E20E6B90167077BCE5AC56 (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<NiobiumStudios.DailyRewardUI>::MoveNext()
inline bool Enumerator_MoveNext_mAA6CC4A5DDBAA52287105CA74728849C695D7053 (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardsInterface::SnapToReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_SnapToReward_mC5EBB095182E06188431158400F4AA3293B186E5 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_ForceUpdateCanvases_m29B1B008CA6C4A3CF623A0A86ACE5C8AA4C2B0C1 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>::get_Count()
inline int32_t List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_inline (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>::get_Item(System.Int32)
inline DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* List_1_get_Item_m9E8AEF0DDDBB84B07EC59B14D2772988D76B27CA (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* (*) (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsInterface::CheckTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) ;
// System.TimeSpan NiobiumStudios.DailyRewards::GetTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DailyRewards_GetTimeDifference_mE94B121B09688541741D6276A86C5FE34E33CBAF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::GetFormattedTime(System.TimeSpan)
inline String_t* DailyRewardsCore_1_GetFormattedTime_m2A990383B15E8442A1638813712FC4C994BB79DF (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___span0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))DailyRewardsCore_1_GetFormattedTime_mB77E0DF417D9877A40761C49B67BA808AECFC804_gshared)(__this, ___span0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void MainMenu.MenuPanel::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPanel_UpdateText_mADB2542D59CCE42E03E896982177748F242122CB (MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NiobiumStudios.DailyRewardUI>::.ctor()
inline void List_1__ctor_mFE0681C30A3339275BAB0709BA0A0D0B2F284185 (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewards::ClaimPrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_ClaimPrize_mA67D9A7178739327226FA8D23EA7B5AEEF02E968 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_m513B2AFB80D3350E59FBD23F53B2F1322175C24D (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___ts0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_Reset_m07207FCE233ADD81D273DCDD7EFE36AC87A5B072 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_loadedLevelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_loadedLevelName_m2E1ADDD7E0429B1B66AD8F8A2C601BF3AB3DED27 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_InitializeTimer_mE657EAA516F6EF3A30D3B9716ABF985AC537B066 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::InitializeDate()
inline void DailyRewardsCore_1_InitializeDate_m10B1ED0BD55685257F36FAE9DA2A619D629B43DC (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, const RuntimeMethod*))DailyRewardsCore_1_InitializeDate_m457EDC74DD1CF4E88B5232137A2355677D553EAB_gshared)(__this, method);
}
// System.Void NiobiumStudios.DailyRewardsCore`1/OnInitialize<NiobiumStudios.DailyRewards>::Invoke(System.Boolean,System.String)
inline void OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	((  void (*) (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*, bool, String_t*, const RuntimeMethod*))OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline)(__this, ___error0, ___errorMessage1, method);
}
// System.Void NiobiumStudios.DailyRewards::LoadDebugTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::OnApplicationPause(System.Boolean)
inline void DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1 (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, bool, const RuntimeMethod*))DailyRewardsCore_1_OnApplicationPause_m629CE24AA44225CFC4777B86BE562ED7ADFF739B_gshared)(__this, ___pauseStatus0, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Subtract_m6B780A4AADD60F53CC449DDC2171BBCD09381559 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___ts0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetDebugTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetLastRewardTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String NiobiumStudios.DailyRewards::GetLastRewardKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3 (String_t* ___s0, String_t* ___format1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalHours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddHours(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<NiobiumStudios.Reward>::get_Item(System.Int32)
inline Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* (*) (List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::.ctor()
inline void DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9 (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E* __this, const RuntimeMethod* method)
{
	((  void (*) (DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*, const RuntimeMethod*))DailyRewardsCore_1__ctor_m4DE9CEFA417FD57E3DD06B930D62CE64D25DD689_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_Start_mFA38F78D53B5C94965DD0648DAF4B2D08BAED56D (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	{
		// InitializePurchasing();
		BuyingConsumables_InitializePurchasing_m6687352665C06271AD908869BC0EEFF1A54E735B(__this, NULL);
		// UpdateUI();
		BuyingConsumables_UpdateUI_m6D7B54D49C094FB7FE2E8950467158D462BD18FA(__this, NULL);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_InitializePurchasing_m6687352665C06271AD908869BC0EEFF1A54E735B (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* V_0 = NULL;
	{
		// var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
		il2cpp_codegen_runtime_class_init_inline(StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* L_0;
		L_0 = StandardPurchasingModule_Instance_m6F638304EE123E1881DF2465316D5C1D3845CE0C(NULL);
		IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* L_1;
		L_1 = Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_inline(Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_2;
		L_2 = ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3(L_0, L_1, NULL);
		V_0 = L_2;
		// builder.AddProduct(goldProductId, ProductType.Consumable);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_3 = V_0;
		String_t* L_4 = __this->___goldProductId_5;
		NullCheck(L_3);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_5;
		L_5 = ConfigurationBuilder_AddProduct_m5185C9211186D4C7D0434CE373E38E76F57BD212(L_3, L_4, 0, NULL);
		// builder.AddProduct(diamondProductId, ProductType.Consumable);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_6 = V_0;
		String_t* L_7 = __this->___diamondProductId_6;
		NullCheck(L_6);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_8;
		L_8 = ConfigurationBuilder_AddProduct_m5185C9211186D4C7D0434CE373E38E76F57BD212(L_6, L_7, 0, NULL);
		// UnityPurchasing.Initialize(this, builder);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_9 = V_0;
		UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::BuyGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_BuyGold_m985AAB0172034B2084582FC30AE5B0719548341D (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_StoreController.InitiatePurchase(goldProductId);
		RuntimeObject* L_0 = __this->___m_StoreController_4;
		String_t* L_1 = __this->___goldProductId_5;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::BuyDiamond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_BuyDiamond_m258D2CA0EE30A45B9521BC65E0C4AA2A9D4D985A (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_StoreController.InitiatePurchase(diamondProductId);
		RuntimeObject* L_0 = __this->___m_StoreController_4;
		String_t* L_1 = __this->___diamondProductId_6;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_OnInitialized_mC1EA93D726B46FDC70E4EEB6C85F7A624D0B357F (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5AA128AAB70764CE45AF01BC0E35C43C36511A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("In-App Purchasing successfully initialized");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF5AA128AAB70764CE45AF01BC0E35C43C36511A5, NULL);
		// m_StoreController = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->___m_StoreController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StoreController_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_OnInitializeFailed_m3855B55F9F9683F42191784243BE71E7A436A195 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4013A4BA93521CCEA620C62E0D3703CE0D072CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"In-App Purchasing initialize failed: {error}");
		int32_t L_0 = ___error0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4013A4BA93521CCEA620C62E0D3703CE0D072CC8, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuyingConsumables_ProcessPurchase_mEBD7DB8972E2EAF26179A3D177D2C0FE5A88564C (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D8719E480A5A2FF9B8501C0F5F70F5D95475D3);
		s_Il2CppMethodInitialized = true;
	}
	Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* V_0 = NULL;
	{
		// var product = args.purchasedProduct;
		PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_0 = ___args0;
		NullCheck(L_0);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_1;
		L_1 = PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline(L_0, NULL);
		V_0 = L_1;
		// if (product.definition.id == goldProductId)
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_2 = V_0;
		NullCheck(L_2);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_3;
		L_3 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_3, NULL);
		String_t* L_5 = __this->___goldProductId_5;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// AddGold();
		BuyingConsumables_AddGold_m2B681DBEEA121059EE26CF0070F0B67F12CC6290(__this, NULL);
		goto IL_0045;
	}

IL_0027:
	{
		// else if (product.definition.id == diamondProductId)
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_7 = V_0;
		NullCheck(L_7);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_8;
		L_8 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_8, NULL);
		String_t* L_10 = __this->___diamondProductId_6;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		// AddDiamond();
		BuyingConsumables_AddDiamond_mAA25A98E360A194B1D86FCE62B4A48263050B27E(__this, NULL);
	}

IL_0045:
	{
		// Debug.Log($"Purchase Complete - Product: {product.definition.id}");
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_12 = V_0;
		NullCheck(L_12);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_13;
		L_13 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB5D8719E480A5A2FF9B8501C0F5F70F5D95475D3, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
		// return PurchaseProcessingResult.Complete;
		return (int32_t)(0);
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_OnPurchaseFailed_m717019ED8B3AD21700DC1C55CDA9031A249B8C40 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___failureReason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34FC96AD1E48BE4AF3CD597731EEFBA12AAA281D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Purchase failed - Product: '{product.definition.id}', PurchaseFailureReason: {failureReason}");
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_0 = ___product0;
		NullCheck(L_0);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_1;
		L_1 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_1, NULL);
		int32_t L_3 = ___failureReason1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(PurchaseFailureReason_t9E7D53591FEB36F565C985D78568BE1D2489F276_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral34FC96AD1E48BE4AF3CD597731EEFBA12AAA281D, L_2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::AddGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_AddGold_m2B681DBEEA121059EE26CF0070F0B67F12CC6290 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	{
		// m_GoldCount++;
		int32_t L_0 = __this->___m_GoldCount_9;
		__this->___m_GoldCount_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// UpdateUI();
		BuyingConsumables_UpdateUI_m6D7B54D49C094FB7FE2E8950467158D462BD18FA(__this, NULL);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::AddDiamond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_AddDiamond_mAA25A98E360A194B1D86FCE62B4A48263050B27E (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	{
		// m_DiamondCount++;
		int32_t L_0 = __this->___m_DiamondCount_10;
		__this->___m_DiamondCount_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// UpdateUI();
		BuyingConsumables_UpdateUI_m6D7B54D49C094FB7FE2E8950467158D462BD18FA(__this, NULL);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_UpdateUI_m6D7B54D49C094FB7FE2E8950467158D462BD18FA (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62A2B5B2AD2683F08D1000F5996434D4DBA8819B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B4991499D6E451C6BC1CEFAADB4F56AA9AFC5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoldCountText.text = $"Your Gold: {m_GoldCount}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___GoldCountText_7;
		int32_t L_1 = __this->___m_GoldCount_9;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral67B4991499D6E451C6BC1CEFAADB4F56AA9AFC5A, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// DiamondCountText.text = $"Your Diamonds: {m_DiamondCount}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___DiamondCountText_8;
		int32_t L_6 = __this->___m_DiamondCount_10;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral62A2B5B2AD2683F08D1000F5996434D4DBA8819B, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// }
		return;
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables_OnInitializeFailed_m5694538F97FE409F653882351F6BD84EB23246F4 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BuyingConsumables_OnInitializeFailed_m5694538F97FE409F653882351F6BD84EB23246F4_RuntimeMethod_var)));
	}
}
// System.Void Samples.Purchasing.Core.BuyingConsumables.BuyingConsumables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuyingConsumables__ctor_mD18B501B3EC57C31F79B498909C7B2B42BDF9E03 (BuyingConsumables_tEFCB279BC0F63A194A3DFD4477434B7184DA93F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65378BF0A8300E57633F5AFF3A014EB9F424E10D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B78322308D892674F7B399304FF1260CEC8D35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string goldProductId = "com.mycompany.mygame.gold1";
		__this->___goldProductId_5 = _stringLiteral96B78322308D892674F7B399304FF1260CEC8D35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___goldProductId_5), (void*)_stringLiteral96B78322308D892674F7B399304FF1260CEC8D35);
		// public string diamondProductId = "com.mycompany.mygame.diamond1";
		__this->___diamondProductId_6 = _stringLiteral65378BF0A8300E57633F5AFF3A014EB9F424E10D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diamondProductId_6), (void*)_stringLiteral65378BF0A8300E57633F5AFF3A014EB9F424E10D);
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
// System.Void NiobiumStudios.DailyRewardsInterface::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_Awake_mF72C32A21C7F85189040CF560BAC6C69476115F3 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480_m442E78234DB49A12B5639DBE81B8FA41373A30E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// dailyRewards = GetComponent<DailyRewards>();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_2;
		L_2 = Component_GetComponent_TisDailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480_m442E78234DB49A12B5639DBE81B8FA41373A30E1(__this, Component_GetComponent_TisDailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480_m442E78234DB49A12B5639DBE81B8FA41373A30E1_RuntimeMethod_var);
		__this->___dailyRewards_24 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dailyRewards_24), (void*)L_2);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_Start_m3407A4A9BB63C7292B9EE3E9FFF658BE078C3CAD (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_0_m8B81D2244B2D90A990121E5AF026A9E7F2ABB274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_1_m71B505BD713A58980D8549FBF828C89A5DFAB667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_2_mC5B2FA6A8D7A4F5CABC504BADA037F84C0780735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_3_mBF09D6CBA52AE247F6B4DC2D6E307D6A4919A92D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_4_m555D2DDC73D2ED50F4923F49541953588A685105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_5_mA663819E652EB22F5E4E71947AE0568CEC56859E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_U3CStartU3Eb__22_6_m5E3DD8B6F6C6C479958A41BD8D92A38834600863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__22_7_m8FBCDB8A61CE13E967A76B1AD060F6B382A24331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B11_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B11_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B10_1 = NULL;
	{
		// InitializeDailyRewardsUI();
		DailyRewardsInterface_InitializeDailyRewardsUI_m62B7882DFA6B9F31A01138D1D39E500B208B64C2(__this, NULL);
		// if (panelDebug)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelDebug_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// panelDebug.SetActive(isDebug);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelDebug_7;
		bool L_3 = __this->___isDebug_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
	}

IL_0024:
	{
		// buttonClose.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___buttonClose_17;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// buttonClaim.onClick.AddListener(() =>
		// {
		//     dailyRewards.ClaimPrize();
		//     readyToClaim = false;
		//     UpdateUI();
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___buttonClaim_16;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_0_m8B81D2244B2D90A990121E5AF026A9E7F2ABB274_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// buttonCloseReward.onClick.AddListener(() =>
		// {
		//     var keepOpen = dailyRewards.keepOpen;
		//     panelReward.SetActive(false);
		//     canvas.gameObject.SetActive(keepOpen);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___buttonCloseReward_14;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_1_m71B505BD713A58980D8549FBF828C89A5DFAB667_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// buttonClose.onClick.AddListener(() =>
		// {
		//     canvas.gameObject.SetActive(false);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___buttonClose_17;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_2_mC5B2FA6A8D7A4F5CABC504BADA037F84C0780735_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// buttonCloseWindow.onClick.AddListener(() =>
		// {
		//     canvas.gameObject.SetActive(false);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___buttonCloseWindow_18;
		NullCheck(L_15);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_3_mBF09D6CBA52AE247F6B4DC2D6E307D6A4919A92D_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_17, NULL);
		// if (buttonAdvanceDay)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___buttonAdvanceDay_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		if (!L_19)
		{
			goto IL_00ce;
		}
	}
	{
		// buttonAdvanceDay.onClick.AddListener(() =>
		// {
		//     dailyRewards.debugTime = dailyRewards.debugTime.Add(new TimeSpan(1, 0, 0, 0));
		//     UpdateUI();
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___buttonAdvanceDay_8;
		NullCheck(L_20);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_21;
		L_21 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_20, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_22, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_4_m555D2DDC73D2ED50F4923F49541953588A685105_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_21, L_22, NULL);
	}

IL_00ce:
	{
		// if(buttonAdvanceHour)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___buttonAdvanceHour_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		if (!L_24)
		{
			goto IL_00f7;
		}
	}
	{
		// buttonAdvanceHour.onClick.AddListener(() =>
		//   {
		//       dailyRewards.debugTime = dailyRewards.debugTime.Add(new TimeSpan(1, 0, 0));
		//       UpdateUI();
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___buttonAdvanceHour_9;
		NullCheck(L_25);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_26;
		L_26 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_25, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_27 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_27, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_5_mA663819E652EB22F5E4E71947AE0568CEC56859E_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_26, L_27, NULL);
	}

IL_00f7:
	{
		// if(buttonReset)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___buttonReset_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_28, NULL);
		if (!L_29)
		{
			goto IL_0120;
		}
	}
	{
		// buttonReset.onClick.AddListener(() =>
		// {
		//     dailyRewards.Reset();
		//     dailyRewards.debugTime = new TimeSpan();
		//     dailyRewards.lastRewardTime = System.DateTime.MinValue;
		//     readyToClaim = false;
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___buttonReset_10;
		NullCheck(L_30);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_31;
		L_31 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_30, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_32, __this, (intptr_t)((void*)DailyRewardsInterface_U3CStartU3Eb__22_6_m5E3DD8B6F6C6C479958A41BD8D92A38834600863_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_31, L_32, NULL);
	}

IL_0120:
	{
		// if(buttonReloadScene)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___buttonReloadScene_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_33, NULL);
		if (!L_34)
		{
			goto IL_015c;
		}
	}
	{
		// buttonReloadScene.onClick.AddListener(() =>
		// {
		//     //Application.LoadLevel(Application.loadedLevelName);
		//     SceneManager.LoadScene(Application.loadedLevelName);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = __this->___buttonReloadScene_11;
		NullCheck(L_35);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_36;
		L_36 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_37 = ((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9__22_7_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_38 = L_37;
		G_B10_0 = L_38;
		G_B10_1 = L_36;
		if (L_38)
		{
			G_B11_0 = L_38;
			G_B11_1 = L_36;
			goto IL_0157;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* L_39 = ((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_40 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_40, L_39, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__22_7_m8FBCDB8A61CE13E967A76B1AD060F6B382A24331_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_41 = L_40;
		((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9__22_7_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9__22_7_1), (void*)L_41);
		G_B11_0 = L_41;
		G_B11_1 = G_B10_1;
	}

IL_0157:
	{
		NullCheck(G_B11_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B11_1, G_B11_0, NULL);
	}

IL_015c:
	{
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_OnEnable_m94CCA69F15F8AE3A16EDA52A64D77F721C8B3AFE (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dailyRewards.onClaimPrize += OnClaimPrize;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = L_0;
		NullCheck(L_1);
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_2 = L_1->___onClaimPrize_17;
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_3 = (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)il2cpp_codegen_object_new(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnClaimPrize__ctor_m01622E897A574238182A1AD112ED602FE0F68817(L_3, __this, (intptr_t)((void*)DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___onClaimPrize_17 = ((OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)CastclassSealed((RuntimeObject*)L_4, OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onClaimPrize_17), (void*)((OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)CastclassSealed((RuntimeObject*)L_4, OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var)));
		// dailyRewards.onInitialize += OnInitialize;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_5 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_6 = L_5;
		NullCheck(L_6);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_7 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_6)->___onInitialize_9;
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_8 = (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)il2cpp_codegen_object_new(OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		OnInitialize__ctor_mA8EA270D2802394FC2F972039E64DB96E7A122F4(L_8, __this, (intptr_t)((void*)DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_7, L_8, NULL);
		NullCheck(L_6);
		((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_6)->___onInitialize_9 = ((OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)Castclass((RuntimeObject*)L_9, OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_6)->___onInitialize_9), (void*)((OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)Castclass((RuntimeObject*)L_9, OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_OnDisable_m059BB618C5D24F0675AABE794E759DB44D866493 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dailyRewards != null)
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		// dailyRewards.onClaimPrize -= OnClaimPrize;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_2 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_3 = L_2;
		NullCheck(L_3);
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_4 = L_3->___onClaimPrize_17;
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_5 = (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)il2cpp_codegen_object_new(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OnClaimPrize__ctor_m01622E897A574238182A1AD112ED602FE0F68817(L_5, __this, (intptr_t)((void*)DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onClaimPrize_17 = ((OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)CastclassSealed((RuntimeObject*)L_6, OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onClaimPrize_17), (void*)((OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*)CastclassSealed((RuntimeObject*)L_6, OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B_il2cpp_TypeInfo_var)));
		// dailyRewards.onInitialize -= OnInitialize;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_7 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_8 = L_7;
		NullCheck(L_8);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_9 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_8)->___onInitialize_9;
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_10 = (OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)il2cpp_codegen_object_new(OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnInitialize__ctor_mA8EA270D2802394FC2F972039E64DB96E7A122F4(L_10, __this, (intptr_t)((void*)DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		NullCheck(L_8);
		((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_8)->___onInitialize_9 = ((OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)Castclass((RuntimeObject*)L_11, OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)L_8)->___onInitialize_9), (void*)((OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A*)Castclass((RuntimeObject*)L_11, OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A_il2cpp_TypeInfo_var)));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::InitializeDailyRewardsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_InitializeDailyRewardsUI_m62B7882DFA6B9F31A01138D1D39E500B208B64C2 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017_m2508D72F1CA72FA86D05A7D06ECBB1F7E41B5057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1BD46D53F0A0E0B28CD9E3C85D1A7D10E386438C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* V_2 = NULL;
	DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* V_3 = NULL;
	{
		// for (int i = 0; i < dailyRewards.rewards.Count; i++)
		V_0 = 0;
		goto IL_0075;
	}

IL_0004:
	{
		// int day = i + 1;
		int32_t L_0 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// var reward = dailyRewards.GetReward(day);
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_3;
		L_3 = DailyRewards_GetReward_mE953E12B8649897F220D0A1B974CEAE350245BD2(L_1, L_2, NULL);
		V_2 = L_3;
		// GameObject dailyRewardGo = GameObject.Instantiate(dailyRewardPrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___dailyRewardPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// DailyRewardUI dailyRewardUI = dailyRewardGo.GetComponent<DailyRewardUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		NullCheck(L_6);
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_7;
		L_7 = GameObject_GetComponent_TisDailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017_m2508D72F1CA72FA86D05A7D06ECBB1F7E41B5057(L_6, GameObject_GetComponent_TisDailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017_m2508D72F1CA72FA86D05A7D06ECBB1F7E41B5057_RuntimeMethod_var);
		V_3 = L_7;
		// dailyRewardUI.transform.SetParent(dailyRewardsGroup.transform);
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_8 = V_3;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_10 = __this->___dailyRewardsGroup_20;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_11, NULL);
		// dailyRewardGo.transform.localScale = Vector2.one;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_13, NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_14, NULL);
		// dailyRewardUI.day = day;
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_15 = V_3;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		L_15->___day_11 = L_16;
		// dailyRewardUI.reward = reward;
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_17 = V_3;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_18 = V_2;
		NullCheck(L_17);
		L_17->___reward_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___reward_12), (void*)L_18);
		// dailyRewardUI.Initialize();
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_19 = V_3;
		NullCheck(L_19);
		DailyRewardUI_Initialize_mA0FC20485D386C91CCCDB681B95381BFF26B060B(L_19, NULL);
		// dailyRewardsUI.Add(dailyRewardUI);
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_20 = __this->___dailyRewardsUI_23;
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_21 = V_3;
		NullCheck(L_20);
		List_1_Add_m1BD46D53F0A0E0B28CD9E3C85D1A7D10E386438C_inline(L_20, L_21, List_1_Add_m1BD46D53F0A0E0B28CD9E3C85D1A7D10E386438C_RuntimeMethod_var);
		// for (int i = 0; i < dailyRewards.rewards.Count; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0075:
	{
		// for (int i = 0; i < dailyRewards.rewards.Count; i++)
		int32_t L_23 = V_0;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_24 = __this->___dailyRewards_24;
		NullCheck(L_24);
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_25 = L_24->___rewards_12;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_25, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5FFB7C082482EA341F784FCBF06F89536B345925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA6CC4A5DDBAA52287105CA74728849C695D7053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7092348A5F978FB9079BF933F952F40AA60D8BA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m550AE2E1911A50CFCCFEDA7E8FEE719C4F37EE7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16E254D12EACD94894B21D4A84423579FC61F2BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B V_3;
	memset((&V_3), 0, sizeof(V_3));
	DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// dailyRewards.CheckRewards();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(L_0, NULL);
		// bool isRewardAvailableNow = false;
		V_0 = (bool)0;
		// var lastReward = dailyRewards.lastReward;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		int32_t L_2 = L_1->___lastReward_15;
		V_1 = L_2;
		// var availableReward = dailyRewards.availableReward;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_3 = __this->___dailyRewards_24;
		NullCheck(L_3);
		int32_t L_4 = L_3->___availableReward_14;
		V_2 = L_4;
		// foreach (var dailyRewardUI in dailyRewardsUI)
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_5 = __this->___dailyRewardsUI_23;
		NullCheck(L_5);
		Enumerator_tE61F1062E6591DD4CCBD08C9225615608E542A3B L_6;
		L_6 = List_1_GetEnumerator_m550AE2E1911A50CFCCFEDA7E8FEE719C4F37EE7A(L_5, List_1_GetEnumerator_m550AE2E1911A50CFCCFEDA7E8FEE719C4F37EE7A_RuntimeMethod_var);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5FFB7C082482EA341F784FCBF06F89536B345925((&V_3), Enumerator_Dispose_m5FFB7C082482EA341F784FCBF06F89536B345925_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0033_1:
			{
				// foreach (var dailyRewardUI in dailyRewardsUI)
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_7;
				L_7 = Enumerator_get_Current_m7092348A5F978FB9079BF933F952F40AA60D8BA8_inline((&V_3), Enumerator_get_Current_m7092348A5F978FB9079BF933F952F40AA60D8BA8_RuntimeMethod_var);
				V_4 = L_7;
				// var day = dailyRewardUI.day;
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_8 = V_4;
				NullCheck(L_8);
				int32_t L_9 = L_8->___day_11;
				V_5 = L_9;
				// if (day == availableReward)
				int32_t L_10 = V_5;
				int32_t L_11 = V_2;
				if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
				{
					goto IL_0056_1;
				}
			}
			{
				// dailyRewardUI.state = DailyRewardUI.DailyRewardState.UNCLAIMED_AVAILABLE;
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_12 = V_4;
				NullCheck(L_12);
				L_12->___state_13 = 0;
				// isRewardAvailableNow = true;
				V_0 = (bool)1;
				goto IL_006d_1;
			}

IL_0056_1:
			{
				// else if (day <= lastReward)
				int32_t L_13 = V_5;
				int32_t L_14 = V_1;
				if ((((int32_t)L_13) > ((int32_t)L_14)))
				{
					goto IL_0065_1;
				}
			}
			{
				// dailyRewardUI.state = DailyRewardUI.DailyRewardState.CLAIMED;
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_15 = V_4;
				NullCheck(L_15);
				L_15->___state_13 = 2;
				goto IL_006d_1;
			}

IL_0065_1:
			{
				// dailyRewardUI.state = DailyRewardUI.DailyRewardState.UNCLAIMED_UNAVAILABLE;
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_16 = V_4;
				NullCheck(L_16);
				L_16->___state_13 = 1;
			}

IL_006d_1:
			{
				// dailyRewardUI.Refresh();
				DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_17 = V_4;
				NullCheck(L_17);
				DailyRewardUI_Refresh_mD1C827A4AADFFD9679E20E6B90167077BCE5AC56(L_17, NULL);
			}

IL_0074_1:
			{
				// foreach (var dailyRewardUI in dailyRewardsUI)
				bool L_18;
				L_18 = Enumerator_MoveNext_mAA6CC4A5DDBAA52287105CA74728849C695D7053((&V_3), Enumerator_MoveNext_mAA6CC4A5DDBAA52287105CA74728849C695D7053_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// buttonClaim.gameObject.SetActive(isRewardAvailableNow);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___buttonClaim_16;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		bool L_21 = V_0;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, L_21, NULL);
		// buttonClose.gameObject.SetActive(!isRewardAvailableNow);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___buttonClose_17;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		bool L_24 = V_0;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0), NULL);
		// if (isRewardAvailableNow)
		bool L_25 = V_0;
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		// SnapToReward();
		DailyRewardsInterface_SnapToReward_mC5EBB095182E06188431158400F4AA3293B186E5(__this, NULL);
		// textTimeDue.text = "You can claim your reward!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___textTimeDue_19;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral16E254D12EACD94894B21D4A84423579FC61F2BE);
	}

IL_00cb:
	{
		// readyToClaim = isRewardAvailableNow;
		bool L_27 = V_0;
		__this->___readyToClaim_22 = L_27;
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::SnapToReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_SnapToReward_mC5EBB095182E06188431158400F4AA3293B186E5 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E8AEF0DDDBB84B07EC59B14D2772988D76B27CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// Canvas.ForceUpdateCanvases();
		Canvas_ForceUpdateCanvases_m29B1B008CA6C4A3CF623A0A86ACE5C8AA4C2B0C1(NULL);
		// var lastRewardIdx = dailyRewards.lastReward;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lastReward_15;
		V_0 = L_1;
		// if (dailyRewardsUI.Count - 1 < lastRewardIdx)
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_2 = __this->___dailyRewardsUI_23;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_inline(L_2, List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_RuntimeMethod_var);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1))) >= ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		// lastRewardIdx++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// if(lastRewardIdx > dailyRewardsUI.Count - 1)
		int32_t L_6 = V_0;
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_7 = __this->___dailyRewardsUI_23;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_inline(L_7, List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1)))))
		{
			goto IL_0043;
		}
	}
	{
		// lastRewardIdx = dailyRewardsUI.Count - 1;
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_9 = __this->___dailyRewardsUI_23;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_inline(L_9, List_1_get_Count_mA17A93D733860381B25B8B24E88191FF6FC6E7F9_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0043:
	{
		// var target = dailyRewardsUI[lastRewardIdx].GetComponent<RectTransform>();
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_11 = __this->___dailyRewardsUI_23;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* L_13;
		L_13 = List_1_get_Item_m9E8AEF0DDDBB84B07EC59B14D2772988D76B27CA(L_11, L_12, List_1_get_Item_m9E8AEF0DDDBB84B07EC59B14D2772988D76B27CA_RuntimeMethod_var);
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_13, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// var content = scrollRect.content;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_15 = __this->___scrollRect_21;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_15, NULL);
		V_1 = L_16;
		// float normalizePosition = (float)target.GetSiblingIndex() / (float)content.transform.childCount;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_14, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		V_2 = ((float)(((float)L_17)/((float)L_20)));
		// scrollRect.verticalNormalizedPosition = normalizePosition;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_21 = __this->___scrollRect_21;
		float L_22 = V_2;
		NullCheck(L_21);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_Update_mCD1D362AD058C9BF53224CAE85B5A14F0F64531B (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// dailyRewards.TickTime();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(4 /* System.Void NiobiumStudios.DailyRewardsCore`1<NiobiumStudios.DailyRewards>::TickTime() */, L_0);
		// CheckTimeDifference();
		DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5(__this, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::CheckTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_GetFormattedTime_m2A990383B15E8442A1638813712FC4C994BB79DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76D84FD78CF086C6894260CA7EC7D53676DCB2BC);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// if (!readyToClaim)
		bool L_0 = __this->___readyToClaim_22;
		if (L_0)
		{
			goto IL_005d;
		}
	}
	{
		// TimeSpan difference = dailyRewards.GetTimeDifference();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DailyRewards_GetTimeDifference_mE94B121B09688541741D6276A86C5FE34E33CBAF(L_1, NULL);
		V_0 = L_2;
		// if (difference.TotalSeconds <= 0)
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		if ((!(((double)L_3) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		// readyToClaim = true;
		__this->___readyToClaim_22 = (bool)1;
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// SnapToReward();
		DailyRewardsInterface_SnapToReward_mC5EBB095182E06188431158400F4AA3293B186E5(__this, NULL);
		// return;
		return;
	}

IL_003a:
	{
		// string formattedTs = dailyRewards.GetFormattedTime(difference);
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_4 = __this->___dailyRewards_24;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = DailyRewardsCore_1_GetFormattedTime_m2A990383B15E8442A1638813712FC4C994BB79DF(L_4, L_5, DailyRewardsCore_1_GetFormattedTime_m2A990383B15E8442A1638813712FC4C994BB79DF_RuntimeMethod_var);
		V_1 = L_6;
		// textTimeDue.text = string.Format("Come back in {0} for your next reward", formattedTs);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___textTimeDue_19;
		String_t* L_8 = V_1;
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral76D84FD78CF086C6894260CA7EC7D53676DCB2BC, L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::OnClaimPrize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_OnClaimPrize_mBA42EF89D506DCDB8D1EEDADEA30147DCEAAFE2A (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB745259D05427371E22469B761DF7A601BC9D41E);
		s_Il2CppMethodInitialized = true;
	}
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// panelReward.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelReward_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// var reward = dailyRewards.GetReward(day);
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		int32_t L_2 = ___day0;
		NullCheck(L_1);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_3;
		L_3 = DailyRewards_GetReward_mE953E12B8649897F220D0A1B974CEAE350245BD2(L_1, L_2, NULL);
		V_0 = L_3;
		// var unit = reward.unit;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___unit_0;
		V_1 = L_5;
		// var rewardQt = reward.reward;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___reward_1;
		// imageReward.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___imageReward_15;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_9 = V_0;
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = L_9->___sprite_2;
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_10, NULL);
		// if (rewardQt > 0)
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// textReward.text = string.Format("{0} {1}!", reward.reward, unit);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___textReward_13;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___reward_1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = V_1;
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralB745259D05427371E22469B761DF7A601BC9D41E, L_15, L_16, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_17);
		// PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + reward.reward);
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___reward_1;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, ((int32_t)il2cpp_codegen_add(L_18, L_20)), NULL);
		// MenuPanel.Instance.UpdateText();
		MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7* L_21 = ((MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7_StaticFields*)il2cpp_codegen_static_fields_for(MenuPanel_t83688E289BE14E2D715F71FCBDBBC51871B6ADE7_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_21);
		MenuPanel_UpdateText_mADB2542D59CCE42E03E896982177748F242122CB(L_21, NULL);
		return;
	}

IL_0081:
	{
		// textReward.text = string.Format("You got {0}!", unit);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___textReward_13;
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral85331D822D70F7F861D4A396B0A538667BA1427E, L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::OnInitialize(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_OnInitialize_m564D1F24E9CF50E04C04A32FBEE651A20BD0B5B2 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_1 = NULL;
	{
		// if (!error)
		bool L_0 = ___error0;
		if (L_0)
		{
			goto IL_004c;
		}
	}
	{
		// var showWhenNotAvailable = dailyRewards.keepOpen;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		bool L_2 = L_1->___keepOpen_16;
		V_0 = L_2;
		// var isRewardAvailable = dailyRewards.availableReward > 0;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_3 = __this->___dailyRewards_24;
		NullCheck(L_3);
		int32_t L_4 = L_3->___availableReward_14;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// canvas.gameObject.SetActive(showWhenNotAvailable || (!showWhenNotAvailable && isRewardAvailable));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = __this->___canvas_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7 = V_0;
		G_B2_0 = L_6;
		if (L_7)
		{
			G_B3_0 = L_6;
			goto IL_003a;
		}
	}
	{
		bool L_8 = V_0;
		bool L_9 = V_1;
		G_B4_0 = ((int32_t)(((((int32_t)L_8) == ((int32_t)0))? 1 : 0)&(int32_t)L_9));
		G_B4_1 = G_B2_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_003b:
	{
		NullCheck(G_B4_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B4_1, (bool)G_B4_0, NULL);
		// SnapToReward();
		DailyRewardsInterface_SnapToReward_mC5EBB095182E06188431158400F4AA3293B186E5(__this, NULL);
		// CheckTimeDifference();
		DailyRewardsInterface_CheckTimeDifference_mB75E4B52B1FE0A0DF936D036764984B20D5E50C5(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface__ctor_mCA192B3130AF04AC9169571B13CD8C2B40FF956D (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFE0681C30A3339275BAB0709BA0A0D0B2F284185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<DailyRewardUI> dailyRewardsUI = new List<DailyRewardUI>();
		List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609* L_0 = (List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609*)il2cpp_codegen_object_new(List_1_tB1933EE6BC8D6055C3C9967CFA5734E2658C9609_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFE0681C30A3339275BAB0709BA0A0D0B2F284185(L_0, List_1__ctor_mFE0681C30A3339275BAB0709BA0A0D0B2F284185_RuntimeMethod_var);
		__this->___dailyRewardsUI_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dailyRewardsUI_23), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_0_m8B81D2244B2D90A990121E5AF026A9E7F2ABB274 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// dailyRewards.ClaimPrize();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		DailyRewards_ClaimPrize_mA67D9A7178739327226FA8D23EA7B5AEEF02E968(L_0, NULL);
		// readyToClaim = false;
		__this->___readyToClaim_22 = (bool)0;
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_1_m71B505BD713A58980D8549FBF828C89A5DFAB667 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// var keepOpen = dailyRewards.keepOpen;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		bool L_1 = L_0->___keepOpen_16;
		V_0 = L_1;
		// panelReward.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___panelReward_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// canvas.gameObject.SetActive(keepOpen);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = V_0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_2_mC5B2FA6A8D7A4F5CABC504BADA037F84C0780735 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// canvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_3_mBF09D6CBA52AE247F6B4DC2D6E307D6A4919A92D (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// canvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_4_m555D2DDC73D2ED50F4923F49541953588A685105 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// dailyRewards.debugTime = dailyRewards.debugTime.Add(new TimeSpan(1, 0, 0, 0));
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_2 = (&L_1->___debugTime_22);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		memset((&L_3), 0, sizeof(L_3));
		TimeSpan__ctor_m513B2AFB80D3350E59FBD23F53B2F1322175C24D((&L_3), 1, 0, 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19(L_2, L_3, NULL);
		NullCheck(L_0);
		L_0->___debugTime_22 = L_4;
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_5_mA663819E652EB22F5E4E71947AE0568CEC56859E (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	{
		// dailyRewards.debugTime = dailyRewards.debugTime.Add(new TimeSpan(1, 0, 0));
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_2 = (&L_1->___debugTime_22);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		memset((&L_3), 0, sizeof(L_3));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_3), 1, 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19(L_2, L_3, NULL);
		NullCheck(L_0);
		L_0->___debugTime_22 = L_4;
		// UpdateUI();
		DailyRewardsInterface_UpdateUI_m9F4E5785357725ADFA7CC12901EE1AA2FC57BED4(__this, NULL);
		// });
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface::<Start>b__22_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardsInterface_U3CStartU3Eb__22_6_m5E3DD8B6F6C6C479958A41BD8D92A38834600863 (DailyRewardsInterface_t96DA38EAC493A1A831706EDE90011031C19D8CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dailyRewards.Reset();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_0 = __this->___dailyRewards_24;
		NullCheck(L_0);
		DailyRewards_Reset_m07207FCE233ADD81D273DCDD7EFE36AC87A5B072(L_0, NULL);
		// dailyRewards.debugTime = new TimeSpan();
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_1 = __this->___dailyRewards_24;
		NullCheck(L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_2 = (&L_1->___debugTime_22);
		il2cpp_codegen_initobj(L_2, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// dailyRewards.lastRewardTime = System.DateTime.MinValue;
		DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* L_3 = __this->___dailyRewards_24;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		NullCheck(L_3);
		L_3->___lastRewardTime_13 = L_4;
		// readyToClaim = false;
		__this->___readyToClaim_22 = (bool)0;
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
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC3144884AF3A76511689FABD6AB4E3E2D2C602AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* L_0 = (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B*)il2cpp_codegen_object_new(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F(L_0, NULL);
		((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0021446FD55506F27A3AAFF441D74FA40B409A5F (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardsInterface/<>c::<Start>b__22_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_7_m8FBCDB8A61CE13E967A76B1AD060F6B382A24331 (U3CU3Ec_t08EC828F1C7CFEA0008980079ADB700611357D4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(Application.loadedLevelName);
		String_t* L_0;
		L_0 = Application_get_loadedLevelName_m2E1ADDD7E0429B1B66AD8F8A2C601BF3AB3DED27(NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
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
// System.Void NiobiumStudios.DailyRewardUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Awake_m2949A2C67F02471A0D5C9EDDCA3255C927B2B369 (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	{
		// colorUnclaimed = imageReward.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imageReward_8;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___colorUnclaimed_10 = L_1;
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Initialize_mA0FC20485D386C91CCCDB681B95381BFF26B060B (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textDay.text = string.Format("Day {0}", day.ToString());
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textDay_5;
		int32_t* L_1 = (&__this->___day_11);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if (reward.reward > 0)
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_4 = __this->___reward_12;
		NullCheck(L_4);
		int32_t L_5 = L_4->___reward_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// if (showRewardName)
		bool L_6 = __this->___showRewardName_4;
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// textReward.text = reward.reward + " " + reward.unit;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_8 = __this->___reward_12;
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___reward_1);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_11 = __this->___reward_12;
		NullCheck(L_11);
		String_t* L_12 = L_11->___unit_0;
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_12, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		goto IL_00a0;
	}

IL_0068:
	{
		// textReward.text = reward.reward.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_15 = __this->___reward_12;
		NullCheck(L_15);
		int32_t* L_16 = (&L_15->___reward_1);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		goto IL_00a0;
	}

IL_0085:
	{
		// textReward.text = reward.unit.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___textReward_6;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_19 = __this->___reward_12;
		NullCheck(L_19);
		String_t* L_20 = L_19->___unit_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_00a0:
	{
		// imageReward.sprite = reward.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___imageReward_8;
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_23 = __this->___reward_12;
		NullCheck(L_23);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = L_23->___sprite_2;
		NullCheck(L_22);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_22, L_24, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI_Refresh_mD1C827A4AADFFD9679E20E6B90167077BCE5AC56 (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->___state_13;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// imageRewardBackground.color = colorClaim;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___colorClaim_9;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// break;
		return;
	}

IL_002c:
	{
		// imageRewardBackground.color = colorUnclaimed;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___colorUnclaimed_10;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// break;
		return;
	}

IL_003e:
	{
		// imageRewardBackground.color = colorClaim;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___imageRewardBackground_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___colorClaim_9;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewardUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewardUI__ctor_m91BC78CB6385FE1E49912D90582E45C4F9EE98CC (DailyRewardUI_t48FA1E7E606D358DC04D681D915A1C1AB1342017* __this, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.DailyRewards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_Start_m5FC623C6166D78385B8298E982E74FDEDBB09D98 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	{
		// InitializeTimer();
		DailyRewards_InitializeTimer_mE657EAA516F6EF3A30D3B9716ABF985AC537B066(__this, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::InitializeTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_InitializeTimer_mE657EAA516F6EF3A30D3B9716ABF985AC537B066 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_InitializeDate_m10B1ED0BD55685257F36FAE9DA2A619D629B43DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InitializeDate();
		DailyRewardsCore_1_InitializeDate_m10B1ED0BD55685257F36FAE9DA2A619D629B43DC(__this, DailyRewardsCore_1_InitializeDate_m10B1ED0BD55685257F36FAE9DA2A619D629B43DC_RuntimeMethod_var);
		// if (base.isErrorConnect)
		bool L_0 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___isErrorConnect_6;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (onInitialize != null)
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___onInitialize_9;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// onInitialize(true, base.errorMessage);
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_2 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___onInitialize_9;
		String_t* L_3 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___errorMessage_5;
		NullCheck(L_2);
		OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline(L_2, (bool)1, L_3, NULL);
		return;
	}

IL_0029:
	{
		// LoadDebugTime();
		DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508(__this, NULL);
		// CheckRewards();
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(__this, NULL);
		// if(onInitialize!=null)
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_4 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___onInitialize_9;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// onInitialize();
		OnInitialize_tA005D97BBAABEFBC636C75185B1B4F9B5FFC293A* L_5 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___onInitialize_9;
		NullCheck(L_5);
		OnInitialize_Invoke_mCA580609B445A85F8060391906B32EBD64C6E465_inline(L_5, (bool)0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_OnApplicationPause_m4077CF5B1E591B98BAA2E23CDFC02B5914D44A04 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnApplicationPause(pauseStatus);
		bool L_0 = ___pauseStatus0;
		DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1(__this, L_0, DailyRewardsCore_1_OnApplicationPause_mE41CEF9AB74C5F76EC6CA176792549DB2E784BE1_RuntimeMethod_var);
		// CheckRewards();
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(__this, NULL);
		// }
		return;
	}
}
// System.TimeSpan NiobiumStudios.DailyRewards::GetTimeDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DailyRewards_GetTimeDifference_mE94B121B09688541741D6276A86C5FE34E33CBAF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan difference = (lastRewardTime - now);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___lastRewardTime_13;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_7;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_0, L_1, NULL);
		V_0 = L_2;
		// difference = difference.Subtract(debugTime);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = __this->___debugTime_22;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpan_Subtract_m6B780A4AADD60F53CC449DDC2171BBCD09381559((&V_0), L_3, NULL);
		V_0 = L_4;
		// return difference.Add(new TimeSpan(0, 24, 0, 0));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		memset((&L_5), 0, sizeof(L_5));
		TimeSpan__ctor_m513B2AFB80D3350E59FBD23F53B2F1322175C24D((&L_5), 0, ((int32_t)24), 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = TimeSpan_Add_m2225A425832F851825CDA4A74903841DDB62AA19((&V_0), L_5, NULL);
		return L_6;
	}
}
// System.Void NiobiumStudios.DailyRewards::LoadDebugTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_LoadDebugTime_mC66149E1640655BC946F566BE5EEAECB2F8BA508 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int debugHours = PlayerPrefs.GetInt(GetDebugTimeKey(), 0);
		String_t* L_0;
		L_0 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		V_0 = L_1;
		// debugTime = new TimeSpan(debugHours, 0, 0);
		int32_t L_2 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		memset((&L_3), 0, sizeof(L_3));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_3), L_2, 0, 0, /*hidden argument*/NULL);
		__this->___debugTime_22 = L_3;
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::CheckRewards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		// string lastClaimedTimeStr = PlayerPrefs.GetString(GetLastRewardTimeKey());
		String_t* L_0;
		L_0 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_0, NULL);
		V_0 = L_1;
		// lastReward = PlayerPrefs.GetInt(GetLastRewardKey());
		String_t* L_2;
		L_2 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		__this->___lastReward_15 = L_3;
		// if (!string.IsNullOrEmpty(lastClaimedTimeStr))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0117;
		}
	}
	{
		// lastRewardTime = DateTime.ParseExact(lastClaimedTimeStr, FMT, CultureInfo.InvariantCulture);
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_ParseExact_m19BB81A11B239C7CE5781ACF7B854A8A7F8BE9D3(L_6, _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, L_7, NULL);
		__this->___lastRewardTime_13 = L_8;
		// DateTime advancedTime = now.AddHours(debugTime.TotalHours);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_9 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_7);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = (&__this->___debugTime_22);
		double L_11;
		L_11 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_10, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_9, L_11, NULL);
		// TimeSpan diff = advancedTime - lastRewardTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = __this->___lastRewardTime_13;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14;
		L_14 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_12, L_13, NULL);
		V_1 = L_14;
		// Debug.Log(" Last claim was " + (long)diff.TotalHours + " hours ago.");
		double L_15;
		L_15 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_1), NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int64_t>(L_15);
		String_t* L_16;
		L_16 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_3), NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6F24A4A181A2A5948431E988807BD16EA8ABA004, L_16, _stringLiteralD0696F97F364A79EC82FEF41B1634BAC053D8B05, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_17, NULL);
		// int days = (int)(Math.Abs(diff.TotalHours) / 24);
		double L_18;
		L_18 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = fabs(L_18);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)(L_19/(24.0))));
		// if (days == 0)
		int32_t L_20 = V_2;
		if (L_20)
		{
			goto IL_00a7;
		}
	}
	{
		// availableReward = 0;
		__this->___availableReward_14 = 0;
		// return;
		return;
	}

IL_00a7:
	{
		// if (days >= 1 && days < 2)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)2)))
		{
			goto IL_00fa;
		}
	}
	{
		// if (lastReward == rewards.Count)
		int32_t L_23 = __this->___lastReward_15;
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_24 = __this->___rewards_12;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_inline(L_24, List_1_get_Count_m443E21FB9F1F00E76A2B032C8AFE97BB64A82965_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_00d1;
		}
	}
	{
		// availableReward = 1;
		__this->___availableReward_14 = 1;
		// lastReward = 0;
		__this->___lastReward_15 = 0;
		// return;
		return;
	}

IL_00d1:
	{
		// availableReward = lastReward + 1;
		int32_t L_26 = __this->___lastReward_15;
		__this->___availableReward_14 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		// Debug.Log(" Player can claim prize " + availableReward);
		int32_t* L_27 = (&__this->___availableReward_14);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF406ACD9511CE7F7095274B088383714079A5DA3, L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_29, NULL);
		// return;
		return;
	}

IL_00fa:
	{
		// if (days >= 2)
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		// availableReward = 1;
		__this->___availableReward_14 = 1;
		// lastReward = 0;
		__this->___lastReward_15 = 0;
		// Debug.Log(" Prize reset ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0C669044B30EF635826C1065768EA6C806EF02B3, NULL);
		return;
	}

IL_0117:
	{
		// availableReward = 1;
		__this->___availableReward_14 = 1;
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::ClaimPrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_ClaimPrize_mA67D9A7178739327226FA8D23EA7B5AEEF02E968 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (availableReward > 0)
		int32_t L_0 = __this->___availableReward_14;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		// if (onClaimPrize != null)
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_1 = __this->___onClaimPrize_17;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// onClaimPrize(availableReward);
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* L_2 = __this->___onClaimPrize_17;
		int32_t L_3 = __this->___availableReward_14;
		NullCheck(L_2);
		OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline(L_2, L_3, NULL);
	}

IL_0025:
	{
		// Debug.Log(" Reward [" + rewards[availableReward - 1] + "] Claimed!");
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_4 = __this->___rewards_12;
		int32_t L_5 = __this->___availableReward_14;
		NullCheck(L_4);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_6;
		L_6 = List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = _stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = _stringLiteral4730A68FCCADE7ADA3F812E5A06FE86725860E89;
			goto IL_0044;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0049;
	}

IL_0044:
	{
		NullCheck(G_B5_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_0049:
	{
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B6_1, G_B6_0, _stringLiteral898CF9C7C64BC5B720A9998FC3C66E77E5574B99, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// PlayerPrefs.SetInt(GetLastRewardKey(), availableReward);
		String_t* L_10;
		L_10 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		int32_t L_11 = __this->___availableReward_14;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_10, L_11, NULL);
		// string lastClaimedStr = now.AddHours(debugTime.TotalHours).ToString(FMT);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_12 = (&((DailyRewardsCore_1_tFE9155C70409E32A2AACAF3D1FD1ACBC06401D7E*)__this)->___now_7);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_13 = (&__this->___debugTime_22);
		double L_14;
		L_14 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_13, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_12, L_14, NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		V_0 = L_16;
		// PlayerPrefs.SetString(GetLastRewardTimeKey(), lastClaimedStr);
		String_t* L_17;
		L_17 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		String_t* L_18 = V_0;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_17, L_18, NULL);
		// PlayerPrefs.SetInt(GetDebugTimeKey(), (int)debugTime.TotalHours);
		String_t* L_19;
		L_19 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = (&__this->___debugTime_22);
		double L_21;
		L_21 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883(L_20, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_19, il2cpp_codegen_cast_double_to_int<int32_t>(L_21), NULL);
		goto IL_00c4;
	}

IL_00b2:
	{
		// else if (availableReward == 0)
		int32_t L_22 = __this->___availableReward_14;
		if (L_22)
		{
			goto IL_00c4;
		}
	}
	{
		// Debug.LogError("Error! The player is trying to claim the same reward twice.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA392E67288F80E71EACDEBB76A981270AC408CA4, NULL);
	}

IL_00c4:
	{
		// CheckRewards();
		DailyRewards_CheckRewards_mB4DAB07E2CB2AEE9284B35F21AC7F5AB87DC7FBF(__this, NULL);
		// }
		return;
	}
}
// System.String NiobiumStudios.DailyRewards::GetLastRewardKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6178084923226537EED3751DE48D1B65584FEB7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LAST_REWARD;
		return _stringLiteral6178084923226537EED3751DE48D1B65584FEB7A;
	}
}
// System.String NiobiumStudios.DailyRewards::GetLastRewardTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return LAST_REWARD_TIME;
		return _stringLiteral4CADB05867593AF2AF08F6696A4EE3D9B0101FAA;
	}
}
// System.String NiobiumStudios.DailyRewards::GetDebugTimeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DEBUG_TIME;
		return _stringLiteralE8A0752ACB63533CC45B4C3EB31AAEA98187B671;
	}
}
// NiobiumStudios.Reward NiobiumStudios.DailyRewards::GetReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* DailyRewards_GetReward_mE953E12B8649897F220D0A1B974CEAE350245BD2 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rewards[day - 1];
		List_1_tCFB706AC3AA7AA9033E72EE6F06455C60A2AA656* L_0 = __this->___rewards_12;
		int32_t L_1 = ___day0;
		NullCheck(L_0);
		Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* L_2;
		L_2 = List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), List_1_get_Item_m3606690BD1599F5B08E4E8BABB2480D941BE14BD_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void NiobiumStudios.DailyRewards::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards_Reset_m07207FCE233ADD81D273DCDD7EFE36AC87A5B072 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteKey(GetLastRewardKey());
		String_t* L_0;
		L_0 = DailyRewards_GetLastRewardKey_m62C336DC6DA3D7ADCC5819D8D79621E1FCEA4DA5(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_0, NULL);
		// PlayerPrefs.DeleteKey(GetLastRewardTimeKey());
		String_t* L_1;
		L_1 = DailyRewards_GetLastRewardTimeKey_mE61CE07064365A751732FBCDF8A14F47D610BA9B(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_1, NULL);
		// PlayerPrefs.DeleteKey(GetDebugTimeKey());
		String_t* L_2;
		L_2 = DailyRewards_GetDebugTimeKey_mB778850819AEAC9940254D44DBB73AF760FC87AF(__this, NULL);
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(L_2, NULL);
		// }
		return;
	}
}
// System.Void NiobiumStudios.DailyRewards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DailyRewards__ctor_m25495537C0BF03AC3345525A8E0C44BA4E09ACC0 (DailyRewards_t7FE520F9DBCA47ED897504A02FCD48B90FAFE480* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool keepOpen = true;        // Keep open even when there are no Rewards available?
		__this->___keepOpen_16 = (bool)1;
		DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9(__this, DailyRewardsCore_1__ctor_m1E3EC11764253FBCF2416341059E8BE08D69E9A9_RuntimeMethod_var);
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
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Multicast(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* currentDelegate = reinterpret_cast<OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Open(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___day0, method);
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_OpenStaticInvoker(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___day0);
}
void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_ClosedStaticInvoker(OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___day0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___day0);

}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize__ctor_m01622E897A574238182A1AD112ED602FE0F68817 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_Multicast;
}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NiobiumStudios.DailyRewards/OnClaimPrize::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClaimPrize_BeginInvoke_m2B422B13717761ADF273098905BA8B8A8BB3F8E0 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___day0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NiobiumStudios.DailyRewards/OnClaimPrize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClaimPrize_EndInvoke_mC21B8CBC2871D58E7FF8FF670C697A9F0DE224B8 (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void NiobiumStudios.Reward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reward__ctor_mA25B708489732A8A8CD4BCFA469E0789ABCDDDB2 (Reward_t99B7CCD10631A9B88436951B2D8C6FB3B133457D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline (PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* __this, const RuntimeMethod* method) 
{
	{
		// public Product purchasedProduct { get; private set; }
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_0 = __this->___U3CpurchasedProductU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) 
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_0 = __this->___U3CdefinitionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline (ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnClaimPrize_Invoke_m374A6CB10AC1802812535DA2ADF4F2F712C28630_inline (OnClaimPrize_t07F17CC4FB7D31948F35FE21CFC4956248908A4B* __this, int32_t ___day0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___day0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnInitialize_Invoke_mAB0BD6F84CC952ED435B489A6E143F0FA7DBC742_gshared_inline (OnInitialize_t435BD48416A8E1B9B5CDB30812874C1EDBEF4912* __this, bool ___error0, String_t* ___errorMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, ___errorMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
