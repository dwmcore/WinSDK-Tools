// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_0_H
#define WINRT_Windows_ApplicationModel_Store_Preview_InstallControl_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Management::Deployment
{
    struct PackageVolume;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl
{
    enum class AppInstallState : int32_t
    {
        Pending = 0,
        Starting = 1,
        AcquiringLicense = 2,
        Downloading = 3,
        RestoringData = 4,
        Installing = 5,
        Completed = 6,
        Canceled = 7,
        Paused = 8,
        Error = 9,
        PausedLowBattery = 10,
        PausedWiFiRecommended = 11,
        PausedWiFiRequired = 12,
        ReadyToDownload = 13,
    };
    enum class AppInstallType : int32_t
    {
        Install = 0,
        Update = 1,
        Repair = 2,
    };
    enum class AppInstallationToastNotificationMode : int32_t
    {
        Default = 0,
        Toast = 1,
        ToastWithoutPopup = 2,
        NoToast = 3,
    };
    enum class AutoUpdateSetting : int32_t
    {
        Disabled = 0,
        Enabled = 1,
        DisabledByPolicy = 2,
        EnabledByPolicy = 3,
    };
    enum class GetEntitlementStatus : int32_t
    {
        Succeeded = 0,
        NoStoreAccount = 1,
        NetworkError = 2,
        ServerError = 3,
    };
    struct IAppInstallItem;
    struct IAppInstallItem2;
    struct IAppInstallItem3;
    struct IAppInstallItem4;
    struct IAppInstallItem5;
    struct IAppInstallManager;
    struct IAppInstallManager2;
    struct IAppInstallManager3;
    struct IAppInstallManager4;
    struct IAppInstallManager5;
    struct IAppInstallManager6;
    struct IAppInstallManager7;
    struct IAppInstallManagerItemEventArgs;
    struct IAppInstallOptions;
    struct IAppInstallOptions2;
    struct IAppInstallStatus;
    struct IAppInstallStatus2;
    struct IAppInstallStatus3;
    struct IAppUpdateOptions;
    struct IAppUpdateOptions2;
    struct IGetEntitlementResult;
    struct AppInstallItem;
    struct AppInstallManager;
    struct AppInstallManagerItemEventArgs;
    struct AppInstallOptions;
    struct AppInstallStatus;
    struct AppUpdateOptions;
    struct GetEntitlementResult;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppUpdateOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> = L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallationToastNotificationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting> = L"Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus> = L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem4";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem5";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager6";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager7";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> = L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ 0x49D3DFAB,0x168A,0x4CBF,{ 0xA9,0x3A,0x9E,0x44,0x8C,0x82,0x73,0x7D } }; // 49D3DFAB-168A-4CBF-A93A-9E448C82737D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ 0xD3972AF8,0x40C0,0x4FD7,{ 0xAA,0x6C,0x0A,0xA1,0x3C,0xA6,0x18,0x8C } }; // D3972AF8-40C0-4FD7-AA6C-0AA13CA6188C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ 0x6F3DC998,0xDD47,0x433C,{ 0x92,0x34,0x56,0x01,0x72,0xD6,0x7A,0x45 } }; // 6F3DC998-DD47-433C-9234-560172D67A45
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ 0xC2D1CE12,0x71FF,0x4FC8,{ 0xB5,0x40,0x45,0x3D,0x4B,0x37,0xE1,0xD1 } }; // C2D1CE12-71FF-4FC8-B540-453D4B37E1D1
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>{ 0x5510E7CC,0x4076,0x4A0B,{ 0x94,0x72,0xC2,0x1D,0x9D,0x38,0x0E,0x55 } }; // 5510E7CC-4076-4A0B-9472-C21D9D380E55
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ 0x9353E170,0x8441,0x4B45,{ 0xBD,0x72,0x7C,0x2F,0xA9,0x25,0xBE,0xEE } }; // 9353E170-8441-4B45-BD72-7C2FA925BEEE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ 0x16937851,0xED37,0x480D,{ 0x83,0x14,0x52,0xE2,0x7C,0x03,0xF0,0x4A } }; // 16937851-ED37-480D-8314-52E27C03F04A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ 0x95B24B17,0xE96A,0x4D0E,{ 0x84,0xE1,0xC8,0xCB,0x41,0x7A,0x01,0x78 } }; // 95B24B17-E96A-4D0E-84E1-C8CB417A0178
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ 0x260A2A16,0x5A9E,0x4EBD,{ 0xB9,0x44,0xF2,0xBA,0x75,0xC3,0x11,0x59 } }; // 260A2A16-5A9E-4EBD-B944-F2BA75C31159
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ 0x3CD7BE4C,0x1BE9,0x4F7F,{ 0xB6,0x75,0xAA,0x1D,0x64,0xA5,0x29,0xB2 } }; // 3CD7BE4C-1BE9-4F7F-B675-AA1D64A529B2
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ 0xC9E7D408,0xF27A,0x4471,{ 0xB2,0xF4,0xE7,0x6E,0xFC,0xBE,0xBC,0xCA } }; // C9E7D408-F27A-4471-B2F4-E76EFCBEBCCA
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>{ 0xA5EE7B30,0xD5E4,0x49A3,{ 0x98,0x53,0x3D,0xB0,0x32,0x03,0x32,0x1D } }; // A5EE7B30-D5E4-49A3-9853-3DB03203321D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ 0xBC505743,0x4674,0x4DD1,{ 0x95,0x7E,0xC2,0x56,0x82,0x08,0x6A,0x14 } }; // BC505743-4674-4DD1-957E-C25682086A14
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ 0xC9808300,0x1CB8,0x4EB6,{ 0x8C,0x9F,0x6A,0x30,0xC6,0x4A,0x5B,0x51 } }; // C9808300-1CB8-4EB6-8C9F-6A30C64A5B51
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>{ 0x8A04C0D7,0xC94B,0x425E,{ 0x95,0xB4,0xBF,0x27,0xFA,0xEA,0xEE,0x89 } }; // 8A04C0D7-C94B-425E-95B4-BF27FAEAEE89
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ 0x936DCCFA,0x2450,0x4126,{ 0x88,0xB1,0x61,0x27,0xA6,0x44,0xDD,0x5C } }; // 936DCCFA-2450-4126-88B1-6127A644DD5C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ 0x96E7818A,0x5E92,0x4AA9,{ 0x8E,0xDC,0x58,0xFE,0xD4,0xB8,0x7E,0x00 } }; // 96E7818A-5E92-4AA9-8EDC-58FED4B87E00
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ 0xCB880C56,0x837B,0x4B4C,{ 0x9E,0xBB,0x6D,0x44,0xA0,0xA9,0x63,0x07 } }; // CB880C56-837B-4B4C-9EBB-6D44A0A96307
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ 0x26F0B02F,0xC2F3,0x4AEA,{ 0xAF,0x8C,0x63,0x08,0xDD,0x9D,0xB8,0x5F } }; // 26F0B02F-C2F3-4AEA-AF8C-6308DD9DB85F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>{ 0xF4646E08,0xED26,0x4BF9,{ 0x96,0x79,0x48,0xF6,0x28,0xE5,0x3D,0xF8 } }; // F4646E08-ED26-4BF9-9679-48F628E53DF8
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ 0x74FC843F,0x1A9E,0x4609,{ 0x8E,0x4D,0x81,0x90,0x86,0xD0,0x8A,0x3D } }; // 74FC843F-1A9E-4609-8E4D-819086D08A3D
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult; };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstallType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserInitiated(bool*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentStatus(void**) noexcept = 0;
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Restart() noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelWithTelemetry(void*) noexcept = 0;
            virtual int32_t __stdcall PauseWithTelemetry(void*) noexcept = 0;
            virtual int32_t __stdcall RestartWithTelemetry(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemOperationsMightAffectOtherItems(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LaunchAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LaunchAfterInstall(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinToDesktopAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToDesktopAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToStartAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToStartAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToTaskbarAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToTaskbarAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CompletedInstallToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletedInstallToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallInProgressToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallInProgressToastNotificationMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInstallItems(void**) noexcept = 0;
            virtual int32_t __stdcall Cancel(void*) noexcept = 0;
            virtual int32_t __stdcall Pause(void*) noexcept = 0;
            virtual int32_t __stdcall Restart(void*) noexcept = 0;
            virtual int32_t __stdcall add_ItemCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ItemStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ItemStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AutoUpdateSetting(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoUpdateSetting(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AcquisitionIdentity(void**) noexcept = 0;
            virtual int32_t __stdcall put_AcquisitionIdentity(void*) noexcept = 0;
            virtual int32_t __stdcall GetIsApplicableAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartAppInstallAsync(void*, void*, bool, bool, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsStoreBlockedByPolicyAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAppInstallWithTelemetryAsync(void*, void*, bool, bool, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameWithTelemetryAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithTelemetryAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesWithTelemetryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallWithTelemetryAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CancelWithTelemetry(void*, void*) noexcept = 0;
            virtual int32_t __stdcall PauseWithTelemetry(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RestartWithTelemetry(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartProductInstallAsync(void*, void*, void*, void*, bool, bool, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallForUserAsync(void*, void*, void*, void*, void*, bool, bool, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateAppByPackageFamilyNameForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesForUserAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesForUserAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsAppAllowedToInstallForUserAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsApplicableForUserAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall MoveToFrontOfDownloadQueue(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFreeUserEntitlementAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFreeUserEntitlementForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFreeDeviceEntitlementAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInstallItemsWithGroupSupport(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SearchForAllUpdatesWithUpdateOptionsAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForAllUpdatesWithUpdateOptionsForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithUpdateOptionsAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SearchForUpdatesWithUpdateOptionsForUserAsync(void*, void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallWithOptionsAsync(void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartProductInstallWithOptionsForUserAsync(void*, void*, void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsPackageIdentityAllowedToInstallAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIsPackageIdentityAllowedToInstallForUserAsync(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanInstallForAllUsers(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Item(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CatalogId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CatalogId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ForceUseOfNonRemovableStorage(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ForceUseOfNonRemovableStorage(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowForcedAppRestart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowForcedAppRestart(bool) noexcept = 0;
            virtual int32_t __stdcall get_Repair(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Repair(bool) noexcept = 0;
            virtual int32_t __stdcall get_TargetVolume(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetVolume(void*) noexcept = 0;
            virtual int32_t __stdcall get_LaunchAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LaunchAfterInstall(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PinToDesktopAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToDesktopAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToStartAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToStartAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_PinToTaskbarAfterInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PinToTaskbarAfterInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CompletedInstallToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CompletedInstallToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallInProgressToastNotificationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallInProgressToastNotificationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallForAllUsers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_InstallForAllUsers(bool) noexcept = 0;
            virtual int32_t __stdcall get_StageButDoNotInstall(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StageButDoNotInstall(bool) noexcept = 0;
            virtual int32_t __stdcall get_CampaignId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CampaignId(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedCampaignId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExtendedCampaignId(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstallState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DownloadSizeInBytes(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesDownloaded(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PercentComplete(double*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadyForLaunch(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CatalogId(void**) noexcept = 0;
            virtual int32_t __stdcall put_CatalogId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowForcedAppRestart(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowForcedAppRestart(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutomaticallyDownloadAndInstallUpdateIfFound(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutomaticallyDownloadAndInstallUpdateIfFound(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem
    {
        [[nodiscard]] auto ProductId() const;
        [[nodiscard]] auto PackageFamilyName() const;
        [[nodiscard]] auto InstallType() const;
        [[nodiscard]] auto IsUserInitiated() const;
        auto GetCurrentStatus() const;
        auto Cancel() const;
        auto Pause() const;
        auto Restart() const;
        auto Completed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Completed_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem, &impl::abi_t<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Completed(winrt::event_token const& token) const noexcept;
        auto StatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem, &impl::abi_t<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::remove_StatusChanged>;
        [[nodiscard]] StatusChanged_revoker StatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2
    {
        auto Cancel(param::hstring const& correlationVector) const;
        auto Pause(param::hstring const& correlationVector) const;
        auto Restart(param::hstring const& correlationVector) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3
    {
        [[nodiscard]] auto Children() const;
        [[nodiscard]] auto ItemOperationsMightAffectOtherItems() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4
    {
        [[nodiscard]] auto LaunchAfterInstall() const;
        auto LaunchAfterInstall(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5
    {
        [[nodiscard]] auto PinToDesktopAfterInstall() const;
        auto PinToDesktopAfterInstall(bool value) const;
        [[nodiscard]] auto PinToStartAfterInstall() const;
        auto PinToStartAfterInstall(bool value) const;
        [[nodiscard]] auto PinToTaskbarAfterInstall() const;
        auto PinToTaskbarAfterInstall(bool value) const;
        [[nodiscard]] auto CompletedInstallToastNotificationMode() const;
        auto CompletedInstallToastNotificationMode(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallInProgressToastNotificationMode() const;
        auto InstallInProgressToastNotificationMode(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager
    {
        [[nodiscard]] auto AppInstallItems() const;
        auto Cancel(param::hstring const& productId) const;
        auto Pause(param::hstring const& productId) const;
        auto Restart(param::hstring const& productId) const;
        auto ItemCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        using ItemCompleted_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager, &impl::abi_t<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemCompleted>;
        [[nodiscard]] ItemCompleted_revoker ItemCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        auto ItemCompleted(winrt::event_token const& token) const noexcept;
        auto ItemStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        using ItemStatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager, &impl::abi_t<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::remove_ItemStatusChanged>;
        [[nodiscard]] ItemStatusChanged_revoker ItemStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
        auto ItemStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto AutoUpdateSetting() const;
        auto AutoUpdateSetting(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const& value) const;
        [[nodiscard]] auto AcquisitionIdentity() const;
        auto AcquisitionIdentity(param::hstring const& value) const;
        auto GetIsApplicableAsync(param::hstring const& productId, param::hstring const& skuId) const;
        auto StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage) const;
        auto UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId) const;
        auto SearchForAllUpdatesAsync() const;
        auto IsStoreBlockedByPolicyAsync(param::hstring const& storeClientName, param::hstring const& storeClientPublisher) const;
        auto GetIsAppAllowedToInstallAsync(param::hstring const& productId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2
    {
        auto StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& catalogId, param::hstring const& bundleId, param::hstring const& correlationVector) const;
        auto UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto SearchForAllUpdatesAsync(param::hstring const& correlationVector) const;
        auto GetIsAppAllowedToInstallAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto Cancel(param::hstring const& productId, param::hstring const& correlationVector) const;
        auto Pause(param::hstring const& productId, param::hstring const& correlationVector) const;
        auto Restart(param::hstring const& productId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3
    {
        auto StartProductInstallAsync(param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto StartProductInstallForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const;
        auto UpdateAppByPackageFamilyNameForUserAsync(winrt::Windows::System::User const& user, param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
        auto SearchForUpdatesForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto SearchForAllUpdatesForUserAsync(winrt::Windows::System::User const& user, param::hstring const& correlationVector) const;
        auto GetIsAppAllowedToInstallForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
        auto GetIsApplicableForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId) const;
        auto MoveToFrontOfDownloadQueue(param::hstring const& productId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4
    {
        auto GetFreeUserEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
        auto GetFreeUserEntitlementForUserAsync(winrt::Windows::System::User const& user, param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
        auto GetFreeDeviceEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5
    {
        [[nodiscard]] auto AppInstallItemsWithGroupSupport() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6
    {
        auto SearchForAllUpdatesAsync(param::hstring const& correlationVector, param::hstring const& clientId, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForAllUpdatesForUserAsync(winrt::Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& clientId, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto SearchForUpdatesForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
        auto StartProductInstallAsync(param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
        auto StartProductInstallForUserAsync(winrt::Windows::System::User const& user, param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
        auto GetIsPackageIdentityAllowedToInstallAsync(param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
        auto GetIsPackageIdentityAllowedToInstallForUserAsync(winrt::Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager7
    {
        [[nodiscard]] auto CanInstallForAllUsers() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager7>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager7<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs
    {
        [[nodiscard]] auto Item() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions
    {
        [[nodiscard]] auto CatalogId() const;
        auto CatalogId(param::hstring const& value) const;
        [[nodiscard]] auto ForceUseOfNonRemovableStorage() const;
        auto ForceUseOfNonRemovableStorage(bool value) const;
        [[nodiscard]] auto AllowForcedAppRestart() const;
        auto AllowForcedAppRestart(bool value) const;
        [[nodiscard]] auto Repair() const;
        auto Repair(bool value) const;
        [[nodiscard]] auto TargetVolume() const;
        auto TargetVolume(winrt::Windows::Management::Deployment::PackageVolume const& value) const;
        [[nodiscard]] auto LaunchAfterInstall() const;
        auto LaunchAfterInstall(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions2
    {
        [[nodiscard]] auto PinToDesktopAfterInstall() const;
        auto PinToDesktopAfterInstall(bool value) const;
        [[nodiscard]] auto PinToStartAfterInstall() const;
        auto PinToStartAfterInstall(bool value) const;
        [[nodiscard]] auto PinToTaskbarAfterInstall() const;
        auto PinToTaskbarAfterInstall(bool value) const;
        [[nodiscard]] auto CompletedInstallToastNotificationMode() const;
        auto CompletedInstallToastNotificationMode(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallInProgressToastNotificationMode() const;
        auto InstallInProgressToastNotificationMode(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallationToastNotificationMode const& value) const;
        [[nodiscard]] auto InstallForAllUsers() const;
        auto InstallForAllUsers(bool value) const;
        [[nodiscard]] auto StageButDoNotInstall() const;
        auto StageButDoNotInstall(bool value) const;
        [[nodiscard]] auto CampaignId() const;
        auto CampaignId(param::hstring const& value) const;
        [[nodiscard]] auto ExtendedCampaignId() const;
        auto ExtendedCampaignId(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus
    {
        [[nodiscard]] auto InstallState() const;
        [[nodiscard]] auto DownloadSizeInBytes() const;
        [[nodiscard]] auto BytesDownloaded() const;
        [[nodiscard]] auto PercentComplete() const;
        [[nodiscard]] auto ErrorCode() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2
    {
        [[nodiscard]] auto User() const;
        [[nodiscard]] auto ReadyForLaunch() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3
    {
        [[nodiscard]] auto IsStaged() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions
    {
        [[nodiscard]] auto CatalogId() const;
        auto CatalogId(param::hstring const& value) const;
        [[nodiscard]] auto AllowForcedAppRestart() const;
        auto AllowForcedAppRestart(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions2
    {
        [[nodiscard]] auto AutomaticallyDownloadAndInstallUpdateIfFound() const;
        auto AutomaticallyDownloadAndInstallUpdateIfFound(bool value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult
    {
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult<D>;
    };
}
#endif
