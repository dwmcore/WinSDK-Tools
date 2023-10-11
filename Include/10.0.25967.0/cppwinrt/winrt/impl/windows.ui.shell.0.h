// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Shell_0_H
#define WINRT_Windows_UI_Shell_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapSize;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Windows::UI::StartScreen
{
    struct SecondaryTile;
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    enum class SecurityAppKind : int32_t
    {
        WebProtection = 0,
    };
    enum class SecurityAppState : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class SecurityAppSubstatus : int32_t
    {
        Undetermined = 0,
        NoActionNeeded = 1,
        ActionRecommended = 2,
        ActionNeeded = 3,
    };
    enum class ShareWindowCommand : int32_t
    {
        None = 0,
        StartSharing = 1,
        StopSharing = 2,
    };
    struct IAdaptiveCard;
    struct IAdaptiveCardBuilderStatics;
    struct IFocusSession;
    struct IFocusSessionManager;
    struct IFocusSessionManagerStatics;
    struct ISecurityAppManager;
    struct IShareWindowCommandEventArgs;
    struct IShareWindowCommandSource;
    struct IShareWindowCommandSourceStatics;
    struct ITaskbarManager;
    struct ITaskbarManager2;
    struct ITaskbarManagerDesktopAppSupportStatics;
    struct ITaskbarManagerStatics;
    struct IWindowTab;
    struct IWindowTabCloseRequestedEventArgs;
    struct IWindowTabCollection;
    struct IWindowTabGroup;
    struct IWindowTabIcon;
    struct IWindowTabIconStatics;
    struct IWindowTabManager;
    struct IWindowTabManagerStatics;
    struct IWindowTabSwitchRequestedEventArgs;
    struct IWindowTabTearOutRequestedEventArgs;
    struct IWindowTabThumbnailRequestedEventArgs;
    struct AdaptiveCardBuilder;
    struct FocusSession;
    struct FocusSessionManager;
    struct SecurityAppManager;
    struct ShareWindowCommandEventArgs;
    struct ShareWindowCommandSource;
    struct TaskbarManager;
    struct WindowTab;
    struct WindowTabCloseRequestedEventArgs;
    struct WindowTabCollection;
    struct WindowTabGroup;
    struct WindowTabIcon;
    struct WindowTabManager;
    struct WindowTabSwitchRequestedEventArgs;
    struct WindowTabTearOutRequestedEventArgs;
    struct WindowTabThumbnailRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Shell::IAdaptiveCard>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IFocusSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IFocusSessionManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IFocusSessionManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ISecurityAppManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTab>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabCollection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabGroup>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabIcon>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabIconStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::AdaptiveCardBuilder>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::FocusSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::FocusSessionManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommandSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::TaskbarManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTab>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabGroup>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabIcon>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppSubstatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommand>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::AdaptiveCardBuilder> = L"Windows.UI.Shell.AdaptiveCardBuilder";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::FocusSession> = L"Windows.UI.Shell.FocusSession";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::FocusSessionManager> = L"Windows.UI.Shell.FocusSessionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppManager> = L"Windows.UI.Shell.SecurityAppManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> = L"Windows.UI.Shell.ShareWindowCommandEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommandSource> = L"Windows.UI.Shell.ShareWindowCommandSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::TaskbarManager> = L"Windows.UI.Shell.TaskbarManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTab> = L"Windows.UI.Shell.WindowTab";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs> = L"Windows.UI.Shell.WindowTabCloseRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabCollection> = L"Windows.UI.Shell.WindowTabCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabGroup> = L"Windows.UI.Shell.WindowTabGroup";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabIcon> = L"Windows.UI.Shell.WindowTabIcon";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabManager> = L"Windows.UI.Shell.WindowTabManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> = L"Windows.UI.Shell.WindowTabSwitchRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> = L"Windows.UI.Shell.WindowTabTearOutRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> = L"Windows.UI.Shell.WindowTabThumbnailRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppKind> = L"Windows.UI.Shell.SecurityAppKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppState> = L"Windows.UI.Shell.SecurityAppState";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppSubstatus> = L"Windows.UI.Shell.SecurityAppSubstatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommand> = L"Windows.UI.Shell.ShareWindowCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IAdaptiveCard> = L"Windows.UI.Shell.IAdaptiveCard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> = L"Windows.UI.Shell.IAdaptiveCardBuilderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IFocusSession> = L"Windows.UI.Shell.IFocusSession";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IFocusSessionManager> = L"Windows.UI.Shell.IFocusSessionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IFocusSessionManagerStatics> = L"Windows.UI.Shell.IFocusSessionManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ISecurityAppManager> = L"Windows.UI.Shell.ISecurityAppManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs> = L"Windows.UI.Shell.IShareWindowCommandEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandSource> = L"Windows.UI.Shell.IShareWindowCommandSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics> = L"Windows.UI.Shell.IShareWindowCommandSourceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManager> = L"Windows.UI.Shell.ITaskbarManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManager2> = L"Windows.UI.Shell.ITaskbarManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics> = L"Windows.UI.Shell.ITaskbarManagerDesktopAppSupportStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManagerStatics> = L"Windows.UI.Shell.ITaskbarManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTab> = L"Windows.UI.Shell.IWindowTab";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs> = L"Windows.UI.Shell.IWindowTabCloseRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabCollection> = L"Windows.UI.Shell.IWindowTabCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabGroup> = L"Windows.UI.Shell.IWindowTabGroup";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabIcon> = L"Windows.UI.Shell.IWindowTabIcon";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabIconStatics> = L"Windows.UI.Shell.IWindowTabIconStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabManager> = L"Windows.UI.Shell.IWindowTabManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabManagerStatics> = L"Windows.UI.Shell.IWindowTabManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs> = L"Windows.UI.Shell.IWindowTabSwitchRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs> = L"Windows.UI.Shell.IWindowTabTearOutRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs> = L"Windows.UI.Shell.IWindowTabThumbnailRequestedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IAdaptiveCard>{ 0x72D0568C,0xA274,0x41CD,{ 0x82,0xA8,0x98,0x9D,0x40,0xB9,0xB0,0x5E } }; // 72D0568C-A274-41CD-82A8-989D40B9B05E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ 0x766D8F08,0xD3FE,0x4347,{ 0xA0,0xBC,0xB9,0xEA,0x9A,0x6D,0xC2,0x8E } }; // 766D8F08-D3FE-4347-A0BC-B9EA9A6DC28E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IFocusSession>{ 0x069FBAB8,0x0E84,0x5F2F,{ 0x86,0x14,0x9B,0x65,0x44,0x32,0x62,0x77 } }; // 069FBAB8-0E84-5F2F-8614-9B6544326277
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IFocusSessionManager>{ 0xE7FFBAA9,0xD8BE,0x5DBF,{ 0xBA,0xC6,0x49,0x36,0x48,0x42,0xE3,0x7E } }; // E7FFBAA9-D8BE-5DBF-BAC6-49364842E37E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IFocusSessionManagerStatics>{ 0x834DF764,0xCB9A,0x5D0A,{ 0xAA,0x9F,0x73,0xDF,0x4F,0x24,0x93,0x95 } }; // 834DF764-CB9A-5D0A-AA9F-73DF4F249395
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ISecurityAppManager>{ 0x96AC500C,0xAED4,0x561D,{ 0xBD,0xE8,0x95,0x35,0x20,0x34,0x3A,0x2D } }; // 96AC500C-AED4-561D-BDE8-953520343A2D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>{ 0x4578DC09,0xA523,0x5756,{ 0xA9,0x95,0xE4,0xFE,0xB9,0x91,0xFF,0xF0 } }; // 4578DC09-A523-5756-A995-E4FEB991FFF0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandSource>{ 0xCB3B7AE3,0x6B9C,0x561E,{ 0xBC,0xCC,0x61,0xE6,0x8E,0x0A,0xBF,0xEF } }; // CB3B7AE3-6B9C-561E-BCCC-61E68E0ABFEF
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>{ 0xB0EB6656,0x9CAC,0x517C,{ 0xB6,0xC7,0x8E,0xF7,0x15,0x08,0x42,0x95 } }; // B0EB6656-9CAC-517C-B6C7-8EF715084295
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManager>{ 0x87490A19,0x1AD9,0x49F4,{ 0xB2,0xE8,0x86,0x73,0x8D,0xC5,0xAC,0x40 } }; // 87490A19-1AD9-49F4-B2E8-86738DC5AC40
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManager2>{ 0x79F0A06E,0x7B02,0x4911,{ 0x91,0x8C,0xDE,0xE0,0xBB,0xD2,0x0B,0xA4 } }; // 79F0A06E-7B02-4911-918C-DEE0BBD20BA4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>{ 0xCDFEFD63,0xE879,0x4134,{ 0xB9,0xA7,0x82,0x83,0xF0,0x5F,0x94,0x80 } }; // CDFEFD63-E879-4134-B9A7-8283F05F9480
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManagerStatics>{ 0xDB32AB74,0xDE52,0x4FE6,{ 0xB7,0xB6,0x95,0xFF,0x9F,0x83,0x95,0xDF } }; // DB32AB74-DE52-4FE6-B7B6-95FF9F8395DF
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTab>{ 0x551E776A,0x7928,0x4D60,{ 0xBD,0xD9,0x67,0x2B,0x5A,0x57,0x58,0xEB } }; // 551E776A-7928-4D60-BDD9-672B5A5758EB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>{ 0x477282E9,0xEEC4,0x5882,{ 0x98,0x89,0x2D,0xD6,0x4D,0x0F,0x9F,0xB6 } }; // 477282E9-EEC4-5882-9889-2DD64D0F9FB6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabCollection>{ 0xACCD0D6C,0xED07,0x519A,{ 0x8C,0x33,0x17,0xE0,0x2E,0x7E,0x9B,0x0F } }; // ACCD0D6C-ED07-519A-8C33-17E02E7E9B0F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabGroup>{ 0xA9C2C4FE,0x6CFE,0x449C,{ 0x8B,0x57,0x57,0x56,0x77,0x1A,0xBE,0x56 } }; // A9C2C4FE-6CFE-449C-8B57-5756771ABE56
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabIcon>{ 0xF92F398F,0x3669,0x4D0C,{ 0xA1,0x83,0x14,0xDD,0xAE,0x6F,0x65,0x38 } }; // F92F398F-3669-4D0C-A183-14DDAE6F6538
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabIconStatics>{ 0x2E18D95E,0x2CBB,0x4084,{ 0xAF,0x0C,0x36,0xEE,0x1C,0x2D,0x54,0xB1 } }; // 2E18D95E-2CBB-4084-AF0C-36EE1C2D54B1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabManager>{ 0x97B3C697,0xF43A,0x43E7,{ 0xB3,0xA2,0xE8,0x89,0xA9,0x83,0x55,0x99 } }; // 97B3C697-F43A-43E7-B3A2-E889A9835599
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabManagerStatics>{ 0x76755668,0x45F0,0x4E0B,{ 0x81,0x72,0x4E,0x6D,0x9D,0x0F,0x87,0xBD } }; // 76755668-45F0-4E0B-8172-4E6D9D0F87BD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>{ 0x7CBC421A,0x58A4,0x568B,{ 0xA3,0x51,0xF8,0xA9,0x47,0xA5,0xAA,0xD8 } }; // 7CBC421A-58A4-568B-A351-F8A947A5AAD8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>{ 0x17D66659,0x5005,0x5ECE,{ 0x99,0xAF,0x56,0x63,0x06,0xE7,0x36,0x42 } }; // 17D66659-5005-5ECE-99AF-566306E73642
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>{ 0x2D558E54,0x9C4E,0x5ABC,{ 0xAB,0x72,0x33,0x50,0xFB,0x49,0x37,0xA0 } }; // 2D558E54-9C4E-5ABC-AB72-3350FB4937A0
    template <> struct default_interface<winrt::Windows::UI::Shell::FocusSession>{ using type = winrt::Windows::UI::Shell::IFocusSession; };
    template <> struct default_interface<winrt::Windows::UI::Shell::FocusSessionManager>{ using type = winrt::Windows::UI::Shell::IFocusSessionManager; };
    template <> struct default_interface<winrt::Windows::UI::Shell::SecurityAppManager>{ using type = winrt::Windows::UI::Shell::ISecurityAppManager; };
    template <> struct default_interface<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>{ using type = winrt::Windows::UI::Shell::IShareWindowCommandEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Shell::ShareWindowCommandSource>{ using type = winrt::Windows::UI::Shell::IShareWindowCommandSource; };
    template <> struct default_interface<winrt::Windows::UI::Shell::TaskbarManager>{ using type = winrt::Windows::UI::Shell::ITaskbarManager; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTab>{ using type = winrt::Windows::UI::Shell::IWindowTab; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs>{ using type = winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabCollection>{ using type = winrt::Windows::UI::Shell::IWindowTabCollection; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabGroup>{ using type = winrt::Windows::UI::Shell::IWindowTabGroup; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabIcon>{ using type = winrt::Windows::UI::Shell::IWindowTabIcon; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabManager>{ using type = winrt::Windows::UI::Shell::IWindowTabManager; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>{ using type = winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs>{ using type = winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>{ using type = winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs; };
    template <> struct abi<winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAdaptiveCardFromJson(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IFocusSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall End() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IFocusSessionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsFocusActive(bool*) noexcept = 0;
            virtual int32_t __stdcall GetSession(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryStartFocusSession(void**) noexcept = 0;
            virtual int32_t __stdcall TryStartFocusSession2(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall DeactivateFocus() noexcept = 0;
            virtual int32_t __stdcall add_IsFocusActiveChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsFocusActiveChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IFocusSessionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ISecurityAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(int32_t, void*, void*, bool, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall Unregister(int32_t, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall UpdateState(int32_t, winrt::guid, int32_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowId(struct struct_Windows_UI_WindowId*) noexcept = 0;
            virtual int32_t __stdcall get_Command(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Command(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall ReportCommandChanged() noexcept = 0;
            virtual int32_t __stdcall add_CommandRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CommandInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPinningAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCurrentAppPinnedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsAppListEntryPinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinAppListEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSecondaryTilePinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinSecondaryTileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUnpinSecondaryTileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTab>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
            virtual int32_t __stdcall get_TreatAsSecondaryTileId(void**) noexcept = 0;
            virtual int32_t __stdcall put_TreatAsSecondaryTileId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall put_Group(void*) noexcept = 0;
            virtual int32_t __stdcall ReportThumbnailAvailable() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MoveTab(void*, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabIconStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromFontGlyph(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFontGlyphWithUri(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromImage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tabs(void**) noexcept = 0;
            virtual int32_t __stdcall SetActiveTab(void*) noexcept = 0;
            virtual int32_t __stdcall add_TabSwitchRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabSwitchRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabCloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabCloseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabTearOutRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabTearOutRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabThumbnailRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabThumbnailRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForWindow(struct struct_Windows_UI_WindowId, void**) noexcept = 0;
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsTabTearOutSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
            virtual int32_t __stdcall get_WindowId(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_WindowId(uint64_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCompositedOnWindow(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCard
    {
        auto ToJson() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics
    {
        auto CreateAdaptiveCardFromJson(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IFocusSession
    {
        [[nodiscard]] auto Id() const;
        auto End() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IFocusSession>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IFocusSession<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IFocusSessionManager
    {
        [[nodiscard]] auto IsFocusActive() const;
        auto GetSession(param::hstring const& id) const;
        auto TryStartFocusSession() const;
        auto TryStartFocusSession(winrt::Windows::Foundation::DateTime const& endTime) const;
        auto DeactivateFocus() const;
        auto IsFocusActiveChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::FocusSessionManager, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsFocusActiveChanged_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IFocusSessionManager, &impl::abi_t<winrt::Windows::UI::Shell::IFocusSessionManager>::remove_IsFocusActiveChanged>;
        [[nodiscard]] IsFocusActiveChanged_revoker IsFocusActiveChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::FocusSessionManager, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto IsFocusActiveChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IFocusSessionManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IFocusSessionManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IFocusSessionManagerStatics
    {
        auto GetDefault() const;
        [[nodiscard]] auto IsSupported() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IFocusSessionManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IFocusSessionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ISecurityAppManager
    {
        auto Register(winrt::Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, winrt::Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const;
        auto Unregister(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const;
        auto UpdateState(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, winrt::Windows::UI::Shell::SecurityAppState const& state, winrt::Windows::UI::Shell::SecurityAppSubstatus const& substatus, winrt::Windows::Foundation::Uri const& detailsUri) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ISecurityAppManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ISecurityAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandEventArgs
    {
        [[nodiscard]] auto WindowId() const;
        [[nodiscard]] auto Command() const;
        auto Command(winrt::Windows::UI::Shell::ShareWindowCommand const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandSource
    {
        auto Start() const;
        auto Stop() const;
        auto ReportCommandChanged() const;
        auto CommandRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        using CommandRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IShareWindowCommandSource, &impl::abi_t<winrt::Windows::UI::Shell::IShareWindowCommandSource>::remove_CommandRequested>;
        [[nodiscard]] CommandRequested_revoker CommandRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        auto CommandRequested(winrt::event_token const& token) const noexcept;
        auto CommandInvoked(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        using CommandInvoked_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IShareWindowCommandSource, &impl::abi_t<winrt::Windows::UI::Shell::IShareWindowCommandSource>::remove_CommandInvoked>;
        [[nodiscard]] CommandInvoked_revoker CommandInvoked(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        auto CommandInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandSource>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandSourceStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsPinningAllowed() const;
        auto IsCurrentAppPinnedAsync() const;
        auto IsAppListEntryPinnedAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto RequestPinCurrentAppAsync() const;
        auto RequestPinAppListEntryAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager2
    {
        auto IsSecondaryTilePinnedAsync(param::hstring const& tileId) const;
        auto RequestPinSecondaryTileAsync(winrt::Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const;
        auto TryUnpinSecondaryTileAsync(param::hstring const& tileId) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerDesktopAppSupportStatics
    {
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerDesktopAppSupportStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTab
    {
        [[nodiscard]] auto Tag() const;
        auto Tag(winrt::Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(winrt::Windows::UI::Shell::WindowTabIcon const& value) const;
        [[nodiscard]] auto TreatAsSecondaryTileId() const;
        auto TreatAsSecondaryTileId(param::hstring const& value) const;
        [[nodiscard]] auto Group() const;
        auto Group(winrt::Windows::UI::Shell::WindowTabGroup const& value) const;
        auto ReportThumbnailAvailable() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTab>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTab<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCollection
    {
        auto MoveTab(winrt::Windows::UI::Shell::WindowTab const& tab, uint32_t index) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabCollection>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabGroup
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(winrt::Windows::UI::Shell::WindowTabIcon const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabGroup>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIcon
    {
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabIcon>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIconStatics
    {
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily) const;
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, winrt::Windows::Foundation::Uri const& fontUri) const;
        auto CreateFromImage(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& image) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabIconStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIconStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManager
    {
        [[nodiscard]] auto Tabs() const;
        auto SetActiveTab(winrt::Windows::UI::Shell::WindowTab const& tab) const;
        auto TabSwitchRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        using TabSwitchRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IWindowTabManager, &impl::abi_t<winrt::Windows::UI::Shell::IWindowTabManager>::remove_TabSwitchRequested>;
        [[nodiscard]] TabSwitchRequested_revoker TabSwitchRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        auto TabSwitchRequested(winrt::event_token const& token) const noexcept;
        auto TabCloseRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        using TabCloseRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IWindowTabManager, &impl::abi_t<winrt::Windows::UI::Shell::IWindowTabManager>::remove_TabCloseRequested>;
        [[nodiscard]] TabCloseRequested_revoker TabCloseRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        auto TabCloseRequested(winrt::event_token const& token) const noexcept;
        auto TabTearOutRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const;
        using TabTearOutRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IWindowTabManager, &impl::abi_t<winrt::Windows::UI::Shell::IWindowTabManager>::remove_TabTearOutRequested>;
        [[nodiscard]] TabTearOutRequested_revoker TabTearOutRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const;
        auto TabTearOutRequested(winrt::event_token const& token) const noexcept;
        auto TabThumbnailRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        using TabThumbnailRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IWindowTabManager, &impl::abi_t<winrt::Windows::UI::Shell::IWindowTabManager>::remove_TabThumbnailRequested>;
        [[nodiscard]] TabThumbnailRequested_revoker TabThumbnailRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::WindowTabManager, winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        auto TabThumbnailRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManagerStatics
    {
        auto GetForWindow(winrt::Windows::UI::WindowId const& id) const;
        auto IsSupported() const;
        auto IsTabTearOutSupported() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
        [[nodiscard]] auto WindowId() const;
        auto WindowId(uint64_t value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
        [[nodiscard]] auto RequestedSize() const;
        [[nodiscard]] auto Image() const;
        auto Image(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        auto GetDeferral() const;
        [[nodiscard]] auto IsCompositedOnWindow() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>;
    };
}
#endif
