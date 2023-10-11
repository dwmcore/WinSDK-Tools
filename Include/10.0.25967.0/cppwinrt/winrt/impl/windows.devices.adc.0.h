// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Adc_0_H
#define WINRT_Windows_Devices_Adc_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider
{
    struct IAdcProvider;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Adc
{
    enum class AdcChannelMode : int32_t
    {
        SingleEnded = 0,
        Differential = 1,
    };
    struct IAdcChannel;
    struct IAdcController;
    struct IAdcControllerStatics;
    struct IAdcControllerStatics2;
    struct AdcChannel;
    struct AdcController;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Adc::IAdcChannel>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Adc::IAdcController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Adc::IAdcControllerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Adc::IAdcControllerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Adc::AdcChannel>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Adc::AdcController>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Adc::AdcChannelMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::AdcChannel> = L"Windows.Devices.Adc.AdcChannel";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::AdcController> = L"Windows.Devices.Adc.AdcController";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::AdcChannelMode> = L"Windows.Devices.Adc.AdcChannelMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::IAdcChannel> = L"Windows.Devices.Adc.IAdcChannel";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::IAdcController> = L"Windows.Devices.Adc.IAdcController";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::IAdcControllerStatics> = L"Windows.Devices.Adc.IAdcControllerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Adc::IAdcControllerStatics2> = L"Windows.Devices.Adc.IAdcControllerStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Adc::IAdcChannel>{ 0x040BF414,0x2588,0x4A56,{ 0xAB,0xEF,0x73,0xA2,0x60,0xAC,0xC6,0x0A } }; // 040BF414-2588-4A56-ABEF-73A260ACC60A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Adc::IAdcController>{ 0x2A76E4B0,0xA896,0x4219,{ 0x86,0xB6,0xEA,0x8C,0xDC,0xE9,0x8F,0x56 } }; // 2A76E4B0-A896-4219-86B6-EA8CDCE98F56
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Adc::IAdcControllerStatics>{ 0xCCE98E0C,0x01F8,0x4891,{ 0xBC,0x3B,0xBE,0x53,0xEF,0x27,0x9C,0xA4 } }; // CCE98E0C-01F8-4891-BC3B-BE53EF279CA4
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Adc::IAdcControllerStatics2>{ 0xA2B93B1D,0x977B,0x4F5A,{ 0xA5,0xFE,0xA6,0xAB,0xAF,0xFE,0x64,0x84 } }; // A2B93B1D-977B-4F5A-A5FE-A6ABAFFE6484
    template <> struct default_interface<winrt::Windows::Devices::Adc::AdcChannel>{ using type = winrt::Windows::Devices::Adc::IAdcChannel; };
    template <> struct default_interface<winrt::Windows::Devices::Adc::AdcController>{ using type = winrt::Windows::Devices::Adc::IAdcController; };
    template <> struct abi<winrt::Windows::Devices::Adc::IAdcChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Controller(void**) noexcept = 0;
            virtual int32_t __stdcall ReadValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ReadRatio(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Adc::IAdcController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChannelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResolutionInBits(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ChannelMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChannelMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall IsChannelModeSupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall OpenChannel(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Adc::IAdcControllerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetControllersAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Adc::IAdcControllerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcChannel
    {
        [[nodiscard]] auto Controller() const;
        auto ReadValue() const;
        auto ReadRatio() const;
    };
    template <> struct consume<winrt::Windows::Devices::Adc::IAdcChannel>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcChannel<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcController
    {
        [[nodiscard]] auto ChannelCount() const;
        [[nodiscard]] auto ResolutionInBits() const;
        [[nodiscard]] auto MinValue() const;
        [[nodiscard]] auto MaxValue() const;
        [[nodiscard]] auto ChannelMode() const;
        auto ChannelMode(winrt::Windows::Devices::Adc::AdcChannelMode const& value) const;
        auto IsChannelModeSupported(winrt::Windows::Devices::Adc::AdcChannelMode const& channelMode) const;
        auto OpenChannel(int32_t channelNumber) const;
    };
    template <> struct consume<winrt::Windows::Devices::Adc::IAdcController>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcController<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcControllerStatics
    {
        auto GetControllersAsync(winrt::Windows::Devices::Adc::Provider::IAdcProvider const& provider) const;
    };
    template <> struct consume<winrt::Windows::Devices::Adc::IAdcControllerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Adc_IAdcControllerStatics2
    {
        auto GetDefaultAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::Adc::IAdcControllerStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Adc_IAdcControllerStatics2<D>;
    };
}
#endif
