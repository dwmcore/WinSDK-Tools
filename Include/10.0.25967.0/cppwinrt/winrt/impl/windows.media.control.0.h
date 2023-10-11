// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Control_0_H
#define WINRT_Windows_Media_Control_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class MediaPlaybackAutoRepeatMode : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::Media::Control
{
    enum class GlobalSystemMediaTransportControlsSessionPlaybackStatus : int32_t
    {
        Closed = 0,
        Opened = 1,
        Changing = 2,
        Stopped = 3,
        Playing = 4,
        Paused = 5,
    };
    struct ICurrentSessionChangedEventArgs;
    struct IGlobalSystemMediaTransportControlsSession;
    struct IGlobalSystemMediaTransportControlsSessionManager;
    struct IGlobalSystemMediaTransportControlsSessionManagerStatics;
    struct IGlobalSystemMediaTransportControlsSessionMediaProperties;
    struct IGlobalSystemMediaTransportControlsSessionPlaybackControls;
    struct IGlobalSystemMediaTransportControlsSessionPlaybackInfo;
    struct IGlobalSystemMediaTransportControlsSessionTimelineProperties;
    struct IMediaPropertiesChangedEventArgs;
    struct IPlaybackInfoChangedEventArgs;
    struct ISessionsChangedEventArgs;
    struct ITimelinePropertiesChangedEventArgs;
    struct CurrentSessionChangedEventArgs;
    struct GlobalSystemMediaTransportControlsSession;
    struct GlobalSystemMediaTransportControlsSessionManager;
    struct GlobalSystemMediaTransportControlsSessionMediaProperties;
    struct GlobalSystemMediaTransportControlsSessionPlaybackControls;
    struct GlobalSystemMediaTransportControlsSessionPlaybackInfo;
    struct GlobalSystemMediaTransportControlsSessionTimelineProperties;
    struct MediaPropertiesChangedEventArgs;
    struct PlaybackInfoChangedEventArgs;
    struct SessionsChangedEventArgs;
    struct TimelinePropertiesChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::ISessionsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Control::CurrentSessionChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::MediaPropertiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::PlaybackInfoChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::SessionsChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::TimelinePropertiesChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::CurrentSessionChangedEventArgs> = L"Windows.Media.Control.CurrentSessionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionMediaProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackControls";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionTimelineProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::MediaPropertiesChangedEventArgs> = L"Windows.Media.Control.MediaPropertiesChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::PlaybackInfoChangedEventArgs> = L"Windows.Media.Control.PlaybackInfoChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::SessionsChangedEventArgs> = L"Windows.Media.Control.SessionsChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::TimelinePropertiesChangedEventArgs> = L"Windows.Media.Control.TimelinePropertiesChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackStatus> = L"Windows.Media.Control.GlobalSystemMediaTransportControlsSessionPlaybackStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs> = L"Windows.Media.Control.ICurrentSessionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSession";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionMediaProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackControls";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionPlaybackInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties> = L"Windows.Media.Control.IGlobalSystemMediaTransportControlsSessionTimelineProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs> = L"Windows.Media.Control.IMediaPropertiesChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs> = L"Windows.Media.Control.IPlaybackInfoChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::ISessionsChangedEventArgs> = L"Windows.Media.Control.ISessionsChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs> = L"Windows.Media.Control.ITimelinePropertiesChangedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs>{ 0x6969CB39,0x0BFA,0x5FE0,{ 0x8D,0x73,0x09,0xCC,0x5E,0x54,0x08,0xE1 } }; // 6969CB39-0BFA-5FE0-8D73-09CC5E5408E1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>{ 0x7148C835,0x9B14,0x5AE2,{ 0xAB,0x85,0xDC,0x9B,0x1C,0x14,0xE1,0xA8 } }; // 7148C835-9B14-5AE2-AB85-DC9B1C14E1A8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>{ 0xCACE8EAC,0xE86E,0x504A,{ 0xAB,0x31,0x5F,0xF8,0xFF,0x1B,0xCE,0x49 } }; // CACE8EAC-E86E-504A-AB31-5FF8FF1BCE49
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>{ 0x2050C4EE,0x11A0,0x57DE,{ 0xAE,0xD7,0xC9,0x7C,0x70,0x33,0x82,0x45 } }; // 2050C4EE-11A0-57DE-AED7-C97C70338245
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>{ 0x68856CF6,0xADB4,0x54B2,{ 0xAC,0x16,0x05,0x83,0x79,0x07,0xAC,0xB6 } }; // 68856CF6-ADB4-54B2-AC16-05837907ACB6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>{ 0x6501A3E6,0xBC7A,0x503A,{ 0xBB,0x1B,0x68,0xF1,0x58,0xF3,0xFB,0x03 } }; // 6501A3E6-BC7A-503A-BB1B-68F158F3FB03
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>{ 0x94B4B6CF,0xE8BA,0x51AD,{ 0x87,0xA7,0xC1,0x0A,0xDE,0x10,0x61,0x27 } }; // 94B4B6CF-E8BA-51AD-87A7-C10ADE106127
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>{ 0xEDE34136,0x6F25,0x588D,{ 0x8E,0xCF,0xEA,0x5B,0x67,0x35,0xAA,0xA5 } }; // EDE34136-6F25-588D-8ECF-EA5B6735AAA5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs>{ 0x7D3741CB,0xADF0,0x5CEF,{ 0x91,0xBA,0xCF,0xAB,0xCD,0xD7,0x76,0x78 } }; // 7D3741CB-ADF0-5CEF-91BA-CFABCDD77678
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs>{ 0x786756C2,0xBC0D,0x50A5,{ 0x88,0x07,0x05,0x42,0x91,0xFE,0xF1,0x39 } }; // 786756C2-BC0D-50A5-8807-054291FEF139
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::ISessionsChangedEventArgs>{ 0xBBF0CD32,0x42C4,0x5A58,{ 0xB3,0x17,0xF3,0x4B,0xBF,0xBD,0x26,0xE0 } }; // BBF0CD32-42C4-5A58-B317-F34BBFBD26E0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs>{ 0x29033A2F,0xC923,0x5A77,{ 0xBC,0xAF,0x05,0x5F,0xF4,0x15,0xAD,0x32 } }; // 29033A2F-C923-5A77-BCAF-055FF415AD32
    template <> struct default_interface<winrt::Windows::Media::Control::CurrentSessionChangedEventArgs>{ using type = winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionMediaProperties>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackControls>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionPlaybackInfo>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo; };
    template <> struct default_interface<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionTimelineProperties>{ using type = winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties; };
    template <> struct default_interface<winrt::Windows::Media::Control::MediaPropertiesChangedEventArgs>{ using type = winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Control::PlaybackInfoChangedEventArgs>{ using type = winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Control::SessionsChangedEventArgs>{ using type = winrt::Windows::Media::Control::ISessionsChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Control::TimelinePropertiesChangedEventArgs>{ using type = winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs; };
    template <> struct abi<winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall TryGetMediaPropertiesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetTimelineProperties(void**) noexcept = 0;
            virtual int32_t __stdcall GetPlaybackInfo(void**) noexcept = 0;
            virtual int32_t __stdcall TryPlayAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryPauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryStopAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryRecordAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryFastForwardAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryRewindAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TrySkipNextAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TrySkipPreviousAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeChannelUpAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeChannelDownAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryTogglePlayPauseAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeAutoRepeatModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangePlaybackRateAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangeShuffleActiveAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall TryChangePlaybackPositionAsync(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall add_TimelinePropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TimelinePropertiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackInfoChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MediaPropertiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MediaPropertiesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentSession(void**) noexcept = 0;
            virtual int32_t __stdcall GetSessions(void**) noexcept = 0;
            virtual int32_t __stdcall add_CurrentSessionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CurrentSessionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SessionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SessionsChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlbumTrackCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPlayEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPauseEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStopEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRecordEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsFastForwardEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRewindEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsNextEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPreviousEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelUpEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelDownEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlayPauseToggleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsShuffleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsRepeatEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaybackRateEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaybackPositionEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Controls(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackType(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoRepeatMode(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsShuffleActive(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdatedTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::ISessionsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_Media_Control_ICurrentSessionChangedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Control::ICurrentSessionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ICurrentSessionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSession
    {
        [[nodiscard]] auto SourceAppUserModelId() const;
        auto TryGetMediaPropertiesAsync() const;
        auto GetTimelineProperties() const;
        auto GetPlaybackInfo() const;
        auto TryPlayAsync() const;
        auto TryPauseAsync() const;
        auto TryStopAsync() const;
        auto TryRecordAsync() const;
        auto TryFastForwardAsync() const;
        auto TryRewindAsync() const;
        auto TrySkipNextAsync() const;
        auto TrySkipPreviousAsync() const;
        auto TryChangeChannelUpAsync() const;
        auto TryChangeChannelDownAsync() const;
        auto TryTogglePlayPauseAsync() const;
        auto TryChangeAutoRepeatModeAsync(winrt::Windows::Media::MediaPlaybackAutoRepeatMode const& requestedAutoRepeatMode) const;
        auto TryChangePlaybackRateAsync(double requestedPlaybackRate) const;
        auto TryChangeShuffleActiveAsync(bool requestedShuffleState) const;
        auto TryChangePlaybackPositionAsync(int64_t requestedPlaybackPosition) const;
        auto TimelinePropertiesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::TimelinePropertiesChangedEventArgs> const& handler) const;
        using TimelinePropertiesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_TimelinePropertiesChanged>;
        [[nodiscard]] TimelinePropertiesChanged_revoker TimelinePropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::TimelinePropertiesChangedEventArgs> const& handler) const;
        auto TimelinePropertiesChanged(winrt::event_token const& token) const noexcept;
        auto PlaybackInfoChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::PlaybackInfoChangedEventArgs> const& handler) const;
        using PlaybackInfoChanged_revoker = impl::event_revoker<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_PlaybackInfoChanged>;
        [[nodiscard]] PlaybackInfoChanged_revoker PlaybackInfoChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::PlaybackInfoChangedEventArgs> const& handler) const;
        auto PlaybackInfoChanged(winrt::event_token const& token) const noexcept;
        auto MediaPropertiesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::MediaPropertiesChangedEventArgs> const& handler) const;
        using MediaPropertiesChanged_revoker = impl::event_revoker<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession, &impl::abi_t<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>::remove_MediaPropertiesChanged>;
        [[nodiscard]] MediaPropertiesChanged_revoker MediaPropertiesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSession, winrt::Windows::Media::Control::MediaPropertiesChangedEventArgs> const& handler) const;
        auto MediaPropertiesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSession>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSession<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManager
    {
        auto GetCurrentSession() const;
        auto GetSessions() const;
        auto CurrentSessionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, winrt::Windows::Media::Control::CurrentSessionChangedEventArgs> const& handler) const;
        using CurrentSessionChanged_revoker = impl::event_revoker<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager, &impl::abi_t<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>::remove_CurrentSessionChanged>;
        [[nodiscard]] CurrentSessionChanged_revoker CurrentSessionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, winrt::Windows::Media::Control::CurrentSessionChangedEventArgs> const& handler) const;
        auto CurrentSessionChanged(winrt::event_token const& token) const noexcept;
        auto SessionsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, winrt::Windows::Media::Control::SessionsChangedEventArgs> const& handler) const;
        using SessionsChanged_revoker = impl::event_revoker<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager, &impl::abi_t<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>::remove_SessionsChanged>;
        [[nodiscard]] SessionsChanged_revoker SessionsChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Control::GlobalSystemMediaTransportControlsSessionManager, winrt::Windows::Media::Control::SessionsChangedEventArgs> const& handler) const;
        auto SessionsChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManager>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManagerStatics
    {
        auto RequestAsync() const;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionManagerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionMediaProperties
    {
        [[nodiscard]] auto Title() const;
        [[nodiscard]] auto Subtitle() const;
        [[nodiscard]] auto AlbumArtist() const;
        [[nodiscard]] auto Artist() const;
        [[nodiscard]] auto AlbumTitle() const;
        [[nodiscard]] auto TrackNumber() const;
        [[nodiscard]] auto Genres() const;
        [[nodiscard]] auto AlbumTrackCount() const;
        [[nodiscard]] auto PlaybackType() const;
        [[nodiscard]] auto Thumbnail() const;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionMediaProperties>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionMediaProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackControls
    {
        [[nodiscard]] auto IsPlayEnabled() const;
        [[nodiscard]] auto IsPauseEnabled() const;
        [[nodiscard]] auto IsStopEnabled() const;
        [[nodiscard]] auto IsRecordEnabled() const;
        [[nodiscard]] auto IsFastForwardEnabled() const;
        [[nodiscard]] auto IsRewindEnabled() const;
        [[nodiscard]] auto IsNextEnabled() const;
        [[nodiscard]] auto IsPreviousEnabled() const;
        [[nodiscard]] auto IsChannelUpEnabled() const;
        [[nodiscard]] auto IsChannelDownEnabled() const;
        [[nodiscard]] auto IsPlayPauseToggleEnabled() const;
        [[nodiscard]] auto IsShuffleEnabled() const;
        [[nodiscard]] auto IsRepeatEnabled() const;
        [[nodiscard]] auto IsPlaybackRateEnabled() const;
        [[nodiscard]] auto IsPlaybackPositionEnabled() const;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackControls>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackControls<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackInfo
    {
        [[nodiscard]] auto Controls() const;
        [[nodiscard]] auto PlaybackStatus() const;
        [[nodiscard]] auto PlaybackType() const;
        [[nodiscard]] auto AutoRepeatMode() const;
        [[nodiscard]] auto PlaybackRate() const;
        [[nodiscard]] auto IsShuffleActive() const;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionPlaybackInfo>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionPlaybackInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionTimelineProperties
    {
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto EndTime() const;
        [[nodiscard]] auto MinSeekTime() const;
        [[nodiscard]] auto MaxSeekTime() const;
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto LastUpdatedTime() const;
    };
    template <> struct consume<winrt::Windows::Media::Control::IGlobalSystemMediaTransportControlsSessionTimelineProperties>
    {
        template <typename D> using type = consume_Windows_Media_Control_IGlobalSystemMediaTransportControlsSessionTimelineProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IMediaPropertiesChangedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Control::IMediaPropertiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_IMediaPropertiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_IPlaybackInfoChangedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Control::IPlaybackInfoChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_IPlaybackInfoChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_ISessionsChangedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Control::ISessionsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ISessionsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Control_ITimelinePropertiesChangedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Control::ITimelinePropertiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Control_ITimelinePropertiesChangedEventArgs<D>;
    };
}
#endif
