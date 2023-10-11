// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ModernManagement_InitialProvisioning_1_H
#define WINRT_Windows_ModernManagement_InitialProvisioning_1_H
#include "winrt/impl/Windows.ModernManagement.InitialProvisioning.0.h"
WINRT_EXPORT namespace winrt::Windows::ModernManagement::InitialProvisioning
{
    struct __declspec(empty_bases) IAgentProvisioningProgress :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAgentProvisioningProgress>
    {
        IAgentProvisioningProgress(std::nullptr_t = nullptr) noexcept {}
        IAgentProvisioningProgress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBatchProgress :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBatchProgress>
    {
        IBatchProgress(std::nullptr_t = nullptr) noexcept {}
        IBatchProgress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConnectionChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IConnectionChangedEventArgs>
    {
        IConnectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConnectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IConnectionHeartbeatEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IConnectionHeartbeatEventArgs>
    {
        IConnectionHeartbeatEventArgs(std::nullptr_t = nullptr) noexcept {}
        IConnectionHeartbeatEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeploymentProgressStateChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDeploymentProgressStateChangedEventArgs>
    {
        IDeploymentProgressStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeploymentProgressStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMachineProvisioningProgressReporter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMachineProvisioningProgressReporter>
    {
        IMachineProvisioningProgressReporter(std::nullptr_t = nullptr) noexcept {}
        IMachineProvisioningProgressReporter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMachineProvisioningProgressReporterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMachineProvisioningProgressReporterFactory>
    {
        IMachineProvisioningProgressReporterFactory(std::nullptr_t = nullptr) noexcept {}
        IMachineProvisioningProgressReporterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProgressUpdateEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProgressUpdateEventArgs>
    {
        IProgressUpdateEventArgs(std::nullptr_t = nullptr) noexcept {}
        IProgressUpdateEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProvisioningConfigurationServiceProviderContext :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProvisioningConfigurationServiceProviderContext>
    {
        IProvisioningConfigurationServiceProviderContext(std::nullptr_t = nullptr) noexcept {}
        IProvisioningConfigurationServiceProviderContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkload :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWorkload>
    {
        IWorkload(std::nullptr_t = nullptr) noexcept {}
        IWorkload(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
