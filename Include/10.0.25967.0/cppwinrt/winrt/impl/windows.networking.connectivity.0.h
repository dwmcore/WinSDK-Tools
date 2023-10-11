// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Networking_Connectivity_0_H
#define WINRT_Windows_Networking_Connectivity_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    enum class DomainNameType : int32_t;
    struct EndpointPair;
    struct HostName;
    enum class HostNameSortOptions : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    enum class CellularApnAuthenticationType : int32_t
    {
        None = 0,
        Pap = 1,
        Chap = 2,
        Mschapv2 = 3,
    };
    enum class ConnectionProfileDeleteStatus : int32_t
    {
        Success = 0,
        DeniedByUser = 1,
        DeniedBySystem = 2,
        UnknownError = 3,
    };
    enum class DataUsageGranularity : int32_t
    {
        PerMinute = 0,
        PerHour = 1,
        PerDay = 2,
        Total = 3,
    };
    enum class DomainAuthenticationKind : int32_t
    {
        None = 0,
        Ldap = 1,
        Tls = 2,
    };
    enum class DomainConnectivityLevel : int32_t
    {
        None = 0,
        Unauthenticated = 1,
        Authenticated = 2,
    };
    enum class NetworkAuthenticationType : int32_t
    {
        None = 0,
        Unknown = 1,
        Open80211 = 2,
        SharedKey80211 = 3,
        Wpa = 4,
        WpaPsk = 5,
        WpaNone = 6,
        Rsna = 7,
        RsnaPsk = 8,
        Ihv = 9,
        Wpa3 = 10,
        Wpa3Enterprise192Bits = 10,
        Wpa3Sae = 11,
        Owe = 12,
        Wpa3Enterprise = 13,
    };
    enum class NetworkConnectivityLevel : int32_t
    {
        None = 0,
        LocalAccess = 1,
        ConstrainedInternetAccess = 2,
        InternetAccess = 3,
    };
    enum class NetworkCostType : int32_t
    {
        Unknown = 0,
        Unrestricted = 1,
        Fixed = 2,
        Variable = 3,
    };
    enum class NetworkEncryptionType : int32_t
    {
        None = 0,
        Unknown = 1,
        Wep = 2,
        Wep40 = 3,
        Wep104 = 4,
        Tkip = 5,
        Ccmp = 6,
        WpaUseGroup = 7,
        RsnUseGroup = 8,
        Ihv = 9,
        Gcmp = 10,
        Gcmp256 = 11,
    };
    enum class NetworkTypes : uint32_t
    {
        None = 0,
        Internet = 0x1,
        PrivateNetwork = 0x2,
    };
    enum class RoamingStates : uint32_t
    {
        None = 0,
        NotRoaming = 0x1,
        Roaming = 0x2,
    };
    enum class TriStates : int32_t
    {
        DoNotCare = 0,
        No = 1,
        Yes = 2,
    };
    enum class WwanDataClass : uint32_t
    {
        None = 0,
        Gprs = 0x1,
        Edge = 0x2,
        Umts = 0x4,
        Hsdpa = 0x8,
        Hsupa = 0x10,
        LteAdvanced = 0x20,
        NewRadioNonStandalone = 0x40,
        NewRadioStandalone = 0x80,
        Cdma1xRtt = 0x10000,
        Cdma1xEvdo = 0x20000,
        Cdma1xEvdoRevA = 0x40000,
        Cdma1xEvdv = 0x80000,
        Cdma3xRtt = 0x100000,
        Cdma1xEvdoRevB = 0x200000,
        CdmaUmb = 0x400000,
        Custom = 0x80000000,
    };
    enum class WwanNetworkIPKind : int32_t
    {
        None = 0,
        Ipv4 = 1,
        Ipv6 = 2,
        Ipv4v6 = 3,
        Ipv4v6v4Xlat = 4,
    };
    enum class WwanNetworkRegistrationState : int32_t
    {
        None = 0,
        Deregistered = 1,
        Searching = 2,
        Home = 3,
        Roaming = 4,
        Partner = 5,
        Denied = 6,
    };
    struct IAttributedNetworkUsage;
    struct ICellularApnContext;
    struct ICellularApnContext2;
    struct IConnectionCost;
    struct IConnectionCost2;
    struct IConnectionProfile;
    struct IConnectionProfile2;
    struct IConnectionProfile3;
    struct IConnectionProfile4;
    struct IConnectionProfile5;
    struct IConnectionProfile6;
    struct IConnectionProfileFilter;
    struct IConnectionProfileFilter2;
    struct IConnectionProfileFilter3;
    struct IConnectionSession;
    struct IConnectivityInterval;
    struct IConnectivityManagerStatics;
    struct IDataPlanStatus;
    struct IDataPlanUsage;
    struct IDataUsage;
    struct IIPInformation;
    struct ILanIdentifier;
    struct ILanIdentifierData;
    struct INetworkAdapter;
    struct INetworkInformationStatics;
    struct INetworkInformationStatics2;
    struct INetworkItem;
    struct INetworkSecuritySettings;
    struct INetworkStateChangeEventDetails;
    struct INetworkStateChangeEventDetails2;
    struct INetworkUsage;
    struct IProviderNetworkUsage;
    struct IProxyConfiguration;
    struct IRoutePolicy;
    struct IRoutePolicyFactory;
    struct IWlanConnectionProfileDetails;
    struct IWwanConnectionProfileDetails;
    struct IWwanConnectionProfileDetails2;
    struct AttributedNetworkUsage;
    struct CellularApnContext;
    struct ConnectionCost;
    struct ConnectionProfile;
    struct ConnectionProfileFilter;
    struct ConnectionSession;
    struct ConnectivityInterval;
    struct ConnectivityManager;
    struct DataPlanStatus;
    struct DataPlanUsage;
    struct DataUsage;
    struct IPInformation;
    struct LanIdentifier;
    struct LanIdentifierData;
    struct NetworkAdapter;
    struct NetworkInformation;
    struct NetworkItem;
    struct NetworkSecuritySettings;
    struct NetworkStateChangeEventDetails;
    struct NetworkUsage;
    struct ProviderNetworkUsage;
    struct ProxyConfiguration;
    struct RoutePolicy;
    struct WlanConnectionProfileDetails;
    struct WwanConnectionProfileDetails;
    struct NetworkUsageStates;
    struct NetworkStatusChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ICellularApnContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ICellularApnContext2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionCost>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionCost2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfile6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectionSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectivityInterval>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IDataPlanStatus>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IDataPlanUsage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IDataUsage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IIPInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ILanIdentifier>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ILanIdentifierData>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkAdapter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::INetworkUsage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IProxyConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IRoutePolicy>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::CellularApnContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectionCost>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectionProfile>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectionSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectivityInterval>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectivityManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DataPlanStatus>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DataPlanUsage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DataUsage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::IPInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::LanIdentifier>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::LanIdentifierData>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkAdapter>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkUsage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ProxyConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::RoutePolicy>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::ConnectionProfileDeleteStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DataUsageGranularity>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DomainAuthenticationKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::DomainConnectivityLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkAuthenticationType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkConnectivityLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkCostType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkEncryptionType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkTypes>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::RoamingStates>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::TriStates>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::WwanDataClass>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::WwanNetworkIPKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::WwanNetworkRegistrationState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkUsageStates>{ using type = struct_category<winrt::Windows::Networking::Connectivity::TriStates, winrt::Windows::Networking::Connectivity::TriStates>; };
    template <> struct category<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> = L"Windows.Networking.Connectivity.AttributedNetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::CellularApnContext> = L"Windows.Networking.Connectivity.CellularApnContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectionCost> = L"Windows.Networking.Connectivity.ConnectionCost";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectionProfile> = L"Windows.Networking.Connectivity.ConnectionProfile";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> = L"Windows.Networking.Connectivity.ConnectionProfileFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectionSession> = L"Windows.Networking.Connectivity.ConnectionSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectivityInterval> = L"Windows.Networking.Connectivity.ConnectivityInterval";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectivityManager> = L"Windows.Networking.Connectivity.ConnectivityManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DataPlanStatus> = L"Windows.Networking.Connectivity.DataPlanStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DataPlanUsage> = L"Windows.Networking.Connectivity.DataPlanUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DataUsage> = L"Windows.Networking.Connectivity.DataUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IPInformation> = L"Windows.Networking.Connectivity.IPInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::LanIdentifier> = L"Windows.Networking.Connectivity.LanIdentifier";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::LanIdentifierData> = L"Windows.Networking.Connectivity.LanIdentifierData";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkAdapter> = L"Windows.Networking.Connectivity.NetworkAdapter";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkInformation> = L"Windows.Networking.Connectivity.NetworkInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkItem> = L"Windows.Networking.Connectivity.NetworkItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> = L"Windows.Networking.Connectivity.NetworkSecuritySettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> = L"Windows.Networking.Connectivity.NetworkStateChangeEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkUsage> = L"Windows.Networking.Connectivity.NetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage> = L"Windows.Networking.Connectivity.ProviderNetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ProxyConfiguration> = L"Windows.Networking.Connectivity.ProxyConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::RoutePolicy> = L"Windows.Networking.Connectivity.RoutePolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> = L"Windows.Networking.Connectivity.WlanConnectionProfileDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> = L"Windows.Networking.Connectivity.WwanConnectionProfileDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType> = L"Windows.Networking.Connectivity.CellularApnAuthenticationType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ConnectionProfileDeleteStatus> = L"Windows.Networking.Connectivity.ConnectionProfileDeleteStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DataUsageGranularity> = L"Windows.Networking.Connectivity.DataUsageGranularity";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DomainAuthenticationKind> = L"Windows.Networking.Connectivity.DomainAuthenticationKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::DomainConnectivityLevel> = L"Windows.Networking.Connectivity.DomainConnectivityLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkAuthenticationType> = L"Windows.Networking.Connectivity.NetworkAuthenticationType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkConnectivityLevel> = L"Windows.Networking.Connectivity.NetworkConnectivityLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkCostType> = L"Windows.Networking.Connectivity.NetworkCostType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkEncryptionType> = L"Windows.Networking.Connectivity.NetworkEncryptionType";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkTypes> = L"Windows.Networking.Connectivity.NetworkTypes";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::RoamingStates> = L"Windows.Networking.Connectivity.RoamingStates";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::TriStates> = L"Windows.Networking.Connectivity.TriStates";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::WwanDataClass> = L"Windows.Networking.Connectivity.WwanDataClass";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::WwanNetworkIPKind> = L"Windows.Networking.Connectivity.WwanNetworkIPKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::WwanNetworkRegistrationState> = L"Windows.Networking.Connectivity.WwanNetworkRegistrationState";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkUsageStates> = L"Windows.Networking.Connectivity.NetworkUsageStates";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> = L"Windows.Networking.Connectivity.IAttributedNetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ICellularApnContext> = L"Windows.Networking.Connectivity.ICellularApnContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ICellularApnContext2> = L"Windows.Networking.Connectivity.ICellularApnContext2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionCost> = L"Windows.Networking.Connectivity.IConnectionCost";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionCost2> = L"Windows.Networking.Connectivity.IConnectionCost2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile> = L"Windows.Networking.Connectivity.IConnectionProfile";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile2> = L"Windows.Networking.Connectivity.IConnectionProfile2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile3> = L"Windows.Networking.Connectivity.IConnectionProfile3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile4> = L"Windows.Networking.Connectivity.IConnectionProfile4";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile5> = L"Windows.Networking.Connectivity.IConnectionProfile5";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfile6> = L"Windows.Networking.Connectivity.IConnectionProfile6";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> = L"Windows.Networking.Connectivity.IConnectionProfileFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> = L"Windows.Networking.Connectivity.IConnectionProfileFilter2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3> = L"Windows.Networking.Connectivity.IConnectionProfileFilter3";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectionSession> = L"Windows.Networking.Connectivity.IConnectionSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectivityInterval> = L"Windows.Networking.Connectivity.IConnectivityInterval";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> = L"Windows.Networking.Connectivity.IConnectivityManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IDataPlanStatus> = L"Windows.Networking.Connectivity.IDataPlanStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IDataPlanUsage> = L"Windows.Networking.Connectivity.IDataPlanUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IDataUsage> = L"Windows.Networking.Connectivity.IDataUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IIPInformation> = L"Windows.Networking.Connectivity.IIPInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ILanIdentifier> = L"Windows.Networking.Connectivity.ILanIdentifier";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::ILanIdentifierData> = L"Windows.Networking.Connectivity.ILanIdentifierData";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkAdapter> = L"Windows.Networking.Connectivity.INetworkAdapter";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> = L"Windows.Networking.Connectivity.INetworkInformationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> = L"Windows.Networking.Connectivity.INetworkInformationStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkItem> = L"Windows.Networking.Connectivity.INetworkItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> = L"Windows.Networking.Connectivity.INetworkSecuritySettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::INetworkUsage> = L"Windows.Networking.Connectivity.INetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage> = L"Windows.Networking.Connectivity.IProviderNetworkUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IProxyConfiguration> = L"Windows.Networking.Connectivity.IProxyConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IRoutePolicy> = L"Windows.Networking.Connectivity.IRoutePolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> = L"Windows.Networking.Connectivity.IRoutePolicyFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> = L"Windows.Networking.Connectivity.IWlanConnectionProfileDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails2";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler> = L"Windows.Networking.Connectivity.NetworkStatusChangedEventHandler";
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage>{ 0xF769B039,0xECA2,0x45EB,{ 0xAD,0xE1,0xB0,0x36,0x8B,0x75,0x6C,0x49 } }; // F769B039-ECA2-45EB-ADE1-B0368B756C49
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::ICellularApnContext>{ 0x6FA529F4,0xEFFD,0x4542,{ 0x9A,0xB2,0x70,0x5B,0xBF,0x94,0x94,0x3A } }; // 6FA529F4-EFFD-4542-9AB2-705BBF94943A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::ICellularApnContext2>{ 0x76B0EB1A,0xAC49,0x4350,{ 0xB1,0xE5,0xDC,0x47,0x63,0xBC,0x69,0xC7 } }; // 76B0EB1A-AC49-4350-B1E5-DC4763BC69C7
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionCost>{ 0xBAD7D829,0x3416,0x4B10,{ 0xA2,0x02,0xBA,0xC0,0xB0,0x75,0xBD,0xAE } }; // BAD7D829-3416-4B10-A202-BAC0B075BDAE
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionCost2>{ 0x8E113A05,0xE209,0x4549,{ 0xBB,0x25,0x5E,0x0D,0xB6,0x91,0xCB,0x05 } }; // 8E113A05-E209-4549-BB25-5E0DB691CB05
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile>{ 0x71BA143C,0x598E,0x49D0,{ 0x84,0xEB,0x8F,0xEB,0xAE,0xDC,0xC1,0x95 } }; // 71BA143C-598E-49D0-84EB-8FEBAEDCC195
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile2>{ 0xE2045145,0x4C9F,0x400C,{ 0x91,0x50,0x7E,0xC7,0xD6,0xE2,0x88,0x8A } }; // E2045145-4C9F-400C-9150-7EC7D6E2888A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile3>{ 0x578C2528,0x4CD9,0x4161,{ 0x80,0x45,0x20,0x1C,0xFD,0x5B,0x11,0x5C } }; // 578C2528-4CD9-4161-8045-201CFD5B115C
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile4>{ 0x7A2D42CD,0x81E0,0x4AE6,{ 0xAB,0xED,0xAB,0x9C,0xA1,0x3E,0xB7,0x14 } }; // 7A2D42CD-81E0-4AE6-ABED-AB9CA13EB714
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile5>{ 0x85361EC7,0x9C73,0x4BE0,{ 0x8F,0x14,0x57,0x8E,0xEC,0x71,0xEE,0x0E } }; // 85361EC7-9C73-4BE0-8F14-578EEC71EE0E
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfile6>{ 0xDC27DFE2,0x7A6F,0x5D0E,{ 0x95,0x89,0x2F,0xE2,0xE5,0xB6,0xF9,0xAA } }; // DC27DFE2-7A6F-5D0E-9589-2FE2E5B6F9AA
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter>{ 0x204C7CC8,0xBD2D,0x4E8D,{ 0xA4,0xB3,0x45,0x5E,0xC3,0x37,0x38,0x8A } }; // 204C7CC8-BD2D-4E8D-A4B3-455EC337388A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2>{ 0xCD068EE1,0xC3FC,0x4FAD,{ 0x9D,0xDC,0x59,0x3F,0xAA,0x4B,0x78,0x85 } }; // CD068EE1-C3FC-4FAD-9DDC-593FAA4B7885
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>{ 0x0AAA09C0,0x5014,0x447C,{ 0x88,0x09,0xAE,0xE4,0xCB,0x0A,0xF9,0x4A } }; // 0AAA09C0-5014-447C-8809-AEE4CB0AF94A
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectionSession>{ 0xFF905D4C,0xF83B,0x41B0,{ 0x8A,0x0C,0x14,0x62,0xD9,0xC5,0x6B,0x73 } }; // FF905D4C-F83B-41B0-8A0C-1462D9C56B73
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectivityInterval>{ 0x4FAA3FFF,0x6746,0x4824,{ 0xA9,0x64,0xEE,0xD8,0xE8,0x7F,0x87,0x09 } }; // 4FAA3FFF-6746-4824-A964-EED8E87F8709
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics>{ 0x5120D4B1,0x4FB1,0x48B0,{ 0xAF,0xC9,0x42,0xE0,0x09,0x2A,0x81,0x64 } }; // 5120D4B1-4FB1-48B0-AFC9-42E0092A8164
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IDataPlanStatus>{ 0x977A8B8C,0x3885,0x40F3,{ 0x88,0x51,0x42,0xCD,0x2B,0xD5,0x68,0xBB } }; // 977A8B8C-3885-40F3-8851-42CD2BD568BB
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IDataPlanUsage>{ 0xB921492D,0x3B44,0x47FF,{ 0xB3,0x61,0xBE,0x59,0xE6,0x9E,0xD1,0xB0 } }; // B921492D-3B44-47FF-B361-BE59E69ED1B0
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IDataUsage>{ 0xC1431DD3,0xB146,0x4D39,{ 0xB9,0x59,0x0C,0x69,0xB0,0x96,0xC5,0x12 } }; // C1431DD3-B146-4D39-B959-0C69B096C512
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IIPInformation>{ 0xD85145E0,0x138F,0x47D7,{ 0x9B,0x3A,0x36,0xBB,0x48,0x8C,0xEF,0x33 } }; // D85145E0-138F-47D7-9B3A-36BB488CEF33
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::ILanIdentifier>{ 0x48AA53AA,0x1108,0x4546,{ 0xA6,0xCB,0x9A,0x74,0xDA,0x4B,0x7B,0xA0 } }; // 48AA53AA-1108-4546-A6CB-9A74DA4B7BA0
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::ILanIdentifierData>{ 0xA74E83C3,0xD639,0x45BE,{ 0xA3,0x6A,0xC4,0xE4,0xAE,0xAF,0x6D,0x9B } }; // A74E83C3-D639-45BE-A36A-C4E4AEAF6D9B
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkAdapter>{ 0x3B542E03,0x5388,0x496C,{ 0xA8,0xA3,0xAF,0xFD,0x39,0xAE,0xC2,0xE6 } }; // 3B542E03-5388-496C-A8A3-AFFD39AEC2E6
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>{ 0x5074F851,0x950D,0x4165,{ 0x9C,0x15,0x36,0x56,0x19,0x48,0x1E,0xEA } }; // 5074F851-950D-4165-9C15-365619481EEA
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2>{ 0x459CED14,0x2832,0x49B6,{ 0xBA,0x6E,0xE2,0x65,0xF0,0x47,0x86,0xA8 } }; // 459CED14-2832-49B6-BA6E-E265F04786A8
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkItem>{ 0x01BC4D39,0xF5E0,0x4567,{ 0xA2,0x8C,0x42,0x08,0x0C,0x83,0x1B,0x2B } }; // 01BC4D39-F5E0-4567-A28C-42080C831B2B
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings>{ 0x7CA07E8D,0x917B,0x4B5F,{ 0xB8,0x4D,0x28,0xF7,0xA5,0xAC,0x54,0x02 } }; // 7CA07E8D-917B-4B5F-B84D-28F7A5AC5402
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ 0x1F0CF333,0xD7A6,0x44DD,{ 0xA4,0xE9,0x68,0x7C,0x47,0x6B,0x90,0x3D } }; // 1F0CF333-D7A6-44DD-A4E9-687C476B903D
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ 0xD643C0E8,0x30D3,0x4F6A,{ 0xAD,0x47,0x6A,0x18,0x73,0xCE,0xB3,0xC1 } }; // D643C0E8-30D3-4F6A-AD47-6A1873CEB3C1
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::INetworkUsage>{ 0x49DA8FCE,0x9985,0x4927,{ 0xBF,0x5B,0x07,0x2B,0x5C,0x65,0xF8,0xD9 } }; // 49DA8FCE-9985-4927-BF5B-072B5C65F8D9
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage>{ 0x5EC69E04,0x7931,0x48C8,{ 0xB8,0xF3,0x46,0x30,0x0F,0xA4,0x27,0x28 } }; // 5EC69E04-7931-48C8-B8F3-46300FA42728
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IProxyConfiguration>{ 0xEF3A60B4,0x9004,0x4DD6,{ 0xB7,0xD8,0xB3,0xE5,0x02,0xF4,0xAA,0xD0 } }; // EF3A60B4-9004-4DD6-B7D8-B3E502F4AAD0
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IRoutePolicy>{ 0x11ABC4AC,0x0FC7,0x42E4,{ 0x87,0x42,0x56,0x99,0x23,0xB1,0xCA,0x11 } }; // 11ABC4AC-0FC7-42E4-8742-569923B1CA11
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory>{ 0x36027933,0xA18E,0x4DB5,{ 0xA6,0x97,0xF5,0x8F,0xA7,0x36,0x4E,0x44 } }; // 36027933-A18E-4DB5-A697-F58FA7364E44
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ 0x562098CB,0xB35A,0x4BF1,{ 0xA8,0x84,0xB7,0x55,0x7E,0x88,0xFF,0x86 } }; // 562098CB-B35A-4BF1-A884-B7557E88FF86
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ 0x0E4DA8FE,0x835F,0x4DF3,{ 0x82,0xFD,0xDF,0x55,0x6E,0xBC,0x09,0xEF } }; // 0E4DA8FE-835F-4DF3-82FD-DF556EBC09EF
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>{ 0x7A754EDE,0xA1ED,0x48B2,{ 0x8E,0x92,0xB4,0x60,0x03,0x3D,0x52,0xE2 } }; // 7A754EDE-A1ED-48B2-8E92-B460033D52E2
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ 0x71BA143F,0x598E,0x49D0,{ 0x84,0xEB,0x8F,0xEB,0xAE,0xDC,0xC1,0x95 } }; // 71BA143F-598E-49D0-84EB-8FEBAEDCC195
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage>{ using type = winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::CellularApnContext>{ using type = winrt::Windows::Networking::Connectivity::ICellularApnContext; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ConnectionCost>{ using type = winrt::Windows::Networking::Connectivity::IConnectionCost; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ConnectionProfile>{ using type = winrt::Windows::Networking::Connectivity::IConnectionProfile; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter>{ using type = winrt::Windows::Networking::Connectivity::IConnectionProfileFilter; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ConnectionSession>{ using type = winrt::Windows::Networking::Connectivity::IConnectionSession; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ConnectivityInterval>{ using type = winrt::Windows::Networking::Connectivity::IConnectivityInterval; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::DataPlanStatus>{ using type = winrt::Windows::Networking::Connectivity::IDataPlanStatus; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::DataPlanUsage>{ using type = winrt::Windows::Networking::Connectivity::IDataPlanUsage; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::DataUsage>{ using type = winrt::Windows::Networking::Connectivity::IDataUsage; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::IPInformation>{ using type = winrt::Windows::Networking::Connectivity::IIPInformation; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::LanIdentifier>{ using type = winrt::Windows::Networking::Connectivity::ILanIdentifier; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::LanIdentifierData>{ using type = winrt::Windows::Networking::Connectivity::ILanIdentifierData; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::NetworkAdapter>{ using type = winrt::Windows::Networking::Connectivity::INetworkAdapter; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::NetworkItem>{ using type = winrt::Windows::Networking::Connectivity::INetworkItem; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings>{ using type = winrt::Windows::Networking::Connectivity::INetworkSecuritySettings; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails>{ using type = winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::NetworkUsage>{ using type = winrt::Windows::Networking::Connectivity::INetworkUsage; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage>{ using type = winrt::Windows::Networking::Connectivity::IProviderNetworkUsage; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::ProxyConfiguration>{ using type = winrt::Windows::Networking::Connectivity::IProxyConfiguration; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::RoutePolicy>{ using type = winrt::Windows::Networking::Connectivity::IRoutePolicy; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails>{ using type = winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails; };
    template <> struct default_interface<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails>{ using type = winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails; };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BytesSent(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesReceived(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AttributionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttributionName(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttributionThumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::ICellularApnContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProviderId(void*) noexcept = 0;
            virtual int32_t __stdcall get_AccessPointName(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessPointName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall put_UserName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Password(void**) noexcept = 0;
            virtual int32_t __stdcall put_Password(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCompressionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCompressionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AuthenticationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AuthenticationType(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::ICellularApnContext2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProfileName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProfileName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionCost>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkCostType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Roaming(bool*) noexcept = 0;
            virtual int32_t __stdcall get_OverDataLimit(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ApproachingDataLimit(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionCost2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundDataUsageRestricted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProfileName(void**) noexcept = 0;
            virtual int32_t __stdcall GetNetworkConnectivityLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNetworkNames(void**) noexcept = 0;
            virtual int32_t __stdcall GetConnectionCost(void**) noexcept = 0;
            virtual int32_t __stdcall GetDataPlanStatus(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall GetLocalUsage(int64_t, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocalUsagePerRoamingStates(int64_t, int64_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkSecuritySettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsWwanConnectionProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsWlanConnectionProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall get_WwanConnectionProfileDetails(void**) noexcept = 0;
            virtual int32_t __stdcall get_WlanConnectionProfileDetails(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderGuid(void**) noexcept = 0;
            virtual int32_t __stdcall GetSignalBars(void**) noexcept = 0;
            virtual int32_t __stdcall GetDomainConnectivityLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetNetworkUsageAsync(int64_t, int64_t, int32_t, struct struct_Windows_Networking_Connectivity_NetworkUsageStates, void**) noexcept = 0;
            virtual int32_t __stdcall GetConnectivityIntervalsAsync(int64_t, int64_t, struct struct_Windows_Networking_Connectivity_NetworkUsageStates, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAttributedNetworkUsageAsync(int64_t, int64_t, struct struct_Windows_Networking_Connectivity_NetworkUsageStates, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetProviderNetworkUsageAsync(int64_t, int64_t, struct struct_Windows_Networking_Connectivity_NetworkUsageStates, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanDelete(bool*) noexcept = 0;
            virtual int32_t __stdcall TryDeleteAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfile6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsDomainAuthenticatedBy(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsConnected(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConnected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsWwanConnectionProfile(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsWwanConnectionProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsWlanConnectionProfile(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsWlanConnectionProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NetworkCostType(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_NetworkCostType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ServiceProviderGuid(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceProviderGuid(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsRoaming(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsRoaming(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsOverDataLimit(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsOverDataLimit(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsBackgroundDataUsageRestricted(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsBackgroundDataUsageRestricted(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawData(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_PurposeGuid(void*) noexcept = 0;
            virtual int32_t __stdcall get_PurposeGuid(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionProfile(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectivityInterval>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcquireConnectionAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall AddHttpRoutePolicy(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveHttpRoutePolicy(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IDataPlanStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataPlanUsage(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataLimitInMegabytes(void**) noexcept = 0;
            virtual int32_t __stdcall get_InboundBitsPerSecond(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutboundBitsPerSecond(void**) noexcept = 0;
            virtual int32_t __stdcall get_NextBillingCycle(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxTransferSizeInMegabytes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IDataPlanUsage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MegabytesUsed(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastSyncTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IDataUsage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BytesSent(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesReceived(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IIPInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrefixLength(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::ILanIdentifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InfrastructureId(void**) noexcept = 0;
            virtual int32_t __stdcall get_PortId(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAdapterId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::ILanIdentifierData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkAdapter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OutboundMaxBitsPerSecond(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_InboundMaxBitsPerSecond(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IanaInterfaceType(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAdapterId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall GetConnectedProfileAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConnectionProfiles(void**) noexcept = 0;
            virtual int32_t __stdcall GetInternetConnectionProfile(void**) noexcept = 0;
            virtual int32_t __stdcall GetLanIdentifiers(void**) noexcept = 0;
            virtual int32_t __stdcall GetHostNames(void**) noexcept = 0;
            virtual int32_t __stdcall GetProxyConfigurationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSortedEndpointPairs(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_NetworkStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NetworkStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindConnectionProfilesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall GetNetworkTypes(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAuthenticationType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkEncryptionType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasNewInternetConnectionProfile(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewConnectionCost(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewNetworkConnectivityLevel(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewDomainConnectivityLevel(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewHostNameList(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewWwanRegistrationState(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasNewTetheringOperationalState(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasNewTetheringClientCount(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::INetworkUsage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BytesSent(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesReceived(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BytesSent(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BytesReceived(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProviderId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IProxyConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProxyUris(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanConnectDirectly(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IRoutePolicy>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionProfile(void**) noexcept = 0;
            virtual int32_t __stdcall get_HostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_HostNameType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRoutePolicy(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConnectedSsid(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HomeProviderId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessPointName(void**) noexcept = 0;
            virtual int32_t __stdcall GetNetworkRegistrationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentDataClass(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IPKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PurposeGuids(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IAttributedNetworkUsage
    {
        [[nodiscard]] auto BytesSent() const;
        [[nodiscard]] auto BytesReceived() const;
        [[nodiscard]] auto AttributionId() const;
        [[nodiscard]] auto AttributionName() const;
        [[nodiscard]] auto AttributionThumbnail() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_ICellularApnContext
    {
        [[nodiscard]] auto ProviderId() const;
        auto ProviderId(param::hstring const& value) const;
        [[nodiscard]] auto AccessPointName() const;
        auto AccessPointName(param::hstring const& value) const;
        [[nodiscard]] auto UserName() const;
        auto UserName(param::hstring const& value) const;
        [[nodiscard]] auto Password() const;
        auto Password(param::hstring const& value) const;
        [[nodiscard]] auto IsCompressionEnabled() const;
        auto IsCompressionEnabled(bool value) const;
        [[nodiscard]] auto AuthenticationType() const;
        auto AuthenticationType(winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::ICellularApnContext>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_ICellularApnContext<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_ICellularApnContext2
    {
        [[nodiscard]] auto ProfileName() const;
        auto ProfileName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::ICellularApnContext2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_ICellularApnContext2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionCost
    {
        [[nodiscard]] auto NetworkCostType() const;
        [[nodiscard]] auto Roaming() const;
        [[nodiscard]] auto OverDataLimit() const;
        [[nodiscard]] auto ApproachingDataLimit() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionCost>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionCost<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionCost2
    {
        [[nodiscard]] auto BackgroundDataUsageRestricted() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionCost2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionCost2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile
    {
        [[nodiscard]] auto ProfileName() const;
        auto GetNetworkConnectivityLevel() const;
        auto GetNetworkNames() const;
        auto GetConnectionCost() const;
        auto GetDataPlanStatus() const;
        [[nodiscard]] auto NetworkAdapter() const;
        auto GetLocalUsage(winrt::Windows::Foundation::DateTime const& StartTime, winrt::Windows::Foundation::DateTime const& EndTime) const;
        auto GetLocalUsage(winrt::Windows::Foundation::DateTime const& StartTime, winrt::Windows::Foundation::DateTime const& EndTime, winrt::Windows::Networking::Connectivity::RoamingStates const& States) const;
        [[nodiscard]] auto NetworkSecuritySettings() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile2
    {
        [[nodiscard]] auto IsWwanConnectionProfile() const;
        [[nodiscard]] auto IsWlanConnectionProfile() const;
        [[nodiscard]] auto WwanConnectionProfileDetails() const;
        [[nodiscard]] auto WlanConnectionProfileDetails() const;
        [[nodiscard]] auto ServiceProviderGuid() const;
        auto GetSignalBars() const;
        auto GetDomainConnectivityLevel() const;
        auto GetNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::DataUsageGranularity const& granularity, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
        auto GetConnectivityIntervalsAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile3
    {
        auto GetAttributedNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile3>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile4
    {
        auto GetProviderNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile4>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile4<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile5
    {
        [[nodiscard]] auto CanDelete() const;
        auto TryDeleteAsync() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile5>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile5<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfile6
    {
        auto IsDomainAuthenticatedBy(winrt::Windows::Networking::Connectivity::DomainAuthenticationKind const& kind) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfile6>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile6<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfileFilter
    {
        auto IsConnected(bool value) const;
        [[nodiscard]] auto IsConnected() const;
        auto IsWwanConnectionProfile(bool value) const;
        [[nodiscard]] auto IsWwanConnectionProfile() const;
        auto IsWlanConnectionProfile(bool value) const;
        [[nodiscard]] auto IsWlanConnectionProfile() const;
        auto NetworkCostType(winrt::Windows::Networking::Connectivity::NetworkCostType const& value) const;
        [[nodiscard]] auto NetworkCostType() const;
        auto ServiceProviderGuid(winrt::Windows::Foundation::IReference<winrt::guid> const& value) const;
        [[nodiscard]] auto ServiceProviderGuid() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfileFilter2
    {
        auto IsRoaming(winrt::Windows::Foundation::IReference<bool> const& value) const;
        [[nodiscard]] auto IsRoaming() const;
        auto IsOverDataLimit(winrt::Windows::Foundation::IReference<bool> const& value) const;
        [[nodiscard]] auto IsOverDataLimit() const;
        auto IsBackgroundDataUsageRestricted(winrt::Windows::Foundation::IReference<bool> const& value) const;
        [[nodiscard]] auto IsBackgroundDataUsageRestricted() const;
        [[nodiscard]] auto RawData() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionProfileFilter3
    {
        auto PurposeGuid(winrt::Windows::Foundation::IReference<winrt::guid> const& value) const;
        [[nodiscard]] auto PurposeGuid() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfileFilter3<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectionSession
    {
        [[nodiscard]] auto ConnectionProfile() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectionSession>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionSession<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectivityInterval
    {
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto ConnectionDuration() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectivityInterval>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectivityInterval<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IConnectivityManagerStatics
    {
        auto AcquireConnectionAsync(winrt::Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext) const;
        auto AddHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const;
        auto RemoveHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IDataPlanStatus
    {
        [[nodiscard]] auto DataPlanUsage() const;
        [[nodiscard]] auto DataLimitInMegabytes() const;
        [[nodiscard]] auto InboundBitsPerSecond() const;
        [[nodiscard]] auto OutboundBitsPerSecond() const;
        [[nodiscard]] auto NextBillingCycle() const;
        [[nodiscard]] auto MaxTransferSizeInMegabytes() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IDataPlanStatus>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IDataPlanStatus<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IDataPlanUsage
    {
        [[nodiscard]] auto MegabytesUsed() const;
        [[nodiscard]] auto LastSyncTime() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IDataPlanUsage>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IDataPlanUsage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IDataUsage
    {
        [[nodiscard]] auto BytesSent() const;
        [[nodiscard]] auto BytesReceived() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IDataUsage>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IDataUsage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IIPInformation
    {
        [[nodiscard]] auto NetworkAdapter() const;
        [[nodiscard]] auto PrefixLength() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IIPInformation>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IIPInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_ILanIdentifier
    {
        [[nodiscard]] auto InfrastructureId() const;
        [[nodiscard]] auto PortId() const;
        [[nodiscard]] auto NetworkAdapterId() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::ILanIdentifier>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_ILanIdentifier<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_ILanIdentifierData
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::ILanIdentifierData>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_ILanIdentifierData<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkAdapter
    {
        [[nodiscard]] auto OutboundMaxBitsPerSecond() const;
        [[nodiscard]] auto InboundMaxBitsPerSecond() const;
        [[nodiscard]] auto IanaInterfaceType() const;
        [[nodiscard]] auto NetworkItem() const;
        [[nodiscard]] auto NetworkAdapterId() const;
        auto GetConnectedProfileAsync() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkAdapter>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkAdapter<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkInformationStatics
    {
        auto GetConnectionProfiles() const;
        auto GetInternetConnectionProfile() const;
        auto GetLanIdentifiers() const;
        auto GetHostNames() const;
        auto GetProxyConfigurationAsync(winrt::Windows::Foundation::Uri const& uri) const;
        auto GetSortedEndpointPairs(param::iterable<winrt::Windows::Networking::EndpointPair> const& destinationList, winrt::Windows::Networking::HostNameSortOptions const& sortOptions) const;
        auto NetworkStatusChanged(winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const;
        using NetworkStatusChanged_revoker = impl::event_revoker<winrt::Windows::Networking::Connectivity::INetworkInformationStatics, &impl::abi_t<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged>;
        [[nodiscard]] NetworkStatusChanged_revoker NetworkStatusChanged(auto_revoke_t, winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const;
        auto NetworkStatusChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkInformationStatics2
    {
        auto FindConnectionProfilesAsync(winrt::Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkInformationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkItem
    {
        [[nodiscard]] auto NetworkId() const;
        auto GetNetworkTypes() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkItem>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkItem<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkSecuritySettings
    {
        [[nodiscard]] auto NetworkAuthenticationType() const;
        [[nodiscard]] auto NetworkEncryptionType() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails
    {
        [[nodiscard]] auto HasNewInternetConnectionProfile() const;
        [[nodiscard]] auto HasNewConnectionCost() const;
        [[nodiscard]] auto HasNewNetworkConnectivityLevel() const;
        [[nodiscard]] auto HasNewDomainConnectivityLevel() const;
        [[nodiscard]] auto HasNewHostNameList() const;
        [[nodiscard]] auto HasNewWwanRegistrationState() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2
    {
        [[nodiscard]] auto HasNewTetheringOperationalState() const;
        [[nodiscard]] auto HasNewTetheringClientCount() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_INetworkUsage
    {
        [[nodiscard]] auto BytesSent() const;
        [[nodiscard]] auto BytesReceived() const;
        [[nodiscard]] auto ConnectionDuration() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::INetworkUsage>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkUsage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IProviderNetworkUsage
    {
        [[nodiscard]] auto BytesSent() const;
        [[nodiscard]] auto BytesReceived() const;
        [[nodiscard]] auto ProviderId() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IProxyConfiguration
    {
        [[nodiscard]] auto ProxyUris() const;
        [[nodiscard]] auto CanConnectDirectly() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IProxyConfiguration>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IProxyConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IRoutePolicy
    {
        [[nodiscard]] auto ConnectionProfile() const;
        [[nodiscard]] auto HostName() const;
        [[nodiscard]] auto HostNameType() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IRoutePolicy>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IRoutePolicy<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IRoutePolicyFactory
    {
        auto CreateRoutePolicy(winrt::Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, winrt::Windows::Networking::HostName const& hostName, winrt::Windows::Networking::DomainNameType const& type) const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IRoutePolicyFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails
    {
        auto GetConnectedSsid() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails
    {
        [[nodiscard]] auto HomeProviderId() const;
        [[nodiscard]] auto AccessPointName() const;
        auto GetNetworkRegistrationState() const;
        auto GetCurrentDataClass() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2
    {
        [[nodiscard]] auto IPKind() const;
        [[nodiscard]] auto PurposeGuids() const;
    };
    template <> struct consume<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
    {
        template <typename D> using type = consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2<D>;
    };
    struct struct_Windows_Networking_Connectivity_NetworkUsageStates
    {
        int32_t Roaming;
        int32_t Shared;
    };
    template <> struct abi<Windows::Networking::Connectivity::NetworkUsageStates>
    {
        using type = struct_Windows_Networking_Connectivity_NetworkUsageStates;
    };
}
#endif
