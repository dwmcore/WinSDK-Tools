// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Display_0_H
#define WINRT_Windows_Devices_Display_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Point;
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
    struct DisplayAdapterId;
    struct SizeInt32;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Display
{
    enum class DisplayMonitorConnectionKind : int32_t
    {
        Internal = 0,
        Wired = 1,
        Wireless = 2,
        Virtual = 3,
    };
    enum class DisplayMonitorDescriptorKind : int32_t
    {
        Edid = 0,
        DisplayId = 1,
    };
    enum class DisplayMonitorPhysicalConnectorKind : int32_t
    {
        Unknown = 0,
        HD15 = 1,
        AnalogTV = 2,
        Dvi = 3,
        Hdmi = 4,
        Lvds = 5,
        Sdi = 6,
        DisplayPort = 7,
    };
    enum class DisplayMonitorUsageKind : int32_t
    {
        Standard = 0,
        HeadMounted = 1,
        SpecialPurpose = 2,
    };
    struct IDisplayMonitor;
    struct IDisplayMonitor2;
    struct IDisplayMonitorStatics;
    struct DisplayMonitor;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Display::IDisplayMonitor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Display::IDisplayMonitor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Display::IDisplayMonitorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Display::DisplayMonitor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Display::DisplayMonitorConnectionKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Display::DisplayMonitorUsageKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::DisplayMonitor> = L"Windows.Devices.Display.DisplayMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::DisplayMonitorConnectionKind> = L"Windows.Devices.Display.DisplayMonitorConnectionKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind> = L"Windows.Devices.Display.DisplayMonitorDescriptorKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind> = L"Windows.Devices.Display.DisplayMonitorPhysicalConnectorKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::DisplayMonitorUsageKind> = L"Windows.Devices.Display.DisplayMonitorUsageKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::IDisplayMonitor> = L"Windows.Devices.Display.IDisplayMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::IDisplayMonitor2> = L"Windows.Devices.Display.IDisplayMonitor2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Display::IDisplayMonitorStatics> = L"Windows.Devices.Display.IDisplayMonitorStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Display::IDisplayMonitor>{ 0x1F6B15D4,0x1D01,0x4C51,{ 0x87,0xE2,0x6F,0x95,0x4A,0x77,0x2B,0x59 } }; // 1F6B15D4-1D01-4C51-87E2-6F954A772B59
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Display::IDisplayMonitor2>{ 0x023018E6,0xCB23,0x5830,{ 0x96,0xDF,0xA7,0xBF,0x6E,0x60,0x25,0x77 } }; // 023018E6-CB23-5830-96DF-A7BF6E602577
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Display::IDisplayMonitorStatics>{ 0x6EAE698F,0xA228,0x4C05,{ 0x82,0x1D,0xB6,0x95,0xD6,0x67,0xDE,0x8E } }; // 6EAE698F-A228-4C05-821D-B695D667DE8E
    template <> struct default_interface<winrt::Windows::Devices::Display::DisplayMonitor>{ using type = winrt::Windows::Devices::Display::IDisplayMonitor; };
    template <> struct abi<winrt::Windows::Devices::Display::IDisplayMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalConnector(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterId(struct struct_Windows_Graphics_DisplayAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAdapterTargetId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UsageKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NativeResolutionInRawPixels(struct struct_Windows_Graphics_SizeInt32*) noexcept = 0;
            virtual int32_t __stdcall get_PhysicalSizeInInches(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiX(float*) noexcept = 0;
            virtual int32_t __stdcall get_RawDpiY(float*) noexcept = 0;
            virtual int32_t __stdcall get_RedPrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_GreenPrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BluePrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WhitePoint(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MinLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAverageFullFrameLuminanceInNits(float*) noexcept = 0;
            virtual int32_t __stdcall GetDescriptor(int32_t, uint32_t* __resultSize, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Display::IDisplayMonitor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDolbyVisionSupportedInHdrMode(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Display::IDisplayMonitorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromInterfaceIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitor
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto ConnectionKind() const;
        [[nodiscard]] auto PhysicalConnector() const;
        [[nodiscard]] auto DisplayAdapterDeviceId() const;
        [[nodiscard]] auto DisplayAdapterId() const;
        [[nodiscard]] auto DisplayAdapterTargetId() const;
        [[nodiscard]] auto UsageKind() const;
        [[nodiscard]] auto NativeResolutionInRawPixels() const;
        [[nodiscard]] auto PhysicalSizeInInches() const;
        [[nodiscard]] auto RawDpiX() const;
        [[nodiscard]] auto RawDpiY() const;
        [[nodiscard]] auto RedPrimary() const;
        [[nodiscard]] auto GreenPrimary() const;
        [[nodiscard]] auto BluePrimary() const;
        [[nodiscard]] auto WhitePoint() const;
        [[nodiscard]] auto MaxLuminanceInNits() const;
        [[nodiscard]] auto MinLuminanceInNits() const;
        [[nodiscard]] auto MaxAverageFullFrameLuminanceInNits() const;
        auto GetDescriptor(winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind const& descriptorKind) const;
    };
    template <> struct consume<winrt::Windows::Devices::Display::IDisplayMonitor>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitor2
    {
        [[nodiscard]] auto IsDolbyVisionSupportedInHdrMode() const;
    };
    template <> struct consume<winrt::Windows::Devices::Display::IDisplayMonitor2>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Display_IDisplayMonitorStatics
    {
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto FromInterfaceIdAsync(param::hstring const& deviceInterfaceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Display::IDisplayMonitorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Display_IDisplayMonitorStatics<D>;
    };
}
#endif
