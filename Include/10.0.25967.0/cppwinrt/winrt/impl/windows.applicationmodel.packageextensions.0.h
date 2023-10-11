// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_PackageExtensions_0_H
#define WINRT_Windows_ApplicationModel_PackageExtensions_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
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
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::PackageExtensions
{
    struct IPackageExtension;
    struct IPackageExtensionCatalog;
    struct IPackageExtensionCatalogStatics;
    struct IPackageExtensionPackageInstalledEventArgs;
    struct IPackageExtensionPackageStatusChangedEventArgs;
    struct IPackageExtensionPackageUninstallingEventArgs;
    struct IPackageExtensionPackageUpdatedEventArgs;
    struct IPackageExtensionPackageUpdatingEventArgs;
    struct PackageExtension;
    struct PackageExtensionCatalog;
    struct PackageExtensionPackageInstalledEventArgs;
    struct PackageExtensionPackageStatusChangedEventArgs;
    struct PackageExtensionPackageUninstallingEventArgs;
    struct PackageExtensionPackageUpdatedEventArgs;
    struct PackageExtensionPackageUpdatingEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension> = L"Windows.ApplicationModel.PackageExtensions.PackageExtension";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionCatalog";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.PackageExtensions.PackageExtensionPackageUpdatingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtension";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionCatalog";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionCatalogStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionPackageInstalledEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionPackageUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs> = L"Windows.ApplicationModel.PackageExtensions.IPackageExtensionPackageUpdatingEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension>{ 0xDA70C957,0x7EAD,0x5C3B,{ 0x9C,0xF0,0xCC,0x43,0xFA,0xF4,0x74,0xB4 } }; // DA70C957-7EAD-5C3B-9CF0-CC43FAF474B4
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>{ 0x0879DFE6,0xAC30,0x58B2,{ 0x97,0xF9,0x48,0x0B,0x07,0xE7,0x5B,0xFA } }; // 0879DFE6-AC30-58B2-97F9-480B07E75BFA
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics>{ 0x9588ECE4,0x3183,0x5684,{ 0x9E,0x5F,0x27,0x75,0x97,0x33,0xDD,0xFE } }; // 9588ECE4-3183-5684-9E5F-27759733DDFE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs>{ 0x3C9B0067,0x083C,0x5FE3,{ 0xBD,0xFB,0x9F,0xEB,0x15,0x6B,0x41,0x18 } }; // 3C9B0067-083C-5FE3-BDFB-9FEB156B4118
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs>{ 0xB8FEE20A,0x680D,0x5942,{ 0x87,0x6C,0x5D,0xE1,0x2D,0xF1,0x08,0x3C } }; // B8FEE20A-680D-5942-876C-5DE12DF1083C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs>{ 0x3B8E9CB7,0xC539,0x554D,{ 0xBB,0x33,0xA8,0x4C,0x0B,0xFA,0x3F,0x50 } }; // 3B8E9CB7-C539-554D-BB33-A84C0BFA3F50
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs>{ 0xFDC31ADD,0x16A7,0x509D,{ 0x8B,0xC4,0xFD,0xE2,0x2E,0x85,0x6D,0x2D } }; // FDC31ADD-16A7-509D-8BC4-FDE22E856D2D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs>{ 0x27AE2CE1,0xA1D3,0x532E,{ 0x8E,0x7E,0x8B,0x43,0x78,0x2F,0xCE,0x09 } }; // 27AE2CE1-A1D3-532E-8E7E-8B43782FCE09
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs>{ using type = winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs; };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall GetExtensionProperties(void**) noexcept = 0;
            virtual int32_t __stdcall GetExtensionPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicPath(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicFolder(void**) noexcept = 0;
            virtual int32_t __stdcall GetPublicFolderAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAll(void**) noexcept = 0;
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
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Open(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackageExtensionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Package() const;
        auto GetExtensionProperties() const;
        auto GetExtensionPropertiesAsync() const;
        auto GetPublicPath() const;
        auto GetPublicFolder() const;
        auto GetPublicFolderAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog
    {
        auto FindAll() const;
        auto FindAllAsync() const;
        auto RequestRemovePackageAsync(param::hstring const& packageFullName) const;
        auto PackageInstalled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> const& handler) const;
        using PackageInstalled_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>::remove_PackageInstalled>;
        [[nodiscard]] PackageInstalled_revoker PackageInstalled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> const& handler) const;
        auto PackageInstalled(winrt::event_token const& token) const noexcept;
        auto PackageUpdating(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> const& handler) const;
        using PackageUpdating_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>::remove_PackageUpdating>;
        [[nodiscard]] PackageUpdating_revoker PackageUpdating(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> const& handler) const;
        auto PackageUpdating(winrt::event_token const& token) const noexcept;
        auto PackageUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> const& handler) const;
        using PackageUpdated_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>::remove_PackageUpdated>;
        [[nodiscard]] PackageUpdated_revoker PackageUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> const& handler) const;
        auto PackageUpdated(winrt::event_token const& token) const noexcept;
        auto PackageUninstalling(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> const& handler) const;
        using PackageUninstalling_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>::remove_PackageUninstalling>;
        [[nodiscard]] PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> const& handler) const;
        auto PackageUninstalling(winrt::event_token const& token) const noexcept;
        auto PackageStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> const& handler) const;
        using PackageStatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog, &impl::abi_t<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>::remove_PackageStatusChanged>;
        [[nodiscard]] PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> const& handler) const;
        auto PackageStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalogStatics
    {
        auto Open(param::hstring const& packageExtensionName) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalogStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageInstalledEventArgs
    {
        [[nodiscard]] auto PackageExtensionName() const;
        [[nodiscard]] auto Package() const;
        [[nodiscard]] auto Extensions() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageInstalledEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageStatusChangedEventArgs
    {
        [[nodiscard]] auto PackageExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUninstallingEventArgs
    {
        [[nodiscard]] auto PackageExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUninstallingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatedEventArgs
    {
        [[nodiscard]] auto PackageExtensionName() const;
        [[nodiscard]] auto Package() const;
        [[nodiscard]] auto Extensions() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatingEventArgs
    {
        [[nodiscard]] auto PackageExtensionName() const;
        [[nodiscard]] auto Package() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatingEventArgs<D>;
    };
}
#endif
