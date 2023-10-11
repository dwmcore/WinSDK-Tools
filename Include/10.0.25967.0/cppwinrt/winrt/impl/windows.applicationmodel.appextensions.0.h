// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_AppExtensions_0_H
#define WINRT_Windows_ApplicationModel_AppExtensions_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
    struct Package;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct IAppExtension;
    struct IAppExtension2;
    struct IAppExtension3;
    struct IAppExtensionCatalog;
    struct IAppExtensionCatalog2;
    struct IAppExtensionCatalogStatics;
    struct IAppExtensionPackageInstalledEventArgs;
    struct IAppExtensionPackageStatusChangedEventArgs;
    struct IAppExtensionPackageUninstallingEventArgs;
    struct IAppExtensionPackageUpdatedEventArgs;
    struct IAppExtensionPackageUpdatingEventArgs;
    struct AppExtension;
    struct AppExtensionCatalog;
    struct AppExtensionPackageInstalledEventArgs;
    struct AppExtensionPackageStatusChangedEventArgs;
    struct AppExtensionPackageUninstallingEventArgs;
    struct AppExtensionPackageUpdatedEventArgs;
    struct AppExtensionPackageUpdatingEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtension> = L"Windows.ApplicationModel.AppExtensions.AppExtension";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog> = L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension> = L"Windows.ApplicationModel.AppExtensions.IAppExtension";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension2> = L"Windows.ApplicationModel.AppExtensions.IAppExtension2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension3> = L"Windows.ApplicationModel.AppExtensions.IAppExtension3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalog";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog2> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalog2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalogStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatingEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension>{ 0x8450902C,0x15ED,0x4FAF,{ 0x93,0xEA,0x22,0x37,0xBB,0xF8,0xCB,0xD6 } }; // 8450902C-15ED-4FAF-93EA-2237BBF8CBD6
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension2>{ 0xAB3B15F0,0x14F9,0x4B9F,{ 0x94,0x19,0xA3,0x49,0xA2,0x42,0xEF,0x38 } }; // AB3B15F0-14F9-4B9F-9419-A349A242EF38
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension3>{ 0x5923C101,0xAA38,0x4009,{ 0x84,0xD9,0x5B,0x54,0xA0,0xDF,0x30,0xAE } }; // 5923C101-AA38-4009-84D9-5B54A0DF30AE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ 0x97872032,0x8426,0x4AD1,{ 0x90,0x84,0x92,0xE8,0x8C,0x2D,0xA2,0x00 } }; // 97872032-8426-4AD1-9084-92E88C2DA200
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog2>{ 0x50056EBA,0x58B6,0x4147,{ 0xB5,0xA5,0x8F,0xEC,0xA6,0xDF,0xB4,0x9D } }; // 50056EBA-58B6-4147-B5A5-8FECA6DFB49D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ 0x3C36668A,0x5F18,0x4F0B,{ 0x9C,0xE5,0xCA,0xB6,0x1D,0x19,0x6F,0x11 } }; // 3C36668A-5F18-4F0B-9CE5-CAB61D196F11
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ 0x39E59234,0x3351,0x4A8D,{ 0x97,0x45,0xE7,0xD3,0xDD,0x45,0xBC,0x48 } }; // 39E59234-3351-4A8D-9745-E7D3DD45BC48
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ 0x1CE17433,0x1153,0x44FD,{ 0x87,0xB1,0x8A,0xE1,0x05,0x03,0x03,0xDF } }; // 1CE17433-1153-44FD-87B1-8AE1050303DF
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ 0x60F160C5,0x171E,0x40FF,{ 0xAE,0x98,0xAB,0x2C,0x20,0xDD,0x4D,0x75 } }; // 60F160C5-171E-40FF-AE98-AB2C20DD4D75
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ 0x3A83C43F,0x797E,0x44B5,{ 0xBA,0x24,0xA4,0xC8,0xB5,0xA5,0x43,0xD7 } }; // 3A83C43F-797E-44B5-BA24-A4C8B5A543D7
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ 0x7ED59329,0x1A65,0x4800,{ 0xA7,0x00,0xB3,0x21,0x00,0x9E,0x30,0x6A } }; // 7ED59329-1A65-4800-A700-B321009E306A
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtension; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs; };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall GetExtensionPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicFolderAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetExtensionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicPath(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicFolder(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestRemovePackageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_PackageInstalled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageInstalled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUninstalling(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUninstalling(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAll(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Open(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtension
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Package() const;
        [[nodiscard]] auto AppInfo() const;
        auto GetExtensionPropertiesAsync() const;
        auto GetPublicFolderAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtension<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtension2
    {
        [[nodiscard]] auto AppUserModelId() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtension2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtension3
    {
        auto GetExtensionProperties() const;
        auto GetPublicPath() const;
        auto GetPublicFolder() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtension3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtension3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog
    {
        auto FindAllAsync() const;
        auto RequestRemovePackageAsync(param::hstring const& packageFullName) const;
        auto PackageInstalled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
        using PackageInstalled_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageInstalled>;
        [[nodiscard]] PackageInstalled_revoker PackageInstalled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
        auto PackageInstalled(winrt::event_token const& token) const noexcept;
        auto PackageUpdating(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
        using PackageUpdating_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdating>;
        [[nodiscard]] PackageUpdating_revoker PackageUpdating(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
        auto PackageUpdating(winrt::event_token const& token) const noexcept;
        auto PackageUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
        using PackageUpdated_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdated>;
        [[nodiscard]] PackageUpdated_revoker PackageUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
        auto PackageUpdated(winrt::event_token const& token) const noexcept;
        auto PackageUninstalling(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
        using PackageUninstalling_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUninstalling>;
        [[nodiscard]] PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
        auto PackageUninstalling(winrt::event_token const& token) const noexcept;
        auto PackageStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
        using PackageStatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageStatusChanged>;
        [[nodiscard]] PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
        auto PackageStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog2
    {
        auto FindAll() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics
    {
        auto Open(param::hstring const& appExtensionName) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs
    {
        [[nodiscard]] auto AppExtensionName() const;
        [[nodiscard]] auto Package() const;
        [[nodiscard]] auto Extensions() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs
    {
        [[nodiscard]] auto AppExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs
    {
        [[nodiscard]] auto AppExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs
    {
        [[nodiscard]] auto AppExtensionName() const;
        [[nodiscard]] auto Package() const;
        [[nodiscard]] auto Extensions() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs
    {
        [[nodiscard]] auto AppExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs<D>;
    };
}
#endif
