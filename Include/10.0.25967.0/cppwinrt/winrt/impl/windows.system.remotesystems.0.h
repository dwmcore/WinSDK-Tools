// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteSystems_0_H
#define WINRT_Windows_System_RemoteSystems_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceConnection;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct WebAccount;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems
{
    enum class RemoteSystemAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class RemoteSystemAuthorizationKind : int32_t
    {
        SameUser = 0,
        Anonymous = 1,
    };
    enum class RemoteSystemDiscoveryType : int32_t
    {
        Any = 0,
        Proximal = 1,
        Cloud = 2,
        SpatiallyProximal = 3,
    };
    enum class RemoteSystemPlatform : int32_t
    {
        Unknown = 0,
        Windows = 1,
        Android = 2,
        Ios = 3,
        Linux = 4,
    };
    enum class RemoteSystemSessionCreationStatus : int32_t
    {
        Success = 0,
        SessionLimitsExceeded = 1,
        OperationAborted = 2,
    };
    enum class RemoteSystemSessionDisconnectedReason : int32_t
    {
        SessionUnavailable = 0,
        RemovedByController = 1,
        SessionClosed = 2,
    };
    enum class RemoteSystemSessionJoinStatus : int32_t
    {
        Success = 0,
        SessionLimitsExceeded = 1,
        OperationAborted = 2,
        SessionUnavailable = 3,
        RejectedByController = 4,
    };
    enum class RemoteSystemSessionMessageChannelReliability : int32_t
    {
        Reliable = 0,
        Unreliable = 1,
    };
    enum class RemoteSystemSessionParticipantWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class RemoteSystemSessionWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    enum class RemoteSystemStatus : int32_t
    {
        Unavailable = 0,
        DiscoveringAvailability = 1,
        Available = 2,
        Unknown = 3,
    };
    enum class RemoteSystemStatusType : int32_t
    {
        Any = 0,
        Available = 1,
    };
    enum class RemoteSystemWatcherError : int32_t
    {
        Unknown = 0,
        InternetNotAvailable = 1,
        AuthenticationError = 2,
    };
    struct IKnownRemoteSystemCapabilitiesStatics;
    struct IRemoteSystem;
    struct IRemoteSystem2;
    struct IRemoteSystem3;
    struct IRemoteSystem4;
    struct IRemoteSystem5;
    struct IRemoteSystem6;
    struct IRemoteSystemAddedEventArgs;
    struct IRemoteSystemApp;
    struct IRemoteSystemApp2;
    struct IRemoteSystemAppRegistration;
    struct IRemoteSystemAppRegistrationStatics;
    struct IRemoteSystemAuthorizationKindFilter;
    struct IRemoteSystemAuthorizationKindFilterFactory;
    struct IRemoteSystemConnectionInfo;
    struct IRemoteSystemConnectionInfoStatics;
    struct IRemoteSystemConnectionRequest;
    struct IRemoteSystemConnectionRequest2;
    struct IRemoteSystemConnectionRequest3;
    struct IRemoteSystemConnectionRequestFactory;
    struct IRemoteSystemConnectionRequestStatics;
    struct IRemoteSystemConnectionRequestStatics2;
    struct IRemoteSystemDiscoveryTypeFilter;
    struct IRemoteSystemDiscoveryTypeFilterFactory;
    struct IRemoteSystemEnumerationCompletedEventArgs;
    struct IRemoteSystemFilter;
    struct IRemoteSystemKindFilter;
    struct IRemoteSystemKindFilterFactory;
    struct IRemoteSystemKindStatics;
    struct IRemoteSystemKindStatics2;
    struct IRemoteSystemRemovedEventArgs;
    struct IRemoteSystemSession;
    struct IRemoteSystemSessionAddedEventArgs;
    struct IRemoteSystemSessionController;
    struct IRemoteSystemSessionControllerFactory;
    struct IRemoteSystemSessionCreationResult;
    struct IRemoteSystemSessionDisconnectedEventArgs;
    struct IRemoteSystemSessionInfo;
    struct IRemoteSystemSessionInvitation;
    struct IRemoteSystemSessionInvitationListener;
    struct IRemoteSystemSessionInvitationReceivedEventArgs;
    struct IRemoteSystemSessionJoinRequest;
    struct IRemoteSystemSessionJoinRequestedEventArgs;
    struct IRemoteSystemSessionJoinResult;
    struct IRemoteSystemSessionMessageChannel;
    struct IRemoteSystemSessionMessageChannelFactory;
    struct IRemoteSystemSessionOptions;
    struct IRemoteSystemSessionParticipant;
    struct IRemoteSystemSessionParticipantAddedEventArgs;
    struct IRemoteSystemSessionParticipantRemovedEventArgs;
    struct IRemoteSystemSessionParticipantWatcher;
    struct IRemoteSystemSessionRemovedEventArgs;
    struct IRemoteSystemSessionStatics;
    struct IRemoteSystemSessionUpdatedEventArgs;
    struct IRemoteSystemSessionValueSetReceivedEventArgs;
    struct IRemoteSystemSessionWatcher;
    struct IRemoteSystemStatics;
    struct IRemoteSystemStatics2;
    struct IRemoteSystemStatics3;
    struct IRemoteSystemStatusTypeFilter;
    struct IRemoteSystemStatusTypeFilterFactory;
    struct IRemoteSystemUpdatedEventArgs;
    struct IRemoteSystemWatcher;
    struct IRemoteSystemWatcher2;
    struct IRemoteSystemWatcher3;
    struct IRemoteSystemWatcherErrorOccurredEventArgs;
    struct IRemoteSystemWebAccountFilter;
    struct IRemoteSystemWebAccountFilterFactory;
    struct KnownRemoteSystemCapabilities;
    struct RemoteSystem;
    struct RemoteSystemAddedEventArgs;
    struct RemoteSystemApp;
    struct RemoteSystemAppRegistration;
    struct RemoteSystemAuthorizationKindFilter;
    struct RemoteSystemConnectionInfo;
    struct RemoteSystemConnectionRequest;
    struct RemoteSystemDiscoveryTypeFilter;
    struct RemoteSystemEnumerationCompletedEventArgs;
    struct RemoteSystemKindFilter;
    struct RemoteSystemKinds;
    struct RemoteSystemRemovedEventArgs;
    struct RemoteSystemSession;
    struct RemoteSystemSessionAddedEventArgs;
    struct RemoteSystemSessionController;
    struct RemoteSystemSessionCreationResult;
    struct RemoteSystemSessionDisconnectedEventArgs;
    struct RemoteSystemSessionInfo;
    struct RemoteSystemSessionInvitation;
    struct RemoteSystemSessionInvitationListener;
    struct RemoteSystemSessionInvitationReceivedEventArgs;
    struct RemoteSystemSessionJoinRequest;
    struct RemoteSystemSessionJoinRequestedEventArgs;
    struct RemoteSystemSessionJoinResult;
    struct RemoteSystemSessionMessageChannel;
    struct RemoteSystemSessionOptions;
    struct RemoteSystemSessionParticipant;
    struct RemoteSystemSessionParticipantAddedEventArgs;
    struct RemoteSystemSessionParticipantRemovedEventArgs;
    struct RemoteSystemSessionParticipantWatcher;
    struct RemoteSystemSessionRemovedEventArgs;
    struct RemoteSystemSessionUpdatedEventArgs;
    struct RemoteSystemSessionValueSetReceivedEventArgs;
    struct RemoteSystemSessionWatcher;
    struct RemoteSystemStatusTypeFilter;
    struct RemoteSystemUpdatedEventArgs;
    struct RemoteSystemWatcher;
    struct RemoteSystemWatcherErrorOccurredEventArgs;
    struct RemoteSystemWebAccountFilter;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystem6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemApp>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemApp2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistrationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilterFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystem>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemApp>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemAppRegistration>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemKinds>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemWebAccountFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemPlatform>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemStatusType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherError>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities> = L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystem> = L"Windows.System.RemoteSystems.RemoteSystem";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemApp> = L"Windows.System.RemoteSystems.RemoteSystemApp";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemAppRegistration> = L"Windows.System.RemoteSystems.RemoteSystemAppRegistration";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter> = L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionInfo> = L"Windows.System.RemoteSystems.RemoteSystemConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest> = L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter> = L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemEnumerationCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter> = L"Windows.System.RemoteSystems.RemoteSystemKindFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemKinds> = L"Windows.System.RemoteSystems.RemoteSystemKinds";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSession> = L"Windows.System.RemoteSystems.RemoteSystemSession";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController> = L"Windows.System.RemoteSystems.RemoteSystemSessionController";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> = L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo> = L"Windows.System.RemoteSystems.RemoteSystemSessionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation> = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener> = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest> = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel> = L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions> = L"Windows.System.RemoteSystems.RemoteSystemSessionOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant> = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher> = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher> = L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter> = L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher> = L"Windows.System.RemoteSystems.RemoteSystemWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs> = L"Windows.System.RemoteSystems.RemoteSystemWatcherErrorOccurredEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemWebAccountFilter> = L"Windows.System.RemoteSystems.RemoteSystemWebAccountFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> = L"Windows.System.RemoteSystems.RemoteSystemAccessStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind> = L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKind";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType> = L"Windows.System.RemoteSystems.RemoteSystemDiscoveryType";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemPlatform> = L"Windows.System.RemoteSystems.RemoteSystemPlatform";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus> = L"Windows.System.RemoteSystems.RemoteSystemSessionCreationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason> = L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus> = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability> = L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannelReliability";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus> = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcherStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus> = L"Windows.System.RemoteSystems.RemoteSystemSessionWatcherStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemStatus> = L"Windows.System.RemoteSystems.RemoteSystemStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemStatusType> = L"Windows.System.RemoteSystems.RemoteSystemStatusType";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherError> = L"Windows.System.RemoteSystems.RemoteSystemWatcherError";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> = L"Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem> = L"Windows.System.RemoteSystems.IRemoteSystem";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem2> = L"Windows.System.RemoteSystems.IRemoteSystem2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem3> = L"Windows.System.RemoteSystems.IRemoteSystem3";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem4> = L"Windows.System.RemoteSystems.IRemoteSystem4";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem5> = L"Windows.System.RemoteSystems.IRemoteSystem5";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystem6> = L"Windows.System.RemoteSystems.IRemoteSystem6";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemApp> = L"Windows.System.RemoteSystems.IRemoteSystemApp";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemApp2> = L"Windows.System.RemoteSystems.IRemoteSystemApp2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration> = L"Windows.System.RemoteSystems.IRemoteSystemAppRegistration";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistrationStatics> = L"Windows.System.RemoteSystems.IRemoteSystemAppRegistrationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory> = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfoStatics> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest2> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest3> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest3";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics2> = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory> = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemEnumerationCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter> = L"Windows.System.RemoteSystems.IRemoteSystemFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter> = L"Windows.System.RemoteSystems.IRemoteSystemKindFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory> = L"Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics> = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics2> = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSession> = L"Windows.System.RemoteSystems.IRemoteSystemSession";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController> = L"Windows.System.RemoteSystems.IRemoteSystemSessionController";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory> = L"Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult> = L"Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo> = L"Windows.System.RemoteSystems.IRemoteSystemSessionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitation";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult> = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory> = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions> = L"Windows.System.RemoteSystems.IRemoteSystemSessionOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipant";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics> = L"Windows.System.RemoteSystems.IRemoteSystemSessionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> = L"Windows.System.RemoteSystems.IRemoteSystemSessionWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics> = L"Windows.System.RemoteSystems.IRemoteSystemStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2> = L"Windows.System.RemoteSystems.IRemoteSystemStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics3> = L"Windows.System.RemoteSystems.IRemoteSystemStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory> = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher> = L"Windows.System.RemoteSystems.IRemoteSystemWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2> = L"Windows.System.RemoteSystems.IRemoteSystemWatcher2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher3> = L"Windows.System.RemoteSystems.IRemoteSystemWatcher3";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs> = L"Windows.System.RemoteSystems.IRemoteSystemWatcherErrorOccurredEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter> = L"Windows.System.RemoteSystems.IRemoteSystemWebAccountFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilterFactory> = L"Windows.System.RemoteSystems.IRemoteSystemWebAccountFilterFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ 0x8108E380,0x7F8A,0x44E4,{ 0x92,0xCD,0x03,0xB6,0x46,0x9B,0x94,0xA3 } }; // 8108E380-7F8A-44E4-92CD-03B6469B94A3
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem>{ 0xED5838CD,0x1E10,0x4A8C,{ 0xB4,0xA6,0x4E,0x5F,0xD6,0xF9,0x77,0x21 } }; // ED5838CD-1E10-4A8C-B4A6-4E5FD6F97721
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem2>{ 0x09DFE4EC,0xFB8B,0x4A08,{ 0xA7,0x58,0x68,0x76,0x43,0x5D,0x76,0x9E } }; // 09DFE4EC-FB8B-4A08-A758-6876435D769E
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem3>{ 0x72B4B495,0xB7C6,0x40BE,{ 0x83,0x1B,0x73,0x56,0x2F,0x12,0xFF,0xA8 } }; // 72B4B495-B7C6-40BE-831B-73562F12FFA8
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem4>{ 0xF164FFE5,0xB987,0x4CA5,{ 0x99,0x26,0xFA,0x04,0x38,0xBE,0x62,0x73 } }; // F164FFE5-B987-4CA5-9926-FA0438BE6273
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem5>{ 0xEB2AD723,0xE5E2,0x4AE2,{ 0xA7,0xA7,0xA1,0x09,0x7A,0x09,0x8E,0x90 } }; // EB2AD723-E5E2-4AE2-A7A7-A1097A098E90
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystem6>{ 0xD4CDA942,0xC027,0x533E,{ 0x93,0x84,0x3A,0x19,0xB4,0xF7,0xEE,0xF3 } }; // D4CDA942-C027-533E-9384-3A19B4F7EEF3
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ 0x8F39560F,0xE534,0x4697,{ 0x88,0x36,0x7A,0xBE,0xA1,0x51,0x51,0x6E } }; // 8F39560F-E534-4697-8836-7ABEA151516E
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemApp>{ 0x80E5BCBD,0xD54D,0x41B1,{ 0x9B,0x16,0x68,0x10,0xA8,0x71,0xED,0x4F } }; // 80E5BCBD-D54D-41B1-9B16-6810A871ED4F
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemApp2>{ 0x6369BF15,0x0A96,0x577A,{ 0x8F,0xF6,0xC3,0x59,0x04,0xDF,0xA8,0xF3 } }; // 6369BF15-0A96-577A-8FF6-C35904DFA8F3
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration>{ 0xB47947B5,0x7035,0x4A5A,{ 0xB8,0xDF,0x96,0x2D,0x8F,0x84,0x31,0xF4 } }; // B47947B5-7035-4A5A-B8DF-962D8F8431F4
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistrationStatics>{ 0x01B99840,0xCFD2,0x453F,{ 0xAE,0x25,0xC2,0x53,0x9F,0x08,0x6A,0xFD } }; // 01B99840-CFD2-453F-AE25-C2539F086AFD
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ 0x6B0DDE8E,0x04D0,0x40F4,{ 0xA2,0x7F,0xC2,0xAC,0xBB,0xD6,0xB7,0x34 } }; // 6B0DDE8E-04D0-40F4-A27F-C2ACBBD6B734
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ 0xAD65DF4D,0xB66A,0x45A4,{ 0x81,0x77,0x8C,0xAE,0xD7,0x5D,0x9E,0x5A } }; // AD65DF4D-B66A-45A4-8177-8CAED75D9E5A
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo>{ 0x23278BC3,0x0D09,0x52CB,{ 0x9C,0x6A,0xEE,0xD2,0x94,0x0B,0xEE,0x43 } }; // 23278BC3-0D09-52CB-9C6A-EED2940BEE43
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfoStatics>{ 0xAC831E2D,0x66C5,0x56D7,{ 0xA4,0xCE,0x70,0x5D,0x94,0x92,0x5A,0xD6 } }; // AC831E2D-66C5-56D7-A4CE-705D94925AD6
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ 0x84ED4104,0x8D5E,0x4D72,{ 0x82,0x38,0x76,0x21,0x57,0x6C,0x7A,0x67 } }; // 84ED4104-8D5E-4D72-8238-7621576C7A67
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest2>{ 0x12DF6D6F,0xBFFC,0x483A,{ 0x8A,0xBE,0xD3,0x4A,0x6C,0x19,0xF9,0x2B } }; // 12DF6D6F-BFFC-483A-8ABE-D34A6C19F92B
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest3>{ 0xDE86C3E7,0xC9CC,0x5A50,{ 0xB8,0xD9,0xBA,0x7B,0x34,0xBB,0x8D,0x0E } }; // DE86C3E7-C9CC-5A50-B8D9-BA7B34BB8D0E
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ 0xAA0A0A20,0xBAEB,0x4575,{ 0xB5,0x30,0x81,0x0B,0xB9,0x78,0x63,0x34 } }; // AA0A0A20-BAEB-4575-B530-810BB9786334
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics>{ 0x86CA143D,0x8214,0x425C,{ 0x89,0x32,0xDB,0x49,0x03,0x2D,0x13,0x06 } }; // 86CA143D-8214-425C-8932-DB49032D1306
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics2>{ 0x460F1027,0x64EC,0x598E,{ 0xA8,0x00,0x4F,0x2E,0xE5,0x8D,0xEF,0x19 } }; // 460F1027-64EC-598E-A800-4F2EE58DEF19
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ 0x42D9041F,0xEE5A,0x43DA,{ 0xAC,0x6A,0x6F,0xEE,0x25,0x46,0x07,0x41 } }; // 42D9041F-EE5A-43DA-AC6A-6FEE25460741
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ 0x9F9EB993,0xC260,0x4161,{ 0x92,0xF2,0x9C,0x02,0x1F,0x23,0xFE,0x5D } }; // 9F9EB993-C260-4161-92F2-9C021F23FE5D
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs>{ 0xC6E83D5F,0x4030,0x4354,{ 0xA0,0x60,0x14,0xF1,0xB2,0x2C,0x54,0x5D } }; // C6E83D5F-4030-4354-A060-14F1B22C545D
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>{ 0x4A3BA9E4,0x99EB,0x45EB,{ 0xBA,0x16,0x03,0x67,0x72,0x8F,0xF3,0x74 } }; // 4A3BA9E4-99EB-45EB-BA16-0367728FF374
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ 0x38E1C9EC,0x22C3,0x4EF6,{ 0x90,0x1A,0xBB,0xB1,0xC7,0xAA,0xD4,0xED } }; // 38E1C9EC-22C3-4EF6-901A-BBB1C7AAD4ED
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ 0xA1FB18EE,0x99EA,0x40BC,{ 0x9A,0x39,0xC6,0x70,0xAA,0x80,0x4A,0x28 } }; // A1FB18EE-99EA-40BC-9A39-C670AA804A28
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ 0xF6317633,0xAB14,0x41D0,{ 0x95,0x53,0x79,0x6A,0xAD,0xB8,0x82,0xDB } }; // F6317633-AB14-41D0-9553-796AADB882DB
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics2>{ 0xB9E3A3D0,0x0466,0x4749,{ 0x91,0xE8,0x65,0xF9,0xD1,0x9A,0x96,0xA5 } }; // B9E3A3D0-0466-4749-91E8-65F9D19A96A5
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ 0x8B3D16BB,0x7306,0x49EA,{ 0xB7,0xDF,0x67,0xD5,0x71,0x4C,0xB0,0x13 } }; // 8B3D16BB-7306-49EA-B7DF-67D5714CB013
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>{ 0x69476A01,0x9ADA,0x490F,{ 0x95,0x49,0xD3,0x1C,0xB1,0x4C,0x9E,0x95 } }; // 69476A01-9ADA-490F-9549-D31CB14C9E95
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ 0xD585D754,0xBC97,0x4C39,{ 0x99,0xB4,0xBE,0xCA,0x76,0xE0,0x4C,0x3F } }; // D585D754-BC97-4C39-99B4-BECA76E04C3F
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>{ 0xE48B2DD2,0x6820,0x4867,{ 0xB4,0x25,0xD8,0x9C,0x0A,0x3E,0xF7,0xBA } }; // E48B2DD2-6820-4867-B425-D89C0A3EF7BA
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ 0xBFCC2F6B,0xAC3D,0x4199,{ 0x82,0xCD,0x66,0x70,0xA7,0x73,0xEF,0x2E } }; // BFCC2F6B-AC3D-4199-82CD-6670A773EF2E
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ 0xA79812C2,0x37DE,0x448C,{ 0x8B,0x83,0xA3,0x0A,0xA3,0xC4,0xEA,0xD6 } }; // A79812C2-37DE-448C-8B83-A30AA3C4EAD6
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ 0xDE0BC69B,0x77C5,0x461C,{ 0x82,0x09,0x7C,0x6C,0x5D,0x31,0x11,0xAB } }; // DE0BC69B-77C5-461C-8209-7C6C5D3111AB
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ 0xFF4DF648,0x8B0A,0x4E9A,{ 0x99,0x05,0x69,0xE4,0xB8,0x41,0xC5,0x88 } }; // FF4DF648-8B0A-4E9A-9905-69E4B841C588
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ 0x3E32CC91,0x51D7,0x4766,{ 0xA1,0x21,0x25,0x51,0x6C,0x3B,0x82,0x94 } }; // 3E32CC91-51D7-4766-A121-25516C3B8294
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ 0x08F4003F,0xBC71,0x49E1,{ 0x87,0x4A,0x31,0xDD,0xFF,0x9A,0x27,0xB9 } }; // 08F4003F-BC71-49E1-874A-31DDFF9A27B9
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ 0x5E964A2D,0xA10D,0x4EDB,{ 0x8D,0xEA,0x54,0xD2,0x0A,0xC1,0x95,0x43 } }; // 5E964A2D-A10D-4EDB-8DEA-54D20AC19543
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ 0x20600068,0x7994,0x4331,{ 0x86,0xD1,0xD8,0x9D,0x88,0x25,0x85,0xEE } }; // 20600068-7994-4331-86D1-D89D882585EE
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ 0xDBCA4FC3,0x82B9,0x4816,{ 0x9C,0x24,0xE4,0x0E,0x61,0x77,0x4B,0xD8 } }; // DBCA4FC3-82B9-4816-9C24-E40E61774BD8
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ 0xCE7B1F04,0xA03E,0x41A4,{ 0x90,0x0B,0x1E,0x79,0x32,0x8C,0x12,0x67 } }; // CE7B1F04-A03E-41A4-900B-1E79328C1267
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ 0x9524D12A,0x73D9,0x4C10,{ 0xB7,0x51,0xC2,0x67,0x84,0x43,0x71,0x27 } }; // 9524D12A-73D9-4C10-B751-C26784437127
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ 0x295E1C4A,0xBD16,0x4298,{ 0xB7,0xCE,0x41,0x54,0x82,0xB0,0xE1,0x1D } }; // 295E1C4A-BD16-4298-B7CE-415482B0E11D
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ 0x740ED755,0x8418,0x4F01,{ 0x93,0x53,0xE2,0x1C,0x9E,0xCC,0x6C,0xFC } }; // 740ED755-8418-4F01-9353-E21C9ECC6CFC
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ 0x7E90058C,0xACF9,0x4729,{ 0x8A,0x17,0x44,0xE7,0xBA,0xED,0x5D,0xCC } }; // 7E90058C-ACF9-4729-8A17-44E7BAED5DCC
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ 0xD35A57D8,0xC9A1,0x4BB7,{ 0xB6,0xB0,0x79,0xBB,0x91,0xAD,0xF9,0x3D } }; // D35A57D8-C9A1-4BB7-B6B0-79BB91ADF93D
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ 0x866EF088,0xDE68,0x4ABF,{ 0x88,0xA1,0xF9,0x0D,0x16,0x27,0x41,0x92 } }; // 866EF088-DE68-4ABF-88A1-F90D16274192
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ 0xDCDD02CC,0xAA87,0x4D79,{ 0xB6,0xCC,0x44,0x59,0xB3,0xE9,0x20,0x75 } }; // DCDD02CC-AA87-4D79-B6CC-4459B3E92075
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ 0xAF82914E,0x39A1,0x4DEA,{ 0x9D,0x63,0x43,0x79,0x8D,0x5B,0xBB,0xD0 } }; // AF82914E-39A1-4DEA-9D63-43798D5BBBD0
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ 0x8524899F,0xFD20,0x44E3,{ 0x95,0x65,0xE7,0x5A,0x3B,0x14,0xC6,0x6E } }; // 8524899F-FD20-44E3-9565-E75A3B14C66E
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ 0x16875069,0x231E,0x4C91,{ 0x8E,0xC8,0xB3,0xA3,0x9D,0x9E,0x55,0xA3 } }; // 16875069-231E-4C91-8EC8-B3A39D9E55A3
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ 0x06F31785,0x2DA5,0x4E58,{ 0xA7,0x8F,0x9E,0x8D,0x07,0x84,0xEE,0x25 } }; // 06F31785-2DA5-4E58-A78F-9E8D0784EE25
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ 0x8003E340,0x0C41,0x4A62,{ 0xB6,0xD7,0xBD,0xBE,0x2B,0x19,0xBE,0x2D } }; // 8003E340-0C41-4A62-B6D7-BDBE2B19BE2D
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics>{ 0xA485B392,0xFF2B,0x4B47,{ 0xBE,0x62,0x74,0x3F,0x2F,0x14,0x0F,0x30 } }; // A485B392-FF2B-4B47-BE62-743F2F140F30
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2>{ 0x0C98EDCA,0x6F99,0x4C52,{ 0xA2,0x72,0xEA,0x4F,0x36,0x47,0x17,0x44 } }; // 0C98EDCA-6F99-4C52-A272-EA4F36471744
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics3>{ 0x9995F16F,0x0B3C,0x5AC5,{ 0xB3,0x25,0xCC,0x73,0xF4,0x37,0xDF,0xCD } }; // 9995F16F-0B3C-5AC5-B325-CC73F437DFCD
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ 0x0C39514E,0xCBB6,0x4777,{ 0x85,0x34,0x2E,0x0C,0x52,0x1A,0xFF,0xA2 } }; // 0C39514E-CBB6-4777-8534-2E0C521AFFA2
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ 0x33CF78FA,0xD724,0x4125,{ 0xAC,0x7A,0x8D,0x28,0x1E,0x44,0xC9,0x49 } }; // 33CF78FA-D724-4125-AC7A-8D281E44C949
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ 0x7502FF0E,0xDBCB,0x4155,{ 0xB4,0xCA,0xB3,0x0A,0x04,0xF2,0x76,0x27 } }; // 7502FF0E-DBCB-4155-B4CA-B30A04F27627
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>{ 0x5D600C7E,0x2C07,0x48C5,{ 0x88,0x9C,0x45,0x5D,0x2B,0x09,0x97,0x71 } }; // 5D600C7E-2C07-48C5-889C-455D2B099771
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>{ 0x73436700,0x19CA,0x48F9,{ 0xA4,0xCD,0x78,0x0F,0x7A,0xD5,0x8C,0x71 } }; // 73436700-19CA-48F9-A4CD-780F7AD58C71
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher3>{ 0xF79C0FCF,0xA913,0x55D3,{ 0x84,0x13,0x41,0x8F,0xCF,0x15,0xBA,0x54 } }; // F79C0FCF-A913-55D3-8413-418FCF15BA54
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs>{ 0x74C5C6AF,0x5114,0x4426,{ 0x92,0x16,0x20,0xD8,0x1F,0x85,0x19,0xAE } }; // 74C5C6AF-5114-4426-9216-20D81F8519AE
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter>{ 0x3FB75873,0x87C8,0x5D8F,{ 0x97,0x7E,0xF6,0x9F,0x96,0xD6,0x72,0x38 } }; // 3FB75873-87C8-5D8F-977E-F69F96D67238
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilterFactory>{ 0x348A2709,0x5F4D,0x5127,{ 0xB4,0xA7,0xBF,0x99,0xD5,0x25,0x2B,0x1B } }; // 348A2709-5F4D-5127-B4A7-BF99D5252B1B
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystem>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystem; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemApp>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemApp; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemAppRegistration>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionInfo>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSession>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSession; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs; };
    template <> struct default_interface<winrt::Windows::System::RemoteSystems::RemoteSystemWebAccountFilter>{ using type = winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter; };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppService(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteSession(void**) noexcept = 0;
            virtual int32_t __stdcall get_SpatialEntity(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsAvailableByProximity(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAvailableBySpatialProximity(bool*) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitySupportedAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ManufacturerDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModelDisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Platform(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Apps(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystem6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsAvailableByProximity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAvailableBySpatialProximity(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Attributes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemApp2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall get_Attributes(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistrationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemAuthorizationKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsProximal(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCreateFromAppServiceConnection(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemApp(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionToken(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForApp(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromConnectionToken(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromConnectionTokenForUser(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemDiscoveryType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemKinds(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Phone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hub(void**) noexcept = 0;
            virtual int32_t __stdcall get_Holographic(void**) noexcept = 0;
            virtual int32_t __stdcall get_Desktop(void**) noexcept = 0;
            virtual int32_t __stdcall get_Xbox(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Iot(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tablet(void**) noexcept = 0;
            virtual int32_t __stdcall get_Laptop(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ControllerDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall add_Disconnected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Disconnected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateParticipantWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall SendInvitationAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_JoinRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_JoinRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall RemoveParticipantAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSessionAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateController(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateControllerWithSessionOptions(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ControllerDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall JoinAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Sender(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_InvitationReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InvitationReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Invitation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Participant(void**) noexcept = 0;
            virtual int32_t __stdcall Accept() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_JoinRequest(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall BroadcastValueSetAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendValueSetAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendValueSetToParticipantsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ValueSetReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueSetReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithReliability(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInviteOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInviteOnly(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystem(void**) noexcept = 0;
            virtual int32_t __stdcall GetHostNames(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Participant(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Participant(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Sender(void**) noexcept = 0;
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Removed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Removed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindByHostNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcher(void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherWithFilters(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsAuthorizationKindEnabled(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWatcherForUser(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWatcherWithFiltersForUser(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystemStatusType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteSystem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall add_RemoteSystemAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemoteSystemAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RemoteSystemUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemoteSystemUpdated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RemoteSystemRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemoteSystemRemoved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorOccurred(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Account(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics
    {
        [[nodiscard]] auto AppService() const;
        [[nodiscard]] auto LaunchUri() const;
        [[nodiscard]] auto RemoteSession() const;
        [[nodiscard]] auto SpatialEntity() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IsAvailableByProximity() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem2
    {
        [[nodiscard]] auto IsAvailableBySpatialProximity() const;
        auto GetCapabilitySupportedAsync(param::hstring const& capabilityName) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem3
    {
        [[nodiscard]] auto ManufacturerDisplayName() const;
        [[nodiscard]] auto ModelDisplayName() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem3>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem3<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem4
    {
        [[nodiscard]] auto Platform() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem4>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem4<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem5
    {
        [[nodiscard]] auto Apps() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem5>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem5<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystem6
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystem6>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem6<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs
    {
        [[nodiscard]] auto RemoteSystem() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemApp
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto IsAvailableByProximity() const;
        [[nodiscard]] auto IsAvailableBySpatialProximity() const;
        [[nodiscard]] auto Attributes() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemApp>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemApp<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemApp2
    {
        [[nodiscard]] auto User() const;
        [[nodiscard]] auto ConnectionToken() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemApp2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemApp2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemAppRegistration
    {
        [[nodiscard]] auto User() const;
        [[nodiscard]] auto Attributes() const;
        auto SaveAsync() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistration>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAppRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemAppRegistrationStatics
    {
        auto GetDefault() const;
        auto GetForUser(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemAppRegistrationStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAppRegistrationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter
    {
        [[nodiscard]] auto RemoteSystemAuthorizationKind() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory
    {
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& remoteSystemAuthorizationKind) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionInfo
    {
        [[nodiscard]] auto IsProximal() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionInfoStatics
    {
        auto TryCreateFromAppServiceConnection(winrt::Windows::ApplicationModel::AppService::AppServiceConnection const& connection) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest
    {
        [[nodiscard]] auto RemoteSystem() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest2
    {
        [[nodiscard]] auto RemoteSystemApp() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest3
    {
        [[nodiscard]] auto ConnectionToken() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest3>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest3<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory
    {
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystem const& remoteSystem) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics
    {
        auto CreateForApp(winrt::Windows::System::RemoteSystems::RemoteSystemApp const& remoteSystemApp) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics2
    {
        auto CreateFromConnectionToken(param::hstring const& connectionToken) const;
        auto CreateFromConnectionTokenForUser(winrt::Windows::System::User const& user, param::hstring const& connectionToken) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestStatics2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter
    {
        [[nodiscard]] auto RemoteSystemDiscoveryType() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory
    {
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType const& discoveryType) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemEnumerationCompletedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemEnumerationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemEnumerationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemFilter
    {
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemKindFilter
    {
        [[nodiscard]] auto RemoteSystemKinds() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory
    {
        auto Create(param::iterable<hstring> const& remoteSystemKinds) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics
    {
        [[nodiscard]] auto Phone() const;
        [[nodiscard]] auto Hub() const;
        [[nodiscard]] auto Holographic() const;
        [[nodiscard]] auto Desktop() const;
        [[nodiscard]] auto Xbox() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics2
    {
        [[nodiscard]] auto Iot() const;
        [[nodiscard]] auto Tablet() const;
        [[nodiscard]] auto Laptop() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs
    {
        [[nodiscard]] auto RemoteSystemId() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSession
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto ControllerDisplayName() const;
        auto Disconnected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSession, winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const;
        using Disconnected_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSession, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>::remove_Disconnected>;
        [[nodiscard]] Disconnected_revoker Disconnected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSession, winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const;
        auto Disconnected(winrt::event_token const& token) const noexcept;
        auto CreateParticipantWatcher() const;
        auto SendInvitationAsync(winrt::Windows::System::RemoteSystems::RemoteSystem const& invitee) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs
    {
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionController
    {
        auto JoinRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController, winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const;
        using JoinRequested_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>::remove_JoinRequested>;
        [[nodiscard]] JoinRequested_revoker JoinRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController, winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const;
        auto JoinRequested(winrt::event_token const& token) const noexcept;
        auto RemoveParticipantAsync(winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& pParticipant) const;
        auto CreateSessionAsync() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory
    {
        auto CreateController(param::hstring const& displayName) const;
        auto CreateController(param::hstring const& displayName, winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions const& options) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Session() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto ControllerDisplayName() const;
        auto JoinAsync() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation
    {
        [[nodiscard]] auto Sender() const;
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener
    {
        auto InvitationReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const;
        using InvitationReceived_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>::remove_InvitationReceived>;
        [[nodiscard]] InvitationReceived_revoker InvitationReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const;
        auto InvitationReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs
    {
        [[nodiscard]] auto Invitation() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest
    {
        [[nodiscard]] auto Participant() const;
        auto Accept() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs
    {
        [[nodiscard]] auto JoinRequest() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Session() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel
    {
        [[nodiscard]] auto Session() const;
        auto BroadcastValueSetAsync(winrt::Windows::Foundation::Collections::ValueSet const& messageData) const;
        auto SendValueSetAsync(winrt::Windows::Foundation::Collections::ValueSet const& messageData, winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& participant) const;
        auto SendValueSetToParticipantsAsync(winrt::Windows::Foundation::Collections::ValueSet const& messageData, param::async_iterable<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant> const& participants) const;
        auto ValueSetReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const;
        using ValueSetReceived_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>::remove_ValueSetReceived>;
        [[nodiscard]] ValueSetReceived_revoker ValueSetReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const;
        auto ValueSetReceived(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory
    {
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName) const;
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName, winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const& reliability) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions
    {
        [[nodiscard]] auto IsInviteOnly() const;
        auto IsInviteOnly(bool value) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant
    {
        [[nodiscard]] auto RemoteSystem() const;
        auto GetHostNames() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs
    {
        [[nodiscard]] auto Participant() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs
    {
        [[nodiscard]] auto Participant() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher
    {
        auto Start() const;
        auto Stop() const;
        [[nodiscard]] auto Status() const;
        auto Added(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto Removed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs
    {
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionStatics
    {
        auto CreateWatcher() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs
    {
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs
    {
        [[nodiscard]] auto Sender() const;
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher
    {
        auto Start() const;
        auto Stop() const;
        [[nodiscard]] auto Status() const;
        auto Added(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const;
        using Added_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Added>;
        [[nodiscard]] Added_revoker Added(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto Updated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const;
        using Updated_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
        auto Removed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const;
        using Removed_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Removed>;
        [[nodiscard]] Removed_revoker Removed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const;
        auto Removed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemStatics
    {
        auto FindByHostNameAsync(winrt::Windows::Networking::HostName const& hostName) const;
        auto CreateWatcher() const;
        auto CreateWatcher(param::iterable<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters) const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemStatics2
    {
        auto IsAuthorizationKindEnabled(winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& kind) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemStatics3
    {
        auto CreateWatcherForUser(winrt::Windows::System::User const& user) const;
        auto CreateWatcherForUser(winrt::Windows::System::User const& user, param::iterable<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics3>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter
    {
        [[nodiscard]] auto RemoteSystemStatusType() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory
    {
        auto Create(winrt::Windows::System::RemoteSystems::RemoteSystemStatusType const& remoteSystemStatusType) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs
    {
        [[nodiscard]] auto RemoteSystem() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWatcher
    {
        auto Start() const;
        auto Stop() const;
        auto RemoteSystemAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const;
        using RemoteSystemAdded_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemAdded>;
        [[nodiscard]] RemoteSystemAdded_revoker RemoteSystemAdded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const;
        auto RemoteSystemAdded(winrt::event_token const& token) const noexcept;
        auto RemoteSystemUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const;
        using RemoteSystemUpdated_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemUpdated>;
        [[nodiscard]] RemoteSystemUpdated_revoker RemoteSystemUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const;
        auto RemoteSystemUpdated(winrt::event_token const& token) const noexcept;
        auto RemoteSystemRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const;
        using RemoteSystemRemoved_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemRemoved>;
        [[nodiscard]] RemoteSystemRemoved_revoker RemoteSystemRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const;
        auto RemoteSystemRemoved(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWatcher2
    {
        auto EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>::remove_EnumerationCompleted>;
        [[nodiscard]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto ErrorOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs> const& handler) const;
        using ErrorOccurred_revoker = impl::event_revoker<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2, &impl::abi_t<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>::remove_ErrorOccurred>;
        [[nodiscard]] ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher, winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs> const& handler) const;
        auto ErrorOccurred(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher2>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWatcher2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWatcher3
    {
        [[nodiscard]] auto User() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher3>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWatcher3<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWatcherErrorOccurredEventArgs
    {
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcherErrorOccurredEventArgs>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWatcherErrorOccurredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilter
    {
        [[nodiscard]] auto Account() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilter>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilter<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilterFactory
    {
        auto Create(winrt::Windows::Security::Credentials::WebAccount const& account) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::IRemoteSystemWebAccountFilterFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilterFactory<D>;
    };
}
#endif
