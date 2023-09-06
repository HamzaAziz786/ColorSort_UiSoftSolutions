﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1::get_CanPersist()
// 0x00000002 System.Void Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1::Persist(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
// 0x00000003 System.Boolean Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1::TryFetch(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>&)
// 0x00000004 System.Void Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1::Delete()
// 0x00000005 System.Void Unity.Services.Core.Telemetry.Internal.DisabledCachePersister`1::.ctor()
// 0x00000006 System.Boolean Unity.Services.Core.Telemetry.Internal.FileCachePersister::IsAvailableFor(UnityEngine.RuntimePlatform)
extern void FileCachePersister_IsAvailableFor_m5BC086B18C9E668071AF855563C9BFDA210A4690 (void);
// 0x00000007 System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister::GetPersistentDataPathFor(UnityEngine.RuntimePlatform)
extern void FileCachePersister_GetPersistentDataPathFor_m7EE474FE4B197398C5066873A161F0974A56BE9E (void);
// 0x00000008 System.Void Unity.Services.Core.Telemetry.Internal.FileCachePersister::.ctor()
extern void FileCachePersister__ctor_mB9A9B6ACCED500BD7F78D45194011F9198F2A708 (void);
// 0x00000009 System.Void Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::.ctor(System.String,Unity.Services.Core.Internal.CoreDiagnostics)
// 0x0000000A System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::get_FilePath()
// 0x0000000B System.Boolean Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::get_CanPersist()
// 0x0000000C System.Void Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::Persist(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
// 0x0000000D System.Boolean Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::TryFetch(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>&)
// 0x0000000E System.Void Unity.Services.Core.Telemetry.Internal.FileCachePersister`1::Delete()
// 0x0000000F System.Boolean Unity.Services.Core.Telemetry.Internal.ICachePersister`1::get_CanPersist()
// 0x00000010 System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1::Persist(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
// 0x00000011 System.Boolean Unity.Services.Core.Telemetry.Internal.ICachePersister`1::TryFetch(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>&)
// 0x00000012 System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1::Delete()
// 0x00000013 Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.Diagnostics::get_Handler()
extern void Diagnostics_get_Handler_mFA92ACC612B06CC0DC12F58A2F6CD09430F0F7B9 (void);
// 0x00000014 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostics::get_PackageTags()
extern void Diagnostics_get_PackageTags_m9D51DB44CC22531F216C7408EA8065044D0E4BE9 (void);
// 0x00000015 System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Diagnostics__ctor_mB69D23596C239D5078D42548C2EAD203301AC98E (void);
// 0x00000016 System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Diagnostics_SendDiagnostic_mF569E18F0662E882CD37D4BC894BC085CB222D08 (void);
// 0x00000017 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::get_CommonTags()
extern void DiagnosticsFactory_get_CommonTags_mA08B1FB6FCB5AB504EF2ED3C2ED27EF41C442B7C (void);
// 0x00000018 Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::get_Handler()
extern void DiagnosticsFactory_get_Handler_m9FB222AA7FDAC429798F295C9A8AE89BC40BBC76 (void);
// 0x00000019 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void DiagnosticsFactory__ctor_mD328A7AFD1858E30D437C423780E98460C78B84C (void);
// 0x0000001A Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::Create(System.String)
extern void DiagnosticsFactory_Create_mE152323E55C07B54470CB90071252FF5F24A138B (void);
// 0x0000001B System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics::Unity.Services.Core.Telemetry.Internal.IDiagnostics.SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void DisabledDiagnostics_Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic_mFDA31C1CB9B690CD75866D6213F7BF9A359BAC3C (void);
// 0x0000001C System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics::.ctor()
extern void DisabledDiagnostics__ctor_m0F80E600FAE38041EDD9848AB22BCD7B97AE3619 (void);
// 0x0000001D System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.get_CommonTags()
extern void DisabledDiagnosticsFactory_Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags_mC128791A1E678548DE130031F4C9A63222EEA16B (void);
// 0x0000001E Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.Create(System.String)
extern void DisabledDiagnosticsFactory_Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create_m92971BDFE96563E0F354BA39B2489FB6FAA0994F (void);
// 0x0000001F System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::.ctor()
extern void DisabledDiagnosticsFactory__ctor_mD9A490FF6F96679DF26A5983799FF898DA5AA77C (void);
// 0x00000020 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
extern void DiagnosticsHandler__ctor_m34388FAB309CF69EBF0560966DF5C53BA6EC85F9 (void);
// 0x00000021 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::SendPersistedCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
extern void DiagnosticsHandler_SendPersistedCache_m75EC739A331C2975D6E25E458B966FA13A350217 (void);
// 0x00000022 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::OnSendAsyncCompleted(System.Threading.Tasks.Task,System.Object)
extern void DiagnosticsHandler_OnSendAsyncCompleted_m7F927FF2444EE499F10569A96F084D3E14808043 (void);
// 0x00000023 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::ThreadSafeCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
extern void DiagnosticsHandler_ThreadSafeCache_mB06B9ED8FA3E52699216B09823F79F7A6F631752 (void);
// 0x00000024 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::FetchSpecificCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
extern void DiagnosticsHandler_FetchSpecificCommonTags_mFCE408965FC734BD2C1AFB41D9105D19AFB18645 (void);
// 0x00000025 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::SendCachedPayload()
extern void DiagnosticsHandler_SendCachedPayload_m1931EBB20B4287FB00D070173EA35D4D509CCE75 (void);
// 0x00000026 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState::.ctor()
extern void SendState__ctor_mB8B88DE6EEED157A4F2316B78925D3295BAD16DB (void);
// 0x00000027 System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
extern void MetricsHandler__ctor_mA99FCDF9FE29231858F71CBBE47319B1FE748567 (void);
// 0x00000028 System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::SendPersistedCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>)
extern void MetricsHandler_SendPersistedCache_m2B7EBCE94FE28C1AE4FEAF232DBE2E518642D056 (void);
// 0x00000029 System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::FetchSpecificCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
extern void MetricsHandler_FetchSpecificCommonTags_m6156B375125D3A277F843AC77D1B7E548EDE0A7F (void);
// 0x0000002A System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::SendCachedPayload()
extern void MetricsHandler_SendCachedPayload_mD5D0D6C9FDCE3620C4CA330F405A3C2C9C48010B (void);
// 0x0000002B System.Boolean Unity.Services.Core.Telemetry.Internal.MetricsHandler::<SendPersistedCache>g__AreMetricsOutdated|1_0(Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0&)
extern void MetricsHandler_U3CSendPersistedCacheU3Eg__AreMetricsOutdatedU7C1_0_mB5A2589A6176921768AA96F769F3AB52B412FAEC (void);
// 0x0000002C System.String Unity.Services.Core.Telemetry.Internal.TelemetryHandler::FormatOperatingSystemInfo(System.String)
extern void TelemetryHandler_FormatOperatingSystemInfo_m5C95A8FB15B2655D2004F1DDD6E050B662ECBCAC (void);
// 0x0000002D System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler::.ctor()
extern void TelemetryHandler__ctor_mDB78AFAD4EB8C244BE71A1B79383CD6409110D32 (void);
// 0x0000002E Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::get_Config()
// 0x0000002F Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::get_Cache()
// 0x00000030 System.Object Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::get_Lock()
// 0x00000031 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
// 0x00000032 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
// 0x00000033 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::HandlePersistedCache()
// 0x00000034 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::SendPersistedCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
// 0x00000035 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::FetchAllCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
// 0x00000036 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::FetchSpecificCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
// 0x00000037 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::FetchTelemetryCommonTags()
// 0x00000038 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::ScheduleSendingLoop()
// 0x00000039 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::SendCachedPayload()
// 0x0000003A System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::SchedulePersistenceLoop()
// 0x0000003B System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::PersistCache()
// 0x0000003C System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::Register(TEvent)
// 0x0000003D System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<ScheduleSendingLoop>g__SendingLoop|21_0()
// 0x0000003E System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<SchedulePersistenceLoop>g__PersistenceLoop|23_0()
// 0x0000003F System.Boolean Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<Register>g__IsCacheFull|25_0()
// 0x00000040 System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric_m0FF24497F094E3715E22B3CD54F4375C4587E6DB (void);
// 0x00000041 System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_m3BC8CBF924E4A55F812DAD8DDA20795B39C12600 (void);
// 0x00000042 System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_mB40257CB1987903E960F7A27BC4FB83FF6705724 (void);
// 0x00000043 System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::.ctor()
extern void DisabledMetrics__ctor_mED3AD0A9283DB0685B28202DE0ED41849D0FC3CD (void);
// 0x00000044 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::Unity.Services.Core.Telemetry.Internal.IMetricsFactory.get_CommonTags()
extern void DisabledMetricsFactory_Unity_Services_Core_Telemetry_Internal_IMetricsFactory_get_CommonTags_m21C88307D510EAFD5B1615A11E54A2412930288C (void);
// 0x00000045 Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::Unity.Services.Core.Telemetry.Internal.IMetricsFactory.Create(System.String)
extern void DisabledMetricsFactory_Unity_Services_Core_Telemetry_Internal_IMetricsFactory_Create_m837C4BEC6FE6FEB5AC854A3DD19D2E5400A3D284 (void);
// 0x00000046 System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::.ctor()
extern void DisabledMetricsFactory__ctor_m9C673FABB9E5C1B95DC3AAF81ED8A8ADCB35C65E (void);
// 0x00000047 Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.Metrics::get_Handler()
extern void Metrics_get_Handler_mA4E865590FA0068CCF4695CE05936FAF2C73EAC6 (void);
// 0x00000048 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metrics::get_PackageTags()
extern void Metrics_get_PackageTags_m115CC30318BB63CEFCC31F54F4049C4D78DC0472 (void);
// 0x00000049 System.Void Unity.Services.Core.Telemetry.Internal.Metrics::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Metrics__ctor_mB1E2387D26E6A7CF77FA50A7240FC8CBA12F2368 (void);
// 0x0000004A Unity.Services.Core.Telemetry.Internal.Metric Unity.Services.Core.Telemetry.Internal.Metrics::CreateMetric(System.String,System.Double,Unity.Services.Core.Telemetry.Internal.MetricType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Metrics_CreateMetric_m9024DA7257F4F1E8F0F18870FE29E5A6347EE11F (void);
// 0x0000004B System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric_m44A74F915A2C4302A6BF07BE010D16D9793D7BE6 (void);
// 0x0000004C System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_mA7EB1B96D0F7E39A951A68AF58BF6A455E27C9ED (void);
// 0x0000004D System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_m3698244EA67D8736E51D84935E05E2DEB290C6A8 (void);
// 0x0000004E System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsFactory::get_CommonTags()
extern void MetricsFactory_get_CommonTags_m8B0B37504BB0C83E60181E6C273B5710E595B37E (void);
// 0x0000004F Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.MetricsFactory::get_Handler()
extern void MetricsFactory_get_Handler_mEEC4790D8D67895DDDB3AC14E796F260A8B9780A (void);
// 0x00000050 System.Void Unity.Services.Core.Telemetry.Internal.MetricsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void MetricsFactory__ctor_mA1187E29AC3E1EDC2A11A8FB63C1AF0F91C27ED0 (void);
// 0x00000051 Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.MetricsFactory::Create(System.String)
extern void MetricsFactory_Create_m6DCE478FE70DE3D0533A150550812CE038D8CD46 (void);
// 0x00000052 System.Void Unity.Services.Core.Telemetry.Internal.CachedPayload`1::.ctor()
// 0x00000053 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m275FCC10220ACC7D300B67F7B8254E9E57FA41EF (void);
// 0x00000054 System.Int32 Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m1D942807C7387C00A179CD6B5B80E859F42FD22D (void);
// 0x00000055 System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m0356DD93E34EC022453F77FB555AA32FDA4B59B3 (void);
// 0x00000056 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.ITelemetryPayload::get_CommonTags()
// 0x00000057 System.Int32 Unity.Services.Core.Telemetry.Internal.ITelemetryPayload::get_Count()
// 0x00000058 System.Void Unity.Services.Core.Telemetry.Internal.ITelemetryPayload::Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
// 0x00000059 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m3AB485DBD3D5D0909D2CB009B677EA22665489BD (void);
// 0x0000005A System.Int32 Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_mF732FDB3D275692B5204AB3C6F918D7135D0E2D0 (void);
// 0x0000005B System.Void Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m3A2A212B08D337BCEC1A4679361D431B3D728D5C (void);
// 0x0000005C System.Int32 Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_MaxTryCount()
extern void ExponentialBackOffRetryPolicy_get_MaxTryCount_m5D037BB60787C66A7F8CF71E321B8EC528972D01 (void);
// 0x0000005D System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_BaseDelaySeconds()
extern void ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m62C2D27786AB3A7635D09E79C3F92CA472782087 (void);
// 0x0000005E System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::CanRetry(Unity.Services.Core.Telemetry.Internal.WebRequest,System.Int32)
extern void ExponentialBackOffRetryPolicy_CanRetry_mDFBDB80F7CAD2273DD2D3DCE8E01573E8CA862F6 (void);
// 0x0000005F System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::IsTransientError(Unity.Services.Core.Telemetry.Internal.WebRequest)
extern void ExponentialBackOffRetryPolicy_IsTransientError_m4F0FE1907883ABB538279480B8AA0B7BE1E767C2 (void);
// 0x00000060 System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::GetDelayBeforeSendingSeconds(System.Int32)
extern void ExponentialBackOffRetryPolicy_GetDelayBeforeSendingSeconds_mB6231AE06EB810767C8D84425D2DED0CD1CBE1A3 (void);
// 0x00000061 System.Void Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::.ctor()
extern void ExponentialBackOffRetryPolicy__ctor_m7A6BA95E28DC18CBF7F44BE204AF156CB341BF5E (void);
// 0x00000062 System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::<IsTransientError>g__IsServerErrorCode|9_0(System.Int64)
extern void ExponentialBackOffRetryPolicy_U3CIsTransientErrorU3Eg__IsServerErrorCodeU7C9_0_mA835E7E842D4C10AA6427C964FFF769335F8BDA3 (void);
// 0x00000063 System.Void Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>)
// 0x00000064 System.String Unity.Services.Core.Telemetry.Internal.TelemetrySender::get_TargetUrl()
extern void TelemetrySender_get_TargetUrl_mA9EEA023222BEE40368C40D2293C5A2E917C878F (void);
// 0x00000065 System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender::.ctor(System.String,System.String,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy,Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender)
extern void TelemetrySender__ctor_m6D1AC5118C8D4576859151AF9E6B32681CAC0285 (void);
// 0x00000066 System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync(TPayload)
// 0x00000067 System.Byte[] Unity.Services.Core.Telemetry.Internal.TelemetrySender::SerializePayload(TPayload)
// 0x00000068 UnityEngine.Networking.UnityWebRequest Unity.Services.Core.Telemetry.Internal.TelemetrySender::CreateRequest(System.Byte[])
extern void TelemetrySender_CreateRequest_m07F21575D6C83E478EC2CB75F659BCE7C8CB0872 (void);
// 0x00000069 System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::.ctor()
// 0x0000006A System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::<SendAsync>g__SendWebRequest|0()
// 0x0000006B System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender/<>c__DisplayClass7_0`1::<SendAsync>g__OnRequestCompleted|1(Unity.Services.Core.Telemetry.Internal.WebRequest)
// 0x0000006C System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>)
extern void UnityWebRequestSender_SendRequest_mF8D5821CFD78C4898D5A15E6DAE0DF690F76EFF4 (void);
// 0x0000006D Unity.Services.Core.Telemetry.Internal.WebRequest Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::Simplify(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestSender_Simplify_m0200A4356CD9A932EC8710C00C83B46ADF6B1FF1 (void);
// 0x0000006E System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::.ctor()
extern void UnityWebRequestSender__ctor_mFE6414F8B34BA9E4D7C18BA4FB0D1CA0E1E90B9A (void);
// 0x0000006F System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m3AB8EAE3A48780260FCF6D1BAA89331E56ECDA14 (void);
// 0x00000070 System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::<SendRequest>g__OnSendingRequestCompleted|0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mCE70F89C6945A063861F4DA4B5E3E241035FD99D (void);
// 0x00000071 System.Boolean Unity.Services.Core.Telemetry.Internal.WebRequest::get_IsSuccess()
extern void WebRequest_get_IsSuccess_m9E4F85136A009257104579C8342DEC50EB4F15E6 (void);
// 0x00000072 System.Void Unity.Services.Core.Telemetry.Internal.TelemetryConfig::.ctor()
extern void TelemetryConfig__ctor_m36010D53C70E15DC09BA4B8E36AF1666DE4F97A6 (void);
// 0x00000073 System.Boolean Unity.Services.Core.Telemetry.Internal.CacheExtensions::IsEmpty(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
// 0x00000074 System.Void Unity.Services.Core.Telemetry.Internal.CacheExtensions::AddRangeFrom(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
extern void CacheExtensions_AddRangeFrom_m6B846DFF05AC42A33E934A572FB84DE747261ACB (void);
// 0x00000075 System.Void Unity.Services.Core.Telemetry.Internal.CacheExtensions::Add(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
// 0x00000076 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.FactoryUtils::CreatePackageTags(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,System.String)
extern void FactoryUtils_CreatePackageTags_mCEF740AC63DA7D29460845735769D7A89719BF2F (void);
// 0x00000077 Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateMetricsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
extern void TelemetryUtils_CreateMetricsFactory_mEAA959FFA461A3433177F8726F11A4137095900F (void);
// 0x00000078 Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateDiagnosticsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
extern void TelemetryUtils_CreateDiagnosticsFactory_m79748177F58498C619EAF9EAE73095614EDA35B3 (void);
// 0x00000079 System.Boolean Unity.Services.Core.Telemetry.Internal.TelemetryUtils::IsTelemetryDisabled(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void TelemetryUtils_IsTelemetryDisabled_m1E8D67083A68C14971FAB607174EE2528BAF8536 (void);
// 0x0000007A Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister(System.String,UnityEngine.RuntimePlatform)
// 0x0000007B Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateTelemetryConfig(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
extern void TelemetryUtils_CreateTelemetryConfig_m31FD8AE1604B062392ACA78CE67696B47330DEED (void);
// 0x0000007C System.Boolean Unity.Services.Core.Telemetry.Internal.TelemetryUtils::LogTelemetryException(System.Exception,System.Boolean)
extern void TelemetryUtils_LogTelemetryException_m5106FBBA25401AD8189AA7A239384A37A924EE4A (void);
static Il2CppMethodPointer s_methodPointers[124] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FileCachePersister_IsAvailableFor_m5BC086B18C9E668071AF855563C9BFDA210A4690,
	FileCachePersister_GetPersistentDataPathFor_m7EE474FE4B197398C5066873A161F0974A56BE9E,
	FileCachePersister__ctor_mB9A9B6ACCED500BD7F78D45194011F9198F2A708,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Diagnostics_get_Handler_mFA92ACC612B06CC0DC12F58A2F6CD09430F0F7B9,
	Diagnostics_get_PackageTags_m9D51DB44CC22531F216C7408EA8065044D0E4BE9,
	Diagnostics__ctor_mB69D23596C239D5078D42548C2EAD203301AC98E,
	Diagnostics_SendDiagnostic_mF569E18F0662E882CD37D4BC894BC085CB222D08,
	DiagnosticsFactory_get_CommonTags_mA08B1FB6FCB5AB504EF2ED3C2ED27EF41C442B7C,
	DiagnosticsFactory_get_Handler_m9FB222AA7FDAC429798F295C9A8AE89BC40BBC76,
	DiagnosticsFactory__ctor_mD328A7AFD1858E30D437C423780E98460C78B84C,
	DiagnosticsFactory_Create_mE152323E55C07B54470CB90071252FF5F24A138B,
	DisabledDiagnostics_Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic_mFDA31C1CB9B690CD75866D6213F7BF9A359BAC3C,
	DisabledDiagnostics__ctor_m0F80E600FAE38041EDD9848AB22BCD7B97AE3619,
	DisabledDiagnosticsFactory_Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_get_CommonTags_mC128791A1E678548DE130031F4C9A63222EEA16B,
	DisabledDiagnosticsFactory_Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create_m92971BDFE96563E0F354BA39B2489FB6FAA0994F,
	DisabledDiagnosticsFactory__ctor_mD9A490FF6F96679DF26A5983799FF898DA5AA77C,
	DiagnosticsHandler__ctor_m34388FAB309CF69EBF0560966DF5C53BA6EC85F9,
	DiagnosticsHandler_SendPersistedCache_m75EC739A331C2975D6E25E458B966FA13A350217,
	DiagnosticsHandler_OnSendAsyncCompleted_m7F927FF2444EE499F10569A96F084D3E14808043,
	DiagnosticsHandler_ThreadSafeCache_mB06B9ED8FA3E52699216B09823F79F7A6F631752,
	DiagnosticsHandler_FetchSpecificCommonTags_mFCE408965FC734BD2C1AFB41D9105D19AFB18645,
	DiagnosticsHandler_SendCachedPayload_m1931EBB20B4287FB00D070173EA35D4D509CCE75,
	SendState__ctor_mB8B88DE6EEED157A4F2316B78925D3295BAD16DB,
	MetricsHandler__ctor_mA99FCDF9FE29231858F71CBBE47319B1FE748567,
	MetricsHandler_SendPersistedCache_m2B7EBCE94FE28C1AE4FEAF232DBE2E518642D056,
	MetricsHandler_FetchSpecificCommonTags_m6156B375125D3A277F843AC77D1B7E548EDE0A7F,
	MetricsHandler_SendCachedPayload_mD5D0D6C9FDCE3620C4CA330F405A3C2C9C48010B,
	MetricsHandler_U3CSendPersistedCacheU3Eg__AreMetricsOutdatedU7C1_0_mB5A2589A6176921768AA96F769F3AB52B412FAEC,
	TelemetryHandler_FormatOperatingSystemInfo_m5C95A8FB15B2655D2004F1DDD6E050B662ECBCAC,
	TelemetryHandler__ctor_mDB78AFAD4EB8C244BE71A1B79383CD6409110D32,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric_m0FF24497F094E3715E22B3CD54F4375C4587E6DB,
	DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_m3BC8CBF924E4A55F812DAD8DDA20795B39C12600,
	DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_mB40257CB1987903E960F7A27BC4FB83FF6705724,
	DisabledMetrics__ctor_mED3AD0A9283DB0685B28202DE0ED41849D0FC3CD,
	DisabledMetricsFactory_Unity_Services_Core_Telemetry_Internal_IMetricsFactory_get_CommonTags_m21C88307D510EAFD5B1615A11E54A2412930288C,
	DisabledMetricsFactory_Unity_Services_Core_Telemetry_Internal_IMetricsFactory_Create_m837C4BEC6FE6FEB5AC854A3DD19D2E5400A3D284,
	DisabledMetricsFactory__ctor_m9C673FABB9E5C1B95DC3AAF81ED8A8ADCB35C65E,
	Metrics_get_Handler_mA4E865590FA0068CCF4695CE05936FAF2C73EAC6,
	Metrics_get_PackageTags_m115CC30318BB63CEFCC31F54F4049C4D78DC0472,
	Metrics__ctor_mB1E2387D26E6A7CF77FA50A7240FC8CBA12F2368,
	Metrics_CreateMetric_m9024DA7257F4F1E8F0F18870FE29E5A6347EE11F,
	Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric_m44A74F915A2C4302A6BF07BE010D16D9793D7BE6,
	Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_mA7EB1B96D0F7E39A951A68AF58BF6A455E27C9ED,
	Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_m3698244EA67D8736E51D84935E05E2DEB290C6A8,
	MetricsFactory_get_CommonTags_m8B0B37504BB0C83E60181E6C273B5710E595B37E,
	MetricsFactory_get_Handler_mEEC4790D8D67895DDDB3AC14E796F260A8B9780A,
	MetricsFactory__ctor_mA1187E29AC3E1EDC2A11A8FB63C1AF0F91C27ED0,
	MetricsFactory_Create_m6DCE478FE70DE3D0533A150550812CE038D8CD46,
	NULL,
	DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m275FCC10220ACC7D300B67F7B8254E9E57FA41EF,
	DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m1D942807C7387C00A179CD6B5B80E859F42FD22D,
	DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m0356DD93E34EC022453F77FB555AA32FDA4B59B3,
	NULL,
	NULL,
	NULL,
	MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m3AB485DBD3D5D0909D2CB009B677EA22665489BD,
	MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_mF732FDB3D275692B5204AB3C6F918D7135D0E2D0,
	MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m3A2A212B08D337BCEC1A4679361D431B3D728D5C,
	ExponentialBackOffRetryPolicy_get_MaxTryCount_m5D037BB60787C66A7F8CF71E321B8EC528972D01,
	ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m62C2D27786AB3A7635D09E79C3F92CA472782087,
	ExponentialBackOffRetryPolicy_CanRetry_mDFBDB80F7CAD2273DD2D3DCE8E01573E8CA862F6,
	ExponentialBackOffRetryPolicy_IsTransientError_m4F0FE1907883ABB538279480B8AA0B7BE1E767C2,
	ExponentialBackOffRetryPolicy_GetDelayBeforeSendingSeconds_mB6231AE06EB810767C8D84425D2DED0CD1CBE1A3,
	ExponentialBackOffRetryPolicy__ctor_m7A6BA95E28DC18CBF7F44BE204AF156CB341BF5E,
	ExponentialBackOffRetryPolicy_U3CIsTransientErrorU3Eg__IsServerErrorCodeU7C9_0_mA835E7E842D4C10AA6427C964FFF769335F8BDA3,
	NULL,
	TelemetrySender_get_TargetUrl_mA9EEA023222BEE40368C40D2293C5A2E917C878F,
	TelemetrySender__ctor_m6D1AC5118C8D4576859151AF9E6B32681CAC0285,
	NULL,
	NULL,
	TelemetrySender_CreateRequest_m07F21575D6C83E478EC2CB75F659BCE7C8CB0872,
	NULL,
	NULL,
	NULL,
	UnityWebRequestSender_SendRequest_mF8D5821CFD78C4898D5A15E6DAE0DF690F76EFF4,
	UnityWebRequestSender_Simplify_m0200A4356CD9A932EC8710C00C83B46ADF6B1FF1,
	UnityWebRequestSender__ctor_mFE6414F8B34BA9E4D7C18BA4FB0D1CA0E1E90B9A,
	U3CU3Ec__DisplayClass0_0__ctor_m3AB8EAE3A48780260FCF6D1BAA89331E56ECDA14,
	U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mCE70F89C6945A063861F4DA4B5E3E241035FD99D,
	WebRequest_get_IsSuccess_m9E4F85136A009257104579C8342DEC50EB4F15E6,
	TelemetryConfig__ctor_m36010D53C70E15DC09BA4B8E36AF1666DE4F97A6,
	NULL,
	CacheExtensions_AddRangeFrom_m6B846DFF05AC42A33E934A572FB84DE747261ACB,
	NULL,
	FactoryUtils_CreatePackageTags_mCEF740AC63DA7D29460845735769D7A89719BF2F,
	TelemetryUtils_CreateMetricsFactory_mEAA959FFA461A3433177F8726F11A4137095900F,
	TelemetryUtils_CreateDiagnosticsFactory_m79748177F58498C619EAF9EAE73095614EDA35B3,
	TelemetryUtils_IsTelemetryDisabled_m1E8D67083A68C14971FAB607174EE2528BAF8536,
	NULL,
	TelemetryUtils_CreateTelemetryConfig_m31FD8AE1604B062392ACA78CE67696B47330DEED,
	TelemetryUtils_LogTelemetryException_m5106FBBA25401AD8189AA7A239384A37A924EE4A,
};
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m275FCC10220ACC7D300B67F7B8254E9E57FA41EF_AdjustorThunk (void);
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m1D942807C7387C00A179CD6B5B80E859F42FD22D_AdjustorThunk (void);
extern void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m0356DD93E34EC022453F77FB555AA32FDA4B59B3_AdjustorThunk (void);
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m3AB485DBD3D5D0909D2CB009B677EA22665489BD_AdjustorThunk (void);
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_mF732FDB3D275692B5204AB3C6F918D7135D0E2D0_AdjustorThunk (void);
extern void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m3A2A212B08D337BCEC1A4679361D431B3D728D5C_AdjustorThunk (void);
extern void WebRequest_get_IsSuccess_m9E4F85136A009257104579C8342DEC50EB4F15E6_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[7] = 
{
	{ 0x06000053, DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m275FCC10220ACC7D300B67F7B8254E9E57FA41EF_AdjustorThunk },
	{ 0x06000054, DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m1D942807C7387C00A179CD6B5B80E859F42FD22D_AdjustorThunk },
	{ 0x06000055, DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m0356DD93E34EC022453F77FB555AA32FDA4B59B3_AdjustorThunk },
	{ 0x06000059, MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m3AB485DBD3D5D0909D2CB009B677EA22665489BD_AdjustorThunk },
	{ 0x0600005A, MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_mF732FDB3D275692B5204AB3C6F918D7135D0E2D0_AdjustorThunk },
	{ 0x0600005B, MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m3A2A212B08D337BCEC1A4679361D431B3D728D5C_AdjustorThunk },
	{ 0x06000071, WebRequest_get_IsSuccess_m9E4F85136A009257104579C8342DEC50EB4F15E6_AdjustorThunk },
};
static const int32_t s_InvokerIndices[124] = 
{
	0,
	0,
	0,
	0,
	0,
	7559,
	7769,
	5311,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5195,
	5195,
	2518,
	1441,
	5195,
	5195,
	2518,
	3864,
	1441,
	5311,
	5195,
	3864,
	5311,
	525,
	4345,
	7410,
	4345,
	2518,
	5311,
	5311,
	525,
	4345,
	2518,
	5311,
	3043,
	7774,
	5311,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1409,
	1409,
	1409,
	5311,
	5195,
	3864,
	5311,
	5195,
	5195,
	2518,
	801,
	1409,
	1409,
	1409,
	5195,
	5195,
	2518,
	3864,
	0,
	5195,
	5167,
	4345,
	0,
	0,
	0,
	5195,
	5167,
	4345,
	5167,
	5237,
	1665,
	7574,
	3937,
	5311,
	7560,
	0,
	5195,
	525,
	0,
	0,
	3864,
	0,
	0,
	0,
	2518,
	8019,
	5311,
	5311,
	4345,
	5111,
	5311,
	0,
	7410,
	0,
	7188,
	6228,
	6228,
	7562,
	0,
	7774,
	6958,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000004, { 0, 3 } },
	{ 0x0200000F, { 3, 27 } },
	{ 0x0200001F, { 35, 2 } },
	{ 0x06000066, { 30, 4 } },
	{ 0x06000067, { 34, 1 } },
	{ 0x06000073, { 37, 2 } },
	{ 0x06000075, { 39, 2 } },
	{ 0x0600007A, { 41, 4 } },
};
extern const uint32_t g_rgctx_CacheExtensions_IsEmpty_TisTPayload_t8D7DB7F29AE2054087A7566A4E5CD2E24FC1884D_m4E1F97BAB9963D080EB31ACF170A8204EFE3D668;
extern const uint32_t g_rgctx_FileCachePersister_1_get_FilePath_mB576205D01DE329203BC40F0B2C3832C21FBF9A4;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisCachedPayload_1_t7401832D4ECE1A4C45B55C5AE9C031EBA10E8B47_m07D8F538AEA4055BA5194A40FFF023BEE2D832FE;
extern const uint32_t g_rgctx_TelemetryHandler_2_HandlePersistedCache_m98106611E63BD578D303DF71BBA8CE004C2BEE4C;
extern const uint32_t g_rgctx_TelemetryHandler_2_FetchAllCommonTags_m04832FE9E71AE4CE4CD3EE12B68636ECF6ECB3E0;
extern const uint32_t g_rgctx_TelemetryHandler_2_ScheduleSendingLoop_m5C96B37C2D9B1A8A640708696ED6E45D6CFAB6B3;
extern const uint32_t g_rgctx_ICachePersister_1_tF57114C732E5E7633E42DFF9663C573DF3326A2E;
extern const uint32_t g_rgctx_ICachePersister_1_get_CanPersist_m68F26045E4C4E0CED66145604B686CCBC78F31D1;
extern const uint32_t g_rgctx_TelemetryHandler_2_SchedulePersistenceLoop_mE57764A77F63B1543A2B9A1E6A610F5F766E4277;
extern const uint32_t g_rgctx_TelemetryHandler_2_get_Lock_mFB8FCF4991E5CE6BE2386EAE031F2AFE6E51F74F;
extern const uint32_t g_rgctx_ICachePersister_1_TryFetch_mAF609B6FE37F10820071891D8BC9A8894D4F310A;
extern const uint32_t g_rgctx_CacheExtensions_IsEmpty_TisTPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_mC64691C9231EDF8BEA58A29A65DD7B9F5D91FF1A;
extern const uint32_t g_rgctx_ICachePersister_1_Delete_m71D2CD936E76E1757E5AA4B0771D446C7FBBCE0C;
extern const uint32_t g_rgctx_TelemetryHandler_2_t40755BBB1BD990191A19F8D002E83265E1C157EF;
extern const uint32_t g_rgctx_TelemetryHandler_2_SendPersistedCache_mE7E6664455FCCA5C0211FC4BD8BF7E2D6FC8E6CB;
extern const uint32_t g_rgctx_TelemetryHandler_2_FetchTelemetryCommonTags_m5C0DF749021CAAF37D6BC833B6B461E50D8A65D5;
extern const uint32_t g_rgctx_TelemetryHandler_2_FetchSpecificCommonTags_m2AE74AF1154DF53C59281F5A70C78FBA868FF8BB;
extern const uint32_t g_rgctx_TelemetryHandler_2_get_Cache_mF893531C8D7B179F532E27F02DF78072B7FDEC3D;
extern const uint32_t g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A;
extern const Il2CppRGCTXConstrainedData g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_ITelemetryPayload_get_CommonTags_m973B520B6DCD6B6E283D34EB133B58287497062A;
extern const uint32_t g_rgctx_TelemetryHandler_2_U3CScheduleSendingLoopU3Eg__SendingLoopU7C21_0_m56AA185A6F353006FEFAB6C27938D71922E96BB8;
extern const uint32_t g_rgctx_TelemetryHandler_2_get_Config_mD967997EAC631BABEE222867FDABA614F6DEF0A9;
extern const uint32_t g_rgctx_TelemetryHandler_2_U3CSchedulePersistenceLoopU3Eg__PersistenceLoopU7C23_0_m209D43D926359F4B0BA9D4AB09971DFFAF7FBA1A;
extern const Il2CppRGCTXConstrainedData g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_ITelemetryPayload_get_Count_m7AA0721C32B647E8B2A62F68B69843C40FA48BF7;
extern const uint32_t g_rgctx_ICachePersister_1_Persist_m35613EBADA4E6630DE580081D9888EDC3446E28F;
extern const uint32_t g_rgctx_TEvent_t774850600F4CFB074D1C0BA8463587B1E8ABD4C0;
extern const uint32_t g_rgctx_CacheExtensions_Add_TisTPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_mC810E3F99DB2C37D8508CCFC9358D224267131C4;
extern const uint32_t g_rgctx_TelemetryHandler_2_U3CRegisterU3Eg__IsCacheFullU7C25_0_m3DA2F998ED7E736BB938F9E7A1B0DDDA1B45E1EB;
extern const uint32_t g_rgctx_TelemetryHandler_2_SendCachedPayload_mDD7BFD0D45665BAA1048309BE53B21DAAADAB815;
extern const uint32_t g_rgctx_TelemetryHandler_2_PersistCache_mC8EA4D0ABD0F628F2194C37B4D37433CBBB7E7DB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_t818B4C25B0AD217167CB8C75BDF5503C621F03AF;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_m8DCA18EEDC8E56AFA677EB9C3C65E316C7561B59;
extern const uint32_t g_rgctx_TelemetrySender_SerializePayload_TisTPayload_tCA15859A5F34329DB813577E9FF44EA9531A3C80_m7CCBF6AB5D0F664349BE5E55DAD9ACBBD140377F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__SendWebRequestU7C0_m28F294A6F04E07FF93DA92AA6FB4249A3E9B6AAB;
extern const uint32_t g_rgctx_TPayload_tB9EA43459F0A58FE395BC962DFC690A690FD322F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__OnRequestCompletedU7C1_m8E0439D54C1FC85211C59D80C38D7B1219C8305F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__SendWebRequestU7C0_m00B70314DB69E0C5FC9B50C57840165FC49F80C9;
extern const uint32_t g_rgctx_TPayload_t5119CCC7A46B454780A606C3E70BDD243D0DC1F2;
extern const Il2CppRGCTXConstrainedData g_rgctx_TPayload_t5119CCC7A46B454780A606C3E70BDD243D0DC1F2_ITelemetryPayload_get_Count_m7AA0721C32B647E8B2A62F68B69843C40FA48BF7;
extern const uint32_t g_rgctx_TPayload_tEA7497089CAE408355D9107A950A6C508616F3B6;
extern const Il2CppRGCTXConstrainedData g_rgctx_TPayload_tEA7497089CAE408355D9107A950A6C508616F3B6_ITelemetryPayload_Add_mF35C26CB21AD35482E268C743A186A2303A305C0;
extern const uint32_t g_rgctx_DisabledCachePersister_1_tE1278DA7C066EB0725C91013376A0872B0AEB884;
extern const uint32_t g_rgctx_DisabledCachePersister_1__ctor_mD2DE79CA392E2726A86FB45C76249F93CE495077;
extern const uint32_t g_rgctx_FileCachePersister_1_t1AC82254389C1B477C6414E033BD471E04CFCF4B;
extern const uint32_t g_rgctx_FileCachePersister_1__ctor_m48B45C4DDBD8A2C38F15C7966ABB8A56D0A72D1E;
static const Il2CppRGCTXDefinition s_rgctxValues[45] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CacheExtensions_IsEmpty_TisTPayload_t8D7DB7F29AE2054087A7566A4E5CD2E24FC1884D_m4E1F97BAB9963D080EB31ACF170A8204EFE3D668 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FileCachePersister_1_get_FilePath_mB576205D01DE329203BC40F0B2C3832C21FBF9A4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisCachedPayload_1_t7401832D4ECE1A4C45B55C5AE9C031EBA10E8B47_m07D8F538AEA4055BA5194A40FFF023BEE2D832FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_HandlePersistedCache_m98106611E63BD578D303DF71BBA8CE004C2BEE4C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_FetchAllCommonTags_m04832FE9E71AE4CE4CD3EE12B68636ECF6ECB3E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_ScheduleSendingLoop_m5C96B37C2D9B1A8A640708696ED6E45D6CFAB6B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICachePersister_1_tF57114C732E5E7633E42DFF9663C573DF3326A2E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICachePersister_1_get_CanPersist_m68F26045E4C4E0CED66145604B686CCBC78F31D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_SchedulePersistenceLoop_mE57764A77F63B1543A2B9A1E6A610F5F766E4277 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_get_Lock_mFB8FCF4991E5CE6BE2386EAE031F2AFE6E51F74F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICachePersister_1_TryFetch_mAF609B6FE37F10820071891D8BC9A8894D4F310A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CacheExtensions_IsEmpty_TisTPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_mC64691C9231EDF8BEA58A29A65DD7B9F5D91FF1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICachePersister_1_Delete_m71D2CD936E76E1757E5AA4B0771D446C7FBBCE0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TelemetryHandler_2_t40755BBB1BD990191A19F8D002E83265E1C157EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_SendPersistedCache_mE7E6664455FCCA5C0211FC4BD8BF7E2D6FC8E6CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_FetchTelemetryCommonTags_m5C0DF749021CAAF37D6BC833B6B461E50D8A65D5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_FetchSpecificCommonTags_m2AE74AF1154DF53C59281F5A70C78FBA868FF8BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_get_Cache_mF893531C8D7B179F532E27F02DF78072B7FDEC3D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_ITelemetryPayload_get_CommonTags_m973B520B6DCD6B6E283D34EB133B58287497062A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_U3CScheduleSendingLoopU3Eg__SendingLoopU7C21_0_m56AA185A6F353006FEFAB6C27938D71922E96BB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_get_Config_mD967997EAC631BABEE222867FDABA614F6DEF0A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_U3CSchedulePersistenceLoopU3Eg__PersistenceLoopU7C23_0_m209D43D926359F4B0BA9D4AB09971DFFAF7FBA1A },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_ITelemetryPayload_get_Count_m7AA0721C32B647E8B2A62F68B69843C40FA48BF7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICachePersister_1_Persist_m35613EBADA4E6630DE580081D9888EDC3446E28F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvent_t774850600F4CFB074D1C0BA8463587B1E8ABD4C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CacheExtensions_Add_TisTPayload_t7014CC77FB8CBB6791D7A56D8A0C7872BA54F99A_mC810E3F99DB2C37D8508CCFC9358D224267131C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_U3CRegisterU3Eg__IsCacheFullU7C25_0_m3DA2F998ED7E736BB938F9E7A1B0DDDA1B45E1EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_SendCachedPayload_mDD7BFD0D45665BAA1048309BE53B21DAAADAB815 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetryHandler_2_PersistCache_mC8EA4D0ABD0F628F2194C37B4D37433CBBB7E7DB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_t818B4C25B0AD217167CB8C75BDF5503C621F03AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_m8DCA18EEDC8E56AFA677EB9C3C65E316C7561B59 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TelemetrySender_SerializePayload_TisTPayload_tCA15859A5F34329DB813577E9FF44EA9531A3C80_m7CCBF6AB5D0F664349BE5E55DAD9ACBBD140377F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__SendWebRequestU7C0_m28F294A6F04E07FF93DA92AA6FB4249A3E9B6AAB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPayload_tB9EA43459F0A58FE395BC962DFC690A690FD322F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__OnRequestCompletedU7C1_m8E0439D54C1FC85211C59D80C38D7B1219C8305F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CSendAsyncU3Eg__SendWebRequestU7C0_m00B70314DB69E0C5FC9B50C57840165FC49F80C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPayload_t5119CCC7A46B454780A606C3E70BDD243D0DC1F2 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TPayload_t5119CCC7A46B454780A606C3E70BDD243D0DC1F2_ITelemetryPayload_get_Count_m7AA0721C32B647E8B2A62F68B69843C40FA48BF7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPayload_tEA7497089CAE408355D9107A950A6C508616F3B6 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TPayload_tEA7497089CAE408355D9107A950A6C508616F3B6_ITelemetryPayload_Add_mF35C26CB21AD35482E268C743A186A2303A305C0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DisabledCachePersister_1_tE1278DA7C066EB0725C91013376A0872B0AEB884 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DisabledCachePersister_1__ctor_mD2DE79CA392E2726A86FB45C76249F93CE495077 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FileCachePersister_1_t1AC82254389C1B477C6414E033BD471E04CFCF4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FileCachePersister_1__ctor_m48B45C4DDBD8A2C38F15C7966ABB8A56D0A72D1E },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Telemetry_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Telemetry_CodeGenModule = 
{
	"Unity.Services.Core.Telemetry.dll",
	124,
	s_methodPointers,
	7,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	45,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};