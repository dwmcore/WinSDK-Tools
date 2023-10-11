// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_PackageExtensions_1_H
#define WINRT_Windows_ApplicationModel_PackageExtensions_1_H
#include "winrt/impl/Windows.ApplicationModel.PackageExtensions.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::PackageExtensions
{
    struct __declspec(empty_bases) IPackageExtension :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtension>
    {
        IPackageExtension(std::nullptr_t = nullptr) noexcept {}
        IPackageExtension(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionCatalog :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionCatalog>
    {
        IPackageExtensionCatalog(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionCatalogStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionCatalogStatics>
    {
        IPackageExtensionCatalogStatics(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionCatalogStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionPackageInstalledEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionPackageInstalledEventArgs>
    {
        IPackageExtensionPackageInstalledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionPackageStatusChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionPackageStatusChangedEventArgs>
    {
        IPackageExtensionPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionPackageUninstallingEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionPackageUninstallingEventArgs>
    {
        IPackageExtensionPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionPackageUpdatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionPackageUpdatedEventArgs>
    {
        IPackageExtensionPackageUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPackageExtensionPackageUpdatingEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPackageExtensionPackageUpdatingEventArgs>
    {
        IPackageExtensionPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPackageExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
