// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Calls_Background_0_H
#define WINRT_Windows_ApplicationModel_Calls_Background_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background
{
    enum class PhoneCallBlockedReason : int32_t
    {
        InCallBlockingList = 0,
        PrivateNumber = 1,
        UnknownNumber = 2,
    };
    enum class PhoneIncomingCallDismissedReason : int32_t
    {
        Unknown = 0,
        CallRejected = 1,
        TextReply = 2,
        ConnectionLost = 3,
    };
    enum class PhoneLineChangeKind : int32_t
    {
        Added = 0,
        Removed = 1,
        PropertiesChanged = 2,
    };
    enum class PhoneLineProperties : uint32_t
    {
        None = 0,
        BrandingOptions = 0x1,
        CanDial = 0x2,
        CellularDetails = 0x4,
        DisplayColor = 0x8,
        DisplayName = 0x10,
        NetworkName = 0x20,
        NetworkState = 0x40,
        Transport = 0x80,
        Voicemail = 0x100,
    };
    enum class PhoneTriggerType : int32_t
    {
        NewVoicemailMessage = 0,
        CallHistoryChanged = 1,
        LineChanged = 2,
        AirplaneModeDisabledForEmergencyCall = 3,
        CallOriginDataRequest = 4,
        CallBlocked = 5,
        IncomingCallDismissed = 6,
        IncomingCallNotification = 7,
    };
    struct IPhoneCallBlockedTriggerDetails;
    struct IPhoneCallOriginDataRequestTriggerDetails;
    struct IPhoneIncomingCallDismissedTriggerDetails;
    struct IPhoneIncomingCallNotificationTriggerDetails;
    struct IPhoneLineChangedTriggerDetails;
    struct IPhoneNewVoicemailMessageTriggerDetails;
    struct PhoneCallBlockedTriggerDetails;
    struct PhoneCallOriginDataRequestTriggerDetails;
    struct PhoneIncomingCallDismissedTriggerDetails;
    struct PhoneIncomingCallNotificationTriggerDetails;
    struct PhoneLineChangedTriggerDetails;
    struct PhoneNewVoicemailMessageTriggerDetails;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallNotificationTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineProperties>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallDismissedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallNotificationTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason> = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason> = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallDismissedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind> = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangeKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineProperties> = L"Windows.ApplicationModel.Calls.Background.PhoneLineProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType> = L"Windows.ApplicationModel.Calls.Background.PhoneTriggerType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneIncomingCallDismissedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneIncomingCallNotificationTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ 0xA4A690A2,0xE4C1,0x427F,{ 0x86,0x4E,0xE4,0x70,0x47,0x7D,0xDB,0x67 } }; // A4A690A2-E4C1-427F-864E-E470477DDB67
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ 0x6E9B5B3F,0xC54B,0x4E82,{ 0x4C,0xC9,0xE3,0x29,0xA4,0x18,0x45,0x92 } }; // 6E9B5B3F-C54B-4E82-4CC9-E329A4184592
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>{ 0xBAD30276,0x83B6,0x5732,{ 0x9C,0x38,0x0C,0x20,0x65,0x46,0x19,0x6A } }; // BAD30276-83B6-5732-9C38-0C206546196A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails>{ 0x2B0E6044,0x9B32,0x5D42,{ 0x82,0x22,0xD2,0x81,0x2E,0x39,0xFB,0x21 } }; // 2B0E6044-9B32-5D42-8222-D2812E39FB21
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ 0xC6D321E7,0xD11D,0x40D8,{ 0xB2,0xB7,0xE4,0x0A,0x01,0xD6,0x62,0x49 } }; // C6D321E7-D11D-40D8-B2B7-E40A01D66249
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ 0x13A8C01B,0xB831,0x48D3,{ 0x8B,0xA9,0x8D,0x22,0xA6,0x58,0x0D,0xCF } }; // 13A8C01B-B831-48D3-8BA9-8D22A6580DCF
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallNotificationTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails; };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CallBlockedReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DismissalTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TextReplyMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CallId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasLinePropertyChanged(uint32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_VoicemailCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OperatorMessage(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails
    {
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto CallBlockedReason() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails
    {
        [[nodiscard]] auto RequestId() const;
        [[nodiscard]] auto PhoneNumber() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails
    {
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto DismissalTime() const;
        [[nodiscard]] auto TextReplyMessage() const;
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallNotificationTriggerDetails
    {
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto CallId() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallNotificationTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallNotificationTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails
    {
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto ChangeType() const;
        auto HasLinePropertyChanged(winrt::Windows::ApplicationModel::Calls::Background::PhoneLineProperties const& lineProperty) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails
    {
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto VoicemailCount() const;
        [[nodiscard]] auto OperatorMessage() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>;
    };
}
#endif
