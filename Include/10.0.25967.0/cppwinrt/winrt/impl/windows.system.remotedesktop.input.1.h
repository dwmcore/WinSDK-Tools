// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Input_1_H
#define WINRT_Windows_System_RemoteDesktop_Input_1_H
#include "winrt/impl/Windows.System.RemoteDesktop.Input.0.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Input
{
    struct __declspec(empty_bases) IRemoteTextConnection :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteTextConnection>
    {
        IRemoteTextConnection(std::nullptr_t = nullptr) noexcept {}
        IRemoteTextConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRemoteTextConnection2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteTextConnection2>
    {
        IRemoteTextConnection2(std::nullptr_t = nullptr) noexcept {}
        IRemoteTextConnection2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRemoteTextConnectionFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteTextConnectionFactory>
    {
        IRemoteTextConnectionFactory(std::nullptr_t = nullptr) noexcept {}
        IRemoteTextConnectionFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRemoteTextConnectionFactory2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteTextConnectionFactory2>
    {
        IRemoteTextConnectionFactory2(std::nullptr_t = nullptr) noexcept {}
        IRemoteTextConnectionFactory2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
