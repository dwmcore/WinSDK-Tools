// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ModernManagement_InitialProvisioning_0_H
#define WINRT_Windows_ModernManagement_InitialProvisioning_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::ModernManagement::InitialProvisioning
{
    enum class AgentProgressState : int32_t
    {
        NotStarted = 0,
        Initializing = 1,
        InProgress = 2,
        Complete = 3,
        ErrorOccurred = 4,
        RebootRequired = 5,
        Cancelled = 6,
    };
    enum class ProgressConnectionChange : int32_t
    {
        NoChange = 0,
        HostConnectionLost = 1,
        HostReinitialized = 2,
        AgentConnectionLost = 3,
        AgentReinitialized = 4,
        InternetConnectionLost = 5,
        InternetConnectionRestored = 6,
    };
    enum class ProgressState : int32_t
    {
        NoChange = 0,
        UserCancel = 1,
        UserRequestedRetry = 2,
    };
    enum class WorkloadState : int32_t
    {
        NotStarted = 0,
        InProgress = 1,
        Completed = 2,
        Failed = 3,
        Cancelled = 4,
        Skipped = 5,
        Uninstalled = 6,
        RebootRequired = 7,
    };
    struct IAgentProvisioningProgress;
    struct IBatchProgress;
    struct IConnectionChangedEventArgs;
    struct IConnectionHeartbeatEventArgs;
    struct IDeploymentProgressStateChangedEventArgs;
    struct IMachineProvisioningProgressReporter;
    struct IMachineProvisioningProgressReporterFactory;
    struct IProgressUpdateEventArgs;
    struct IProvisioningConfigurationServiceProviderContext;
    struct IWorkload;
    struct AgentProvisioningProgress;
    struct BatchProgress;
    struct ConnectionChangedEventArgs;
    struct ConnectionHeartbeatEventArgs;
    struct DeploymentProgressStateChangedEventArgs;
    struct MachineProvisioningProgressReporter;
    struct ProgressUpdateEventArgs;
    struct ProvisioningConfigurationServiceProviderContext;
    struct Workload;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::Workload>{ using type = class_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::ProgressState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress> = L"Windows.ModernManagement.InitialProvisioning.AgentProvisioningProgress";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress> = L"Windows.ModernManagement.InitialProvisioning.BatchProgress";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> = L"Windows.ModernManagement.InitialProvisioning.ConnectionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> = L"Windows.ModernManagement.InitialProvisioning.ConnectionHeartbeatEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> = L"Windows.ModernManagement.InitialProvisioning.DeploymentProgressStateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter> = L"Windows.ModernManagement.InitialProvisioning.MachineProvisioningProgressReporter";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs> = L"Windows.ModernManagement.InitialProvisioning.ProgressUpdateEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext> = L"Windows.ModernManagement.InitialProvisioning.ProvisioningConfigurationServiceProviderContext";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::Workload> = L"Windows.ModernManagement.InitialProvisioning.Workload";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState> = L"Windows.ModernManagement.InitialProvisioning.AgentProgressState";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange> = L"Windows.ModernManagement.InitialProvisioning.ProgressConnectionChange";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::ProgressState> = L"Windows.ModernManagement.InitialProvisioning.ProgressState";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState> = L"Windows.ModernManagement.InitialProvisioning.WorkloadState";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress> = L"Windows.ModernManagement.InitialProvisioning.IAgentProvisioningProgress";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress> = L"Windows.ModernManagement.InitialProvisioning.IBatchProgress";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs> = L"Windows.ModernManagement.InitialProvisioning.IConnectionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs> = L"Windows.ModernManagement.InitialProvisioning.IConnectionHeartbeatEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs> = L"Windows.ModernManagement.InitialProvisioning.IDeploymentProgressStateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter> = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporter";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory> = L"Windows.ModernManagement.InitialProvisioning.IMachineProvisioningProgressReporterFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs> = L"Windows.ModernManagement.InitialProvisioning.IProgressUpdateEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext> = L"Windows.ModernManagement.InitialProvisioning.IProvisioningConfigurationServiceProviderContext";
    template <> inline constexpr auto& name_v<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload> = L"Windows.ModernManagement.InitialProvisioning.IWorkload";
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress>{ 0xACDE6947,0x0064,0x5F34,{ 0xAA,0x94,0x68,0x77,0x5B,0xFE,0x45,0x9C } }; // ACDE6947-0064-5F34-AA94-68775BFE459C
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress>{ 0x4AE1176D,0xE0FA,0x51A8,{ 0x8A,0x46,0xE7,0x88,0x54,0x65,0xF2,0xE9 } }; // 4AE1176D-E0FA-51A8-8A46-E7885465F2E9
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs>{ 0x054064B9,0xBC73,0x5ED5,{ 0xA4,0x06,0x51,0x09,0x5E,0x32,0xE7,0x13 } }; // 054064B9-BC73-5ED5-A406-51095E32E713
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs>{ 0x26EDF06D,0x8597,0x5AD8,{ 0xAB,0x76,0x64,0xF6,0x17,0xC3,0x08,0xE2 } }; // 26EDF06D-8597-5AD8-AB76-64F617C308E2
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs>{ 0x868B7C8F,0xF295,0x5DA1,{ 0xAB,0x3F,0xE4,0x9F,0x00,0xD2,0x80,0x42 } }; // 868B7C8F-F295-5DA1-AB3F-E49F00D28042
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>{ 0x00692DE5,0x5F16,0x5608,{ 0xA9,0x31,0xEA,0x73,0xBB,0x96,0xAD,0x83 } }; // 00692DE5-5F16-5608-A931-EA73BB96AD83
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory>{ 0x43BC4BAF,0x7308,0x57C8,{ 0x9A,0xF7,0x74,0xF6,0xC2,0x00,0x0E,0x84 } }; // 43BC4BAF-7308-57C8-9AF7-74F6C2000E84
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs>{ 0x9D603965,0xAC6F,0x5BA4,{ 0x97,0x08,0x62,0x7B,0xB9,0x8B,0x23,0xCC } }; // 9D603965-AC6F-5BA4-9708-627BB98B23CC
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext>{ 0x03003737,0xBB93,0x55C7,{ 0xB4,0x33,0x7A,0x69,0x7A,0xB2,0x61,0xDF } }; // 03003737-BB93-55C7-B433-7A697AB261DF
    template <> inline constexpr guid guid_v<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload>{ 0xD39D0D77,0x4AE0,0x5D71,{ 0x9B,0x23,0x4A,0x7B,0x73,0xD4,0x72,0x09 } }; // D39D0D77-4AE0-5D71-9B23-4A7B73D47209
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext; };
    template <> struct default_interface<winrt::Windows::ModernManagement::InitialProvisioning::Workload>{ using type = winrt::Windows::ModernManagement::InitialProvisioning::IWorkload; };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProgressPercentage(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProgressPercentage(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CompletionEtaInSeconds(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletionEtaInSeconds(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProgressText(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProgressText(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProgressSubtext(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProgressSubtext(void*) noexcept = 0;
            virtual int32_t __stdcall get_KnownBatches(void**) noexcept = 0;
            virtual int32_t __stdcall put_KnownBatches(void*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentBatchIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CurrentBatchIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CategoryTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_CategoryTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_BatchWorkloads(void**) noexcept = 0;
            virtual int32_t __stdcall put_BatchWorkloads(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProgressConnectionChange(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProgressConnectionChange(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProgressState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProgressState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContextId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall add_DeploymentProgressStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DeploymentProgressStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionHeartbeat(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionHeartbeat(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ReportProgress(void*) noexcept = 0;
            virtual int32_t __stdcall GetProvisioningConfigurationServiceProviderContextAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_overallState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_overallState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_provisioningStatus(void**) noexcept = 0;
            virtual int32_t __stdcall put_provisioningStatus(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall put_Context(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WorkloadId(void**) noexcept = 0;
            virtual int32_t __stdcall put_WorkloadId(void*) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(void**) noexcept = 0;
            virtual int32_t __stdcall put_ErrorCode(void*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorMessage(void**) noexcept = 0;
            virtual int32_t __stdcall put_ErrorMessage(void*) noexcept = 0;
            virtual int32_t __stdcall get_PossibleCause(void**) noexcept = 0;
            virtual int32_t __stdcall put_PossibleCause(void*) noexcept = 0;
            virtual int32_t __stdcall get_PossibleResolution(void**) noexcept = 0;
            virtual int32_t __stdcall put_PossibleResolution(void*) noexcept = 0;
            virtual int32_t __stdcall get_WorkloadState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WorkloadState(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WorkloadStateDetails(void**) noexcept = 0;
            virtual int32_t __stdcall put_WorkloadStateDetails(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress
    {
        [[nodiscard]] auto ProgressPercentage() const;
        auto ProgressPercentage(int32_t value) const;
        [[nodiscard]] auto CompletionEtaInSeconds() const;
        auto CompletionEtaInSeconds(int32_t value) const;
        [[nodiscard]] auto ProgressText() const;
        auto ProgressText(param::hstring const& value) const;
        [[nodiscard]] auto ProgressSubtext() const;
        auto ProgressSubtext(param::hstring const& value) const;
        [[nodiscard]] auto KnownBatches() const;
        auto KnownBatches(param::vector<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress> const& value) const;
        [[nodiscard]] auto CurrentBatchIndex() const;
        auto CurrentBatchIndex(int32_t value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress
    {
        [[nodiscard]] auto CategoryTitle() const;
        auto CategoryTitle(param::hstring const& value) const;
        [[nodiscard]] auto BatchWorkloads() const;
        auto BatchWorkloads(param::vector<winrt::Windows::ModernManagement::InitialProvisioning::Workload> const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs
    {
        [[nodiscard]] auto ProgressConnectionChange() const;
        auto ProgressConnectionChange(winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange const& value) const;
        [[nodiscard]] auto Context() const;
        auto Context(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs
    {
        [[nodiscard]] auto Context() const;
        auto Context(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs
    {
        [[nodiscard]] auto ProgressState() const;
        auto ProgressState(winrt::Windows::ModernManagement::InitialProvisioning::ProgressState const& value) const;
        [[nodiscard]] auto Context() const;
        auto Context(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter
    {
        [[nodiscard]] auto ContextId() const;
        auto DeploymentProgressStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> const& handler) const;
        using DeploymentProgressStateChanged_revoker = impl::event_revoker<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter, &impl::abi_t<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>::remove_DeploymentProgressStateChanged>;
        [[nodiscard]] DeploymentProgressStateChanged_revoker DeploymentProgressStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> const& handler) const;
        auto DeploymentProgressStateChanged(winrt::event_token const& token) const noexcept;
        auto ConnectionHeartbeat(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> const& handler) const;
        using ConnectionHeartbeat_revoker = impl::event_revoker<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter, &impl::abi_t<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>::remove_ConnectionHeartbeat>;
        [[nodiscard]] ConnectionHeartbeat_revoker ConnectionHeartbeat(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> const& handler) const;
        auto ConnectionHeartbeat(winrt::event_token const& token) const noexcept;
        auto ConnectionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> const& handler) const;
        using ConnectionChanged_revoker = impl::event_revoker<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter, &impl::abi_t<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>::remove_ConnectionChanged>;
        [[nodiscard]] ConnectionChanged_revoker ConnectionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> const& handler) const;
        auto ConnectionChanged(winrt::event_token const& token) const noexcept;
        auto ReportProgress(winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs const& progressUpdateEventArgs) const;
        auto GetProvisioningConfigurationServiceProviderContextAsync() const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporterFactory
    {
        auto CreateInstance(winrt::Windows::Foundation::Uri const& launchUri) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs
    {
        [[nodiscard]] auto overallState() const;
        auto overallState(winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState const& value) const;
        [[nodiscard]] auto provisioningStatus() const;
        auto provisioningStatus(winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext
    {
        [[nodiscard]] auto Context() const;
        auto Context(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext<D>;
    };
    template <typename D>
    struct consume_Windows_ModernManagement_InitialProvisioning_IWorkload
    {
        [[nodiscard]] auto WorkloadId() const;
        auto WorkloadId(param::hstring const& value) const;
        [[nodiscard]] auto FriendlyName() const;
        auto FriendlyName(param::hstring const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto EndTime() const;
        auto EndTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto ErrorCode() const;
        auto ErrorCode(winrt::Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto ErrorMessage() const;
        auto ErrorMessage(param::hstring const& value) const;
        [[nodiscard]] auto PossibleCause() const;
        auto PossibleCause(param::hstring const& value) const;
        [[nodiscard]] auto PossibleResolution() const;
        auto PossibleResolution(param::hstring const& value) const;
        [[nodiscard]] auto WorkloadState() const;
        auto WorkloadState(winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState const& value) const;
        [[nodiscard]] auto WorkloadStateDetails() const;
        auto WorkloadStateDetails(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload>
    {
        template <typename D> using type = consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>;
    };
}
#endif
