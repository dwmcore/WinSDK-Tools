// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ModernManagement_InitialProvisioning_2_H
#define WINRT_Windows_ModernManagement_InitialProvisioning_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ModernManagement.InitialProvisioning.1.h"
WINRT_EXPORT namespace winrt::Windows::ModernManagement::InitialProvisioning
{
    struct __declspec(empty_bases) AgentProvisioningProgress : winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress
    {
        AgentProvisioningProgress(std::nullptr_t) noexcept {}
        AgentProvisioningProgress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IAgentProvisioningProgress(ptr, take_ownership_from_abi) {}
        AgentProvisioningProgress();
    };
    struct __declspec(empty_bases) BatchProgress : winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress
    {
        BatchProgress(std::nullptr_t) noexcept {}
        BatchProgress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IBatchProgress(ptr, take_ownership_from_abi) {}
        BatchProgress();
    };
    struct __declspec(empty_bases) ConnectionChangedEventArgs : winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs
    {
        ConnectionChangedEventArgs(std::nullptr_t) noexcept {}
        ConnectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IConnectionChangedEventArgs(ptr, take_ownership_from_abi) {}
        ConnectionChangedEventArgs();
    };
    struct __declspec(empty_bases) ConnectionHeartbeatEventArgs : winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs
    {
        ConnectionHeartbeatEventArgs(std::nullptr_t) noexcept {}
        ConnectionHeartbeatEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IConnectionHeartbeatEventArgs(ptr, take_ownership_from_abi) {}
        ConnectionHeartbeatEventArgs();
    };
    struct __declspec(empty_bases) DeploymentProgressStateChangedEventArgs : winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs
    {
        DeploymentProgressStateChangedEventArgs(std::nullptr_t) noexcept {}
        DeploymentProgressStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IDeploymentProgressStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        DeploymentProgressStateChangedEventArgs();
    };
    struct __declspec(empty_bases) MachineProvisioningProgressReporter : winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter
    {
        MachineProvisioningProgressReporter(std::nullptr_t) noexcept {}
        MachineProvisioningProgressReporter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IMachineProvisioningProgressReporter(ptr, take_ownership_from_abi) {}
        explicit MachineProvisioningProgressReporter(winrt::Windows::Foundation::Uri const& launchUri);
    };
    struct __declspec(empty_bases) ProgressUpdateEventArgs : winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs
    {
        ProgressUpdateEventArgs(std::nullptr_t) noexcept {}
        ProgressUpdateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IProgressUpdateEventArgs(ptr, take_ownership_from_abi) {}
        ProgressUpdateEventArgs();
    };
    struct __declspec(empty_bases) ProvisioningConfigurationServiceProviderContext : winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext
    {
        ProvisioningConfigurationServiceProviderContext(std::nullptr_t) noexcept {}
        ProvisioningConfigurationServiceProviderContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IProvisioningConfigurationServiceProviderContext(ptr, take_ownership_from_abi) {}
        ProvisioningConfigurationServiceProviderContext();
    };
    struct __declspec(empty_bases) Workload : winrt::Windows::ModernManagement::InitialProvisioning::IWorkload
    {
        Workload(std::nullptr_t) noexcept {}
        Workload(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ModernManagement::InitialProvisioning::IWorkload(ptr, take_ownership_from_abi) {}
        Workload();
    };
}
#endif
