// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_0_H
#define WINRT_Windows_Media_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceConnection;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    struct BitmapBounds;
    enum class BitmapPixelFormat : int32_t;
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct RandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class AudioBufferAccessMode : int32_t
    {
        Read = 0,
        ReadWrite = 1,
        Write = 2,
    };
    enum class AudioProcessing : int32_t
    {
        Default = 0,
        Raw = 1,
    };
    enum class MediaPlaybackAutoRepeatMode : int32_t
    {
        None = 0,
        Track = 1,
        List = 2,
    };
    enum class MediaPlaybackStatus : int32_t
    {
        Closed = 0,
        Changing = 1,
        Stopped = 2,
        Playing = 3,
        Paused = 4,
    };
    enum class MediaPlaybackType : int32_t
    {
        Unknown = 0,
        Music = 1,
        Video = 2,
        Image = 3,
    };
    enum class MediaTimelineControllerState : int32_t
    {
        Paused = 0,
        Running = 1,
        Stalled = 2,
        Error = 3,
    };
    enum class SoundLevel : int32_t
    {
        Muted = 0,
        Low = 1,
        Full = 2,
    };
    enum class SystemMediaTransportControlsButton : int32_t
    {
        Play = 0,
        Pause = 1,
        Stop = 2,
        Record = 3,
        FastForward = 4,
        Rewind = 5,
        Next = 6,
        Previous = 7,
        ChannelUp = 8,
        ChannelDown = 9,
    };
    enum class SystemMediaTransportControlsProperty : int32_t
    {
        SoundLevel = 0,
    };
    struct IAudioBuffer;
    struct IAudioFrame;
    struct IAudioFrameFactory;
    struct IAutoRepeatModeChangeRequestedEventArgs;
    struct IImageDisplayProperties;
    struct IMediaControl;
    struct IMediaExtension;
    struct IMediaExtensionManager;
    struct IMediaExtensionManager2;
    struct IMediaFrame;
    struct IMediaMarker;
    struct IMediaMarkerTypesStatics;
    struct IMediaMarkers;
    struct IMediaProcessingTriggerDetails;
    struct IMediaTimelineController;
    struct IMediaTimelineController2;
    struct IMediaTimelineControllerFailedEventArgs;
    struct IMusicDisplayProperties;
    struct IMusicDisplayProperties2;
    struct IMusicDisplayProperties3;
    struct IPlaybackPositionChangeRequestedEventArgs;
    struct IPlaybackRateChangeRequestedEventArgs;
    struct IShuffleEnabledChangeRequestedEventArgs;
    struct ISystemMediaTransportControls;
    struct ISystemMediaTransportControls2;
    struct ISystemMediaTransportControlsButtonPressedEventArgs;
    struct ISystemMediaTransportControlsDisplayUpdater;
    struct ISystemMediaTransportControlsPropertyChangedEventArgs;
    struct ISystemMediaTransportControlsStatics;
    struct ISystemMediaTransportControlsTimelineProperties;
    struct IVideoDisplayProperties;
    struct IVideoDisplayProperties2;
    struct IVideoEffectsStatics;
    struct IVideoFrame;
    struct IVideoFrame2;
    struct IVideoFrameFactory;
    struct IVideoFrameStatics;
    struct AudioBuffer;
    struct AudioFrame;
    struct AutoRepeatModeChangeRequestedEventArgs;
    struct ImageDisplayProperties;
    struct MediaControl;
    struct MediaExtensionManager;
    struct MediaMarkerTypes;
    struct MediaProcessingTriggerDetails;
    struct MediaTimelineController;
    struct MediaTimelineControllerFailedEventArgs;
    struct MusicDisplayProperties;
    struct PlaybackPositionChangeRequestedEventArgs;
    struct PlaybackRateChangeRequestedEventArgs;
    struct ShuffleEnabledChangeRequestedEventArgs;
    struct SystemMediaTransportControls;
    struct SystemMediaTransportControlsButtonPressedEventArgs;
    struct SystemMediaTransportControlsDisplayUpdater;
    struct SystemMediaTransportControlsPropertyChangedEventArgs;
    struct SystemMediaTransportControlsTimelineProperties;
    struct VideoDisplayProperties;
    struct VideoEffects;
    struct VideoFrame;
    struct MediaTimeRange;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::IAudioBuffer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IAudioFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IAudioFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IImageDisplayProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaExtension>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaExtensionManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaExtensionManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaMarker>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaMarkerTypesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaMarkers>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaProcessingTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaTimelineController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaTimelineController2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMusicDisplayProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMusicDisplayProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IMusicDisplayProperties3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControls>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControls2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControlsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoDisplayProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoDisplayProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoEffectsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoFrame2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::IVideoFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::AudioBuffer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::AudioFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::ImageDisplayProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaExtensionManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaMarkerTypes>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProcessingTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaTimelineController>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MusicDisplayProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControls>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::VideoDisplayProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::VideoEffects>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::VideoFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::AudioBufferAccessMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::AudioProcessing>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaPlaybackAutoRepeatMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaPlaybackStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaPlaybackType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaTimelineControllerState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::SoundLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsButton>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::SystemMediaTransportControlsProperty>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaTimeRange>{ using type = struct_category<winrt::Windows::Foundation::TimeSpan, winrt::Windows::Foundation::TimeSpan>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::AudioBuffer> = L"Windows.Media.AudioBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::AudioFrame> = L"Windows.Media.AudioFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs> = L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ImageDisplayProperties> = L"Windows.Media.ImageDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaControl> = L"Windows.Media.MediaControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaExtensionManager> = L"Windows.Media.MediaExtensionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaMarkerTypes> = L"Windows.Media.MediaMarkerTypes";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProcessingTriggerDetails> = L"Windows.Media.MediaProcessingTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaTimelineController> = L"Windows.Media.MediaTimelineController";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaTimelineControllerFailedEventArgs> = L"Windows.Media.MediaTimelineControllerFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MusicDisplayProperties> = L"Windows.Media.MusicDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs> = L"Windows.Media.PlaybackPositionChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs> = L"Windows.Media.PlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs> = L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControls> = L"Windows.Media.SystemMediaTransportControls";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> = L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsDisplayUpdater> = L"Windows.Media.SystemMediaTransportControlsDisplayUpdater";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> = L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties> = L"Windows.Media.SystemMediaTransportControlsTimelineProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::VideoDisplayProperties> = L"Windows.Media.VideoDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::VideoEffects> = L"Windows.Media.VideoEffects";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::VideoFrame> = L"Windows.Media.VideoFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::AudioBufferAccessMode> = L"Windows.Media.AudioBufferAccessMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::AudioProcessing> = L"Windows.Media.AudioProcessing";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaPlaybackAutoRepeatMode> = L"Windows.Media.MediaPlaybackAutoRepeatMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaPlaybackStatus> = L"Windows.Media.MediaPlaybackStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaPlaybackType> = L"Windows.Media.MediaPlaybackType";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaTimelineControllerState> = L"Windows.Media.MediaTimelineControllerState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SoundLevel> = L"Windows.Media.SoundLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsButton> = L"Windows.Media.SystemMediaTransportControlsButton";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::SystemMediaTransportControlsProperty> = L"Windows.Media.SystemMediaTransportControlsProperty";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaTimeRange> = L"Windows.Media.MediaTimeRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IAudioBuffer> = L"Windows.Media.IAudioBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IAudioFrame> = L"Windows.Media.IAudioFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IAudioFrameFactory> = L"Windows.Media.IAudioFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> = L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IImageDisplayProperties> = L"Windows.Media.IImageDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaControl> = L"Windows.Media.IMediaControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaExtension> = L"Windows.Media.IMediaExtension";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaExtensionManager> = L"Windows.Media.IMediaExtensionManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaExtensionManager2> = L"Windows.Media.IMediaExtensionManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaFrame> = L"Windows.Media.IMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaMarker> = L"Windows.Media.IMediaMarker";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaMarkerTypesStatics> = L"Windows.Media.IMediaMarkerTypesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaMarkers> = L"Windows.Media.IMediaMarkers";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaProcessingTriggerDetails> = L"Windows.Media.IMediaProcessingTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaTimelineController> = L"Windows.Media.IMediaTimelineController";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaTimelineController2> = L"Windows.Media.IMediaTimelineController2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs> = L"Windows.Media.IMediaTimelineControllerFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMusicDisplayProperties> = L"Windows.Media.IMusicDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMusicDisplayProperties2> = L"Windows.Media.IMusicDisplayProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IMusicDisplayProperties3> = L"Windows.Media.IMusicDisplayProperties3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs> = L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs> = L"Windows.Media.IPlaybackRateChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs> = L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControls> = L"Windows.Media.ISystemMediaTransportControls";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControls2> = L"Windows.Media.ISystemMediaTransportControls2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> = L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater> = L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> = L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControlsStatics> = L"Windows.Media.ISystemMediaTransportControlsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties> = L"Windows.Media.ISystemMediaTransportControlsTimelineProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoDisplayProperties> = L"Windows.Media.IVideoDisplayProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoDisplayProperties2> = L"Windows.Media.IVideoDisplayProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoEffectsStatics> = L"Windows.Media.IVideoEffectsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoFrame> = L"Windows.Media.IVideoFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoFrame2> = L"Windows.Media.IVideoFrame2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoFrameFactory> = L"Windows.Media.IVideoFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::IVideoFrameStatics> = L"Windows.Media.IVideoFrameStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IAudioBuffer>{ 0x35175827,0x724B,0x4C6A,{ 0xB1,0x30,0xF6,0x53,0x7F,0x9A,0xE0,0xD0 } }; // 35175827-724B-4C6A-B130-F6537F9AE0D0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IAudioFrame>{ 0xE36AC304,0xAAB2,0x4277,{ 0x9E,0xD0,0x43,0xCE,0xDF,0x8E,0x29,0xC6 } }; // E36AC304-AAB2-4277-9ED0-43CEDF8E29C6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IAudioFrameFactory>{ 0x91A90ADE,0x2422,0x40A6,{ 0xB9,0xAD,0x30,0xD0,0x24,0x04,0x31,0x7D } }; // 91A90ADE-2422-40A6-B9AD-30D02404317D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ 0xEA137EFA,0xD852,0x438E,{ 0x88,0x2B,0xC9,0x90,0x10,0x9A,0x78,0xF4 } }; // EA137EFA-D852-438E-882B-C990109A78F4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IImageDisplayProperties>{ 0xCD0BC7EF,0x54E7,0x411F,{ 0x99,0x33,0xF0,0xE9,0x8B,0x0A,0x96,0xD2 } }; // CD0BC7EF-54E7-411F-9933-F0E98B0A96D2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaControl>{ 0x98F1FBE1,0x7A8D,0x42CB,{ 0xB6,0xFE,0x8F,0xE6,0x98,0x26,0x4F,0x13 } }; // 98F1FBE1-7A8D-42CB-B6FE-8FE698264F13
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaExtension>{ 0x07915118,0x45DF,0x442B,{ 0x8A,0x3F,0xF7,0x82,0x6A,0x63,0x70,0xAB } }; // 07915118-45DF-442B-8A3F-F7826A6370AB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaExtensionManager>{ 0x4A25EAF5,0x242D,0x4DFB,{ 0x97,0xF4,0x69,0xB7,0xC4,0x25,0x76,0xFF } }; // 4A25EAF5-242D-4DFB-97F4-69B7C42576FF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaExtensionManager2>{ 0x5BCEBF47,0x4043,0x4FED,{ 0xAC,0xAF,0x54,0xEC,0x29,0xDF,0xB1,0xF7 } }; // 5BCEBF47-4043-4FED-ACAF-54EC29DFB1F7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaFrame>{ 0xBFB52F8C,0x5943,0x47D8,{ 0x8E,0x10,0x05,0x30,0x8A,0xA5,0xFB,0xD0 } }; // BFB52F8C-5943-47D8-8E10-05308AA5FBD0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaMarker>{ 0x1803DEF8,0xDCA5,0x4B6F,{ 0x9C,0x20,0xE3,0xD3,0xC0,0x64,0x36,0x25 } }; // 1803DEF8-DCA5-4B6F-9C20-E3D3C0643625
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaMarkerTypesStatics>{ 0xBB198040,0x482F,0x4743,{ 0x88,0x32,0x45,0x85,0x38,0x21,0xEC,0xE0 } }; // BB198040-482F-4743-8832-45853821ECE0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaMarkers>{ 0xAFEAB189,0xF8DD,0x466E,{ 0xAA,0x10,0x92,0x0B,0x52,0x35,0x3F,0xDF } }; // AFEAB189-F8DD-466E-AA10-920B52353FDF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaProcessingTriggerDetails>{ 0xEB8564AC,0xA351,0x4F4E,{ 0xB4,0xF0,0x9B,0xF2,0x40,0x89,0x93,0xDB } }; // EB8564AC-A351-4F4E-B4F0-9BF2408993DB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaTimelineController>{ 0x8ED361F3,0x0B78,0x4360,{ 0xBF,0x71,0x0C,0x84,0x19,0x99,0xEA,0x1B } }; // 8ED361F3-0B78-4360-BF71-0C841999EA1B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaTimelineController2>{ 0xEF74EA38,0x9E72,0x4DF9,{ 0x83,0x55,0x6E,0x90,0xC8,0x1B,0xBA,0xDD } }; // EF74EA38-9E72-4DF9-8355-6E90C81BBADD
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs>{ 0x8821F81D,0x3E77,0x43FB,{ 0xBE,0x26,0x4F,0xC8,0x7A,0x04,0x48,0x34 } }; // 8821F81D-3E77-43FB-BE26-4FC87A044834
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMusicDisplayProperties>{ 0x6BBF0C59,0xD0A0,0x4D26,{ 0x92,0xA0,0xF9,0x78,0xE1,0xD1,0x8E,0x7B } }; // 6BBF0C59-D0A0-4D26-92A0-F978E1D18E7B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMusicDisplayProperties2>{ 0x00368462,0x97D3,0x44B9,{ 0xB0,0x0F,0x00,0x8A,0xFC,0xEF,0xAF,0x18 } }; // 00368462-97D3-44B9-B00F-008AFCEFAF18
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IMusicDisplayProperties3>{ 0x4DB51AC1,0x0681,0x4E8C,{ 0x94,0x01,0xB8,0x15,0x9D,0x9E,0xEF,0xC7 } }; // 4DB51AC1-0681-4E8C-9401-B8159D9EEFC7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ 0xB4493F88,0xEB28,0x4961,{ 0x9C,0x14,0x33,0x5E,0x44,0xF3,0xE1,0x25 } }; // B4493F88-EB28-4961-9C14-335E44F3E125
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ 0x2CE2C41F,0x3CD6,0x4F77,{ 0x9B,0xA7,0xEB,0x27,0xC2,0x6A,0x21,0x40 } }; // 2CE2C41F-3CD6-4F77-9BA7-EB27C26A2140
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ 0x49B593FE,0x4FD0,0x4666,{ 0xA3,0x14,0xC0,0xE0,0x19,0x40,0xD3,0x02 } }; // 49B593FE-4FD0-4666-A314-C0E01940D302
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControls>{ 0x99FA3FF4,0x1742,0x42A6,{ 0x90,0x2E,0x08,0x7D,0x41,0xF9,0x65,0xEC } }; // 99FA3FF4-1742-42A6-902E-087D41F965EC
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControls2>{ 0xEA98D2F6,0x7F3C,0x4AF2,{ 0xA5,0x86,0x72,0x88,0x98,0x08,0xEF,0xB1 } }; // EA98D2F6-7F3C-4AF2-A586-72889808EFB1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ 0xB7F47116,0xA56F,0x4DC8,{ 0x9E,0x11,0x92,0x03,0x1F,0x4A,0x87,0xC2 } }; // B7F47116-A56F-4DC8-9E11-92031F4A87C2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ 0x8ABBC53E,0xFA55,0x4ECF,{ 0xAD,0x8E,0xC9,0x84,0xE5,0xDD,0x15,0x50 } }; // 8ABBC53E-FA55-4ECF-AD8E-C984E5DD1550
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ 0xD0CA0936,0x339B,0x4CB3,{ 0x8E,0xEB,0x73,0x76,0x07,0xF5,0x6E,0x08 } }; // D0CA0936-339B-4CB3-8EEB-737607F56E08
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControlsStatics>{ 0x43BA380A,0xECA4,0x4832,{ 0x91,0xAB,0xD4,0x15,0xFA,0xE4,0x84,0xC6 } }; // 43BA380A-ECA4-4832-91AB-D415FAE484C6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ 0x5125316A,0xC3A2,0x475B,{ 0x85,0x07,0x93,0x53,0x4D,0xC8,0x8F,0x15 } }; // 5125316A-C3A2-475B-8507-93534DC88F15
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoDisplayProperties>{ 0x5609FDB1,0x5D2D,0x4872,{ 0x81,0x70,0x45,0xDE,0xE5,0xBC,0x2F,0x5C } }; // 5609FDB1-5D2D-4872-8170-45DEE5BC2F5C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoDisplayProperties2>{ 0xB410E1CE,0xAB52,0x41AB,{ 0xA4,0x86,0xCC,0x10,0xFA,0xB1,0x52,0xF9 } }; // B410E1CE-AB52-41AB-A486-CC10FAB152F9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoEffectsStatics>{ 0x1FCDA5E8,0xBAF1,0x4521,{ 0x98,0x0C,0x3B,0xCE,0xBB,0x44,0xCF,0x38 } }; // 1FCDA5E8-BAF1-4521-980C-3BCEBB44CF38
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoFrame>{ 0x0CC06625,0x90FC,0x4C92,{ 0xBD,0x95,0x7D,0xED,0x21,0x81,0x9D,0x1C } }; // 0CC06625-90FC-4C92-BD95-7DED21819D1C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoFrame2>{ 0x3837840D,0x336C,0x4366,{ 0x8D,0x46,0x06,0x07,0x98,0x73,0x6C,0x5D } }; // 3837840D-336C-4366-8D46-060798736C5D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoFrameFactory>{ 0x014B6D69,0x2228,0x4C92,{ 0x92,0xFF,0x50,0xC3,0x80,0xD3,0xE7,0x76 } }; // 014B6D69-2228-4C92-92FF-50C380D3E776
    template <> inline constexpr guid guid_v<winrt::Windows::Media::IVideoFrameStatics>{ 0xAB2A556F,0x6111,0x4B33,{ 0x8E,0xC3,0x2B,0x20,0x9A,0x02,0xE1,0x7A } }; // AB2A556F-6111-4B33-8EC3-2B209A02E17A
    template <> struct default_interface<winrt::Windows::Media::AudioBuffer>{ using type = winrt::Windows::Media::IAudioBuffer; };
    template <> struct default_interface<winrt::Windows::Media::AudioFrame>{ using type = winrt::Windows::Media::IAudioFrame; };
    template <> struct default_interface<winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::ImageDisplayProperties>{ using type = winrt::Windows::Media::IImageDisplayProperties; };
    template <> struct default_interface<winrt::Windows::Media::MediaExtensionManager>{ using type = winrt::Windows::Media::IMediaExtensionManager; };
    template <> struct default_interface<winrt::Windows::Media::MediaProcessingTriggerDetails>{ using type = winrt::Windows::Media::IMediaProcessingTriggerDetails; };
    template <> struct default_interface<winrt::Windows::Media::MediaTimelineController>{ using type = winrt::Windows::Media::IMediaTimelineController; };
    template <> struct default_interface<winrt::Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::MusicDisplayProperties>{ using type = winrt::Windows::Media::IMusicDisplayProperties; };
    template <> struct default_interface<winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::SystemMediaTransportControls>{ using type = winrt::Windows::Media::ISystemMediaTransportControls; };
    template <> struct default_interface<winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater; };
    template <> struct default_interface<winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties; };
    template <> struct default_interface<winrt::Windows::Media::VideoDisplayProperties>{ using type = winrt::Windows::Media::IVideoDisplayProperties; };
    template <> struct default_interface<winrt::Windows::Media::VideoFrame>{ using type = winrt::Windows::Media::IVideoFrame; };
    template <> struct abi<winrt::Windows::Media::IAudioBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capacity(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Length(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IAudioFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LockBuffer(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IAudioFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedAutoRepeatMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IImageDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SoundLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlayPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PausePressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PausePressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StopPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StopPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlayPauseTogglePressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlayPauseTogglePressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RecordPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RecordPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_NextTrackPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NextTrackPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PreviousTrackPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PreviousTrackPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_FastForwardPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FastForwardPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_RewindPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RewindPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ChannelUpPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ChannelUpPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ChannelDownPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ChannelDownPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackName(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrackName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ArtistName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ArtistName(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsPlaying(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPlaying(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArt(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArt(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetProperties(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaExtensionManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterSchemeHandler(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterSchemeHandlerWithSettings(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterByteStreamHandler(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterByteStreamHandlerWithSettings(void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioDecoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioDecoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioEncoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterAudioEncoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoDecoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoDecoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoEncoder(void*, winrt::guid, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall RegisterVideoEncoderWithSettings(void*, winrt::guid, winrt::guid, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaExtensionManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterMediaExtensionForAppService(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RelativeTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_SystemRelativeTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsDiscontinuous(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsDiscontinuous(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaMarker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaMarkerType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaMarkerTypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bookmark(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaMarkers>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Markers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaProcessingTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arguments(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaTimelineController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ClockRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_ClockRate(double) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PositionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PositionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaTimelineController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsLoopingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLoopingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_Failed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Failed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Ended(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Ended(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMusicDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_AlbumArtist(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumArtist(void*) noexcept = 0;
            virtual int32_t __stdcall get_Artist(void**) noexcept = 0;
            virtual int32_t __stdcall put_Artist(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMusicDisplayProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlbumTitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_AlbumTitle(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrackNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TrackNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IMusicDisplayProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlbumTrackCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlbumTrackCount(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedPlaybackPosition(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedPlaybackRate(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestedShuffleEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControls>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayUpdater(void**) noexcept = 0;
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPlayEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPlayEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsStopEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStopEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPauseEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPauseEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRecordEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRecordEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFastForwardEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFastForwardEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRewindEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRewindEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsPreviousEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPreviousEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsNextEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsNextEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelUpEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsChannelUpEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsChannelDownEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsChannelDownEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_ButtonPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ButtonPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PropertyChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PropertyChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControls2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoRepeatMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AutoRepeatMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ShuffleEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShuffleEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackRate(double*) noexcept = 0;
            virtual int32_t __stdcall put_PlaybackRate(double) noexcept = 0;
            virtual int32_t __stdcall UpdateTimelineProperties(void*) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackPositionChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackPositionChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PlaybackRateChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PlaybackRateChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ShuffleEnabledChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ShuffleEnabledChangeRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AutoRepeatModeChangeRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AutoRepeatModeChangeRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Button(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AppMediaId(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppMediaId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageProperties(void**) noexcept = 0;
            virtual int32_t __stdcall CopyFromFileAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ClearAll() noexcept = 0;
            virtual int32_t __stdcall Update() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Property(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControlsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_EndTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_EndTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MinSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinSeekTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxSeekTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSeekTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Position(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtitle(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtitle(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoDisplayProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Genres(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoEffectsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoStabilization(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
            virtual int32_t __stdcall CopyToAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Direct3DSurface(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CopyToWithBoundsAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAlpha(int32_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::IVideoFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsDirect3D11SurfaceBacked(int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAsDirect3D11SurfaceBackedWithDevice(int32_t, int32_t, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithSoftwareBitmap(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithDirect3D11Surface(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_IAudioBuffer
    {
        [[nodiscard]] auto Capacity() const;
        [[nodiscard]] auto Length() const;
        auto Length(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::Media::IAudioBuffer>
    {
        template <typename D> using type = consume_Windows_Media_IAudioBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAudioFrame
    {
        auto LockBuffer(winrt::Windows::Media::AudioBufferAccessMode const& mode) const;
    };
    template <> struct consume<winrt::Windows::Media::IAudioFrame>
    {
        template <typename D> using type = consume_Windows_Media_IAudioFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAudioFrameFactory
    {
        auto Create(uint32_t capacity) const;
    };
    template <> struct consume<winrt::Windows::Media::IAudioFrameFactory>
    {
        template <typename D> using type = consume_Windows_Media_IAudioFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs
    {
        [[nodiscard]] auto RequestedAutoRepeatMode() const;
    };
    template <> struct consume<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IImageDisplayProperties
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::IImageDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IImageDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaControl
    {
        auto SoundLevelChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_SoundLevelChanged>;
        [[nodiscard]] SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SoundLevelChanged(winrt::event_token const& cookie) const noexcept;
        auto PlayPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PlayPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_PlayPressed>;
        [[nodiscard]] PlayPressed_revoker PlayPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PlayPressed(winrt::event_token const& cookie) const noexcept;
        auto PausePressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PausePressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_PausePressed>;
        [[nodiscard]] PausePressed_revoker PausePressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PausePressed(winrt::event_token const& cookie) const noexcept;
        auto StopPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using StopPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_StopPressed>;
        [[nodiscard]] StopPressed_revoker StopPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto StopPressed(winrt::event_token const& cookie) const noexcept;
        auto PlayPauseTogglePressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PlayPauseTogglePressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed>;
        [[nodiscard]] PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PlayPauseTogglePressed(winrt::event_token const& cookie) const noexcept;
        auto RecordPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using RecordPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_RecordPressed>;
        [[nodiscard]] RecordPressed_revoker RecordPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto RecordPressed(winrt::event_token const& cookie) const noexcept;
        auto NextTrackPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using NextTrackPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_NextTrackPressed>;
        [[nodiscard]] NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto NextTrackPressed(winrt::event_token const& cookie) const noexcept;
        auto PreviousTrackPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PreviousTrackPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_PreviousTrackPressed>;
        [[nodiscard]] PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PreviousTrackPressed(winrt::event_token const& cookie) const noexcept;
        auto FastForwardPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using FastForwardPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_FastForwardPressed>;
        [[nodiscard]] FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto FastForwardPressed(winrt::event_token const& cookie) const noexcept;
        auto RewindPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using RewindPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_RewindPressed>;
        [[nodiscard]] RewindPressed_revoker RewindPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto RewindPressed(winrt::event_token const& cookie) const noexcept;
        auto ChannelUpPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ChannelUpPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_ChannelUpPressed>;
        [[nodiscard]] ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ChannelUpPressed(winrt::event_token const& cookie) const noexcept;
        auto ChannelDownPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ChannelDownPressed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaControl, &impl::abi_t<winrt::Windows::Media::IMediaControl>::remove_ChannelDownPressed>;
        [[nodiscard]] ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ChannelDownPressed(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto SoundLevel() const;
        auto TrackName(param::hstring const& value) const;
        [[nodiscard]] auto TrackName() const;
        auto ArtistName(param::hstring const& value) const;
        [[nodiscard]] auto ArtistName() const;
        auto IsPlaying(bool value) const;
        [[nodiscard]] auto IsPlaying() const;
        auto AlbumArt(winrt::Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto AlbumArt() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaControl>
    {
        template <typename D> using type = consume_Windows_Media_IMediaControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtension
    {
        auto SetProperties(winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaExtension>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtension<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtensionManager
    {
        auto RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme) const;
        auto RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType) const;
        auto RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto RegisterAudioDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        auto RegisterAudioDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto RegisterAudioEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        auto RegisterAudioEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto RegisterVideoDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        auto RegisterVideoDecoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
        auto RegisterVideoEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype) const;
        auto RegisterVideoEncoder(param::hstring const& activatableClassId, winrt::guid const& inputSubtype, winrt::guid const& outputSubtype, winrt::Windows::Foundation::Collections::IPropertySet const& configuration) const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaExtensionManager>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtensionManager<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaExtensionManager2
    {
        auto RegisterMediaExtensionForAppService(winrt::Windows::Media::IMediaExtension const& extension, winrt::Windows::ApplicationModel::AppService::AppServiceConnection const& connection) const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaExtensionManager2>
    {
        template <typename D> using type = consume_Windows_Media_IMediaExtensionManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaFrame
    {
        [[nodiscard]] auto Type() const;
        [[nodiscard]] auto IsReadOnly() const;
        auto RelativeTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto RelativeTime() const;
        auto SystemRelativeTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto SystemRelativeTime() const;
        auto Duration(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto Duration() const;
        auto IsDiscontinuous(bool value) const;
        [[nodiscard]] auto IsDiscontinuous() const;
        [[nodiscard]] auto ExtendedProperties() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_IMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarker
    {
        [[nodiscard]] auto Time() const;
        [[nodiscard]] auto MediaMarkerType() const;
        [[nodiscard]] auto Text() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaMarker>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarker<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarkerTypesStatics
    {
        [[nodiscard]] auto Bookmark() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaMarkerTypesStatics>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarkerTypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaMarkers
    {
        [[nodiscard]] auto Markers() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaMarkers>
    {
        template <typename D> using type = consume_Windows_Media_IMediaMarkers<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaProcessingTriggerDetails
    {
        [[nodiscard]] auto Arguments() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaProcessingTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Media_IMediaProcessingTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineController
    {
        auto Start() const;
        auto Resume() const;
        auto Pause() const;
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ClockRate() const;
        auto ClockRate(double value) const;
        [[nodiscard]] auto State() const;
        auto PositionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
        using PositionChanged_revoker = impl::event_revoker<winrt::Windows::Media::IMediaTimelineController, &impl::abi_t<winrt::Windows::Media::IMediaTimelineController>::remove_PositionChanged>;
        [[nodiscard]] PositionChanged_revoker PositionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
        auto PositionChanged(winrt::event_token const& eventCookie) const noexcept;
        auto StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
        using StateChanged_revoker = impl::event_revoker<winrt::Windows::Media::IMediaTimelineController, &impl::abi_t<winrt::Windows::Media::IMediaTimelineController>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
        auto StateChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::IMediaTimelineController>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineController2
    {
        [[nodiscard]] auto Duration() const;
        auto Duration(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto IsLoopingEnabled() const;
        auto IsLoopingEnabled(bool value) const;
        auto Failed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
        using Failed_revoker = impl::event_revoker<winrt::Windows::Media::IMediaTimelineController2, &impl::abi_t<winrt::Windows::Media::IMediaTimelineController2>::remove_Failed>;
        [[nodiscard]] Failed_revoker Failed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
        auto Failed(winrt::event_token const& token) const noexcept;
        auto Ended(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& eventHandler) const;
        using Ended_revoker = impl::event_revoker<winrt::Windows::Media::IMediaTimelineController2, &impl::abi_t<winrt::Windows::Media::IMediaTimelineController2>::remove_Ended>;
        [[nodiscard]] Ended_revoker Ended(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::MediaTimelineController, winrt::Windows::Foundation::IInspectable> const& eventHandler) const;
        auto Ended(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::IMediaTimelineController2>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineController2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMediaTimelineControllerFailedEventArgs
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IMediaTimelineControllerFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto AlbumArtist() const;
        auto AlbumArtist(param::hstring const& value) const;
        [[nodiscard]] auto Artist() const;
        auto Artist(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::IMusicDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties2
    {
        [[nodiscard]] auto AlbumTitle() const;
        auto AlbumTitle(param::hstring const& value) const;
        [[nodiscard]] auto TrackNumber() const;
        auto TrackNumber(uint32_t value) const;
        [[nodiscard]] auto Genres() const;
    };
    template <> struct consume<winrt::Windows::Media::IMusicDisplayProperties2>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IMusicDisplayProperties3
    {
        [[nodiscard]] auto AlbumTrackCount() const;
        auto AlbumTrackCount(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::Media::IMusicDisplayProperties3>
    {
        template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs
    {
        [[nodiscard]] auto RequestedPlaybackPosition() const;
    };
    template <> struct consume<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs
    {
        [[nodiscard]] auto RequestedPlaybackRate() const;
    };
    template <> struct consume<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs
    {
        [[nodiscard]] auto RequestedShuffleEnabled() const;
    };
    template <> struct consume<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControls
    {
        [[nodiscard]] auto PlaybackStatus() const;
        auto PlaybackStatus(winrt::Windows::Media::MediaPlaybackStatus const& value) const;
        [[nodiscard]] auto DisplayUpdater() const;
        [[nodiscard]] auto SoundLevel() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
        [[nodiscard]] auto IsPlayEnabled() const;
        auto IsPlayEnabled(bool value) const;
        [[nodiscard]] auto IsStopEnabled() const;
        auto IsStopEnabled(bool value) const;
        [[nodiscard]] auto IsPauseEnabled() const;
        auto IsPauseEnabled(bool value) const;
        [[nodiscard]] auto IsRecordEnabled() const;
        auto IsRecordEnabled(bool value) const;
        [[nodiscard]] auto IsFastForwardEnabled() const;
        auto IsFastForwardEnabled(bool value) const;
        [[nodiscard]] auto IsRewindEnabled() const;
        auto IsRewindEnabled(bool value) const;
        [[nodiscard]] auto IsPreviousEnabled() const;
        auto IsPreviousEnabled(bool value) const;
        [[nodiscard]] auto IsNextEnabled() const;
        auto IsNextEnabled(bool value) const;
        [[nodiscard]] auto IsChannelUpEnabled() const;
        auto IsChannelUpEnabled(bool value) const;
        [[nodiscard]] auto IsChannelDownEnabled() const;
        auto IsChannelDownEnabled(bool value) const;
        auto ButtonPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
        using ButtonPressed_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls>::remove_ButtonPressed>;
        [[nodiscard]] ButtonPressed_revoker ButtonPressed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
        auto ButtonPressed(winrt::event_token const& token) const noexcept;
        auto PropertyChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
        using PropertyChanged_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls>::remove_PropertyChanged>;
        [[nodiscard]] PropertyChanged_revoker PropertyChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
        auto PropertyChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControls>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControls2
    {
        [[nodiscard]] auto AutoRepeatMode() const;
        auto AutoRepeatMode(winrt::Windows::Media::MediaPlaybackAutoRepeatMode const& value) const;
        [[nodiscard]] auto ShuffleEnabled() const;
        auto ShuffleEnabled(bool value) const;
        [[nodiscard]] auto PlaybackRate() const;
        auto PlaybackRate(double value) const;
        auto UpdateTimelineProperties(winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties const& timelineProperties) const;
        auto PlaybackPositionChangeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
        using PlaybackPositionChangeRequested_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackPositionChangeRequested>;
        [[nodiscard]] PlaybackPositionChangeRequested_revoker PlaybackPositionChangeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
        auto PlaybackPositionChangeRequested(winrt::event_token const& token) const noexcept;
        auto PlaybackRateChangeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        using PlaybackRateChangeRequested_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackRateChangeRequested>;
        [[nodiscard]] PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
        auto PlaybackRateChangeRequested(winrt::event_token const& token) const noexcept;
        auto ShuffleEnabledChangeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
        using ShuffleEnabledChangeRequested_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls2>::remove_ShuffleEnabledChangeRequested>;
        [[nodiscard]] ShuffleEnabledChangeRequested_revoker ShuffleEnabledChangeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
        auto ShuffleEnabledChangeRequested(winrt::event_token const& token) const noexcept;
        auto AutoRepeatModeChangeRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
        using AutoRepeatModeChangeRequested_revoker = impl::event_revoker<winrt::Windows::Media::ISystemMediaTransportControls2, &impl::abi_t<winrt::Windows::Media::ISystemMediaTransportControls2>::remove_AutoRepeatModeChangeRequested>;
        [[nodiscard]] AutoRepeatModeChangeRequested_revoker AutoRepeatModeChangeRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::SystemMediaTransportControls, winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
        auto AutoRepeatModeChangeRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControls2>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs
    {
        [[nodiscard]] auto Button() const;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater
    {
        [[nodiscard]] auto Type() const;
        auto Type(winrt::Windows::Media::MediaPlaybackType const& value) const;
        [[nodiscard]] auto AppMediaId() const;
        auto AppMediaId(param::hstring const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto Thumbnail(winrt::Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
        [[nodiscard]] auto MusicProperties() const;
        [[nodiscard]] auto VideoProperties() const;
        [[nodiscard]] auto ImageProperties() const;
        auto CopyFromFileAsync(winrt::Windows::Media::MediaPlaybackType const& type, winrt::Windows::Storage::StorageFile const& source) const;
        auto ClearAll() const;
        auto Update() const;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs
    {
        [[nodiscard]] auto Property() const;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControlsStatics>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties
    {
        [[nodiscard]] auto StartTime() const;
        auto StartTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto EndTime() const;
        auto EndTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto MinSeekTime() const;
        auto MinSeekTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto MaxSeekTime() const;
        auto MaxSeekTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Foundation::TimeSpan const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties>
    {
        template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoDisplayProperties
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Subtitle() const;
        auto Subtitle(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoDisplayProperties>
    {
        template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoDisplayProperties2
    {
        [[nodiscard]] auto Genres() const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoDisplayProperties2>
    {
        template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoEffectsStatics
    {
        [[nodiscard]] auto VideoStabilization() const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoEffectsStatics>
    {
        template <typename D> using type = consume_Windows_Media_IVideoEffectsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrame
    {
        [[nodiscard]] auto SoftwareBitmap() const;
        auto CopyToAsync(winrt::Windows::Media::VideoFrame const& frame) const;
        [[nodiscard]] auto Direct3DSurface() const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoFrame>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrame2
    {
        auto CopyToAsync(winrt::Windows::Media::VideoFrame const& frame, winrt::Windows::Foundation::IReference<winrt::Windows::Graphics::Imaging::BitmapBounds> const& sourceBounds, winrt::Windows::Foundation::IReference<winrt::Windows::Graphics::Imaging::BitmapBounds> const& destinationBounds) const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoFrame2>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrameFactory
    {
        auto Create(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const;
        auto CreateWithAlpha(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoFrameFactory>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_IVideoFrameStatics
    {
        auto CreateAsDirect3D11SurfaceBacked(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height) const;
        auto CreateAsDirect3D11SurfaceBacked(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
        auto CreateWithSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
        auto CreateWithDirect3D11Surface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const;
    };
    template <> struct consume<winrt::Windows::Media::IVideoFrameStatics>
    {
        template <typename D> using type = consume_Windows_Media_IVideoFrameStatics<D>;
    };
    struct struct_Windows_Media_MediaTimeRange
    {
        int64_t Start;
        int64_t End;
    };
    template <> struct abi<Windows::Media::MediaTimeRange>
    {
        using type = struct_Windows_Media_MediaTimeRange;
    };
}
#endif
