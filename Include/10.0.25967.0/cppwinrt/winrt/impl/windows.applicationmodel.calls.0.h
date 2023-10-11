// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Calls_0_H
#define WINRT_Windows_ApplicationModel_Calls_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts
{
    struct Contact;
    struct ContactPhone;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls
{
    enum class CellularDtmfMode : int32_t
    {
        Continuous = 0,
        Burst = 1,
    };
    enum class DtmfKey : int32_t
    {
        D0 = 0,
        D1 = 1,
        D2 = 2,
        D3 = 3,
        D4 = 4,
        D5 = 5,
        D6 = 6,
        D7 = 7,
        D8 = 8,
        D9 = 9,
        Star = 10,
        Pound = 11,
    };
    enum class DtmfToneAudioPlayback : int32_t
    {
        Play = 0,
        DoNotPlay = 1,
    };
    enum class PhoneAudioRoutingEndpoint : int32_t
    {
        Default = 0,
        Bluetooth = 1,
        Speakerphone = 2,
    };
    enum class PhoneCallAudioDevice : int32_t
    {
        Unknown = 0,
        LocalDevice = 1,
        RemoteDevice = 2,
    };
    enum class PhoneCallDirection : int32_t
    {
        Unknown = 0,
        Incoming = 1,
        Outgoing = 2,
    };
    enum class PhoneCallHistoryEntryMedia : int32_t
    {
        Audio = 0,
        Video = 1,
    };
    enum class PhoneCallHistoryEntryOtherAppReadAccess : int32_t
    {
        Full = 0,
        SystemOnly = 1,
    };
    enum class PhoneCallHistoryEntryQueryDesiredMedia : uint32_t
    {
        None = 0,
        Audio = 0x1,
        Video = 0x2,
        All = 0xffffffff,
    };
    enum class PhoneCallHistoryEntryRawAddressKind : int32_t
    {
        PhoneNumber = 0,
        Custom = 1,
    };
    enum class PhoneCallHistorySourceIdKind : int32_t
    {
        CellularPhoneLineId = 0,
        PackageFamilyName = 1,
    };
    enum class PhoneCallHistoryStoreAccessType : int32_t
    {
        AppEntriesReadWrite = 0,
        AllEntriesLimitedReadWrite = 1,
        AllEntriesReadWrite = 2,
    };
    enum class PhoneCallMedia : int32_t
    {
        Audio = 0,
        AudioAndVideo = 1,
        AudioAndRealTimeText = 2,
    };
    enum class PhoneCallOperationStatus : int32_t
    {
        Succeeded = 0,
        OtherFailure = 1,
        TimedOut = 2,
        ConnectionLost = 3,
        InvalidCallState = 4,
    };
    enum class PhoneCallStatus : int32_t
    {
        Lost = 0,
        Incoming = 1,
        Dialing = 2,
        Talking = 3,
        Held = 4,
        Ended = 5,
    };
    enum class PhoneLineNetworkOperatorDisplayTextLocation : int32_t
    {
        Default = 0,
        Tile = 1,
        Dialer = 2,
        InCallUI = 3,
    };
    enum class PhoneLineOperationStatus : int32_t
    {
        Succeeded = 0,
        OtherFailure = 1,
        TimedOut = 2,
        ConnectionLost = 3,
        InvalidCallState = 4,
    };
    enum class PhoneLineTransport : int32_t
    {
        Cellular = 0,
        VoipApp = 1,
        Bluetooth = 2,
    };
    enum class PhoneLineWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopped = 3,
    };
    enum class PhoneNetworkState : int32_t
    {
        Unknown = 0,
        NoSignal = 1,
        Deregistered = 2,
        Denied = 3,
        Searching = 4,
        Home = 5,
        RoamingInternational = 6,
        RoamingDomestic = 7,
    };
    enum class PhoneSimState : int32_t
    {
        Unknown = 0,
        PinNotRequired = 1,
        PinUnlocked = 2,
        PinLocked = 3,
        PukLocked = 4,
        NotInserted = 5,
        Invalid = 6,
        Disabled = 7,
    };
    enum class PhoneVoicemailType : int32_t
    {
        None = 0,
        Traditional = 1,
        Visual = 2,
    };
    enum class TransportDeviceAudioRoutingStatus : int32_t
    {
        Unknown = 0,
        CanRouteToLocalDevice = 1,
        CannotRouteToLocalDevice = 2,
    };
    enum class VoipPhoneCallMedia : uint32_t
    {
        None = 0,
        Audio = 0x1,
        Video = 0x2,
    };
    enum class VoipPhoneCallRejectReason : int32_t
    {
        UserIgnored = 0,
        TimedOut = 1,
        OtherIncomingCall = 2,
        EmergencyCallExists = 3,
        InvalidCallState = 4,
    };
    enum class VoipPhoneCallResourceReservationStatus : int32_t
    {
        Success = 0,
        ResourcesNotAvailable = 1,
    };
    enum class VoipPhoneCallState : int32_t
    {
        Ended = 0,
        Held = 1,
        Active = 2,
        Incoming = 3,
        Outgoing = 4,
    };
    struct ICallAnswerEventArgs;
    struct ICallRejectEventArgs;
    struct ICallStateChangeEventArgs;
    struct ILockScreenCallEndCallDeferral;
    struct ILockScreenCallEndRequestedEventArgs;
    struct ILockScreenCallUI;
    struct IMuteChangeEventArgs;
    struct IPhoneCall;
    struct IPhoneCallBlockingStatics;
    struct IPhoneCallHistoryEntry;
    struct IPhoneCallHistoryEntryAddress;
    struct IPhoneCallHistoryEntryAddressFactory;
    struct IPhoneCallHistoryEntryQueryOptions;
    struct IPhoneCallHistoryEntryReader;
    struct IPhoneCallHistoryManagerForUser;
    struct IPhoneCallHistoryManagerStatics;
    struct IPhoneCallHistoryManagerStatics2;
    struct IPhoneCallHistoryStore;
    struct IPhoneCallInfo;
    struct IPhoneCallManagerStatics;
    struct IPhoneCallManagerStatics2;
    struct IPhoneCallStatics;
    struct IPhoneCallStore;
    struct IPhoneCallVideoCapabilities;
    struct IPhoneCallVideoCapabilitiesManagerStatics;
    struct IPhoneCallsResult;
    struct IPhoneDialOptions;
    struct IPhoneLine;
    struct IPhoneLine2;
    struct IPhoneLine3;
    struct IPhoneLineCellularDetails;
    struct IPhoneLineConfiguration;
    struct IPhoneLineDialResult;
    struct IPhoneLineStatics;
    struct IPhoneLineTransportDevice;
    struct IPhoneLineTransportDevice2;
    struct IPhoneLineTransportDeviceStatics;
    struct IPhoneLineWatcher;
    struct IPhoneLineWatcherEventArgs;
    struct IPhoneVoicemail;
    struct IVoipCallCoordinator;
    struct IVoipCallCoordinator2;
    struct IVoipCallCoordinator3;
    struct IVoipCallCoordinator4;
    struct IVoipCallCoordinatorStatics;
    struct IVoipPhoneCall;
    struct IVoipPhoneCall2;
    struct IVoipPhoneCall3;
    struct CallAnswerEventArgs;
    struct CallRejectEventArgs;
    struct CallStateChangeEventArgs;
    struct LockScreenCallEndCallDeferral;
    struct LockScreenCallEndRequestedEventArgs;
    struct LockScreenCallUI;
    struct MuteChangeEventArgs;
    struct PhoneCall;
    struct PhoneCallBlocking;
    struct PhoneCallHistoryEntry;
    struct PhoneCallHistoryEntryAddress;
    struct PhoneCallHistoryEntryQueryOptions;
    struct PhoneCallHistoryEntryReader;
    struct PhoneCallHistoryManager;
    struct PhoneCallHistoryManagerForUser;
    struct PhoneCallHistoryStore;
    struct PhoneCallInfo;
    struct PhoneCallManager;
    struct PhoneCallStore;
    struct PhoneCallVideoCapabilities;
    struct PhoneCallVideoCapabilitiesManager;
    struct PhoneCallsResult;
    struct PhoneDialOptions;
    struct PhoneLine;
    struct PhoneLineCellularDetails;
    struct PhoneLineConfiguration;
    struct PhoneLineDialResult;
    struct PhoneLineTransportDevice;
    struct PhoneLineWatcher;
    struct PhoneLineWatcherEventArgs;
    struct PhoneVoicemail;
    struct VoipCallCoordinator;
    struct VoipPhoneCall;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCall>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLine>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLine2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLine3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCall>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallBlocking>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallsResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneDialOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLine>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineCellularDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineDialResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneVoicemail>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::CellularDtmfMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::DtmfKey>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::DtmfToneAudioPlayback>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallAudioDevice>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallDirection>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallMedia>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallOperationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneCallStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineOperationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineTransport>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneNetworkState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneSimState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::PhoneVoicemailType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::TransportDeviceAudioRoutingStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallState>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs> = L"Windows.ApplicationModel.Calls.CallAnswerEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs> = L"Windows.ApplicationModel.Calls.CallRejectEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> = L"Windows.ApplicationModel.Calls.CallStateChangeEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral> = L"Windows.ApplicationModel.Calls.LockScreenCallEndCallDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> = L"Windows.ApplicationModel.Calls.LockScreenCallEndRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI> = L"Windows.ApplicationModel.Calls.LockScreenCallUI";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs> = L"Windows.ApplicationModel.Calls.MuteChangeEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCall> = L"Windows.ApplicationModel.Calls.PhoneCall";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallBlocking> = L"Windows.ApplicationModel.Calls.PhoneCallBlocking";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntry";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryAddress";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryReader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManager> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryManagerForUser";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStore> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallInfo> = L"Windows.ApplicationModel.Calls.PhoneCallInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallManager> = L"Windows.ApplicationModel.Calls.PhoneCallManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallStore> = L"Windows.ApplicationModel.Calls.PhoneCallStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities> = L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilities";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager> = L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilitiesManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallsResult> = L"Windows.ApplicationModel.Calls.PhoneCallsResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneDialOptions> = L"Windows.ApplicationModel.Calls.PhoneDialOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLine> = L"Windows.ApplicationModel.Calls.PhoneLine";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineCellularDetails> = L"Windows.ApplicationModel.Calls.PhoneLineCellularDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineConfiguration> = L"Windows.ApplicationModel.Calls.PhoneLineConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineDialResult> = L"Windows.ApplicationModel.Calls.PhoneLineDialResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice> = L"Windows.ApplicationModel.Calls.PhoneLineTransportDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher> = L"Windows.ApplicationModel.Calls.PhoneLineWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> = L"Windows.ApplicationModel.Calls.PhoneLineWatcherEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneVoicemail> = L"Windows.ApplicationModel.Calls.PhoneVoicemail";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator> = L"Windows.ApplicationModel.Calls.VoipCallCoordinator";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall> = L"Windows.ApplicationModel.Calls.VoipPhoneCall";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::CellularDtmfMode> = L"Windows.ApplicationModel.Calls.CellularDtmfMode";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::DtmfKey> = L"Windows.ApplicationModel.Calls.DtmfKey";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::DtmfToneAudioPlayback> = L"Windows.ApplicationModel.Calls.DtmfToneAudioPlayback";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint> = L"Windows.ApplicationModel.Calls.PhoneAudioRoutingEndpoint";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallAudioDevice> = L"Windows.ApplicationModel.Calls.PhoneCallAudioDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallDirection> = L"Windows.ApplicationModel.Calls.PhoneCallDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryMedia";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryOtherAppReadAccess";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryDesiredMedia";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryRawAddressKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind> = L"Windows.ApplicationModel.Calls.PhoneCallHistorySourceIdKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType> = L"Windows.ApplicationModel.Calls.PhoneCallHistoryStoreAccessType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallMedia> = L"Windows.ApplicationModel.Calls.PhoneCallMedia";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallOperationStatus> = L"Windows.ApplicationModel.Calls.PhoneCallOperationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneCallStatus> = L"Windows.ApplicationModel.Calls.PhoneCallStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation> = L"Windows.ApplicationModel.Calls.PhoneLineNetworkOperatorDisplayTextLocation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineOperationStatus> = L"Windows.ApplicationModel.Calls.PhoneLineOperationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineTransport> = L"Windows.ApplicationModel.Calls.PhoneLineTransport";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherStatus> = L"Windows.ApplicationModel.Calls.PhoneLineWatcherStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneNetworkState> = L"Windows.ApplicationModel.Calls.PhoneNetworkState";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneSimState> = L"Windows.ApplicationModel.Calls.PhoneSimState";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::PhoneVoicemailType> = L"Windows.ApplicationModel.Calls.PhoneVoicemailType";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::TransportDeviceAudioRoutingStatus> = L"Windows.ApplicationModel.Calls.TransportDeviceAudioRoutingStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia> = L"Windows.ApplicationModel.Calls.VoipPhoneCallMedia";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason> = L"Windows.ApplicationModel.Calls.VoipPhoneCallRejectReason";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> = L"Windows.ApplicationModel.Calls.VoipPhoneCallResourceReservationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::VoipPhoneCallState> = L"Windows.ApplicationModel.Calls.VoipPhoneCallState";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs> = L"Windows.ApplicationModel.Calls.ICallAnswerEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs> = L"Windows.ApplicationModel.Calls.ICallRejectEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs> = L"Windows.ApplicationModel.Calls.ICallStateChangeEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral> = L"Windows.ApplicationModel.Calls.ILockScreenCallEndCallDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs> = L"Windows.ApplicationModel.Calls.ILockScreenCallEndRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI> = L"Windows.ApplicationModel.Calls.ILockScreenCallUI";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs> = L"Windows.ApplicationModel.Calls.IMuteChangeEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCall> = L"Windows.ApplicationModel.Calls.IPhoneCall";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics> = L"Windows.ApplicationModel.Calls.IPhoneCallBlockingStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntry";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddress";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddressFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryQueryOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryReader";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerForUser";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore> = L"Windows.ApplicationModel.Calls.IPhoneCallHistoryStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo> = L"Windows.ApplicationModel.Calls.IPhoneCallInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics> = L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2> = L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallStatics> = L"Windows.ApplicationModel.Calls.IPhoneCallStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallStore> = L"Windows.ApplicationModel.Calls.IPhoneCallStore";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities> = L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilities";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics> = L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilitiesManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult> = L"Windows.ApplicationModel.Calls.IPhoneCallsResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions> = L"Windows.ApplicationModel.Calls.IPhoneDialOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine> = L"Windows.ApplicationModel.Calls.IPhoneLine";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine2> = L"Windows.ApplicationModel.Calls.IPhoneLine2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine3> = L"Windows.ApplicationModel.Calls.IPhoneLine3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails> = L"Windows.ApplicationModel.Calls.IPhoneLineCellularDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration> = L"Windows.ApplicationModel.Calls.IPhoneLineConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult> = L"Windows.ApplicationModel.Calls.IPhoneLineDialResult";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineStatics> = L"Windows.ApplicationModel.Calls.IPhoneLineStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice> = L"Windows.ApplicationModel.Calls.IPhoneLineTransportDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2> = L"Windows.ApplicationModel.Calls.IPhoneLineTransportDevice2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics> = L"Windows.ApplicationModel.Calls.IPhoneLineTransportDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher> = L"Windows.ApplicationModel.Calls.IPhoneLineWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs> = L"Windows.ApplicationModel.Calls.IPhoneLineWatcherEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail> = L"Windows.ApplicationModel.Calls.IPhoneVoicemail";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator> = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2> = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3> = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4> = L"Windows.ApplicationModel.Calls.IVoipCallCoordinator4";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics> = L"Windows.ApplicationModel.Calls.IVoipCallCoordinatorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall> = L"Windows.ApplicationModel.Calls.IVoipPhoneCall";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2> = L"Windows.ApplicationModel.Calls.IVoipPhoneCall2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3> = L"Windows.ApplicationModel.Calls.IVoipPhoneCall3";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ 0xFD789617,0x2DD7,0x4C8C,{ 0xB2,0xBD,0x95,0xD1,0x7A,0x5B,0xB7,0x33 } }; // FD789617-2DD7-4C8C-B2BD-95D17A5BB733
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ 0xDA47FAD7,0x13D4,0x4D92,{ 0xA1,0xC2,0xB7,0x78,0x11,0xEE,0x37,0xEC } }; // DA47FAD7-13D4-4D92-A1C2-B77811EE37EC
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ 0xEAB2349E,0x66F5,0x47F9,{ 0x9F,0xB5,0x45,0x9C,0x51,0x98,0xC7,0x20 } }; // EAB2349E-66F5-47F9-9FB5-459C5198C720
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ 0x2DD7ED0D,0x98ED,0x4041,{ 0x96,0x32,0x50,0xFF,0x81,0x2B,0x77,0x3F } }; // 2DD7ED0D-98ED-4041-9632-50FF812B773F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ 0x8190A363,0x6F27,0x46E9,{ 0xAE,0xB6,0xC0,0xAE,0x83,0xE4,0x7D,0xC7 } }; // 8190A363-6F27-46E9-AEB6-C0AE83E47DC7
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>{ 0xC596FD8D,0x73C9,0x4A14,{ 0xB0,0x21,0xEC,0x1C,0x50,0xA3,0xB7,0x27 } }; // C596FD8D-73C9-4A14-B021-EC1C50A3B727
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ 0x8585E159,0x0C41,0x432C,{ 0x81,0x4D,0xC5,0xF1,0xFD,0xF5,0x30,0xBE } }; // 8585E159-0C41-432C-814D-C5F1FDF530BE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCall>{ 0xC14ED0F8,0xC17D,0x59D2,{ 0x96,0x28,0x66,0xE5,0x45,0xB6,0xCD,0x21 } }; // C14ED0F8-C17D-59D2-9628-66E545B6CD21
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ 0x19646F84,0x2B79,0x26F1,{ 0xA4,0x6F,0x69,0x4B,0xE0,0x43,0xF3,0x13 } }; // 19646F84-2B79-26F1-A46F-694BE043F313
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ 0xFAB0E129,0x32A4,0x4B85,{ 0x83,0xD1,0xF9,0x0D,0x8C,0x23,0xA8,0x57 } }; // FAB0E129-32A4-4B85-83D1-F90D8C23A857
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ 0x30F159DA,0x3955,0x4042,{ 0x84,0xE6,0x66,0xEE,0xBF,0x82,0xE6,0x7F } }; // 30F159DA-3955-4042-84E6-66EEBF82E67F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ 0xFB0FADBA,0xC7F0,0x4BB6,{ 0x9F,0x6B,0xBA,0x5D,0x73,0x20,0x9A,0xCA } }; // FB0FADBA-C7F0-4BB6-9F6B-BA5D73209ACA
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ 0x9C5FE15C,0x8BED,0x40CA,{ 0xB0,0x6E,0xC4,0xCA,0x8E,0xAE,0x5C,0x87 } }; // 9C5FE15C-8BED-40CA-B06E-C4CA8EAE5C87
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ 0x61ECE4BE,0x8D86,0x479F,{ 0x84,0x04,0xA9,0x84,0x69,0x20,0xFE,0xE6 } }; // 61ECE4BE-8D86-479F-8404-A9846920FEE6
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ 0xD925C523,0xF55F,0x4353,{ 0x9D,0xB4,0x02,0x05,0xA5,0x26,0x5A,0x55 } }; // D925C523-F55F-4353-9DB4-0205A5265A55
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ 0xF5A6DA39,0xB31F,0x4F45,{ 0xAC,0x8E,0x1B,0x08,0x89,0x3C,0x1B,0x50 } }; // F5A6DA39-B31F-4F45-AC8E-1B08893C1B50
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ 0xEFD474F0,0xA2DB,0x4188,{ 0x9E,0x92,0xBC,0x3C,0xFA,0x68,0x13,0xCF } }; // EFD474F0-A2DB-4188-9E92-BC3CFA6813CF
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ 0x2F907DB8,0xB40E,0x422B,{ 0x85,0x45,0xCB,0x19,0x10,0xA6,0x1C,0x52 } }; // 2F907DB8-B40E-422B-8545-CB1910A61C52
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo>{ 0x22B42577,0x3E4D,0x5DC6,{ 0x89,0xC2,0x46,0x9F,0xE5,0xFF,0xC1,0x89 } }; // 22B42577-3E4D-5DC6-89C2-469FE5FFC189
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ 0x60EDAC78,0x78A6,0x4872,{ 0xA3,0xEF,0x98,0x32,0x5E,0xC8,0xB8,0x43 } }; // 60EDAC78-78A6-4872-A3EF-98325EC8B843
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ 0xC7E3C8BC,0x2370,0x431C,{ 0x98,0xFD,0x43,0xBE,0x5F,0x03,0x08,0x6D } }; // C7E3C8BC-2370-431C-98FD-43BE5F03086D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallStatics>{ 0x2218EEAB,0xF60B,0x53E7,{ 0xBA,0x13,0x5A,0xEA,0xFB,0xC2,0x29,0x57 } }; // 2218EEAB-F60B-53E7-BA13-5AEAFBC22957
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallStore>{ 0x5F610748,0x18A6,0x4173,{ 0x86,0xD1,0x28,0xBE,0x9D,0xC6,0x2D,0xBA } }; // 5F610748-18A6-4173-86D1-28BE9DC62DBA
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ 0x02382786,0xB16A,0x4FDB,{ 0xBE,0x3B,0xC4,0x24,0x0E,0x13,0xAD,0x0D } }; // 02382786-B16A-4FDB-BE3B-C4240E13AD0D
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ 0xF3C64B56,0xF00B,0x4A1C,{ 0xA0,0xC6,0xEE,0x19,0x10,0x74,0x9C,0xE7 } }; // F3C64B56-F00B-4A1C-A0C6-EE1910749CE7
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult>{ 0x1BFAD365,0x57CF,0x57DD,{ 0x98,0x6D,0xB0,0x57,0xC9,0x1E,0xAC,0x33 } }; // 1BFAD365-57CF-57DD-986D-B057C91EAC33
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions>{ 0xB639C4B8,0xF06F,0x36CB,{ 0xA8,0x63,0x82,0x37,0x42,0xB5,0xF2,0xD4 } }; // B639C4B8-F06F-36CB-A863-823742B5F2D4
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine>{ 0x27C66F30,0x6A69,0x34CA,{ 0xA2,0xBA,0x65,0x30,0x25,0x30,0xC3,0x11 } }; // 27C66F30-6A69-34CA-A2BA-65302530C311
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine2>{ 0x0167F56A,0x5344,0x5D64,{ 0x8A,0xF3,0xA3,0x1A,0x95,0x0E,0x91,0x6A } }; // 0167F56A-5344-5D64-8AF3-A31A950E916A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLine3>{ 0xE2E33CF7,0x2406,0x57F3,{ 0x82,0x6A,0xE5,0xA5,0xF4,0x0D,0x6F,0xB5 } }; // E2E33CF7-2406-57F3-826A-E5A5F40D6FB5
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ 0x192601D5,0x147C,0x4769,{ 0xB6,0x73,0x98,0xA5,0xEC,0x84,0x26,0xCB } }; // 192601D5-147C-4769-B673-98A5EC8426CB
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ 0xFE265862,0xF64F,0x4312,{ 0xB2,0xA8,0x4E,0x25,0x77,0x21,0xAA,0x95 } }; // FE265862-F64F-4312-B2A8-4E257721AA95
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult>{ 0xE825A30A,0x5C7F,0x546F,{ 0xB9,0x18,0x3A,0xD2,0xFE,0x70,0xFB,0x34 } }; // E825A30A-5C7F-546F-B918-3AD2FE70FB34
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineStatics>{ 0xF38B5F23,0xCEB0,0x404F,{ 0xBC,0xF2,0xBA,0x9F,0x69,0x7D,0x8A,0xDF } }; // F38B5F23-CEB0-404F-BCF2-BA9F697D8ADF
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ 0xEFA8F889,0xCFFA,0x59F4,{ 0x97,0xE4,0x74,0x70,0x5B,0x7D,0xC4,0x90 } }; // EFA8F889-CFFA-59F4-97E4-74705B7DC490
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>{ 0x64C885F2,0xECF4,0x5761,{ 0x8C,0x04,0x3C,0x24,0x8C,0xE6,0x16,0x90 } }; // 64C885F2-ECF4-5761-8C04-3C248CE61690
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ 0x0F3121AC,0xD609,0x51A1,{ 0x96,0xF3,0xFB,0x00,0xD1,0x81,0x92,0x52 } }; // 0F3121AC-D609-51A1-96F3-FB00D1819252
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ 0x8A45CD0A,0x6323,0x44E0,{ 0xA6,0xF6,0x9F,0x21,0xF6,0x4D,0xC9,0x0A } }; // 8A45CD0A-6323-44E0-A6F6-9F21F64DC90A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ 0xD07C753E,0x9E12,0x4A37,{ 0x82,0xB7,0xAD,0x53,0x5D,0xAD,0x6A,0x67 } }; // D07C753E-9E12-4A37-82B7-AD535DAD6A67
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail>{ 0xC9CE77F6,0x6E9F,0x3A8B,{ 0xB7,0x27,0x6E,0x0C,0xF6,0x99,0x82,0x24 } }; // C9CE77F6-6E9F-3A8B-B727-6E0CF6998224
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ 0x4F118BCF,0xE8EF,0x4434,{ 0x9C,0x5F,0xA8,0xD8,0x93,0xFA,0xFE,0x79 } }; // 4F118BCF-E8EF-4434-9C5F-A8D893FAFE79
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ 0xBEB4A9F3,0xC704,0x4234,{ 0x89,0xCE,0xE8,0x8C,0xC0,0xD2,0x8F,0xBE } }; // BEB4A9F3-C704-4234-89CE-E88CC0D28FBE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ 0x338D0CBF,0x9B55,0x4021,{ 0x87,0xCA,0xE6,0x4B,0x9B,0xD6,0x66,0xC7 } }; // 338D0CBF-9B55-4021-87CA-E64B9BD666C7
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ 0x83737239,0x9311,0x468F,{ 0xBB,0x49,0x47,0xE0,0xDF,0xB5,0xD9,0x3E } }; // 83737239-9311-468F-BB49-47E0DFB5D93E
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ 0x7F5D1F2B,0xE04A,0x4D10,{ 0xB3,0x1A,0xA5,0x5C,0x92,0x2C,0xC2,0xFB } }; // 7F5D1F2B-E04A-4D10-B31A-A55C922CC2FB
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>{ 0x6CF1F19A,0x7794,0x4A5A,{ 0x8C,0x68,0xAE,0x87,0x94,0x7A,0x69,0x90 } }; // 6CF1F19A-7794-4A5A-8C68-AE87947A6990
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ 0x741B46E1,0x245F,0x41F3,{ 0x93,0x99,0x31,0x41,0xD2,0x5B,0x52,0xE3 } }; // 741B46E1-245F-41F3-9399-3141D25B52E3
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ 0x0D891522,0xE258,0x4AA9,{ 0x90,0x7A,0x1A,0xA4,0x13,0xC2,0x55,0x23 } }; // 0D891522-E258-4AA9-907A-1AA413C25523
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>{ using type = winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI>{ using type = winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCall>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCall; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStore>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallInfo>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallStore>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallStore; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneCallsResult>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneDialOptions>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLine>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLine; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineCellularDetails>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineConfiguration>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineDialResult>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::PhoneVoicemail>{ using type = winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator>{ using type = winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall>{ using type = winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall; };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AcceptedMedia(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RejectReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Dismiss() noexcept = 0;
            virtual int32_t __stdcall add_EndRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EndRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CallTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_CallTitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Muted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCall>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AudioDeviceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioDeviceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsMutedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsMutedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CallId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMuted(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AudioDevice(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPhoneCallInfo(void**) noexcept = 0;
            virtual int32_t __stdcall GetPhoneCallInfoAsync(void**) noexcept = 0;
            virtual int32_t __stdcall End(int32_t*) noexcept = 0;
            virtual int32_t __stdcall EndAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SendDtmfKey(int32_t, int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SendDtmfKeyAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AcceptIncoming(int32_t*) noexcept = 0;
            virtual int32_t __stdcall AcceptIncomingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Hold(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HoldAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ResumeFromHold(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ResumeFromHoldAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Mute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall MuteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Unmute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall UnmuteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RejectIncoming(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RejectIncomingAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ChangeAudioDevice(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall ChangeAudioDeviceAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BlockUnknownNumbers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BlockUnknownNumbers(bool) noexcept = 0;
            virtual int32_t __stdcall get_BlockPrivateNumbers(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BlockPrivateNumbers(bool) noexcept = 0;
            virtual int32_t __stdcall SetCallBlockingListAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall put_Address(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCallerIdBlocked(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCallerIdBlocked(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEmergency(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEmergency(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsIncoming(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsIncoming(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsMissed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsMissed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRinging(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRinging(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSeen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSeen(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSuppressed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSuppressed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsVoicemail(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVoicemail(bool) noexcept = 0;
            virtual int32_t __stdcall get_Media(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Media(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceId(void**) noexcept = 0;
            virtual int32_t __stdcall put_SourceId(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceIdKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SourceIdKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContactId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactId(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_RawAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_RawAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_RawAddressKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RawAddressKind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredMedia(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredMedia(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SourceIds(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEntryReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetEntryReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteEntryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteEntriesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkEntryAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkEntriesAsSeenAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUnseenCountAsync(void**) noexcept = 0;
            virtual int32_t __stdcall MarkAllAsSeenAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSourcesUnseenCountAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MarkSourcesAsSeenAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IsHoldSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CallDirection(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ShowPhoneCallUI(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CallStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CallStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsCallActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCallIncoming(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowPhoneCallSettingsUI() noexcept = 0;
            virtual int32_t __stdcall RequestStoreAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsEmergencyPhoneNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultLineAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestLineWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsVideoCallingCapable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCapabilitiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OperationStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AllActivePhoneCalls(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall put_Number(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Contact(void**) noexcept = 0;
            virtual int32_t __stdcall put_Contact(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContactPhone(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactPhone(void*) noexcept = 0;
            virtual int32_t __stdcall get_Media(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Media(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AudioEndpoint(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AudioEndpoint(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_LineChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Voicemail(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularDetails(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transport(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_CanDial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsTile(bool*) noexcept = 0;
            virtual int32_t __stdcall get_VideoCallingCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall IsImmediateDialNumberAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Dial(void*, void*) noexcept = 0;
            virtual int32_t __stdcall DialWithOptions(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall EnableTextReply(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransportDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLine3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DialWithResult(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall DialWithResultAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAllActivePhoneCalls(void**) noexcept = 0;
            virtual int32_t __stdcall GetAllActivePhoneCallsAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SimState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SimSlotIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsModemOn(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RegistrationRejectCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNetworkOperatorDisplayText(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsVideoCallingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DialCallStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DialedCall(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transport(int32_t*) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterApp() noexcept = 0;
            virtual int32_t __stdcall RegisterAppForUser(void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterApp() noexcept = 0;
            virtual int32_t __stdcall UnregisterAppForUser(void*) noexcept = 0;
            virtual int32_t __stdcall IsRegistered(bool*) noexcept = 0;
            virtual int32_t __stdcall Connect(bool*) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioRoutingStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_AudioRoutingStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AudioRoutingStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InBandRingingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_InBandRingingEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InBandRingingEnabledChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForPhoneLineTransport(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_LineAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LineRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LineUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LineUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Number(void**) noexcept = 0;
            virtual int32_t __stdcall get_MessageCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DialVoicemailAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReserveCallResourcesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_MuteStateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MuteStateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RequestNewIncomingCall(void*, void*, void*, void*, void*, void*, void*, void*, uint32_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestNewOutgoingCall(void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall NotifyMuted() noexcept = 0;
            virtual int32_t __stdcall NotifyUnmuted() noexcept = 0;
            virtual int32_t __stdcall RequestOutgoingUpgradeToVideoCall(winrt::guid, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestIncomingUpgradeToVideoCall(void*, void*, void*, void*, void*, void*, void*, void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall TerminateCellularCall(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall CancelUpgrade(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetupNewAcceptedCall(void*, void*, void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestNewAppInitiatedCall(void*, void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RequestNewIncomingCallWithContactRemoteId(void*, void*, void*, void*, void*, void*, void*, void*, uint32_t, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReserveOneProcessCallResourcesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_EndRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EndRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HoldRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HoldRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResumeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResumeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AnswerRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AnswerRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RejectRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RejectRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyCallHeld() noexcept = 0;
            virtual int32_t __stdcall NotifyCallActive() noexcept = 0;
            virtual int32_t __stdcall NotifyCallEnded() noexcept = 0;
            virtual int32_t __stdcall get_ContactName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContactName(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_CallMedia(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CallMedia(uint32_t) noexcept = 0;
            virtual int32_t __stdcall NotifyCallReady() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryShowAppUI() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall NotifyCallAccepted(uint32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs
    {
        [[nodiscard]] auto AcceptedMedia() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs
    {
        [[nodiscard]] auto RejectReason() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs
    {
        [[nodiscard]] auto State() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs
    {
        auto GetDeferral() const;
        [[nodiscard]] auto Deadline() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_ILockScreenCallUI
    {
        auto Dismiss() const;
        auto EndRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI, winrt::Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
        using EndRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_EndRequested>;
        [[nodiscard]] EndRequested_revoker EndRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI, winrt::Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
        auto EndRequested(winrt::event_token const& token) const noexcept;
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::LockScreenCallUI, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CallTitle() const;
        auto CallTitle(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallUI<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs
    {
        [[nodiscard]] auto Muted() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCall
    {
        auto StatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneCall>::remove_StatusChanged>;
        [[nodiscard]] StatusChanged_revoker StatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto StatusChanged(winrt::event_token const& token) const noexcept;
        auto AudioDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using AudioDeviceChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneCall>::remove_AudioDeviceChanged>;
        [[nodiscard]] AudioDeviceChanged_revoker AudioDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto AudioDeviceChanged(winrt::event_token const& token) const noexcept;
        auto IsMutedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsMutedChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneCall>::remove_IsMutedChanged>;
        [[nodiscard]] IsMutedChanged_revoker IsMutedChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneCall, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto IsMutedChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CallId() const;
        [[nodiscard]] auto IsMuted() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto AudioDevice() const;
        auto GetPhoneCallInfo() const;
        auto GetPhoneCallInfoAsync() const;
        auto End() const;
        auto EndAsync() const;
        auto SendDtmfKey(winrt::Windows::ApplicationModel::Calls::DtmfKey const& key, winrt::Windows::ApplicationModel::Calls::DtmfToneAudioPlayback const& dtmfToneAudioPlayback) const;
        auto SendDtmfKeyAsync(winrt::Windows::ApplicationModel::Calls::DtmfKey const& key, winrt::Windows::ApplicationModel::Calls::DtmfToneAudioPlayback const& dtmfToneAudioPlayback) const;
        auto AcceptIncoming() const;
        auto AcceptIncomingAsync() const;
        auto Hold() const;
        auto HoldAsync() const;
        auto ResumeFromHold() const;
        auto ResumeFromHoldAsync() const;
        auto Mute() const;
        auto MuteAsync() const;
        auto Unmute() const;
        auto UnmuteAsync() const;
        auto RejectIncoming() const;
        auto RejectIncomingAsync() const;
        auto ChangeAudioDevice(winrt::Windows::ApplicationModel::Calls::PhoneCallAudioDevice const& endpoint) const;
        auto ChangeAudioDeviceAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallAudioDevice const& endpoint) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCall>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCall<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics
    {
        [[nodiscard]] auto BlockUnknownNumbers() const;
        auto BlockUnknownNumbers(bool value) const;
        [[nodiscard]] auto BlockPrivateNumbers() const;
        auto BlockPrivateNumbers(bool value) const;
        auto SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Address() const;
        auto Address(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Duration(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto IsCallerIdBlocked() const;
        auto IsCallerIdBlocked(bool value) const;
        [[nodiscard]] auto IsEmergency() const;
        auto IsEmergency(bool value) const;
        [[nodiscard]] auto IsIncoming() const;
        auto IsIncoming(bool value) const;
        [[nodiscard]] auto IsMissed() const;
        auto IsMissed(bool value) const;
        [[nodiscard]] auto IsRinging() const;
        auto IsRinging(bool value) const;
        [[nodiscard]] auto IsSeen() const;
        auto IsSeen(bool value) const;
        [[nodiscard]] auto IsSuppressed() const;
        auto IsSuppressed(bool value) const;
        [[nodiscard]] auto IsVoicemail() const;
        auto IsVoicemail(bool value) const;
        [[nodiscard]] auto Media() const;
        auto Media(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia const& value) const;
        [[nodiscard]] auto OtherAppReadAccess() const;
        auto OtherAppReadAccess(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess const& value) const;
        [[nodiscard]] auto RemoteId() const;
        auto RemoteId(param::hstring const& value) const;
        [[nodiscard]] auto SourceDisplayName() const;
        [[nodiscard]] auto SourceId() const;
        auto SourceId(param::hstring const& value) const;
        [[nodiscard]] auto SourceIdKind() const;
        auto SourceIdKind(winrt::Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(winrt::Windows::Foundation::DateTime const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress
    {
        [[nodiscard]] auto ContactId() const;
        auto ContactId(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto RawAddress() const;
        auto RawAddress(param::hstring const& value) const;
        [[nodiscard]] auto RawAddressKind() const;
        auto RawAddressKind(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory
    {
        auto Create(param::hstring const& rawAddress, winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions
    {
        [[nodiscard]] auto DesiredMedia() const;
        auto DesiredMedia(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia const& value) const;
        [[nodiscard]] auto SourceIds() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader
    {
        auto ReadBatchAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser
    {
        auto RequestStoreAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics
    {
        auto RequestStoreAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2
    {
        auto GetForUser(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore
    {
        auto GetEntryAsync(param::hstring const& callHistoryEntryId) const;
        auto GetEntryReader() const;
        auto GetEntryReader(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions const& queryOptions) const;
        auto SaveEntryAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto DeleteEntryAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto DeleteEntriesAsync(param::async_iterable<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
        auto MarkEntryAsSeenAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
        auto MarkEntriesAsSeenAsync(param::async_iterable<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
        auto GetUnseenCountAsync() const;
        auto MarkAllAsSeenAsync() const;
        auto GetSourcesUnseenCountAsync(param::async_iterable<hstring> const& sourceIds) const;
        auto MarkSourcesAsSeenAsync(param::async_iterable<hstring> const& sourceIds) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallInfo
    {
        [[nodiscard]] auto LineId() const;
        [[nodiscard]] auto IsHoldSupported() const;
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto CallDirection() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics
    {
        auto ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2
    {
        auto CallStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using CallStateChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>::remove_CallStateChanged>;
        [[nodiscard]] CallStateChanged_revoker CallStateChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto CallStateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto IsCallActive() const;
        [[nodiscard]] auto IsCallIncoming() const;
        auto ShowPhoneCallSettingsUI() const;
        auto RequestStoreAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallStatics
    {
        auto GetFromId(param::hstring const& callId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallStore
    {
        auto IsEmergencyPhoneNumberAsync(param::hstring const& number) const;
        auto GetDefaultLineAsync() const;
        auto RequestLineWatcher() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallStore<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities
    {
        [[nodiscard]] auto IsVideoCallingCapable() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics
    {
        auto GetCapabilitiesAsync(param::hstring const& phoneNumber) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneCallsResult
    {
        [[nodiscard]] auto OperationStatus() const;
        [[nodiscard]] auto AllActivePhoneCalls() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneCallsResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallsResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneDialOptions
    {
        [[nodiscard]] auto Number() const;
        auto Number(param::hstring const& value) const;
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
        [[nodiscard]] auto Contact() const;
        auto Contact(winrt::Windows::ApplicationModel::Contacts::Contact const& value) const;
        [[nodiscard]] auto ContactPhone() const;
        auto ContactPhone(winrt::Windows::ApplicationModel::Contacts::ContactPhone const& value) const;
        [[nodiscard]] auto Media() const;
        auto Media(winrt::Windows::ApplicationModel::Calls::PhoneCallMedia const& value) const;
        [[nodiscard]] auto AudioEndpoint() const;
        auto AudioEndpoint(winrt::Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneDialOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLine
    {
        auto LineChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLine, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using LineChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLine, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLine>::remove_LineChanged>;
        [[nodiscard]] LineChanged_revoker LineChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLine, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto LineChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayColor() const;
        [[nodiscard]] auto NetworkState() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Voicemail() const;
        [[nodiscard]] auto NetworkName() const;
        [[nodiscard]] auto CellularDetails() const;
        [[nodiscard]] auto Transport() const;
        [[nodiscard]] auto CanDial() const;
        [[nodiscard]] auto SupportsTile() const;
        [[nodiscard]] auto VideoCallingCapabilities() const;
        [[nodiscard]] auto LineConfiguration() const;
        auto IsImmediateDialNumberAsync(param::hstring const& number) const;
        auto Dial(param::hstring const& number, param::hstring const& displayName) const;
        auto DialWithOptions(winrt::Windows::ApplicationModel::Calls::PhoneDialOptions const& options) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLine>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLine2
    {
        auto EnableTextReply(bool value) const;
        [[nodiscard]] auto TransportDeviceId() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLine3
    {
        auto DialWithResult(param::hstring const& number, param::hstring const& displayName) const;
        auto DialWithResultAsync(param::hstring const& number, param::hstring const& displayName) const;
        auto GetAllActivePhoneCalls() const;
        auto GetAllActivePhoneCallsAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLine3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails
    {
        [[nodiscard]] auto SimState() const;
        [[nodiscard]] auto SimSlotIndex() const;
        [[nodiscard]] auto IsModemOn() const;
        [[nodiscard]] auto RegistrationRejectCode() const;
        auto GetNetworkOperatorDisplayText(winrt::Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation const& location) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration
    {
        [[nodiscard]] auto IsVideoCallingEnabled() const;
        [[nodiscard]] auto ExtendedProperties() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineDialResult
    {
        [[nodiscard]] auto DialCallStatus() const;
        [[nodiscard]] auto DialedCall() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineDialResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineDialResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineStatics
    {
        auto FromIdAsync(winrt::guid const& lineId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Transport() const;
        auto RequestAccessAsync() const;
        auto RegisterApp() const;
        auto RegisterAppForUser(winrt::Windows::System::User const& user) const;
        auto UnregisterApp() const;
        auto UnregisterAppForUser(winrt::Windows::System::User const& user) const;
        auto IsRegistered() const;
        auto Connect() const;
        auto ConnectAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice2
    {
        [[nodiscard]] auto AudioRoutingStatus() const;
        auto AudioRoutingStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using AudioRoutingStatusChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>::remove_AudioRoutingStatusChanged>;
        [[nodiscard]] AudioRoutingStatusChanged_revoker AudioRoutingStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto AudioRoutingStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto InBandRingingEnabled() const;
        auto InBandRingingEnabledChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using InBandRingingEnabledChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>::remove_InBandRingingEnabledChanged>;
        [[nodiscard]] InBandRingingEnabledChanged_revoker InBandRingingEnabledChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto InBandRingingEnabledChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics
    {
        auto FromId(param::hstring const& id) const;
        auto GetDeviceSelector() const;
        auto GetDeviceSelector(winrt::Windows::ApplicationModel::Calls::PhoneLineTransport const& transport) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher
    {
        auto Start() const;
        auto Stop() const;
        auto LineAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineAdded_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineAdded>;
        [[nodiscard]] LineAdded_revoker LineAdded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineAdded(winrt::event_token const& token) const noexcept;
        auto LineRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineRemoved_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineRemoved>;
        [[nodiscard]] LineRemoved_revoker LineRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineRemoved(winrt::event_token const& token) const noexcept;
        auto LineUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        using LineUpdated_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineUpdated>;
        [[nodiscard]] LineUpdated_revoker LineUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
        auto LineUpdated(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Stopped(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_Stopped>;
        [[nodiscard]] Stopped_revoker Stopped(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs
    {
        [[nodiscard]] auto LineId() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IPhoneVoicemail
    {
        [[nodiscard]] auto Number() const;
        [[nodiscard]] auto MessageCount() const;
        [[nodiscard]] auto Type() const;
        auto DialVoicemailAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneVoicemail<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator
    {
        auto ReserveCallResourcesAsync(param::hstring const& taskEntryPoint) const;
        auto MuteStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator, winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
        using MuteStateChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator>::remove_MuteStateChanged>;
        [[nodiscard]] MuteStateChanged_revoker MuteStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator, winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
        auto MuteStateChanged(winrt::event_token const& token) const noexcept;
        auto RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, winrt::Windows::Foundation::TimeSpan const& ringTimeout) const;
        auto RequestNewOutgoingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName, winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
        auto NotifyMuted() const;
        auto NotifyUnmuted() const;
        auto RequestOutgoingUpgradeToVideoCall(winrt::guid const& callUpgradeGuid, param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName) const;
        auto RequestIncomingUpgradeToVideoCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::Foundation::TimeSpan const& ringTimeout) const;
        auto TerminateCellularCall(winrt::guid const& callUpgradeGuid) const;
        auto CancelUpgrade(winrt::guid const& callUpgradeGuid) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2
    {
        auto SetupNewAcceptedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3
    {
        auto RequestNewAppInitiatedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
        auto RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, winrt::Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, winrt::Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, winrt::Windows::Foundation::Uri const& ringtone, winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, winrt::Windows::Foundation::TimeSpan const& ringTimeout, param::hstring const& contactRemoteId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4
    {
        auto ReserveCallResourcesAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall
    {
        auto EndRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using EndRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_EndRequested>;
        [[nodiscard]] EndRequested_revoker EndRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto EndRequested(winrt::event_token const& token) const noexcept;
        auto HoldRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using HoldRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_HoldRequested>;
        [[nodiscard]] HoldRequested_revoker HoldRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto HoldRequested(winrt::event_token const& token) const noexcept;
        auto ResumeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        using ResumeRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_ResumeRequested>;
        [[nodiscard]] ResumeRequested_revoker ResumeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
        auto ResumeRequested(winrt::event_token const& token) const noexcept;
        auto AnswerRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
        using AnswerRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_AnswerRequested>;
        [[nodiscard]] AnswerRequested_revoker AnswerRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
        auto AnswerRequested(winrt::event_token const& token) const noexcept;
        auto RejectRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
        using RejectRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_RejectRequested>;
        [[nodiscard]] RejectRequested_revoker RejectRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
        auto RejectRequested(winrt::event_token const& token) const noexcept;
        auto NotifyCallHeld() const;
        auto NotifyCallActive() const;
        auto NotifyCallEnded() const;
        [[nodiscard]] auto ContactName() const;
        auto ContactName(param::hstring const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto StartTime(winrt::Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] auto CallMedia() const;
        auto CallMedia(winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& value) const;
        auto NotifyCallReady() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2
    {
        auto TryShowAppUI() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3
    {
        auto NotifyCallAccepted(winrt::Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3<D>;
    };
}
#endif
