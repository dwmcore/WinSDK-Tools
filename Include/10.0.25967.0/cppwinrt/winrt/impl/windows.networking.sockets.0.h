// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Networking_Sockets_0_H
#define WINRT_Windows_Networking_Sockets_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    struct IBackgroundTask;
    struct IBackgroundTrigger;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct EndpointPair;
    struct HostName;
    enum class HostNameSortOptions : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkAdapter;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct DataReader;
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::Web
{
    enum class WebErrorStatus : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class ControlChannelTriggerResetReason : int32_t
    {
        FastUserSwitched = 0,
        LowPowerExit = 1,
        QuietHoursExit = 2,
        ApplicationRestart = 3,
    };
    enum class ControlChannelTriggerResourceType : int32_t
    {
        RequestSoftwareSlot = 0,
        RequestHardwareSlot = 1,
    };
    enum class ControlChannelTriggerStatus : int32_t
    {
        HardwareSlotRequested = 0,
        SoftwareSlotAllocated = 1,
        HardwareSlotAllocated = 2,
        PolicyError = 3,
        SystemError = 4,
        TransportDisconnected = 5,
        ServiceUnavailable = 6,
    };
    enum class MessageWebSocketReceiveMode : int32_t
    {
        FullMessage = 0,
        PartialMessage = 1,
    };
    enum class SocketActivityConnectedStandbyAction : int32_t
    {
        DoNotWake = 0,
        Wake = 1,
    };
    enum class SocketActivityKind : int32_t
    {
        None = 0,
        StreamSocketListener = 1,
        DatagramSocket = 2,
        StreamSocket = 3,
    };
    enum class SocketActivityTriggerReason : int32_t
    {
        None = 0,
        SocketActivity = 1,
        ConnectionAccepted = 2,
        KeepAliveTimerExpired = 3,
        SocketClosed = 4,
    };
    enum class SocketErrorStatus : int32_t
    {
        Unknown = 0,
        OperationAborted = 1,
        HttpInvalidServerResponse = 2,
        ConnectionTimedOut = 3,
        AddressFamilyNotSupported = 4,
        SocketTypeNotSupported = 5,
        HostNotFound = 6,
        NoDataRecordOfRequestedType = 7,
        NonAuthoritativeHostNotFound = 8,
        ClassTypeNotFound = 9,
        AddressAlreadyInUse = 10,
        CannotAssignRequestedAddress = 11,
        ConnectionRefused = 12,
        NetworkIsUnreachable = 13,
        UnreachableHost = 14,
        NetworkIsDown = 15,
        NetworkDroppedConnectionOnReset = 16,
        SoftwareCausedConnectionAbort = 17,
        ConnectionResetByPeer = 18,
        HostIsDown = 19,
        NoAddressesFound = 20,
        TooManyOpenFiles = 21,
        MessageTooLong = 22,
        CertificateExpired = 23,
        CertificateUntrustedRoot = 24,
        CertificateCommonNameIsIncorrect = 25,
        CertificateWrongUsage = 26,
        CertificateRevoked = 27,
        CertificateNoRevocationCheck = 28,
        CertificateRevocationServerOffline = 29,
        CertificateIsInvalid = 30,
    };
    enum class SocketMessageType : int32_t
    {
        Binary = 0,
        Utf8 = 1,
    };
    enum class SocketProtectionLevel : int32_t
    {
        PlainSocket = 0,
        Ssl = 1,
        SslAllowNullEncryption = 2,
        BluetoothEncryptionAllowNullAuthentication = 3,
        BluetoothEncryptionWithAuthentication = 4,
        Ssl3AllowWeakEncryption = 5,
        Tls10 = 6,
        Tls11 = 7,
        Tls12 = 8,
        Unspecified = 9,
        Tls13 = 10,
    };
    enum class SocketQualityOfService : int32_t
    {
        Normal = 0,
        LowLatency = 1,
    };
    enum class SocketSslErrorSeverity : int32_t
    {
        None = 0,
        Ignorable = 1,
        Fatal = 2,
    };
    struct IControlChannelTrigger;
    struct IControlChannelTrigger2;
    struct IControlChannelTriggerEventDetails;
    struct IControlChannelTriggerFactory;
    struct IControlChannelTriggerResetEventDetails;
    struct IDatagramSocket;
    struct IDatagramSocket2;
    struct IDatagramSocket3;
    struct IDatagramSocketControl;
    struct IDatagramSocketControl2;
    struct IDatagramSocketControl3;
    struct IDatagramSocketInformation;
    struct IDatagramSocketMessageReceivedEventArgs;
    struct IDatagramSocketStatics;
    struct IMessageWebSocket;
    struct IMessageWebSocket2;
    struct IMessageWebSocket3;
    struct IMessageWebSocketControl;
    struct IMessageWebSocketControl2;
    struct IMessageWebSocketMessageReceivedEventArgs;
    struct IMessageWebSocketMessageReceivedEventArgs2;
    struct IServerMessageWebSocket;
    struct IServerMessageWebSocketControl;
    struct IServerMessageWebSocketInformation;
    struct IServerStreamWebSocket;
    struct IServerStreamWebSocketInformation;
    struct ISocketActivityContext;
    struct ISocketActivityContextFactory;
    struct ISocketActivityInformation;
    struct ISocketActivityInformationStatics;
    struct ISocketActivityTriggerDetails;
    struct ISocketErrorStatics;
    struct IStreamSocket;
    struct IStreamSocket2;
    struct IStreamSocket3;
    struct IStreamSocketControl;
    struct IStreamSocketControl2;
    struct IStreamSocketControl3;
    struct IStreamSocketControl4;
    struct IStreamSocketInformation;
    struct IStreamSocketInformation2;
    struct IStreamSocketListener;
    struct IStreamSocketListener2;
    struct IStreamSocketListener3;
    struct IStreamSocketListenerConnectionReceivedEventArgs;
    struct IStreamSocketListenerControl;
    struct IStreamSocketListenerControl2;
    struct IStreamSocketListenerInformation;
    struct IStreamSocketStatics;
    struct IStreamWebSocket;
    struct IStreamWebSocket2;
    struct IStreamWebSocketControl;
    struct IStreamWebSocketControl2;
    struct IWebSocket;
    struct IWebSocketClosedEventArgs;
    struct IWebSocketControl;
    struct IWebSocketControl2;
    struct IWebSocketErrorStatics;
    struct IWebSocketInformation;
    struct IWebSocketInformation2;
    struct IWebSocketServerCustomValidationRequestedEventArgs;
    struct ControlChannelTrigger;
    struct DatagramSocket;
    struct DatagramSocketControl;
    struct DatagramSocketInformation;
    struct DatagramSocketMessageReceivedEventArgs;
    struct MessageWebSocket;
    struct MessageWebSocketControl;
    struct MessageWebSocketInformation;
    struct MessageWebSocketMessageReceivedEventArgs;
    struct ServerMessageWebSocket;
    struct ServerMessageWebSocketControl;
    struct ServerMessageWebSocketInformation;
    struct ServerStreamWebSocket;
    struct ServerStreamWebSocketInformation;
    struct SocketActivityContext;
    struct SocketActivityInformation;
    struct SocketActivityTriggerDetails;
    struct SocketError;
    struct StreamSocket;
    struct StreamSocketControl;
    struct StreamSocketInformation;
    struct StreamSocketListener;
    struct StreamSocketListenerConnectionReceivedEventArgs;
    struct StreamSocketListenerControl;
    struct StreamSocketListenerInformation;
    struct StreamWebSocket;
    struct StreamWebSocketControl;
    struct StreamWebSocketInformation;
    struct WebSocketClosedEventArgs;
    struct WebSocketError;
    struct WebSocketKeepAlive;
    struct WebSocketServerCustomValidationRequestedEventArgs;
    struct BandwidthStatistics;
    struct RoundTripTimeStatistics;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Networking::Sockets::IControlChannelTrigger>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IControlChannelTrigger2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocket2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocket3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketControl3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IDatagramSocketStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocket2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocket3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IServerStreamWebSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketActivityContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketActivityInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ISocketErrorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocket2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocket3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketControl3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketControl4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketInformation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListener>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListener2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListener3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamSocketStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamWebSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamWebSocket2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamWebSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocket>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketControl2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketInformation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ControlChannelTrigger>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::DatagramSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::DatagramSocketControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::DatagramSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::MessageWebSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::MessageWebSocketControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::MessageWebSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ServerMessageWebSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ServerStreamWebSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketListener>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketListenerControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamWebSocket>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamWebSocketControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::StreamWebSocketInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::WebSocketError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::WebSocketKeepAlive>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ControlChannelTriggerResetReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::ControlChannelTriggerStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketActivityTriggerReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketErrorStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketMessageType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketProtectionLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketQualityOfService>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Sockets::BandwidthStatistics>{ using type = struct_category<uint64_t, uint64_t, uint64_t, uint64_t, bool, bool>; };
    template <> struct category<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics>{ using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ControlChannelTrigger> = L"Windows.Networking.Sockets.ControlChannelTrigger";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::DatagramSocket> = L"Windows.Networking.Sockets.DatagramSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::DatagramSocketControl> = L"Windows.Networking.Sockets.DatagramSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::DatagramSocketInformation> = L"Windows.Networking.Sockets.DatagramSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> = L"Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::MessageWebSocket> = L"Windows.Networking.Sockets.MessageWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::MessageWebSocketControl> = L"Windows.Networking.Sockets.MessageWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::MessageWebSocketInformation> = L"Windows.Networking.Sockets.MessageWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> = L"Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ServerMessageWebSocket> = L"Windows.Networking.Sockets.ServerMessageWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl> = L"Windows.Networking.Sockets.ServerMessageWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation> = L"Windows.Networking.Sockets.ServerMessageWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ServerStreamWebSocket> = L"Windows.Networking.Sockets.ServerStreamWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation> = L"Windows.Networking.Sockets.ServerStreamWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityContext> = L"Windows.Networking.Sockets.SocketActivityContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityInformation> = L"Windows.Networking.Sockets.SocketActivityInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails> = L"Windows.Networking.Sockets.SocketActivityTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketError> = L"Windows.Networking.Sockets.SocketError";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocket> = L"Windows.Networking.Sockets.StreamSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketControl> = L"Windows.Networking.Sockets.StreamSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketInformation> = L"Windows.Networking.Sockets.StreamSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketListener> = L"Windows.Networking.Sockets.StreamSocketListener";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> = L"Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketListenerControl> = L"Windows.Networking.Sockets.StreamSocketListenerControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation> = L"Windows.Networking.Sockets.StreamSocketListenerInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamWebSocket> = L"Windows.Networking.Sockets.StreamWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamWebSocketControl> = L"Windows.Networking.Sockets.StreamWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::StreamWebSocketInformation> = L"Windows.Networking.Sockets.StreamWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> = L"Windows.Networking.Sockets.WebSocketClosedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::WebSocketError> = L"Windows.Networking.Sockets.WebSocketError";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::WebSocketKeepAlive> = L"Windows.Networking.Sockets.WebSocketKeepAlive";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> = L"Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ControlChannelTriggerResetReason> = L"Windows.Networking.Sockets.ControlChannelTriggerResetReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType> = L"Windows.Networking.Sockets.ControlChannelTriggerResourceType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ControlChannelTriggerStatus> = L"Windows.Networking.Sockets.ControlChannelTriggerStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode> = L"Windows.Networking.Sockets.MessageWebSocketReceiveMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction> = L"Windows.Networking.Sockets.SocketActivityConnectedStandbyAction";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityKind> = L"Windows.Networking.Sockets.SocketActivityKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketActivityTriggerReason> = L"Windows.Networking.Sockets.SocketActivityTriggerReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketErrorStatus> = L"Windows.Networking.Sockets.SocketErrorStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketMessageType> = L"Windows.Networking.Sockets.SocketMessageType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketProtectionLevel> = L"Windows.Networking.Sockets.SocketProtectionLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketQualityOfService> = L"Windows.Networking.Sockets.SocketQualityOfService";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity> = L"Windows.Networking.Sockets.SocketSslErrorSeverity";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::BandwidthStatistics> = L"Windows.Networking.Sockets.BandwidthStatistics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics> = L"Windows.Networking.Sockets.RoundTripTimeStatistics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IControlChannelTrigger> = L"Windows.Networking.Sockets.IControlChannelTrigger";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IControlChannelTrigger2> = L"Windows.Networking.Sockets.IControlChannelTrigger2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails> = L"Windows.Networking.Sockets.IControlChannelTriggerEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory> = L"Windows.Networking.Sockets.IControlChannelTriggerFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> = L"Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocket> = L"Windows.Networking.Sockets.IDatagramSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocket2> = L"Windows.Networking.Sockets.IDatagramSocket2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocket3> = L"Windows.Networking.Sockets.IDatagramSocket3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl> = L"Windows.Networking.Sockets.IDatagramSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl2> = L"Windows.Networking.Sockets.IDatagramSocketControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl3> = L"Windows.Networking.Sockets.IDatagramSocketControl3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketInformation> = L"Windows.Networking.Sockets.IDatagramSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> = L"Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IDatagramSocketStatics> = L"Windows.Networking.Sockets.IDatagramSocketStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocket> = L"Windows.Networking.Sockets.IMessageWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocket2> = L"Windows.Networking.Sockets.IMessageWebSocket2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocket3> = L"Windows.Networking.Sockets.IMessageWebSocket3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocketControl> = L"Windows.Networking.Sockets.IMessageWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2> = L"Windows.Networking.Sockets.IMessageWebSocketControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2> = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocket> = L"Windows.Networking.Sockets.IServerMessageWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl> = L"Windows.Networking.Sockets.IServerMessageWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation> = L"Windows.Networking.Sockets.IServerMessageWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IServerStreamWebSocket> = L"Windows.Networking.Sockets.IServerStreamWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation> = L"Windows.Networking.Sockets.IServerStreamWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketActivityContext> = L"Windows.Networking.Sockets.ISocketActivityContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory> = L"Windows.Networking.Sockets.ISocketActivityContextFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketActivityInformation> = L"Windows.Networking.Sockets.ISocketActivityInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics> = L"Windows.Networking.Sockets.ISocketActivityInformationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails> = L"Windows.Networking.Sockets.ISocketActivityTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::ISocketErrorStatics> = L"Windows.Networking.Sockets.ISocketErrorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocket> = L"Windows.Networking.Sockets.IStreamSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocket2> = L"Windows.Networking.Sockets.IStreamSocket2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocket3> = L"Windows.Networking.Sockets.IStreamSocket3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketControl> = L"Windows.Networking.Sockets.IStreamSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketControl2> = L"Windows.Networking.Sockets.IStreamSocketControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketControl3> = L"Windows.Networking.Sockets.IStreamSocketControl3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketControl4> = L"Windows.Networking.Sockets.IStreamSocketControl4";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketInformation> = L"Windows.Networking.Sockets.IStreamSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketInformation2> = L"Windows.Networking.Sockets.IStreamSocketInformation2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListener> = L"Windows.Networking.Sockets.IStreamSocketListener";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListener2> = L"Windows.Networking.Sockets.IStreamSocketListener2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListener3> = L"Windows.Networking.Sockets.IStreamSocketListener3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> = L"Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl> = L"Windows.Networking.Sockets.IStreamSocketListenerControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2> = L"Windows.Networking.Sockets.IStreamSocketListenerControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation> = L"Windows.Networking.Sockets.IStreamSocketListenerInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamSocketStatics> = L"Windows.Networking.Sockets.IStreamSocketStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamWebSocket> = L"Windows.Networking.Sockets.IStreamWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamWebSocket2> = L"Windows.Networking.Sockets.IStreamWebSocket2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamWebSocketControl> = L"Windows.Networking.Sockets.IStreamWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2> = L"Windows.Networking.Sockets.IStreamWebSocketControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocket> = L"Windows.Networking.Sockets.IWebSocket";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs> = L"Windows.Networking.Sockets.IWebSocketClosedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketControl> = L"Windows.Networking.Sockets.IWebSocketControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketControl2> = L"Windows.Networking.Sockets.IWebSocketControl2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics> = L"Windows.Networking.Sockets.IWebSocketErrorStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketInformation> = L"Windows.Networking.Sockets.IWebSocketInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketInformation2> = L"Windows.Networking.Sockets.IWebSocketInformation2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> = L"Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IControlChannelTrigger>{ 0x7D1431A7,0xEE96,0x40E8,{ 0xA1,0x99,0x87,0x03,0xCD,0x96,0x9E,0xC3 } }; // 7D1431A7-EE96-40E8-A199-8703CD969EC3
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IControlChannelTrigger2>{ 0xAF00D237,0x51BE,0x4514,{ 0x97,0x25,0x35,0x56,0xE1,0x87,0x95,0x80 } }; // AF00D237-51BE-4514-9725-3556E1879580
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>{ 0x1B36E047,0x89BB,0x4236,{ 0x96,0xAC,0x71,0xD0,0x12,0xBB,0x48,0x69 } }; // 1B36E047-89BB-4236-96AC-71D012BB4869
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory>{ 0xDA4B7CF0,0x8D71,0x446F,{ 0x88,0xC3,0xB9,0x51,0x84,0xA2,0xD6,0xCD } }; // DA4B7CF0-8D71-446F-88C3-B95184A2D6CD
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>{ 0x6851038E,0x8EC4,0x42FE,{ 0x9B,0xB2,0x21,0xE9,0x1B,0x7B,0xFC,0xB1 } }; // 6851038E-8EC4-42FE-9BB2-21E91B7BFCB1
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocket>{ 0x7FE25BBB,0xC3BC,0x4677,{ 0x84,0x46,0xCA,0x28,0xA4,0x65,0xA3,0xAF } }; // 7FE25BBB-C3BC-4677-8446-CA28A465A3AF
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocket2>{ 0xD83BA354,0x9A9D,0x4185,{ 0xA2,0x0A,0x14,0x24,0xC9,0xC2,0xA7,0xCD } }; // D83BA354-9A9D-4185-A20A-1424C9C2A7CD
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocket3>{ 0x37544F09,0xAB92,0x4306,{ 0x9A,0xC1,0x0C,0x38,0x12,0x83,0xD9,0xC6 } }; // 37544F09-AB92-4306-9AC1-0C381283D9C6
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl>{ 0x52AC3F2E,0x349A,0x4135,{ 0xBB,0x58,0xB7,0x9B,0x26,0x47,0xD3,0x90 } }; // 52AC3F2E-349A-4135-BB58-B79B2647D390
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl2>{ 0x33EAD5C2,0x979C,0x4415,{ 0x82,0xA1,0x3C,0xFA,0xF6,0x46,0xC1,0x92 } }; // 33EAD5C2-979C-4415-82A1-3CFAF646C192
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketControl3>{ 0xD4EB8256,0x1F6D,0x4598,{ 0x9B,0x57,0xD4,0x2A,0x00,0x1D,0xF3,0x49 } }; // D4EB8256-1F6D-4598-9B57-D42A001DF349
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketInformation>{ 0x5F1A569A,0x55FB,0x48CD,{ 0x97,0x06,0x7A,0x97,0x4F,0x7B,0x15,0x85 } }; // 5F1A569A-55FB-48CD-9706-7A974F7B1585
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x7E } }; // 9E2DDCA2-1712-4CE4-B179-8C652C6D107E
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IDatagramSocketStatics>{ 0xE9C62AEE,0x1494,0x4A21,{ 0xBB,0x7E,0x85,0x89,0xFC,0x75,0x1D,0x9D } }; // E9C62AEE-1494-4A21-BB7E-8589FC751D9D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocket>{ 0x33727D08,0x34D5,0x4746,{ 0xAD,0x7B,0x8D,0xDE,0x5B,0xC2,0xEF,0x88 } }; // 33727D08-34D5-4746-AD7B-8DDE5BC2EF88
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocket2>{ 0xBED0CEE7,0xF9C8,0x440A,{ 0x9A,0xD5,0x73,0x72,0x81,0xD9,0x74,0x2E } }; // BED0CEE7-F9C8-440A-9AD5-737281D9742E
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocket3>{ 0x59D9DEFB,0x71AF,0x4349,{ 0x84,0x87,0x91,0x1F,0xCF,0x68,0x15,0x97 } }; // 59D9DEFB-71AF-4349-8487-911FCF681597
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocketControl>{ 0x8118388A,0xC629,0x4F0A,{ 0x80,0xFB,0x81,0xFC,0x05,0x53,0x88,0x62 } }; // 8118388A-C629-4F0A-80FB-81FC05538862
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2>{ 0xE30FD791,0x080C,0x400A,{ 0xA7,0x12,0x27,0xDF,0xA9,0xE7,0x44,0xD8 } }; // E30FD791-080C-400A-A712-27DFA9E744D8
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>{ 0x478C22AC,0x4C4B,0x42ED,{ 0x9E,0xD7,0x1E,0xF9,0xF9,0x4F,0xA3,0xD5 } }; // 478C22AC-4C4B-42ED-9ED7-1EF9F94FA3D5
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>{ 0x89CE06FD,0xDD6F,0x4A07,{ 0x87,0xF9,0xF9,0xEB,0x4D,0x89,0xD8,0x3D } }; // 89CE06FD-DD6F-4A07-87F9-F9EB4D89D83D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>{ 0xE3AC9240,0x813B,0x5EFD,{ 0x7E,0x11,0xAE,0x23,0x05,0xFC,0x77,0xF1 } }; // E3AC9240-813B-5EFD-7E11-AE2305FC77F1
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl>{ 0x69C2F051,0x1C1F,0x587A,{ 0x45,0x19,0x21,0x81,0x61,0x01,0x92,0xB7 } }; // 69C2F051-1C1F-587A-4519-2181610192B7
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation>{ 0xFC32B45F,0x4448,0x5505,{ 0x6C,0xC9,0x09,0xAF,0xA8,0x91,0x5F,0x5D } }; // FC32B45F-4448-5505-6CC9-09AFA8915F5D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IServerStreamWebSocket>{ 0x2CED5BBF,0x74F6,0x55E4,{ 0x79,0xDF,0x91,0x32,0x68,0x0D,0xFE,0xE8 } }; // 2CED5BBF-74F6-55E4-79DF-9132680DFEE8
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation>{ 0xFC32B45F,0x4448,0x5505,{ 0x6C,0xC9,0x09,0xAB,0xA8,0x91,0x5F,0x5D } }; // FC32B45F-4448-5505-6CC9-09ABA8915F5D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketActivityContext>{ 0x43B04D64,0x4C85,0x4396,{ 0xA6,0x37,0x1D,0x97,0x3F,0x6E,0xBD,0x49 } }; // 43B04D64-4C85-4396-A637-1D973F6EBD49
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory>{ 0xB99FC3C3,0x088C,0x4388,{ 0x83,0xAE,0x25,0x25,0x13,0x8E,0x04,0x9A } }; // B99FC3C3-088C-4388-83AE-2525138E049A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketActivityInformation>{ 0x8D8A42E4,0xA87E,0x4B74,{ 0x99,0x68,0x18,0x5B,0x25,0x11,0xDE,0xFE } }; // 8D8A42E4-A87E-4B74-9968-185B2511DEFE
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics>{ 0x8570B47A,0x7E7D,0x4736,{ 0x80,0x41,0x13,0x27,0xA6,0x54,0x3C,0x56 } }; // 8570B47A-7E7D-4736-8041-1327A6543C56
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails>{ 0x45F406A7,0xFC9F,0x4F81,{ 0xAC,0xAD,0x35,0x5F,0xEF,0x51,0xE6,0x7B } }; // 45F406A7-FC9F-4F81-ACAD-355FEF51E67B
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::ISocketErrorStatics>{ 0x828337F4,0x7D56,0x4D8E,{ 0xB7,0xB4,0xA0,0x7D,0xD7,0xC1,0xBC,0xA9 } }; // 828337F4-7D56-4D8E-B7B4-A07DD7C1BCA9
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocket>{ 0x69A22CF3,0xFC7B,0x4857,{ 0xAF,0x38,0xF6,0xE7,0xDE,0x6A,0x5B,0x49 } }; // 69A22CF3-FC7B-4857-AF38-F6E7DE6A5B49
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocket2>{ 0x29D0E575,0xF314,0x4D09,{ 0xAD,0xF0,0x0F,0xBD,0x96,0x7F,0xBD,0x9F } }; // 29D0E575-F314-4D09-ADF0-0FBD967FBD9F
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocket3>{ 0x3F430B00,0x9D28,0x4854,{ 0xBA,0xC3,0x23,0x01,0x94,0x1E,0xC2,0x23 } }; // 3F430B00-9D28-4854-BAC3-2301941EC223
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketControl>{ 0xFE25ADF1,0x92AB,0x4AF3,{ 0x99,0x92,0x0F,0x4C,0x85,0xE3,0x6C,0xC4 } }; // FE25ADF1-92AB-4AF3-9992-0F4C85E36CC4
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketControl2>{ 0xC2D09A56,0x060F,0x44C1,{ 0xB8,0xE2,0x1F,0xBF,0x60,0xBD,0x62,0xC5 } }; // C2D09A56-060F-44C1-B8E2-1FBF60BD62C5
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketControl3>{ 0xC56A444C,0x4E74,0x403E,{ 0x89,0x4C,0xB3,0x1C,0xAE,0x5C,0x73,0x42 } }; // C56A444C-4E74-403E-894C-B31CAE5C7342
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketControl4>{ 0x964E2B3D,0xEC27,0x4888,{ 0xB3,0xCE,0xC7,0x4B,0x41,0x84,0x23,0xAD } }; // 964E2B3D-EC27-4888-B3CE-C74B418423AD
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketInformation>{ 0x3B80AE30,0x5E68,0x4205,{ 0x88,0xF0,0xDC,0x85,0xD2,0xE2,0x5D,0xED } }; // 3B80AE30-5E68-4205-88F0-DC85D2E25DED
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketInformation2>{ 0x12C28452,0x4BDC,0x4EE4,{ 0x97,0x6A,0xCF,0x13,0x0E,0x9D,0x92,0xE3 } }; // 12C28452-4BDC-4EE4-976A-CF130E9D92E3
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListener>{ 0xFF513437,0xDF9F,0x4DF0,{ 0xBF,0x82,0x0E,0xC5,0xD7,0xB3,0x5A,0xAE } }; // FF513437-DF9F-4DF0-BF82-0EC5D7B35AAE
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListener2>{ 0x658DC13E,0xBB3E,0x4458,{ 0xB2,0x32,0xED,0x10,0x88,0x69,0x4B,0x98 } }; // 658DC13E-BB3E-4458-B232-ED1088694B98
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListener3>{ 0x4798201C,0xBDF8,0x4919,{ 0x85,0x42,0x28,0xD4,0x50,0xE7,0x45,0x07 } }; // 4798201C-BDF8-4919-8542-28D450E74507
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>{ 0x0C472EA9,0x373F,0x447B,{ 0x85,0xB1,0xDD,0xD4,0x54,0x88,0x03,0xBA } }; // 0C472EA9-373F-447B-85B1-DDD4548803BA
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl>{ 0x20D8C576,0x8D8A,0x4DBA,{ 0x97,0x22,0xA1,0x6C,0x4D,0x98,0x49,0x80 } }; // 20D8C576-8D8A-4DBA-9722-A16C4D984980
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2>{ 0x948BB665,0x2C3E,0x404B,{ 0xB8,0xB0,0x8E,0xB2,0x49,0xA2,0xB0,0xA1 } }; // 948BB665-2C3E-404B-B8B0-8EB249A2B0A1
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation>{ 0xE62BA82F,0xA63A,0x430B,{ 0xBF,0x62,0x29,0xE9,0x3E,0x56,0x33,0xB4 } }; // E62BA82F-A63A-430B-BF62-29E93E5633B4
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamSocketStatics>{ 0xA420BC4A,0x6E2E,0x4AF5,{ 0xB5,0x56,0x35,0x5A,0xE0,0xCD,0x4F,0x29 } }; // A420BC4A-6E2E-4AF5-B556-355AE0CD4F29
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamWebSocket>{ 0xBD4A49D8,0xB289,0x45BB,{ 0x97,0xEB,0xC7,0x52,0x52,0x05,0xA8,0x43 } }; // BD4A49D8-B289-45BB-97EB-C7525205A843
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamWebSocket2>{ 0xAA4D08CB,0x93F5,0x4678,{ 0x82,0x36,0x57,0xCC,0xE5,0x41,0x7E,0xD5 } }; // AA4D08CB-93F5-4678-8236-57CCE5417ED5
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamWebSocketControl>{ 0xB4F478B1,0xA45A,0x48DB,{ 0x95,0x3A,0x64,0x5B,0x7D,0x96,0x4C,0x07 } }; // B4F478B1-A45A-48DB-953A-645B7D964C07
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2>{ 0x215D9F7E,0xFA58,0x40DA,{ 0x9F,0x11,0xA4,0x8D,0xAF,0xE9,0x50,0x37 } }; // 215D9F7E-FA58-40DA-9F11-A48DAFE95037
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocket>{ 0xF877396F,0x99B1,0x4E18,{ 0xBC,0x08,0x85,0x0C,0x9A,0xDF,0x15,0x6E } }; // F877396F-99B1-4E18-BC08-850C9ADF156E
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs>{ 0xCEB78D07,0xD0A8,0x4703,{ 0xA0,0x91,0xC8,0xC2,0xC0,0x91,0x5B,0xC3 } }; // CEB78D07-D0A8-4703-A091-C8C2C0915BC3
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketControl>{ 0x2EC4BDC3,0xD9A5,0x455A,{ 0x98,0x11,0xDE,0x24,0xD4,0x53,0x37,0xE9 } }; // 2EC4BDC3-D9A5-455A-9811-DE24D45337E9
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketControl2>{ 0x79C3BE03,0xF2CA,0x461E,{ 0xAF,0x4E,0x96,0x65,0xBC,0x2D,0x06,0x20 } }; // 79C3BE03-F2CA-461E-AF4E-9665BC2D0620
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics>{ 0x27CDF35B,0x1F61,0x4709,{ 0x8E,0x02,0x61,0x28,0x3A,0xDA,0x4E,0x9D } }; // 27CDF35B-1F61-4709-8E02-61283ADA4E9D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketInformation>{ 0x5E01E316,0xC92A,0x47A5,{ 0xB2,0x5F,0x07,0x84,0x76,0x39,0xD1,0x81 } }; // 5E01E316-C92A-47A5-B25F-07847639D181
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketInformation2>{ 0xCE1D39CE,0xA1B7,0x4D43,{ 0x82,0x69,0x8D,0x5B,0x98,0x1B,0xD4,0x7A } }; // CE1D39CE-A1B7-4D43-8269-8D5B981BD47A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>{ 0xFFEFFE48,0x022A,0x4AB7,{ 0x8B,0x36,0xE1,0x0A,0xF4,0x64,0x0E,0x6B } }; // FFEFFE48-022A-4AB7-8B36-E10AF4640E6B
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ControlChannelTrigger>{ using type = winrt::Windows::Networking::Sockets::IControlChannelTrigger; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::DatagramSocket>{ using type = winrt::Windows::Networking::Sockets::IDatagramSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::DatagramSocketControl>{ using type = winrt::Windows::Networking::Sockets::IDatagramSocketControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::DatagramSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IDatagramSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>{ using type = winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::MessageWebSocket>{ using type = winrt::Windows::Networking::Sockets::IMessageWebSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::MessageWebSocketControl>{ using type = winrt::Windows::Networking::Sockets::IMessageWebSocketControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::MessageWebSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IWebSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>{ using type = winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ServerMessageWebSocket>{ using type = winrt::Windows::Networking::Sockets::IServerMessageWebSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl>{ using type = winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ServerStreamWebSocket>{ using type = winrt::Windows::Networking::Sockets::IServerStreamWebSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::SocketActivityContext>{ using type = winrt::Windows::Networking::Sockets::ISocketActivityContext; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::SocketActivityInformation>{ using type = winrt::Windows::Networking::Sockets::ISocketActivityInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails>{ using type = winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocket>{ using type = winrt::Windows::Networking::Sockets::IStreamSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketControl>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketListener>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketListener; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketListenerControl>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketListenerControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation>{ using type = winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamWebSocket>{ using type = winrt::Windows::Networking::Sockets::IStreamWebSocket; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamWebSocketControl>{ using type = winrt::Windows::Networking::Sockets::IStreamWebSocketControl; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::StreamWebSocketInformation>{ using type = winrt::Windows::Networking::Sockets::IWebSocketInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs>{ using type = winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::WebSocketKeepAlive>{ using type = winrt::Windows::ApplicationModel::Background::IBackgroundTask; };
    template <> struct default_interface<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>{ using type = winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs; };
    template <> struct abi<winrt::Windows::Networking::Sockets::IControlChannelTrigger>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlChannelTriggerId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerKeepAliveIntervalInMinutes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ServerKeepAliveIntervalInMinutes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_CurrentKeepAliveIntervalInMinutes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TransportObject(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeepAliveTrigger(void**) noexcept = 0;
            virtual int32_t __stdcall get_PushNotificationTrigger(void**) noexcept = 0;
            virtual int32_t __stdcall UsingTransport(void*) noexcept = 0;
            virtual int32_t __stdcall WaitForPushEnabled(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DecreaseNetworkKeepAliveInterval() noexcept = 0;
            virtual int32_t __stdcall FlushTransport() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IControlChannelTrigger2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsWakeFromLowPowerSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlChannelTrigger(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateControlChannelTrigger(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateControlChannelTriggerEx(void*, uint32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResetReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareSlotReset(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SoftwareSlotReset(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithEndpointPairAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall BindServiceNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall BindEndpointAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall JoinMulticastGroup(void*) noexcept = 0;
            virtual int32_t __stdcall GetOutputStreamAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetOutputStreamWithEndpointPairAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_MessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocket2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BindServiceNameAndAdapterAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocket3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelIOAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnership(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnershipWithConnectedStandbyAction(winrt::guid, int32_t) noexcept = 0;
            virtual int32_t __stdcall TransferOwnership(void*) noexcept = 0;
            virtual int32_t __stdcall TransferOwnershipWithContext(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TransferOwnershipWithContextAndKeepAliveTime(void*, void*, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualityOfService(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_QualityOfService(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutboundUnicastHopLimit(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundUnicastHopLimit(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InboundBufferSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InboundBufferSizeInBytes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_DontFragment(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DontFragment(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketControl3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MulticastOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_MulticastOnly(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalPort(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemotePort(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RemoteAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemotePort(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
            virtual int32_t __stdcall GetDataReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetDataStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IDatagramSocketStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetEndpointPairsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEndpointPairsWithSortOptionsAsync(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall add_MessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocket2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ServerCustomValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerCustomValidationRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocket3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendNonfinalFrameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SendFinalFrameAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxMessageSize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxMessageSize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MessageType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredUnsolicitedPongInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredUnsolicitedPongInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ActualUnsolicitedPongInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ReceiveMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReceiveMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ClientCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClientCertificate(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDataReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetDataStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMessageComplete(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CloseWithStatus(uint16_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MessageType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics*) noexcept = 0;
            virtual int32_t __stdcall get_Protocol(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IServerStreamWebSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CloseWithStatus(uint16_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics*) noexcept = 0;
            virtual int32_t __stdcall get_Protocol(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketActivityContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketActivityInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TaskId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_SocketKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Context(void**) noexcept = 0;
            virtual int32_t __stdcall get_DatagramSocket(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreamSocket(void**) noexcept = 0;
            virtual int32_t __stdcall get_StreamSocketListener(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllSockets(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SocketInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::ISocketErrorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithEndpointPairAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithEndpointPairAndProtectionLevelAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithProtectionLevelAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall UpgradeToSslAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocket2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConnectWithProtectionLevelAndAdapterAsync(void*, void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocket3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelIOAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnership(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnershipWithConnectedStandbyAction(winrt::guid, int32_t) noexcept = 0;
            virtual int32_t __stdcall TransferOwnership(void*) noexcept = 0;
            virtual int32_t __stdcall TransferOwnershipWithContext(void*, void*) noexcept = 0;
            virtual int32_t __stdcall TransferOwnershipWithContextAndKeepAliveTime(void*, void*, int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NoDelay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NoDelay(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeepAlive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeepAlive(bool) noexcept = 0;
            virtual int32_t __stdcall get_OutboundBufferSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundBufferSizeInBytes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_QualityOfService(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_QualityOfService(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutboundUnicastHopLimit(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundUnicastHopLimit(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IgnorableServerCertificateErrors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketControl3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SerializeConnectionAttempts(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SerializeConnectionAttempts(bool) noexcept = 0;
            virtual int32_t __stdcall get_ClientCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClientCertificate(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketControl4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinProtectionLevel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalPort(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteHostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemotePort(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoundTripTimeStatistics(struct struct_Windows_Networking_Sockets_RoundTripTimeStatistics*) noexcept = 0;
            virtual int32_t __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics*) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SessionKey(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall BindServiceNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall BindEndpointAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListener2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BindServiceNameWithProtectionLevelAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall BindServiceNameWithProtectionLevelAndAdapterAsync(void*, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListener3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CancelIOAsync(void**) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnership(winrt::guid) noexcept = 0;
            virtual int32_t __stdcall EnableTransferOwnershipWithConnectedStandbyAction(winrt::guid, int32_t) noexcept = 0;
            virtual int32_t __stdcall TransferOwnership(void*) noexcept = 0;
            virtual int32_t __stdcall TransferOwnershipWithContext(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Socket(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualityOfService(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_QualityOfService(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NoDelay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NoDelay(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeepAlive(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeepAlive(bool) noexcept = 0;
            virtual int32_t __stdcall get_OutboundBufferSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundBufferSizeInBytes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutboundUnicastHopLimit(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundUnicastHopLimit(uint8_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalPort(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamSocketStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetEndpointPairsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetEndpointPairsWithSortOptionsAsync(void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamWebSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Control(void**) noexcept = 0;
            virtual int32_t __stdcall get_Information(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamWebSocket2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ServerCustomValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerCustomValidationRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamWebSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NoDelay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NoDelay(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredUnsolicitedPongInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredUnsolicitedPongInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ActualUnsolicitedPongInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ClientCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClientCertificate(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocket>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetRequestHeader(void*, void*) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CloseWithStatus(uint16_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Code(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Reason(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutboundBufferSizeInBytes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OutboundBufferSizeInBytes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_ProxyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedProtocols(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IgnorableServerCertificateErrors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetStatus(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics*) noexcept = 0;
            virtual int32_t __stdcall get_Protocol(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
            virtual int32_t __stdcall Reject() noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IControlChannelTrigger
    {
        [[nodiscard]] auto ControlChannelTriggerId() const;
        [[nodiscard]] auto ServerKeepAliveIntervalInMinutes() const;
        auto ServerKeepAliveIntervalInMinutes(uint32_t value) const;
        [[nodiscard]] auto CurrentKeepAliveIntervalInMinutes() const;
        [[nodiscard]] auto TransportObject() const;
        [[nodiscard]] auto KeepAliveTrigger() const;
        [[nodiscard]] auto PushNotificationTrigger() const;
        auto UsingTransport(winrt::Windows::Foundation::IInspectable const& transport) const;
        auto WaitForPushEnabled() const;
        auto DecreaseNetworkKeepAliveInterval() const;
        auto FlushTransport() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IControlChannelTrigger>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTrigger<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IControlChannelTrigger2
    {
        [[nodiscard]] auto IsWakeFromLowPowerSupported() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IControlChannelTrigger2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTrigger2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IControlChannelTriggerEventDetails
    {
        [[nodiscard]] auto ControlChannelTrigger() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IControlChannelTriggerFactory
    {
        auto CreateControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes) const;
        auto CreateControlChannelTriggerEx(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails
    {
        [[nodiscard]] auto ResetReason() const;
        [[nodiscard]] auto HardwareSlotReset() const;
        [[nodiscard]] auto SoftwareSlotReset() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocket
    {
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        [[nodiscard]] auto OutputStream() const;
        auto ConnectAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
        auto ConnectAsync(winrt::Windows::Networking::EndpointPair const& endpointPair) const;
        auto BindServiceNameAsync(param::hstring const& localServiceName) const;
        auto BindEndpointAsync(winrt::Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const;
        auto JoinMulticastGroup(winrt::Windows::Networking::HostName const& host) const;
        auto GetOutputStreamAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
        auto GetOutputStreamAsync(winrt::Windows::Networking::EndpointPair const& endpointPair) const;
        auto MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::DatagramSocket, winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const;
        using MessageReceived_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IDatagramSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IDatagramSocket>::remove_MessageReceived>;
        [[nodiscard]] MessageReceived_revoker MessageReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::DatagramSocket, winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const;
        auto MessageReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocket2
    {
        auto BindServiceNameAsync(param::hstring const& localServiceName, winrt::Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocket2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocket3
    {
        auto CancelIOAsync() const;
        auto EnableTransferOwnership(winrt::guid const& taskId) const;
        auto EnableTransferOwnership(winrt::guid const& taskId, winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
        auto TransferOwnership(param::hstring const& socketId) const;
        auto TransferOwnership(param::hstring const& socketId, winrt::Windows::Networking::Sockets::SocketActivityContext const& data) const;
        auto TransferOwnership(param::hstring const& socketId, winrt::Windows::Networking::Sockets::SocketActivityContext const& data, winrt::Windows::Foundation::TimeSpan const& keepAliveTime) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocket3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocket3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketControl
    {
        [[nodiscard]] auto QualityOfService() const;
        auto QualityOfService(winrt::Windows::Networking::Sockets::SocketQualityOfService const& value) const;
        [[nodiscard]] auto OutboundUnicastHopLimit() const;
        auto OutboundUnicastHopLimit(uint8_t value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketControl2
    {
        [[nodiscard]] auto InboundBufferSizeInBytes() const;
        auto InboundBufferSizeInBytes(uint32_t value) const;
        [[nodiscard]] auto DontFragment() const;
        auto DontFragment(bool value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketControl3
    {
        [[nodiscard]] auto MulticastOnly() const;
        auto MulticastOnly(bool value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketControl3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketControl3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketInformation
    {
        [[nodiscard]] auto LocalAddress() const;
        [[nodiscard]] auto LocalPort() const;
        [[nodiscard]] auto RemoteAddress() const;
        [[nodiscard]] auto RemotePort() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs
    {
        [[nodiscard]] auto RemoteAddress() const;
        [[nodiscard]] auto RemotePort() const;
        [[nodiscard]] auto LocalAddress() const;
        auto GetDataReader() const;
        auto GetDataStream() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IDatagramSocketStatics
    {
        auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
        auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::HostNameSortOptions const& sortOptions) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IDatagramSocketStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IDatagramSocketStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocket
    {
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        auto MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::MessageWebSocket, winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const;
        using MessageReceived_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IMessageWebSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IMessageWebSocket>::remove_MessageReceived>;
        [[nodiscard]] MessageReceived_revoker MessageReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::MessageWebSocket, winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const;
        auto MessageReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocket2
    {
        auto ServerCustomValidationRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::MessageWebSocket, winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
        using ServerCustomValidationRequested_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IMessageWebSocket2, &impl::abi_t<winrt::Windows::Networking::Sockets::IMessageWebSocket2>::remove_ServerCustomValidationRequested>;
        [[nodiscard]] ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::MessageWebSocket, winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
        auto ServerCustomValidationRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocket2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocket2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocket3
    {
        auto SendNonfinalFrameAsync(winrt::Windows::Storage::Streams::IBuffer const& data) const;
        auto SendFinalFrameAsync(winrt::Windows::Storage::Streams::IBuffer const& data) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocket3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocket3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocketControl
    {
        [[nodiscard]] auto MaxMessageSize() const;
        auto MaxMessageSize(uint32_t value) const;
        [[nodiscard]] auto MessageType() const;
        auto MessageType(winrt::Windows::Networking::Sockets::SocketMessageType const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocketControl2
    {
        [[nodiscard]] auto DesiredUnsolicitedPongInterval() const;
        auto DesiredUnsolicitedPongInterval(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ActualUnsolicitedPongInterval() const;
        [[nodiscard]] auto ReceiveMode() const;
        auto ReceiveMode(winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode const& value) const;
        [[nodiscard]] auto ClientCertificate() const;
        auto ClientCertificate(winrt::Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs
    {
        [[nodiscard]] auto MessageType() const;
        auto GetDataReader() const;
        auto GetDataStream() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2
    {
        [[nodiscard]] auto IsMessageComplete() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IServerMessageWebSocket
    {
        auto MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerMessageWebSocket, winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& value) const;
        using MessageReceived_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IServerMessageWebSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>::remove_MessageReceived>;
        [[nodiscard]] MessageReceived_revoker MessageReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerMessageWebSocket, winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& value) const;
        auto MessageReceived(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        [[nodiscard]] auto OutputStream() const;
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerMessageWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IServerMessageWebSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerMessageWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto Close(uint16_t code, param::hstring const& reason) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IServerMessageWebSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IServerMessageWebSocketControl
    {
        [[nodiscard]] auto MessageType() const;
        auto MessageType(winrt::Windows::Networking::Sockets::SocketMessageType const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IServerMessageWebSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IServerMessageWebSocketInformation
    {
        [[nodiscard]] auto BandwidthStatistics() const;
        [[nodiscard]] auto Protocol() const;
        [[nodiscard]] auto LocalAddress() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IServerMessageWebSocketInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IServerStreamWebSocket
    {
        [[nodiscard]] auto Information() const;
        [[nodiscard]] auto InputStream() const;
        [[nodiscard]] auto OutputStream() const;
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerStreamWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IServerStreamWebSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IServerStreamWebSocket>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::ServerStreamWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto Close(uint16_t code, param::hstring const& reason) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IServerStreamWebSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IServerStreamWebSocketInformation
    {
        [[nodiscard]] auto BandwidthStatistics() const;
        [[nodiscard]] auto Protocol() const;
        [[nodiscard]] auto LocalAddress() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IServerStreamWebSocketInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketActivityContext
    {
        [[nodiscard]] auto Data() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketActivityContext>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityContext<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketActivityContextFactory
    {
        auto Create(winrt::Windows::Storage::Streams::IBuffer const& data) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityContextFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketActivityInformation
    {
        [[nodiscard]] auto TaskId() const;
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto SocketKind() const;
        [[nodiscard]] auto Context() const;
        [[nodiscard]] auto DatagramSocket() const;
        [[nodiscard]] auto StreamSocket() const;
        [[nodiscard]] auto StreamSocketListener() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketActivityInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketActivityInformationStatics
    {
        [[nodiscard]] auto AllSockets() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails
    {
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto SocketInformation() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_ISocketErrorStatics
    {
        auto GetStatus(int32_t hresult) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::ISocketErrorStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_ISocketErrorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocket
    {
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        [[nodiscard]] auto InputStream() const;
        [[nodiscard]] auto OutputStream() const;
        auto ConnectAsync(winrt::Windows::Networking::EndpointPair const& endpointPair) const;
        auto ConnectAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
        auto ConnectAsync(winrt::Windows::Networking::EndpointPair const& endpointPair, winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
        auto ConnectAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
        auto UpgradeToSslAsync(winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, winrt::Windows::Networking::HostName const& validationHostName) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocket2
    {
        auto ConnectAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, winrt::Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocket2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocket3
    {
        auto CancelIOAsync() const;
        auto EnableTransferOwnership(winrt::guid const& taskId) const;
        auto EnableTransferOwnership(winrt::guid const& taskId, winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
        auto TransferOwnership(param::hstring const& socketId) const;
        auto TransferOwnership(param::hstring const& socketId, winrt::Windows::Networking::Sockets::SocketActivityContext const& data) const;
        auto TransferOwnership(param::hstring const& socketId, winrt::Windows::Networking::Sockets::SocketActivityContext const& data, winrt::Windows::Foundation::TimeSpan const& keepAliveTime) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocket3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocket3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketControl
    {
        [[nodiscard]] auto NoDelay() const;
        auto NoDelay(bool value) const;
        [[nodiscard]] auto KeepAlive() const;
        auto KeepAlive(bool value) const;
        [[nodiscard]] auto OutboundBufferSizeInBytes() const;
        auto OutboundBufferSizeInBytes(uint32_t value) const;
        [[nodiscard]] auto QualityOfService() const;
        auto QualityOfService(winrt::Windows::Networking::Sockets::SocketQualityOfService const& value) const;
        [[nodiscard]] auto OutboundUnicastHopLimit() const;
        auto OutboundUnicastHopLimit(uint8_t value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketControl2
    {
        [[nodiscard]] auto IgnorableServerCertificateErrors() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketControl3
    {
        [[nodiscard]] auto SerializeConnectionAttempts() const;
        auto SerializeConnectionAttempts(bool value) const;
        [[nodiscard]] auto ClientCertificate() const;
        auto ClientCertificate(winrt::Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketControl3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketControl4
    {
        [[nodiscard]] auto MinProtectionLevel() const;
        auto MinProtectionLevel(winrt::Windows::Networking::Sockets::SocketProtectionLevel const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketControl4>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketControl4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketInformation
    {
        [[nodiscard]] auto LocalAddress() const;
        [[nodiscard]] auto LocalPort() const;
        [[nodiscard]] auto RemoteHostName() const;
        [[nodiscard]] auto RemoteAddress() const;
        [[nodiscard]] auto RemoteServiceName() const;
        [[nodiscard]] auto RemotePort() const;
        [[nodiscard]] auto RoundTripTimeStatistics() const;
        [[nodiscard]] auto BandwidthStatistics() const;
        [[nodiscard]] auto ProtectionLevel() const;
        [[nodiscard]] auto SessionKey() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketInformation2
    {
        [[nodiscard]] auto ServerCertificateErrorSeverity() const;
        [[nodiscard]] auto ServerCertificateErrors() const;
        [[nodiscard]] auto ServerCertificate() const;
        [[nodiscard]] auto ServerIntermediateCertificates() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketInformation2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListener
    {
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        auto BindServiceNameAsync(param::hstring const& localServiceName) const;
        auto BindEndpointAsync(winrt::Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const;
        auto ConnectionReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::StreamSocketListener, winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const;
        using ConnectionReceived_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IStreamSocketListener, &impl::abi_t<winrt::Windows::Networking::Sockets::IStreamSocketListener>::remove_ConnectionReceived>;
        [[nodiscard]] ConnectionReceived_revoker ConnectionReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::StreamSocketListener, winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const;
        auto ConnectionReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListener>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListener2
    {
        auto BindServiceNameAsync(param::hstring const& localServiceName, winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const;
        auto BindServiceNameAsync(param::hstring const& localServiceName, winrt::Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, winrt::Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListener2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListener3
    {
        auto CancelIOAsync() const;
        auto EnableTransferOwnership(winrt::guid const& taskId) const;
        auto EnableTransferOwnership(winrt::guid const& taskId, winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const;
        auto TransferOwnership(param::hstring const& socketId) const;
        auto TransferOwnership(param::hstring const& socketId, winrt::Windows::Networking::Sockets::SocketActivityContext const& data) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListener3>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListener3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs
    {
        [[nodiscard]] auto Socket() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListenerControl
    {
        [[nodiscard]] auto QualityOfService() const;
        auto QualityOfService(winrt::Windows::Networking::Sockets::SocketQualityOfService const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListenerControl2
    {
        [[nodiscard]] auto NoDelay() const;
        auto NoDelay(bool value) const;
        [[nodiscard]] auto KeepAlive() const;
        auto KeepAlive(bool value) const;
        [[nodiscard]] auto OutboundBufferSizeInBytes() const;
        auto OutboundBufferSizeInBytes(uint32_t value) const;
        [[nodiscard]] auto OutboundUnicastHopLimit() const;
        auto OutboundUnicastHopLimit(uint8_t value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketListenerInformation
    {
        [[nodiscard]] auto LocalPort() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketListenerInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamSocketStatics
    {
        auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
        auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::HostNameSortOptions const& sortOptions) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamSocketStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamSocketStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamWebSocket
    {
        [[nodiscard]] auto Control() const;
        [[nodiscard]] auto Information() const;
        [[nodiscard]] auto InputStream() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamWebSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamWebSocket2
    {
        auto ServerCustomValidationRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::StreamWebSocket, winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
        using ServerCustomValidationRequested_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IStreamWebSocket2, &impl::abi_t<winrt::Windows::Networking::Sockets::IStreamWebSocket2>::remove_ServerCustomValidationRequested>;
        [[nodiscard]] ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::StreamWebSocket, winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const;
        auto ServerCustomValidationRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamWebSocket2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocket2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamWebSocketControl
    {
        [[nodiscard]] auto NoDelay() const;
        auto NoDelay(bool value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamWebSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IStreamWebSocketControl2
    {
        [[nodiscard]] auto DesiredUnsolicitedPongInterval() const;
        auto DesiredUnsolicitedPongInterval(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ActualUnsolicitedPongInterval() const;
        [[nodiscard]] auto ClientCertificate() const;
        auto ClientCertificate(winrt::Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocket
    {
        [[nodiscard]] auto OutputStream() const;
        auto ConnectAsync(winrt::Windows::Foundation::Uri const& uri) const;
        auto SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::IWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::Networking::Sockets::IWebSocket, &impl::abi_t<winrt::Windows::Networking::Sockets::IWebSocket>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::Sockets::IWebSocket, winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const;
        auto Closed(winrt::event_token const& eventCookie) const noexcept;
        auto Close(uint16_t code, param::hstring const& reason) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocket>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocket<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs
    {
        [[nodiscard]] auto Code() const;
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketControl
    {
        [[nodiscard]] auto OutboundBufferSizeInBytes() const;
        auto OutboundBufferSizeInBytes(uint32_t value) const;
        [[nodiscard]] auto ServerCredential() const;
        auto ServerCredential(winrt::Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto ProxyCredential() const;
        auto ProxyCredential(winrt::Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] auto SupportedProtocols() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketControl>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketControl<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketControl2
    {
        [[nodiscard]] auto IgnorableServerCertificateErrors() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketControl2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketControl2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketErrorStatics
    {
        auto GetStatus(int32_t hresult) const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketErrorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketInformation
    {
        [[nodiscard]] auto LocalAddress() const;
        [[nodiscard]] auto BandwidthStatistics() const;
        [[nodiscard]] auto Protocol() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketInformation2
    {
        [[nodiscard]] auto ServerCertificate() const;
        [[nodiscard]] auto ServerCertificateErrorSeverity() const;
        [[nodiscard]] auto ServerCertificateErrors() const;
        [[nodiscard]] auto ServerIntermediateCertificates() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketInformation2>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs
    {
        [[nodiscard]] auto ServerCertificate() const;
        [[nodiscard]] auto ServerCertificateErrorSeverity() const;
        [[nodiscard]] auto ServerCertificateErrors() const;
        [[nodiscard]] auto ServerIntermediateCertificates() const;
        auto Reject() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>;
    };
    struct struct_Windows_Networking_Sockets_BandwidthStatistics
    {
        uint64_t OutboundBitsPerSecond;
        uint64_t InboundBitsPerSecond;
        uint64_t OutboundBitsPerSecondInstability;
        uint64_t InboundBitsPerSecondInstability;
        bool OutboundBandwidthPeaked;
        bool InboundBandwidthPeaked;
    };
    template <> struct abi<Windows::Networking::Sockets::BandwidthStatistics>
    {
        using type = struct_Windows_Networking_Sockets_BandwidthStatistics;
    };
    struct struct_Windows_Networking_Sockets_RoundTripTimeStatistics
    {
        uint32_t Variance;
        uint32_t Max;
        uint32_t Min;
        uint32_t Sum;
    };
    template <> struct abi<Windows::Networking::Sockets::RoundTripTimeStatistics>
    {
        using type = struct_Windows_Networking_Sockets_RoundTripTimeStatistics;
    };
}
#endif
