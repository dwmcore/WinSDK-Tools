// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_PackageExtensions_2_H
#define WINRT_Windows_ApplicationModel_PackageExtensions_2_H
#include "winrt/impl/Windows.ApplicationModel.PackageExtensions.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::PackageExtensions
{
    struct __declspec(empty_bases) PackageExtension : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension
    {
        PackageExtension(std::nullptr_t) noexcept {}
        PackageExtension(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageExtensionCatalog : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog
    {
        PackageExtensionCatalog(std::nullptr_t) noexcept {}
        PackageExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog(ptr, take_ownership_from_abi) {}
        static auto Open(param::hstring const& packageExtensionName);
    };
    struct __declspec(empty_bases) PackageExtensionPackageInstalledEventArgs : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs
    {
        PackageExtensionPackageInstalledEventArgs(std::nullptr_t) noexcept {}
        PackageExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageExtensionPackageStatusChangedEventArgs : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs
    {
        PackageExtensionPackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
        PackageExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageExtensionPackageUninstallingEventArgs : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs
    {
        PackageExtensionPackageUninstallingEventArgs(std::nullptr_t) noexcept {}
        PackageExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageExtensionPackageUpdatedEventArgs : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs
    {
        PackageExtensionPackageUpdatedEventArgs(std::nullptr_t) noexcept {}
        PackageExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PackageExtensionPackageUpdatingEventArgs : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs
    {
        PackageExtensionPackageUpdatingEventArgs(std::nullptr_t) noexcept {}
        PackageExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
