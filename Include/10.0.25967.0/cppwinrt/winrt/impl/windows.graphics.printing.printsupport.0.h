// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_0_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
}
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    struct IppPrintDevice;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct HResult;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    struct WorkflowPrintTicket;
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct IAdaptiveCard;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintSupport
{
    enum class IppCommunicationErrorKind : int32_t
    {
        Other = 0,
        Timeout = 1,
        ConnectionError = 2,
        AccessDenied = 3,
    };
    enum class IppPrinterCommunicationKind : int32_t
    {
        Network = 0,
        Usb = 1,
        PrinterConnection = 2,
        UniversalPrint = 3,
    };
    enum class SettingsLaunchKind : int32_t
    {
        JobPrintTicket = 0,
        UserDefaultPrintTicket = 1,
    };
    enum class WorkflowPrintTicketValidationStatus : int32_t
    {
        Resolved = 0,
        Conflicting = 1,
        Invalid = 2,
    };
    struct IPrintSupportCommunicationErrorDetectedEventArgs;
    struct IPrintSupportExtensionSession;
    struct IPrintSupportExtensionSession2;
    struct IPrintSupportExtensionSession3;
    struct IPrintSupportExtensionTriggerDetails;
    struct IPrintSupportIppCommunicationConfiguration;
    struct IPrintSupportIppCommunicationTimeouts;
    struct IPrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2;
    struct IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3;
    struct IPrintSupportPrintDeviceCapabilitiesUpdatePolicy;
    struct IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics;
    struct IPrintSupportPrintTicketElement;
    struct IPrintSupportPrintTicketValidationRequestedEventArgs;
    struct IPrintSupportPrinterSelectedEventArgs;
    struct IPrintSupportSessionInfo;
    struct IPrintSupportSettingsActivatedEventArgs;
    struct IPrintSupportSettingsUISession;
    struct PrintSupportCommunicationErrorDetectedEventArgs;
    struct PrintSupportExtensionSession;
    struct PrintSupportExtensionTriggerDetails;
    struct PrintSupportIppCommunicationConfiguration;
    struct PrintSupportIppCommunicationTimeouts;
    struct PrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct PrintSupportPrintDeviceCapabilitiesUpdatePolicy;
    struct PrintSupportPrintTicketElement;
    struct PrintSupportPrintTicketValidationRequestedEventArgs;
    struct PrintSupportPrinterSelectedEventArgs;
    struct PrintSupportSessionInfo;
    struct PrintSupportSettingsActivatedEventArgs;
    struct PrintSupportSettingsUISession;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportCommunicationErrorDetectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationTimeouts>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IppCommunicationErrorKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::IppPrinterCommunicationKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportCommunicationErrorDetectedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportCommunicationErrorDetectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationConfiguration> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportIppCommunicationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationTimeouts> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportIppCommunicationTimeouts";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintDeviceCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintDeviceCapabilitiesUpdatePolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintTicketElement";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintTicketValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrinterSelectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSessionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession> = L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsUISession";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IppCommunicationErrorKind> = L"Windows.Graphics.Printing.PrintSupport.IppCommunicationErrorKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IppPrinterCommunicationKind> = L"Windows.Graphics.Printing.PrintSupport.IppPrinterCommunicationKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind> = L"Windows.Graphics.Printing.PrintSupport.SettingsLaunchKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus> = L"Windows.Graphics.Printing.PrintSupport.WorkflowPrintTicketValidationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportCommunicationErrorDetectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionSession2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionSession3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportIppCommunicationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportIppCommunicationTimeouts";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesUpdatePolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintTicketElement";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintTicketValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrinterSelectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSessionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsActivatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession> = L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsUISession";
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs>{ 0x9C90151E,0xAD1B,0x5081,{ 0xA4,0x91,0x4A,0x2D,0x94,0x24,0x4F,0x2D } }; // 9C90151E-AD1B-5081-A491-4A2D94244F2D
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>{ 0xEEA45F1A,0xF4C6,0x54B3,{ 0xA0,0xB8,0xA5,0x59,0x83,0x9A,0xA4,0xC3 } }; // EEA45F1A-F4C6-54B3-A0B8-A559839AA4C3
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2>{ 0x10FA8C11,0x6DE8,0x5765,{ 0x8F,0xCF,0xE7,0x16,0xE0,0xF2,0x7E,0xD1 } }; // 10FA8C11-6DE8-5765-8FCF-E716E0F27ED1
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3>{ 0x0D1B755D,0x1273,0x5E14,{ 0x81,0xD3,0xB6,0xBB,0x58,0x2B,0x9E,0xD8 } }; // 0D1B755D-1273-5E14-81D3-B6BB582B9ED8
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>{ 0xAE083711,0x9B09,0x55D1,{ 0xA0,0xAE,0x2A,0x14,0xC5,0xF8,0x3D,0x6A } }; // AE083711-9B09-55D1-A0AE-2A14C5F83D6A
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration>{ 0xDBC36E0B,0x2D90,0x53B9,{ 0x90,0xD2,0x93,0xFA,0xF3,0x0D,0xAF,0xDD } }; // DBC36E0B-2D90-53B9-90D2-93FAF30DAFDD
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts>{ 0xA3B2DE71,0x564C,0x5806,{ 0xA1,0xA9,0xC6,0x04,0x3C,0xA5,0xD3,0x73 } }; // A3B2DE71-564C-5806-A1A9-C6043CA5D373
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ 0x15969BF0,0x9028,0x5722,{ 0x8A,0x37,0x7D,0x7C,0x34,0xB4,0x1D,0xD6 } }; // 15969BF0-9028-5722-8A37-7D7C34B41DD6
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2>{ 0x469DF9E7,0xFD07,0x5EEB,{ 0xA0,0x7D,0x9F,0xCC,0x67,0xF0,0x89,0xBA } }; // 469DF9E7-FD07-5EEB-A07D-9FCC67F089BA
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3>{ 0xD4E9B3FC,0x8094,0x5CB6,{ 0xA3,0x43,0xCE,0x7A,0x97,0x18,0x7B,0x45 } }; // D4E9B3FC-8094-5CB6-A343-CE7A97187B45
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy>{ 0x5F5FC025,0x8C35,0x5529,{ 0x80,0x38,0x8C,0xDC,0x36,0x34,0xBB,0xCD } }; // 5F5FC025-8C35-5529-8038-8CDC3634BBCD
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics>{ 0x3D9E1A70,0x7C39,0x551F,{ 0xAA,0x1F,0xF8,0xCA,0x35,0xB3,0x11,0x9E } }; // 3D9E1A70-7C39-551F-AA1F-F8CA35B3119E
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement>{ 0x4B2A4489,0x730D,0x5BE7,{ 0x80,0xE6,0x83,0x32,0x94,0x1A,0xBF,0x13 } }; // 4B2A4489-730D-5BE7-80E6-8332941ABF13
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>{ 0x338E4E69,0xDB55,0x55C7,{ 0x83,0x38,0xEF,0x64,0x68,0x0A,0x8F,0x90 } }; // 338E4E69-DB55-55C7-8338-EF64680A8F90
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs>{ 0x7B1CB7D9,0xA8A4,0x5C09,{ 0xAD,0xB2,0x66,0x16,0x5F,0x81,0x79,0x77 } }; // 7B1CB7D9-A8A4-5C09-ADB2-66165F817977
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>{ 0x852149AF,0x777D,0x53E9,{ 0x9E,0xE9,0x45,0xD3,0xF4,0xB5,0xBE,0x9C } }; // 852149AF-777D-53E9-9EE9-45D3F4B5BE9C
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>{ 0x1E1B565E,0xA013,0x55EA,{ 0x9B,0x8C,0xEE,0xA3,0x9D,0x9F,0xB6,0xC1 } }; // 1E1B565E-A013-55EA-9B8C-EEA39D9FB6C1
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>{ 0xC6DA2251,0x83C3,0x55E4,{ 0xA0,0xF8,0x5D,0xE8,0xB0,0x62,0xAD,0xBF } }; // C6DA2251-83C3-55E4-A0F8-5DE8B062ADBF
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportCommunicationErrorDetectedEventArgs>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationConfiguration>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportIppCommunicationTimeouts>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>{ using type = winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession; };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_CommunicationConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
            virtual int32_t __stdcall add_PrintTicketValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintTicketValidationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PrintDeviceCapabilitiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintDeviceCapabilitiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrinterSelected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrinterSelected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CommunicationErrorDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommunicationErrorDetected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommunicationKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanModifyTimeouts(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IppAttributeTimeouts(void**) noexcept = 0;
            virtual int32_t __stdcall get_IppJobTimeouts(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ConnectTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_SendTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_SendTimeout(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ReceiveTimeout(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReceiveTimeout(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentPrintDeviceCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintDeviceCapabilities(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSupportedPdlPassthroughContentTypes(void*) noexcept = 0;
            virtual int32_t __stdcall get_ResourceLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentPrintDeviceResources(void**) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintDeviceResources(void*) noexcept = 0;
            virtual int32_t __stdcall SetPrintDeviceCapabilitiesUpdatePolicy(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CommunicationConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePeriodicRefresh(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePrintJobRefresh(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalName(void**) noexcept = 0;
            virtual int32_t __stdcall put_LocalName(void*) noexcept = 0;
            virtual int32_t __stdcall get_NamespaceUri(void**) noexcept = 0;
            virtual int32_t __stdcall put_NamespaceUri(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall SetPrintTicketValidationStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrintTicket(void*) noexcept = 0;
            virtual int32_t __stdcall SetAdditionalFeatures(void*) noexcept = 0;
            virtual int32_t __stdcall SetAdditionalParameters(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowedAdditionalFeaturesAndParametersCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetAdaptiveCard(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionPrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintTicket(void*) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportCommunicationErrorDetectedEventArgs
    {
        [[nodiscard]] auto ErrorKind() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto CommunicationConfiguration() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportCommunicationErrorDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportCommunicationErrorDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession
    {
        [[nodiscard]] auto Printer() const;
        auto PrintTicketValidationRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        using PrintTicketValidationRequested_revoker = impl::event_revoker<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintTicketValidationRequested>;
        [[nodiscard]] PrintTicketValidationRequested_revoker PrintTicketValidationRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        auto PrintTicketValidationRequested(winrt::event_token const& token) const noexcept;
        auto PrintDeviceCapabilitiesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        using PrintDeviceCapabilitiesChanged_revoker = impl::event_revoker<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintDeviceCapabilitiesChanged>;
        [[nodiscard]] PrintDeviceCapabilitiesChanged_revoker PrintDeviceCapabilitiesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        auto PrintDeviceCapabilitiesChanged(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession2
    {
        auto PrinterSelected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs> const& handler) const;
        using PrinterSelected_revoker = impl::event_revoker<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2, &impl::abi_t<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2>::remove_PrinterSelected>;
        [[nodiscard]] PrinterSelected_revoker PrinterSelected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs> const& handler) const;
        auto PrinterSelected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession3
    {
        auto CommunicationErrorDetected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportCommunicationErrorDetectedEventArgs> const& handler) const;
        using CommunicationErrorDetected_revoker = impl::event_revoker<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3, &impl::abi_t<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3>::remove_CommunicationErrorDetected>;
        [[nodiscard]] CommunicationErrorDetected_revoker CommunicationErrorDetected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportCommunicationErrorDetectedEventArgs> const& handler) const;
        auto CommunicationErrorDetected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession3>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails
    {
        [[nodiscard]] auto Session() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportIppCommunicationConfiguration
    {
        [[nodiscard]] auto CommunicationKind() const;
        [[nodiscard]] auto CanModifyTimeouts() const;
        [[nodiscard]] auto IppAttributeTimeouts() const;
        [[nodiscard]] auto IppJobTimeouts() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationConfiguration>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportIppCommunicationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportIppCommunicationTimeouts
    {
        [[nodiscard]] auto ConnectTimeout() const;
        auto ConnectTimeout(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto SendTimeout() const;
        auto SendTimeout(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ReceiveTimeout() const;
        auto ReceiveTimeout(winrt::Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportIppCommunicationTimeouts>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportIppCommunicationTimeouts<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs
    {
        auto GetCurrentPrintDeviceCapabilities() const;
        auto UpdatePrintDeviceCapabilities(winrt::Windows::Data::Xml::Dom::XmlDocument const& updatedPdc) const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2
    {
        auto SetSupportedPdlPassthroughContentTypes(param::iterable<hstring> const& supportedPdlContentTypes) const;
        [[nodiscard]] auto ResourceLanguage() const;
        auto GetCurrentPrintDeviceResources() const;
        auto UpdatePrintDeviceResources(winrt::Windows::Data::Xml::Dom::XmlDocument const& updatedPdr) const;
        auto SetPrintDeviceCapabilitiesUpdatePolicy(winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy const& updatePolicy) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3
    {
        [[nodiscard]] auto CommunicationConfiguration() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesUpdatePolicy
    {
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicy>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesUpdatePolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics
    {
        auto CreatePeriodicRefresh(winrt::Windows::Foundation::TimeSpan const& updatePeriod) const;
        auto CreatePrintJobRefresh(uint32_t numberOfJobs) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesUpdatePolicyStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketElement
    {
        [[nodiscard]] auto LocalName() const;
        auto LocalName(param::hstring const& value) const;
        [[nodiscard]] auto NamespaceUri() const;
        auto NamespaceUri(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketElement>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketElement<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs
    {
        [[nodiscard]] auto PrintTicket() const;
        auto SetPrintTicketValidationStatus(winrt::Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus const& status) const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrinterSelectedEventArgs
    {
        [[nodiscard]] auto SourceAppInfo() const;
        [[nodiscard]] auto PrintTicket() const;
        auto PrintTicket(winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& value) const;
        auto SetAdditionalFeatures(param::iterable<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement> const& features) const;
        auto SetAdditionalParameters(param::iterable<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement> const& parameters) const;
        [[nodiscard]] auto AllowedAdditionalFeaturesAndParametersCount() const;
        auto SetAdaptiveCard(winrt::Windows::UI::Shell::IAdaptiveCard const& adaptiveCard) const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportPrinterSelectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrinterSelectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo
    {
        [[nodiscard]] auto SourceAppInfo() const;
        [[nodiscard]] auto Printer() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs
    {
        [[nodiscard]] auto Session() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession
    {
        [[nodiscard]] auto SessionPrintTicket() const;
        [[nodiscard]] auto DocumentTitle() const;
        [[nodiscard]] auto LaunchKind() const;
        auto UpdatePrintTicket(winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket) const;
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>;
    };
}
#endif
