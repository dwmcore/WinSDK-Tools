// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ModernManagement_InitialProvisioning_H
#define WINRT_Windows_ModernManagement_InitialProvisioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ModernManagement.InitialProvisioning.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressPercentage() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_ProgressPercentage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressPercentage(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_ProgressPercentage(value));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::CompletionEtaInSeconds() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_CompletionEtaInSeconds(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::CompletionEtaInSeconds(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_CompletionEtaInSeconds(value));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_ProgressText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_ProgressText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressSubtext() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_ProgressSubtext(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::ProgressSubtext(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_ProgressSubtext(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::KnownBatches() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_KnownBatches(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::KnownBatches(param::vector<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_KnownBatches(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::CurrentBatchIndex() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->get_CurrentBatchIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IAgentProvisioningProgress<D>::CurrentBatchIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress)->put_CurrentBatchIndex(value));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress<D>::CategoryTitle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress)->get_CategoryTitle(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress<D>::CategoryTitle(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress)->put_CategoryTitle(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress<D>::BatchWorkloads() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress)->get_BatchWorkloads(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::Workload>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IBatchProgress<D>::BatchWorkloads(param::vector<winrt::Windows::ModernManagement::InitialProvisioning::Workload> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress)->put_BatchWorkloads(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs<D>::ProgressConnectionChange() const
    {
        winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs)->get_ProgressConnectionChange(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs<D>::ProgressConnectionChange(winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs)->put_ProgressConnectionChange(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs)->get_Context(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionChangedEventArgs<D>::Context(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs)->put_Context(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs)->get_Context(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IConnectionHeartbeatEventArgs<D>::Context(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs)->put_Context(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs<D>::ProgressState() const
    {
        winrt::Windows::ModernManagement::InitialProvisioning::ProgressState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs)->get_ProgressState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs<D>::ProgressState(winrt::Windows::ModernManagement::InitialProvisioning::ProgressState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs)->put_ProgressState(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs)->get_Context(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IDeploymentProgressStateChangedEventArgs<D>::Context(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs)->put_Context(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ContextId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->get_ContextId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::DeploymentProgressStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->add_DeploymentProgressStateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::DeploymentProgressStateChanged_revoker consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::DeploymentProgressStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, DeploymentProgressStateChanged_revoker>(this, DeploymentProgressStateChanged(handler));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::DeploymentProgressStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->remove_DeploymentProgressStateChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionHeartbeat(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->add_ConnectionHeartbeat(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionHeartbeat_revoker consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionHeartbeat(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ConnectionHeartbeat_revoker>(this, ConnectionHeartbeat(handler));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionHeartbeat(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->remove_ConnectionHeartbeat(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->add_ConnectionChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionChanged_revoker consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ConnectionChanged_revoker>(this, ConnectionChanged(handler));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ConnectionChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->remove_ConnectionChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::ReportProgress(winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs const& progressUpdateEventArgs) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->ReportProgress(*(void**)(&progressUpdateEventArgs)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporter<D>::GetProvisioningConfigurationServiceProviderContextAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter)->GetProvisioningConfigurationServiceProviderContextAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IMachineProvisioningProgressReporterFactory<D>::CreateInstance(winrt::Windows::Foundation::Uri const& launchUri) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory)->CreateInstance(*(void**)(&launchUri), &value));
        return winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs<D>::overallState() const
    {
        winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs)->get_overallState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs<D>::overallState(winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs)->put_overallState(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs<D>::provisioningStatus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs)->get_provisioningStatus(&value));
        return winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProgressUpdateEventArgs<D>::provisioningStatus(winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs)->put_provisioningStatus(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext)->get_Context(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IProvisioningConfigurationServiceProviderContext<D>::Context(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext)->put_Context(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_WorkloadId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_WorkloadId(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::FriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_FriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::StartTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_StartTime(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::StartTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_StartTime(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::EndTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_EndTime(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::EndTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_EndTime(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::ErrorCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_ErrorCode(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::ErrorCode(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_ErrorCode(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::ErrorMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_ErrorMessage(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::ErrorMessage(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_ErrorMessage(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::PossibleCause() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_PossibleCause(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::PossibleCause(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_PossibleCause(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::PossibleResolution() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_PossibleResolution(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::PossibleResolution(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_PossibleResolution(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadState() const
    {
        winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_WorkloadState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadState(winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_WorkloadState(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadStateDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->get_WorkloadStateDetails(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ModernManagement_InitialProvisioning_IWorkload<D>::WorkloadStateDetails(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ModernManagement::InitialProvisioning::IWorkload)->put_WorkloadStateDetails(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress>
    {
        int32_t __stdcall get_ProgressPercentage(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ProgressPercentage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressPercentage(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressPercentage(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CompletionEtaInSeconds(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().CompletionEtaInSeconds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompletionEtaInSeconds(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletionEtaInSeconds(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProgressText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProgressText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProgressSubtext(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProgressSubtext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressSubtext(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressSubtext(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KnownBatches(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress>>(this->shim().KnownBatches());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_KnownBatches(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KnownBatches(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentBatchIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().CurrentBatchIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurrentBatchIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentBatchIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress>
    {
        int32_t __stdcall get_CategoryTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CategoryTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CategoryTitle(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CategoryTitle(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatchWorkloads(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::Workload>>(this->shim().BatchWorkloads());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BatchWorkloads(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BatchWorkloads(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ModernManagement::InitialProvisioning::Workload> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs>
    {
        int32_t __stdcall get_ProgressConnectionChange(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange>(this->shim().ProgressConnectionChange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressConnectionChange(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressConnectionChange(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::ProgressConnectionChange const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Context(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs>
    {
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Context(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs>
    {
        int32_t __stdcall get_ProgressState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::ProgressState>(this->shim().ProgressState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressState(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressState(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::ProgressState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Context(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter>
    {
        int32_t __stdcall get_ContextId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ContextId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_DeploymentProgressStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().DeploymentProgressStateChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DeploymentProgressStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeploymentProgressStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ConnectionHeartbeat(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ConnectionHeartbeat(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ConnectionHeartbeat(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionHeartbeat(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ConnectionChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ConnectionChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter, winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ConnectionChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall ReportProgress(void* progressUpdateEventArgs) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportProgress(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs const*>(&progressUpdateEventArgs));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProvisioningConfigurationServiceProviderContextAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext>>(this->shim().GetProvisioningConfigurationServiceProviderContextAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory>
    {
        int32_t __stdcall CreateInstance(void* launchUri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&launchUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs>
    {
        int32_t __stdcall get_overallState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState>(this->shim().overallState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_overallState(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().overallState(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::AgentProgressState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_provisioningStatus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress>(this->shim().provisioningStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_provisioningStatus(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().provisioningStatus(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext>
    {
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Context(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ModernManagement::InitialProvisioning::IWorkload> : produce_base<D, winrt::Windows::ModernManagement::InitialProvisioning::IWorkload>
    {
        int32_t __stdcall get_WorkloadId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WorkloadId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WorkloadId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WorkloadId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartTime(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().EndTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EndTime(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ErrorCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorCode(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ErrorMessage(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorMessage(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PossibleCause(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PossibleCause());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PossibleCause(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PossibleCause(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PossibleResolution(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PossibleResolution());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PossibleResolution(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PossibleResolution(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WorkloadState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState>(this->shim().WorkloadState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WorkloadState(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WorkloadState(*reinterpret_cast<winrt::Windows::ModernManagement::InitialProvisioning::WorkloadState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WorkloadStateDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WorkloadStateDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WorkloadStateDetails(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WorkloadStateDetails(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ModernManagement::InitialProvisioning
{
    inline AgentProvisioningProgress::AgentProvisioningProgress() :
        AgentProvisioningProgress(impl::call_factory_cast<AgentProvisioningProgress(*)(winrt::Windows::Foundation::IActivationFactory const&), AgentProvisioningProgress>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AgentProvisioningProgress>(); }))
    {
    }
    inline BatchProgress::BatchProgress() :
        BatchProgress(impl::call_factory_cast<BatchProgress(*)(winrt::Windows::Foundation::IActivationFactory const&), BatchProgress>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BatchProgress>(); }))
    {
    }
    inline ConnectionChangedEventArgs::ConnectionChangedEventArgs() :
        ConnectionChangedEventArgs(impl::call_factory_cast<ConnectionChangedEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), ConnectionChangedEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ConnectionChangedEventArgs>(); }))
    {
    }
    inline ConnectionHeartbeatEventArgs::ConnectionHeartbeatEventArgs() :
        ConnectionHeartbeatEventArgs(impl::call_factory_cast<ConnectionHeartbeatEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), ConnectionHeartbeatEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ConnectionHeartbeatEventArgs>(); }))
    {
    }
    inline DeploymentProgressStateChangedEventArgs::DeploymentProgressStateChangedEventArgs() :
        DeploymentProgressStateChangedEventArgs(impl::call_factory_cast<DeploymentProgressStateChangedEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), DeploymentProgressStateChangedEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DeploymentProgressStateChangedEventArgs>(); }))
    {
    }
    inline MachineProvisioningProgressReporter::MachineProvisioningProgressReporter(winrt::Windows::Foundation::Uri const& launchUri) :
        MachineProvisioningProgressReporter(impl::call_factory<MachineProvisioningProgressReporter, IMachineProvisioningProgressReporterFactory>([&](IMachineProvisioningProgressReporterFactory const& f) { return f.CreateInstance(launchUri); }))
    {
    }
    inline ProgressUpdateEventArgs::ProgressUpdateEventArgs() :
        ProgressUpdateEventArgs(impl::call_factory_cast<ProgressUpdateEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), ProgressUpdateEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ProgressUpdateEventArgs>(); }))
    {
    }
    inline ProvisioningConfigurationServiceProviderContext::ProvisioningConfigurationServiceProviderContext() :
        ProvisioningConfigurationServiceProviderContext(impl::call_factory_cast<ProvisioningConfigurationServiceProviderContext(*)(winrt::Windows::Foundation::IActivationFactory const&), ProvisioningConfigurationServiceProviderContext>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ProvisioningConfigurationServiceProviderContext>(); }))
    {
    }
    inline Workload::Workload() :
        Workload(impl::call_factory_cast<Workload(*)(winrt::Windows::Foundation::IActivationFactory const&), Workload>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<Workload>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporterFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::IWorkload> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::AgentProvisioningProgress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::BatchProgress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::ConnectionHeartbeatEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::DeploymentProgressStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::MachineProvisioningProgressReporter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::ProgressUpdateEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::ProvisioningConfigurationServiceProviderContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ModernManagement::InitialProvisioning::Workload> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
