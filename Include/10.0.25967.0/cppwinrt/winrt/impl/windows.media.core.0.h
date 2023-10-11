// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Core_0_H
#define WINRT_Windows_Media_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceConnection;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    struct PropertySet;
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    struct CapturedFrameControlValues;
    struct VideoStreamConfiguration;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames
{
    struct MediaFrameSource;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    struct VideoDeviceController;
}
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct IVideoEffectDefinition;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct TimedMetadataEncodingProperties;
    struct VideoEncodingProperties;
}
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    struct MediaPlaybackItem;
}
WINRT_EXPORT namespace winrt::Windows::Media::Protection
{
    struct MediaProtectionManager;
}
WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive
{
    struct AdaptiveMediaSource;
}
WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer
{
    struct DownloadOperation;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties
{
    struct MusicProperties;
    struct VideoProperties;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct Buffer;
    struct IBuffer;
    struct IInputStream;
    struct IRandomAccessStream;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    enum class AudioDecoderDegradation : int32_t
    {
        None = 0,
        DownmixTo2Channels = 1,
        DownmixTo6Channels = 2,
        DownmixTo8Channels = 3,
    };
    enum class AudioDecoderDegradationReason : int32_t
    {
        None = 0,
        LicensingRequirement = 1,
        SpatialAudioNotSupported = 2,
    };
    enum class CodecCategory : int32_t
    {
        Encoder = 0,
        Decoder = 1,
    };
    enum class CodecKind : int32_t
    {
        Audio = 0,
        Video = 1,
    };
    enum class FaceDetectionMode : int32_t
    {
        HighPerformance = 0,
        Balanced = 1,
        HighQuality = 2,
    };
    enum class MediaDecoderStatus : int32_t
    {
        FullySupported = 0,
        UnsupportedSubtype = 1,
        UnsupportedEncoderProperties = 2,
        Degraded = 3,
    };
    enum class MediaSourceState : int32_t
    {
        Initial = 0,
        Opening = 1,
        Opened = 2,
        Failed = 3,
        Closed = 4,
    };
    enum class MediaSourceStatus : int32_t
    {
        FullySupported = 0,
        Unknown = 1,
    };
    enum class MediaStreamSourceClosedReason : int32_t
    {
        Done = 0,
        UnknownError = 1,
        AppReportedError = 2,
        UnsupportedProtectionSystem = 3,
        ProtectionSystemFailure = 4,
        UnsupportedEncodingFormat = 5,
        MissingSampleRequestedEventHandler = 6,
    };
    enum class MediaStreamSourceErrorStatus : int32_t
    {
        Other = 0,
        OutOfMemory = 1,
        FailedToOpenFile = 2,
        FailedToConnectToServer = 3,
        ConnectionToServerLost = 4,
        UnspecifiedNetworkError = 5,
        DecodeError = 6,
        UnsupportedMediaFormat = 7,
    };
    enum class MediaTrackKind : int32_t
    {
        Audio = 0,
        Video = 1,
        TimedMetadata = 2,
    };
    enum class MseAppendMode : int32_t
    {
        Segments = 0,
        Sequence = 1,
    };
    enum class MseEndOfStreamStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        DecodeError = 2,
        UnknownError = 3,
    };
    enum class MseReadyState : int32_t
    {
        Closed = 0,
        Open = 1,
        Ended = 2,
    };
    enum class SceneAnalysisRecommendation : int32_t
    {
        Standard = 0,
        Hdr = 1,
        LowLight = 2,
    };
    enum class TimedMetadataKind : int32_t
    {
        Caption = 0,
        Chapter = 1,
        Custom = 2,
        Data = 3,
        Description = 4,
        Subtitle = 5,
        ImageSubtitle = 6,
        Speech = 7,
    };
    enum class TimedMetadataTrackErrorCode : int32_t
    {
        None = 0,
        DataFormatError = 1,
        NetworkError = 2,
        InternalError = 3,
    };
    enum class TimedTextBoutenPosition : int32_t
    {
        Before = 0,
        After = 1,
        Outside = 2,
    };
    enum class TimedTextBoutenType : int32_t
    {
        None = 0,
        Auto = 1,
        FilledCircle = 2,
        OpenCircle = 3,
        FilledDot = 4,
        OpenDot = 5,
        FilledSesame = 6,
        OpenSesame = 7,
    };
    enum class TimedTextDisplayAlignment : int32_t
    {
        Before = 0,
        After = 1,
        Center = 2,
    };
    enum class TimedTextFlowDirection : int32_t
    {
        LeftToRight = 0,
        RightToLeft = 1,
    };
    enum class TimedTextFontStyle : int32_t
    {
        Normal = 0,
        Oblique = 1,
        Italic = 2,
    };
    enum class TimedTextLineAlignment : int32_t
    {
        Start = 0,
        End = 1,
        Center = 2,
    };
    enum class TimedTextRubyAlign : int32_t
    {
        Center = 0,
        Start = 1,
        End = 2,
        SpaceAround = 3,
        SpaceBetween = 4,
        WithBase = 5,
    };
    enum class TimedTextRubyPosition : int32_t
    {
        Before = 0,
        After = 1,
        Outside = 2,
    };
    enum class TimedTextRubyReserve : int32_t
    {
        None = 0,
        Before = 1,
        After = 2,
        Both = 3,
        Outside = 4,
    };
    enum class TimedTextScrollMode : int32_t
    {
        Popon = 0,
        Rollup = 1,
    };
    enum class TimedTextUnit : int32_t
    {
        Pixels = 0,
        Percentage = 1,
    };
    enum class TimedTextWeight : int32_t
    {
        Normal = 400,
        Bold = 700,
    };
    enum class TimedTextWrapping : int32_t
    {
        NoWrap = 0,
        Wrap = 1,
    };
    enum class TimedTextWritingMode : int32_t
    {
        LeftRightTopBottom = 0,
        RightLeftTopBottom = 1,
        TopBottomRightLeft = 2,
        TopBottomLeftRight = 3,
        LeftRight = 4,
        RightLeft = 5,
        TopBottom = 6,
    };
    enum class VideoStabilizationEffectEnabledChangedReason : int32_t
    {
        Programmatic = 0,
        PixelRateTooHigh = 1,
        RunningSlowly = 2,
    };
    struct IAudioStreamDescriptor;
    struct IAudioStreamDescriptor2;
    struct IAudioStreamDescriptor3;
    struct IAudioStreamDescriptorFactory;
    struct IAudioTrack;
    struct IAudioTrackOpenFailedEventArgs;
    struct IAudioTrackSupportInfo;
    struct IChapterCue;
    struct ICodecInfo;
    struct ICodecQuery;
    struct ICodecSubtypesStatics;
    struct IDataCue;
    struct IDataCue2;
    struct IFaceDetectedEventArgs;
    struct IFaceDetectionEffect;
    struct IFaceDetectionEffectDefinition;
    struct IFaceDetectionEffectFrame;
    struct IHighDynamicRangeControl;
    struct IHighDynamicRangeOutput;
    struct IImageCue;
    struct IInitializeMediaStreamSourceRequestedEventArgs;
    struct ILowLightFusionResult;
    struct ILowLightFusionStatics;
    struct IMediaBinder;
    struct IMediaBindingEventArgs;
    struct IMediaBindingEventArgs2;
    struct IMediaBindingEventArgs3;
    struct IMediaCue;
    struct IMediaCueEventArgs;
    struct IMediaSource;
    struct IMediaSource2;
    struct IMediaSource3;
    struct IMediaSource4;
    struct IMediaSource5;
    struct IMediaSourceAppServiceConnection;
    struct IMediaSourceAppServiceConnectionFactory;
    struct IMediaSourceError;
    struct IMediaSourceOpenOperationCompletedEventArgs;
    struct IMediaSourceStateChangedEventArgs;
    struct IMediaSourceStatics;
    struct IMediaSourceStatics2;
    struct IMediaSourceStatics3;
    struct IMediaSourceStatics4;
    struct IMediaStreamDescriptor;
    struct IMediaStreamDescriptor2;
    struct IMediaStreamSample;
    struct IMediaStreamSample2;
    struct IMediaStreamSampleProtectionProperties;
    struct IMediaStreamSampleStatics;
    struct IMediaStreamSampleStatics2;
    struct IMediaStreamSource;
    struct IMediaStreamSource2;
    struct IMediaStreamSource3;
    struct IMediaStreamSource4;
    struct IMediaStreamSourceClosedEventArgs;
    struct IMediaStreamSourceClosedRequest;
    struct IMediaStreamSourceFactory;
    struct IMediaStreamSourceSampleRenderedEventArgs;
    struct IMediaStreamSourceSampleRequest;
    struct IMediaStreamSourceSampleRequestDeferral;
    struct IMediaStreamSourceSampleRequestedEventArgs;
    struct IMediaStreamSourceStartingEventArgs;
    struct IMediaStreamSourceStartingRequest;
    struct IMediaStreamSourceStartingRequestDeferral;
    struct IMediaStreamSourceSwitchStreamsRequest;
    struct IMediaStreamSourceSwitchStreamsRequestDeferral;
    struct IMediaStreamSourceSwitchStreamsRequestedEventArgs;
    struct IMediaTrack;
    struct IMseSourceBuffer;
    struct IMseSourceBufferList;
    struct IMseStreamSource;
    struct IMseStreamSource2;
    struct IMseStreamSourceStatics;
    struct ISceneAnalysisEffect;
    struct ISceneAnalysisEffectFrame;
    struct ISceneAnalysisEffectFrame2;
    struct ISceneAnalyzedEventArgs;
    struct ISingleSelectMediaTrackList;
    struct ISpeechCue;
    struct ITimedMetadataStreamDescriptor;
    struct ITimedMetadataStreamDescriptorFactory;
    struct ITimedMetadataTrack;
    struct ITimedMetadataTrack2;
    struct ITimedMetadataTrackError;
    struct ITimedMetadataTrackFactory;
    struct ITimedMetadataTrackFailedEventArgs;
    struct ITimedMetadataTrackProvider;
    struct ITimedTextBouten;
    struct ITimedTextCue;
    struct ITimedTextLine;
    struct ITimedTextRegion;
    struct ITimedTextRuby;
    struct ITimedTextSource;
    struct ITimedTextSourceResolveResultEventArgs;
    struct ITimedTextSourceStatics;
    struct ITimedTextSourceStatics2;
    struct ITimedTextStyle;
    struct ITimedTextStyle2;
    struct ITimedTextStyle3;
    struct ITimedTextSubformat;
    struct IVideoStabilizationEffect;
    struct IVideoStabilizationEffectEnabledChangedEventArgs;
    struct IVideoStreamDescriptor;
    struct IVideoStreamDescriptor2;
    struct IVideoStreamDescriptorFactory;
    struct IVideoTrack;
    struct IVideoTrackOpenFailedEventArgs;
    struct IVideoTrackSupportInfo;
    struct AudioStreamDescriptor;
    struct AudioTrack;
    struct AudioTrackOpenFailedEventArgs;
    struct AudioTrackSupportInfo;
    struct ChapterCue;
    struct CodecInfo;
    struct CodecQuery;
    struct CodecSubtypes;
    struct DataCue;
    struct FaceDetectedEventArgs;
    struct FaceDetectionEffect;
    struct FaceDetectionEffectDefinition;
    struct FaceDetectionEffectFrame;
    struct HighDynamicRangeControl;
    struct HighDynamicRangeOutput;
    struct ImageCue;
    struct InitializeMediaStreamSourceRequestedEventArgs;
    struct LowLightFusion;
    struct LowLightFusionResult;
    struct MediaBinder;
    struct MediaBindingEventArgs;
    struct MediaCueEventArgs;
    struct MediaSource;
    struct MediaSourceAppServiceConnection;
    struct MediaSourceError;
    struct MediaSourceOpenOperationCompletedEventArgs;
    struct MediaSourceStateChangedEventArgs;
    struct MediaStreamSample;
    struct MediaStreamSamplePropertySet;
    struct MediaStreamSampleProtectionProperties;
    struct MediaStreamSource;
    struct MediaStreamSourceClosedEventArgs;
    struct MediaStreamSourceClosedRequest;
    struct MediaStreamSourceSampleRenderedEventArgs;
    struct MediaStreamSourceSampleRequest;
    struct MediaStreamSourceSampleRequestDeferral;
    struct MediaStreamSourceSampleRequestedEventArgs;
    struct MediaStreamSourceStartingEventArgs;
    struct MediaStreamSourceStartingRequest;
    struct MediaStreamSourceStartingRequestDeferral;
    struct MediaStreamSourceSwitchStreamsRequest;
    struct MediaStreamSourceSwitchStreamsRequestDeferral;
    struct MediaStreamSourceSwitchStreamsRequestedEventArgs;
    struct MseSourceBuffer;
    struct MseSourceBufferList;
    struct MseStreamSource;
    struct SceneAnalysisEffect;
    struct SceneAnalysisEffectDefinition;
    struct SceneAnalysisEffectFrame;
    struct SceneAnalyzedEventArgs;
    struct SpeechCue;
    struct TimedMetadataStreamDescriptor;
    struct TimedMetadataTrack;
    struct TimedMetadataTrackError;
    struct TimedMetadataTrackFailedEventArgs;
    struct TimedTextBouten;
    struct TimedTextCue;
    struct TimedTextLine;
    struct TimedTextRegion;
    struct TimedTextRuby;
    struct TimedTextSource;
    struct TimedTextSourceResolveResultEventArgs;
    struct TimedTextStyle;
    struct TimedTextSubformat;
    struct VideoStabilizationEffect;
    struct VideoStabilizationEffectDefinition;
    struct VideoStabilizationEffectEnabledChangedEventArgs;
    struct VideoStreamDescriptor;
    struct VideoTrack;
    struct VideoTrackOpenFailedEventArgs;
    struct VideoTrackSupportInfo;
    struct MseTimeRange;
    struct TimedTextDouble;
    struct TimedTextPadding;
    struct TimedTextPoint;
    struct TimedTextSize;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Core::IAudioStreamDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioStreamDescriptor3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IAudioTrackSupportInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IChapterCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ICodecInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ICodecQuery>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ICodecSubtypesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IDataCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IDataCue2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IFaceDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IFaceDetectionEffect>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IFaceDetectionEffectFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IHighDynamicRangeControl>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IHighDynamicRangeOutput>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IImageCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ILowLightFusionResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ILowLightFusionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaBinder>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaBindingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaBindingEventArgs2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaBindingEventArgs3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaCueEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSource3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSource4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSource5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceError>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaSourceStatics4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSample>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSample2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSampleStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSampleStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSource3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSource4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMediaTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMseSourceBuffer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMseSourceBufferList>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMseStreamSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMseStreamSource2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IMseStreamSourceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISceneAnalysisEffect>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ISpeechCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrack2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrackError>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrackFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextBouten>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextCue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextLine>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextRegion>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextRuby>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextSourceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextSourceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextStyle>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextStyle2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextStyle3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::ITimedTextSubformat>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoStabilizationEffect>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoStreamDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoStreamDescriptor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoTrack>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::IVideoTrackSupportInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioStreamDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioTrack>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioTrackSupportInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::ChapterCue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::CodecInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::CodecQuery>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::CodecSubtypes>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::DataCue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::FaceDetectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::FaceDetectionEffect>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::FaceDetectionEffectFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::HighDynamicRangeControl>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::HighDynamicRangeOutput>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::ImageCue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::LowLightFusion>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::LowLightFusionResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaBinder>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaBindingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaCueEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSample>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MseSourceBuffer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MseSourceBufferList>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::MseStreamSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::SceneAnalysisEffect>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::SpeechCue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataTrack>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataTrackError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextBouten>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextCue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextLine>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextRegion>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextRuby>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextStyle>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextSubformat>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoStabilizationEffect>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoStreamDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoTrack>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoTrackSupportInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioDecoderDegradation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::AudioDecoderDegradationReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::CodecCategory>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::CodecKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::FaceDetectionMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaDecoderStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaSourceStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceClosedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaStreamSourceErrorStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MediaTrackKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MseAppendMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MseEndOfStreamStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MseReadyState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::SceneAnalysisRecommendation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedMetadataTrackErrorCode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextBoutenPosition>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextBoutenType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextDisplayAlignment>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextFlowDirection>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextFontStyle>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextLineAlignment>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextRubyAlign>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextRubyPosition>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextRubyReserve>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextScrollMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextUnit>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextWeight>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextWrapping>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextWritingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Core::MseTimeRange>{ using type = struct_category<winrt::Windows::Foundation::TimeSpan, winrt::Windows::Foundation::TimeSpan>; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextDouble>{ using type = struct_category<double, winrt::Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextPadding>{ using type = struct_category<double, double, double, double, winrt::Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextPoint>{ using type = struct_category<double, double, winrt::Windows::Media::Core::TimedTextUnit>; };
    template <> struct category<winrt::Windows::Media::Core::TimedTextSize>{ using type = struct_category<double, double, winrt::Windows::Media::Core::TimedTextUnit>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioStreamDescriptor> = L"Windows.Media.Core.AudioStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioTrack> = L"Windows.Media.Core.AudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs> = L"Windows.Media.Core.AudioTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioTrackSupportInfo> = L"Windows.Media.Core.AudioTrackSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ChapterCue> = L"Windows.Media.Core.ChapterCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::CodecInfo> = L"Windows.Media.Core.CodecInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::CodecQuery> = L"Windows.Media.Core.CodecQuery";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::CodecSubtypes> = L"Windows.Media.Core.CodecSubtypes";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::DataCue> = L"Windows.Media.Core.DataCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::FaceDetectedEventArgs> = L"Windows.Media.Core.FaceDetectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::FaceDetectionEffect> = L"Windows.Media.Core.FaceDetectionEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::FaceDetectionEffectDefinition> = L"Windows.Media.Core.FaceDetectionEffectDefinition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::FaceDetectionEffectFrame> = L"Windows.Media.Core.FaceDetectionEffectFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::HighDynamicRangeControl> = L"Windows.Media.Core.HighDynamicRangeControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::HighDynamicRangeOutput> = L"Windows.Media.Core.HighDynamicRangeOutput";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ImageCue> = L"Windows.Media.Core.ImageCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> = L"Windows.Media.Core.InitializeMediaStreamSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::LowLightFusion> = L"Windows.Media.Core.LowLightFusion";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::LowLightFusionResult> = L"Windows.Media.Core.LowLightFusionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaBinder> = L"Windows.Media.Core.MediaBinder";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaBindingEventArgs> = L"Windows.Media.Core.MediaBindingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaCueEventArgs> = L"Windows.Media.Core.MediaCueEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSource> = L"Windows.Media.Core.MediaSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceAppServiceConnection> = L"Windows.Media.Core.MediaSourceAppServiceConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceError> = L"Windows.Media.Core.MediaSourceError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> = L"Windows.Media.Core.MediaSourceOpenOperationCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs> = L"Windows.Media.Core.MediaSourceStateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSample> = L"Windows.Media.Core.MediaStreamSample";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSamplePropertySet> = L"Windows.Media.Core.MediaStreamSamplePropertySet";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties> = L"Windows.Media.Core.MediaStreamSampleProtectionProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSource> = L"Windows.Media.Core.MediaStreamSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs> = L"Windows.Media.Core.MediaStreamSourceClosedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest> = L"Windows.Media.Core.MediaStreamSourceClosedRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSampleRenderedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest> = L"Windows.Media.Core.MediaStreamSourceSampleRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceSampleRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSampleRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs> = L"Windows.Media.Core.MediaStreamSourceStartingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest> = L"Windows.Media.Core.MediaStreamSourceStartingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceStartingRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseSourceBuffer> = L"Windows.Media.Core.MseSourceBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseSourceBufferList> = L"Windows.Media.Core.MseSourceBufferList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseStreamSource> = L"Windows.Media.Core.MseStreamSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SceneAnalysisEffect> = L"Windows.Media.Core.SceneAnalysisEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition> = L"Windows.Media.Core.SceneAnalysisEffectDefinition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SceneAnalysisEffectFrame> = L"Windows.Media.Core.SceneAnalysisEffectFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SceneAnalyzedEventArgs> = L"Windows.Media.Core.SceneAnalyzedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SpeechCue> = L"Windows.Media.Core.SpeechCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor> = L"Windows.Media.Core.TimedMetadataStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataTrack> = L"Windows.Media.Core.TimedMetadataTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataTrackError> = L"Windows.Media.Core.TimedMetadataTrackError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs> = L"Windows.Media.Core.TimedMetadataTrackFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextBouten> = L"Windows.Media.Core.TimedTextBouten";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextCue> = L"Windows.Media.Core.TimedTextCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextLine> = L"Windows.Media.Core.TimedTextLine";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextRegion> = L"Windows.Media.Core.TimedTextRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextRuby> = L"Windows.Media.Core.TimedTextRuby";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextSource> = L"Windows.Media.Core.TimedTextSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs> = L"Windows.Media.Core.TimedTextSourceResolveResultEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextStyle> = L"Windows.Media.Core.TimedTextStyle";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextSubformat> = L"Windows.Media.Core.TimedTextSubformat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoStabilizationEffect> = L"Windows.Media.Core.VideoStabilizationEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition> = L"Windows.Media.Core.VideoStabilizationEffectDefinition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> = L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoStreamDescriptor> = L"Windows.Media.Core.VideoStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoTrack> = L"Windows.Media.Core.VideoTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs> = L"Windows.Media.Core.VideoTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoTrackSupportInfo> = L"Windows.Media.Core.VideoTrackSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioDecoderDegradation> = L"Windows.Media.Core.AudioDecoderDegradation";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::AudioDecoderDegradationReason> = L"Windows.Media.Core.AudioDecoderDegradationReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::CodecCategory> = L"Windows.Media.Core.CodecCategory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::CodecKind> = L"Windows.Media.Core.CodecKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::FaceDetectionMode> = L"Windows.Media.Core.FaceDetectionMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaDecoderStatus> = L"Windows.Media.Core.MediaDecoderStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceState> = L"Windows.Media.Core.MediaSourceState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaSourceStatus> = L"Windows.Media.Core.MediaSourceStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceClosedReason> = L"Windows.Media.Core.MediaStreamSourceClosedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaStreamSourceErrorStatus> = L"Windows.Media.Core.MediaStreamSourceErrorStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MediaTrackKind> = L"Windows.Media.Core.MediaTrackKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseAppendMode> = L"Windows.Media.Core.MseAppendMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseEndOfStreamStatus> = L"Windows.Media.Core.MseEndOfStreamStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseReadyState> = L"Windows.Media.Core.MseReadyState";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::SceneAnalysisRecommendation> = L"Windows.Media.Core.SceneAnalysisRecommendation";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataKind> = L"Windows.Media.Core.TimedMetadataKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedMetadataTrackErrorCode> = L"Windows.Media.Core.TimedMetadataTrackErrorCode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextBoutenPosition> = L"Windows.Media.Core.TimedTextBoutenPosition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextBoutenType> = L"Windows.Media.Core.TimedTextBoutenType";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextDisplayAlignment> = L"Windows.Media.Core.TimedTextDisplayAlignment";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextFlowDirection> = L"Windows.Media.Core.TimedTextFlowDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextFontStyle> = L"Windows.Media.Core.TimedTextFontStyle";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextLineAlignment> = L"Windows.Media.Core.TimedTextLineAlignment";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextRubyAlign> = L"Windows.Media.Core.TimedTextRubyAlign";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextRubyPosition> = L"Windows.Media.Core.TimedTextRubyPosition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextRubyReserve> = L"Windows.Media.Core.TimedTextRubyReserve";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextScrollMode> = L"Windows.Media.Core.TimedTextScrollMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextUnit> = L"Windows.Media.Core.TimedTextUnit";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextWeight> = L"Windows.Media.Core.TimedTextWeight";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextWrapping> = L"Windows.Media.Core.TimedTextWrapping";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextWritingMode> = L"Windows.Media.Core.TimedTextWritingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason> = L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::MseTimeRange> = L"Windows.Media.Core.MseTimeRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextDouble> = L"Windows.Media.Core.TimedTextDouble";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextPadding> = L"Windows.Media.Core.TimedTextPadding";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextPoint> = L"Windows.Media.Core.TimedTextPoint";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::TimedTextSize> = L"Windows.Media.Core.TimedTextSize";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioStreamDescriptor> = L"Windows.Media.Core.IAudioStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioStreamDescriptor2> = L"Windows.Media.Core.IAudioStreamDescriptor2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioStreamDescriptor3> = L"Windows.Media.Core.IAudioStreamDescriptor3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory> = L"Windows.Media.Core.IAudioStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioTrack> = L"Windows.Media.Core.IAudioTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs> = L"Windows.Media.Core.IAudioTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IAudioTrackSupportInfo> = L"Windows.Media.Core.IAudioTrackSupportInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IChapterCue> = L"Windows.Media.Core.IChapterCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ICodecInfo> = L"Windows.Media.Core.ICodecInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ICodecQuery> = L"Windows.Media.Core.ICodecQuery";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ICodecSubtypesStatics> = L"Windows.Media.Core.ICodecSubtypesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IDataCue> = L"Windows.Media.Core.IDataCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IDataCue2> = L"Windows.Media.Core.IDataCue2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IFaceDetectedEventArgs> = L"Windows.Media.Core.IFaceDetectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IFaceDetectionEffect> = L"Windows.Media.Core.IFaceDetectionEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition> = L"Windows.Media.Core.IFaceDetectionEffectDefinition";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IFaceDetectionEffectFrame> = L"Windows.Media.Core.IFaceDetectionEffectFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IHighDynamicRangeControl> = L"Windows.Media.Core.IHighDynamicRangeControl";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IHighDynamicRangeOutput> = L"Windows.Media.Core.IHighDynamicRangeOutput";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IImageCue> = L"Windows.Media.Core.IImageCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> = L"Windows.Media.Core.IInitializeMediaStreamSourceRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ILowLightFusionResult> = L"Windows.Media.Core.ILowLightFusionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ILowLightFusionStatics> = L"Windows.Media.Core.ILowLightFusionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaBinder> = L"Windows.Media.Core.IMediaBinder";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaBindingEventArgs> = L"Windows.Media.Core.IMediaBindingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaBindingEventArgs2> = L"Windows.Media.Core.IMediaBindingEventArgs2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaBindingEventArgs3> = L"Windows.Media.Core.IMediaBindingEventArgs3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaCue> = L"Windows.Media.Core.IMediaCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaCueEventArgs> = L"Windows.Media.Core.IMediaCueEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSource> = L"Windows.Media.Core.IMediaSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSource2> = L"Windows.Media.Core.IMediaSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSource3> = L"Windows.Media.Core.IMediaSource3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSource4> = L"Windows.Media.Core.IMediaSource4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSource5> = L"Windows.Media.Core.IMediaSource5";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection> = L"Windows.Media.Core.IMediaSourceAppServiceConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> = L"Windows.Media.Core.IMediaSourceAppServiceConnectionFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceError> = L"Windows.Media.Core.IMediaSourceError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> = L"Windows.Media.Core.IMediaSourceOpenOperationCompletedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs> = L"Windows.Media.Core.IMediaSourceStateChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceStatics> = L"Windows.Media.Core.IMediaSourceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceStatics2> = L"Windows.Media.Core.IMediaSourceStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceStatics3> = L"Windows.Media.Core.IMediaSourceStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaSourceStatics4> = L"Windows.Media.Core.IMediaSourceStatics4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamDescriptor> = L"Windows.Media.Core.IMediaStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamDescriptor2> = L"Windows.Media.Core.IMediaStreamDescriptor2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSample> = L"Windows.Media.Core.IMediaStreamSample";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSample2> = L"Windows.Media.Core.IMediaStreamSample2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties> = L"Windows.Media.Core.IMediaStreamSampleProtectionProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSampleStatics> = L"Windows.Media.Core.IMediaStreamSampleStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSampleStatics2> = L"Windows.Media.Core.IMediaStreamSampleStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSource> = L"Windows.Media.Core.IMediaStreamSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSource2> = L"Windows.Media.Core.IMediaStreamSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSource3> = L"Windows.Media.Core.IMediaStreamSource3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSource4> = L"Windows.Media.Core.IMediaStreamSource4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceClosedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest> = L"Windows.Media.Core.IMediaStreamSourceClosedRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceFactory> = L"Windows.Media.Core.IMediaStreamSourceFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSampleRenderedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest> = L"Windows.Media.Core.IMediaStreamSourceSampleRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceSampleRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSampleRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs> = L"Windows.Media.Core.IMediaStreamSourceStartingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest> = L"Windows.Media.Core.IMediaStreamSourceStartingRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceStartingRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMediaTrack> = L"Windows.Media.Core.IMediaTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMseSourceBuffer> = L"Windows.Media.Core.IMseSourceBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMseSourceBufferList> = L"Windows.Media.Core.IMseSourceBufferList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMseStreamSource> = L"Windows.Media.Core.IMseStreamSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMseStreamSource2> = L"Windows.Media.Core.IMseStreamSource2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IMseStreamSourceStatics> = L"Windows.Media.Core.IMseStreamSourceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISceneAnalysisEffect> = L"Windows.Media.Core.ISceneAnalysisEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame> = L"Windows.Media.Core.ISceneAnalysisEffectFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2> = L"Windows.Media.Core.ISceneAnalysisEffectFrame2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs> = L"Windows.Media.Core.ISceneAnalyzedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISingleSelectMediaTrackList> = L"Windows.Media.Core.ISingleSelectMediaTrackList";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ISpeechCue> = L"Windows.Media.Core.ISpeechCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor> = L"Windows.Media.Core.ITimedMetadataStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> = L"Windows.Media.Core.ITimedMetadataStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrack> = L"Windows.Media.Core.ITimedMetadataTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrack2> = L"Windows.Media.Core.ITimedMetadataTrack2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrackError> = L"Windows.Media.Core.ITimedMetadataTrackError";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrackFactory> = L"Windows.Media.Core.ITimedMetadataTrackFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> = L"Windows.Media.Core.ITimedMetadataTrackFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedMetadataTrackProvider> = L"Windows.Media.Core.ITimedMetadataTrackProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextBouten> = L"Windows.Media.Core.ITimedTextBouten";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextCue> = L"Windows.Media.Core.ITimedTextCue";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextLine> = L"Windows.Media.Core.ITimedTextLine";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextRegion> = L"Windows.Media.Core.ITimedTextRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextRuby> = L"Windows.Media.Core.ITimedTextRuby";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextSource> = L"Windows.Media.Core.ITimedTextSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> = L"Windows.Media.Core.ITimedTextSourceResolveResultEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextSourceStatics> = L"Windows.Media.Core.ITimedTextSourceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextSourceStatics2> = L"Windows.Media.Core.ITimedTextSourceStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextStyle> = L"Windows.Media.Core.ITimedTextStyle";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextStyle2> = L"Windows.Media.Core.ITimedTextStyle2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextStyle3> = L"Windows.Media.Core.ITimedTextStyle3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::ITimedTextSubformat> = L"Windows.Media.Core.ITimedTextSubformat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoStabilizationEffect> = L"Windows.Media.Core.IVideoStabilizationEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> = L"Windows.Media.Core.IVideoStabilizationEffectEnabledChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoStreamDescriptor> = L"Windows.Media.Core.IVideoStreamDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoStreamDescriptor2> = L"Windows.Media.Core.IVideoStreamDescriptor2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory> = L"Windows.Media.Core.IVideoStreamDescriptorFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoTrack> = L"Windows.Media.Core.IVideoTrack";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs> = L"Windows.Media.Core.IVideoTrackOpenFailedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Core::IVideoTrackSupportInfo> = L"Windows.Media.Core.IVideoTrackSupportInfo";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioStreamDescriptor>{ 0x1E3692E4,0x4027,0x4847,{ 0xA7,0x0B,0xDF,0x1D,0x9A,0x2A,0x7B,0x04 } }; // 1E3692E4-4027-4847-A70B-DF1D9A2A7B04
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioStreamDescriptor2>{ 0x2E68F1F6,0xA448,0x497B,{ 0x88,0x40,0x85,0x08,0x26,0x65,0xAC,0xF9 } }; // 2E68F1F6-A448-497B-8840-85082665ACF9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioStreamDescriptor3>{ 0x4D220DA1,0x8E83,0x44EF,{ 0x89,0x73,0x2F,0x63,0xE9,0x93,0xF3,0x6B } }; // 4D220DA1-8E83-44EF-8973-2F63E993F36B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory>{ 0x4A86CE9E,0x4CB1,0x4380,{ 0x8E,0x0C,0x83,0x50,0x4B,0x7F,0x5B,0xF3 } }; // 4A86CE9E-4CB1-4380-8E0C-83504B7F5BF3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioTrack>{ 0xF23B6E77,0x3EF7,0x40DE,{ 0xB9,0x43,0x06,0x8B,0x13,0x21,0x70,0x1D } }; // F23B6E77-3EF7-40DE-B943-068B1321701D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ 0xEEDDB9B9,0xBB7C,0x4112,{ 0xBF,0x76,0x93,0x84,0x67,0x6F,0x82,0x4B } }; // EEDDB9B9-BB7C-4112-BF76-9384676F824B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IAudioTrackSupportInfo>{ 0x178BEFF7,0xCC39,0x44A6,{ 0xB9,0x51,0x4A,0x56,0x53,0xF0,0x73,0xFA } }; // 178BEFF7-CC39-44A6-B951-4A5653F073FA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IChapterCue>{ 0x72A98001,0xD38A,0x4C0A,{ 0x8F,0xA6,0x75,0xCD,0xDA,0xF4,0x66,0x4C } }; // 72A98001-D38A-4C0A-8FA6-75CDDAF4664C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ICodecInfo>{ 0x51E89F85,0xEA97,0x499C,{ 0x86,0xAC,0x4C,0xE5,0xE7,0x3F,0x3A,0x42 } }; // 51E89F85-EA97-499C-86AC-4CE5E73F3A42
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ICodecQuery>{ 0x222A953A,0xAF61,0x4E04,{ 0x80,0x8A,0xA4,0x63,0x4E,0x2F,0x3A,0xC4 } }; // 222A953A-AF61-4E04-808A-A4634E2F3AC4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ICodecSubtypesStatics>{ 0xA66AC4F2,0x888B,0x4224,{ 0x8C,0xF6,0x2A,0x8D,0x4E,0xB0,0x23,0x82 } }; // A66AC4F2-888B-4224-8CF6-2A8D4EB02382
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IDataCue>{ 0x7C7F676D,0x1FBC,0x4E2D,{ 0x9A,0x87,0xEE,0x38,0xBD,0x1D,0xC6,0x37 } }; // 7C7F676D-1FBC-4E2D-9A87-EE38BD1DC637
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IDataCue2>{ 0xBC561B15,0x95F2,0x49E8,{ 0x96,0xF1,0x8D,0xD5,0xDA,0xC6,0x8D,0x93 } }; // BC561B15-95F2-49E8-96F1-8DD5DAC68D93
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IFaceDetectedEventArgs>{ 0x19918426,0xC65B,0x46BA,{ 0x85,0xF8,0x13,0x88,0x05,0x76,0xC9,0x0A } }; // 19918426-C65B-46BA-85F8-13880576C90A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IFaceDetectionEffect>{ 0xAE15EBD2,0x0542,0x42A9,{ 0xBC,0x90,0xF2,0x83,0xA2,0x9F,0x46,0xC1 } }; // AE15EBD2-0542-42A9-BC90-F283A29F46C1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition>{ 0x43DCA081,0xB848,0x4F33,{ 0xB7,0x02,0x1F,0xD2,0x62,0x4F,0xB0,0x16 } }; // 43DCA081-B848-4F33-B702-1FD2624FB016
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IFaceDetectionEffectFrame>{ 0x8AB08993,0x5DC8,0x447B,{ 0xA2,0x47,0x52,0x70,0xBD,0x80,0x2E,0xCE } }; // 8AB08993-5DC8-447B-A247-5270BD802ECE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IHighDynamicRangeControl>{ 0x55F1A7AE,0xD957,0x4DC9,{ 0x9D,0x1C,0x85,0x53,0xA8,0x2A,0x7D,0x99 } }; // 55F1A7AE-D957-4DC9-9D1C-8553A82A7D99
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IHighDynamicRangeOutput>{ 0x0F57806B,0x253B,0x4119,{ 0xBB,0x40,0x3A,0x90,0xE5,0x13,0x84,0xF7 } }; // 0F57806B-253B-4119-BB40-3A90E51384F7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IImageCue>{ 0x52828282,0x367B,0x440B,{ 0x91,0x16,0x3C,0x84,0x57,0x0D,0xD2,0x70 } }; // 52828282-367B-440B-9116-3C84570DD270
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ 0x25BC45E1,0x9B08,0x4C2E,{ 0xA8,0x55,0x45,0x42,0xF1,0xA7,0x5D,0xEB } }; // 25BC45E1-9B08-4C2E-A855-4542F1A75DEB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ILowLightFusionResult>{ 0x78EDBE35,0x27A0,0x42E0,{ 0x9C,0xD3,0x73,0x8D,0x20,0x89,0xDE,0x9C } }; // 78EDBE35-27A0-42E0-9CD3-738D2089DE9C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ILowLightFusionStatics>{ 0x5305016D,0xC29E,0x40E2,{ 0x87,0xA9,0x9E,0x1F,0xD2,0xF1,0x92,0xF5 } }; // 5305016D-C29E-40E2-87A9-9E1FD2F192F5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaBinder>{ 0x2B7E40AA,0xDE07,0x424F,{ 0x83,0xF1,0xF1,0xDE,0x46,0xC4,0xFA,0x2E } }; // 2B7E40AA-DE07-424F-83F1-F1DE46C4FA2E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaBindingEventArgs>{ 0xB61CB25A,0x1B6D,0x4630,{ 0xA8,0x6D,0x2F,0x08,0x37,0xF7,0x12,0xE5 } }; // B61CB25A-1B6D-4630-A86D-2F0837F712E5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaBindingEventArgs2>{ 0x0464CCEB,0xBB5A,0x482F,{ 0xB8,0xBA,0xF0,0x28,0x4C,0x69,0x65,0x67 } }; // 0464CCEB-BB5A-482F-B8BA-F0284C696567
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaBindingEventArgs3>{ 0xF8EB475E,0x19BE,0x44FC,{ 0xA5,0xED,0x7A,0xBA,0x31,0x50,0x37,0xF9 } }; // F8EB475E-19BE-44FC-A5ED-7ABA315037F9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaCue>{ 0xC7D15E5D,0x59DC,0x431F,{ 0xA0,0xEE,0x27,0x74,0x43,0x23,0xB3,0x6D } }; // C7D15E5D-59DC-431F-A0EE-27744323B36D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaCueEventArgs>{ 0xD12F47F7,0x5FA4,0x4E68,{ 0x9F,0xE5,0x32,0x16,0x0D,0xCE,0xE5,0x7E } }; // D12F47F7-5FA4-4E68-9FE5-32160DCEE57E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSource>{ 0xE7BFB599,0xA09D,0x4C21,{ 0xBC,0xDF,0x20,0xAF,0x4F,0x86,0xB3,0xD9 } }; // E7BFB599-A09D-4C21-BCDF-20AF4F86B3D9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSource2>{ 0x2EB61048,0x655F,0x4C37,{ 0xB8,0x13,0xB4,0xE4,0x5D,0xFA,0x0A,0xBE } }; // 2EB61048-655F-4C37-B813-B4E45DFA0ABE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSource3>{ 0xB59F0D9B,0x4B6E,0x41ED,{ 0xBB,0xB4,0x7C,0x75,0x09,0xA9,0x94,0xAD } }; // B59F0D9B-4B6E-41ED-BBB4-7C7509A994AD
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSource4>{ 0xBDAFAD57,0x8EFF,0x4C63,{ 0x85,0xA6,0x84,0xDE,0x0A,0xE3,0xE4,0xF2 } }; // BDAFAD57-8EFF-4C63-85A6-84DE0AE3E4F2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSource5>{ 0x331A22AE,0xED2E,0x4A22,{ 0x94,0xC8,0xB7,0x43,0xA9,0x2B,0x30,0x22 } }; // 331A22AE-ED2E-4A22-94C8-B743A92B3022
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection>{ 0x61E1EA97,0x1916,0x4810,{ 0xB7,0xF4,0xB6,0x42,0xBE,0x82,0x95,0x96 } }; // 61E1EA97-1916-4810-B7F4-B642BE829596
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ 0x65B912EB,0x80B9,0x44F9,{ 0x9C,0x1E,0xE1,0x20,0xF6,0xD9,0x28,0x38 } }; // 65B912EB-80B9-44F9-9C1E-E120F6D92838
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceError>{ 0x5C0A8965,0x37C5,0x4E9D,{ 0x8D,0x21,0x1C,0xDE,0xE9,0x0C,0xEC,0xC6 } }; // 5C0A8965-37C5-4E9D-8D21-1CDEE90CECC6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ 0xFC682CEB,0xE281,0x477C,{ 0xA8,0xE0,0x1A,0xCD,0x65,0x41,0x14,0xC8 } }; // FC682CEB-E281-477C-A8E0-1ACD654114C8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ 0x0A30AF82,0x9071,0x4BAC,{ 0xBC,0x39,0xCA,0x2A,0x93,0xB7,0x17,0xA9 } }; // 0A30AF82-9071-4BAC-BC39-CA2A93B717A9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceStatics>{ 0xF77D6FA4,0x4652,0x410E,{ 0xB1,0xD8,0xE9,0xA5,0xE2,0x45,0xA4,0x5C } }; // F77D6FA4-4652-410E-B1D8-E9A5E245A45C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceStatics2>{ 0xEEE161A4,0x7F13,0x4896,{ 0xB8,0xCB,0xDF,0x0D,0xE5,0xBC,0xB9,0xF1 } }; // EEE161A4-7F13-4896-B8CB-DF0DE5BCB9F1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceStatics3>{ 0x453A30D6,0x2BEA,0x4122,{ 0x9F,0x73,0xEA,0xCE,0x04,0x52,0x6E,0x35 } }; // 453A30D6-2BEA-4122-9F73-EACE04526E35
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaSourceStatics4>{ 0x281B3BFC,0xE50A,0x4428,{ 0xA5,0x00,0x9C,0x4E,0xD9,0x18,0xD3,0xF0 } }; // 281B3BFC-E50A-4428-A500-9C4ED918D3F0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamDescriptor>{ 0x80F16E6E,0x92F7,0x451E,{ 0x97,0xD2,0xAF,0xD8,0x07,0x42,0xDA,0x70 } }; // 80F16E6E-92F7-451E-97D2-AFD80742DA70
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamDescriptor2>{ 0x5073010F,0xE8B2,0x4071,{ 0xB0,0x0B,0xEB,0xF3,0x37,0xA7,0x6B,0x58 } }; // 5073010F-E8B2-4071-B00B-EBF337A76B58
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSample>{ 0x5C8DB627,0x4B80,0x4361,{ 0x98,0x37,0x6C,0xB7,0x48,0x1A,0xD9,0xD6 } }; // 5C8DB627-4B80-4361-9837-6CB7481AD9D6
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSample2>{ 0x45078691,0xFCE8,0x4746,{ 0xA1,0xC8,0x10,0xC2,0x5D,0x3D,0x7C,0xD3 } }; // 45078691-FCE8-4746-A1C8-10C25D3D7CD3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ 0x4EB88292,0xECDF,0x493E,{ 0x84,0x1D,0xDD,0x4A,0xDD,0x7C,0xAC,0xA2 } }; // 4EB88292-ECDF-493E-841D-DD4ADD7CACA2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSampleStatics>{ 0xDFDF218F,0xA6CF,0x4579,{ 0xBE,0x41,0x73,0xDD,0x94,0x1A,0xD9,0x72 } }; // DFDF218F-A6CF-4579-BE41-73DD941AD972
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSampleStatics2>{ 0x9EFE9521,0x6D46,0x494C,{ 0xA2,0xF8,0xD6,0x62,0x92,0x2E,0x2D,0xD7 } }; // 9EFE9521-6D46-494C-A2F8-D662922E2DD7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSource>{ 0x3712D543,0x45EB,0x4138,{ 0xAA,0x62,0xC0,0x1E,0x26,0xF3,0x84,0x3F } }; // 3712D543-45EB-4138-AA62-C01E26F3843F
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSource2>{ 0xEC55D0AD,0x2E6A,0x4F74,{ 0xAD,0xBB,0xB5,0x62,0xD1,0x53,0x38,0x49 } }; // EC55D0AD-2E6A-4F74-ADBB-B562D1533849
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSource3>{ 0x6A2A2746,0x3DDD,0x4DDF,{ 0xA1,0x21,0x94,0x04,0x5E,0xCF,0x94,0x40 } }; // 6A2A2746-3DDD-4DDF-A121-94045ECF9440
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSource4>{ 0x1D0CFCAB,0x830D,0x417C,{ 0xA3,0xA9,0x24,0x54,0xFD,0x64,0x15,0xC7 } }; // 1D0CFCAB-830D-417C-A3A9-2454FD6415C7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ 0xCD8C7EB2,0x4816,0x4E24,{ 0x88,0xF0,0x49,0x1E,0xF7,0x38,0x64,0x06 } }; // CD8C7EB2-4816-4E24-88F0-491EF7386406
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest>{ 0x907C00E9,0x18A3,0x4951,{ 0x88,0x7A,0x2C,0x1E,0xEB,0xD5,0xC6,0x9E } }; // 907C00E9-18A3-4951-887A-2C1EEBD5C69E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceFactory>{ 0xEF77E0D9,0xD158,0x4B7A,{ 0x86,0x3F,0x20,0x33,0x42,0xFB,0xFD,0x41 } }; // EF77E0D9-D158-4B7A-863F-203342FBFD41
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ 0x9D697B05,0xD4F2,0x4C7A,{ 0x9D,0xFE,0x8D,0x6C,0xD0,0xB3,0xEE,0x84 } }; // 9D697B05-D4F2-4C7A-9DFE-8D6CD0B3EE84
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest>{ 0x4DB341A9,0x3501,0x4D9B,{ 0x83,0xF9,0x8F,0x23,0x5C,0x82,0x25,0x32 } }; // 4DB341A9-3501-4D9B-83F9-8F235C822532
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ 0x7895CC02,0xF982,0x43C8,{ 0x9D,0x16,0xC6,0x2D,0x99,0x93,0x19,0xBE } }; // 7895CC02-F982-43C8-9D16-C62D999319BE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ 0x10F9BB9E,0x71C5,0x492F,{ 0x84,0x7F,0x0D,0xA1,0xF3,0x5E,0x81,0xF8 } }; // 10F9BB9E-71C5-492F-847F-0DA1F35E81F8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ 0xF41468F2,0xC274,0x4940,{ 0xA5,0xBB,0x28,0xA5,0x72,0x45,0x2F,0xA7 } }; // F41468F2-C274-4940-A5BB-28A572452FA7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest>{ 0x2A9093E4,0x35C4,0x4B1B,{ 0xA7,0x91,0x0D,0x99,0xDB,0x56,0xDD,0x1D } }; // 2A9093E4-35C4-4B1B-A791-0D99DB56DD1D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ 0x3F1356A5,0x6340,0x4DC4,{ 0x99,0x10,0x06,0x8E,0xD9,0xF5,0x98,0xF8 } }; // 3F1356A5-6340-4DC4-9910-068ED9F598F8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ 0x41B8808E,0x38A9,0x4EC3,{ 0x9B,0xA0,0xB6,0x9B,0x85,0x50,0x1E,0x90 } }; // 41B8808E-38A9-4EC3-9BA0-B69B85501E90
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ 0xBEE3D835,0xA505,0x4F9A,{ 0xB9,0x43,0x2B,0x8C,0xB1,0xB4,0xBB,0xD9 } }; // BEE3D835-A505-4F9A-B943-2B8CB1B4BBD9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ 0x42202B72,0x6EA1,0x4677,{ 0x98,0x1E,0x35,0x0A,0x0D,0xA4,0x12,0xAA } }; // 42202B72-6EA1-4677-981E-350A0DA412AA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMediaTrack>{ 0x03E1FAFC,0xC931,0x491A,{ 0xB4,0x6B,0xC1,0x0E,0xE8,0xC2,0x56,0xB7 } }; // 03E1FAFC-C931-491A-B46B-C10EE8C256B7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMseSourceBuffer>{ 0x0C1AA3E3,0xDF8D,0x4079,{ 0xA3,0xFE,0x68,0x49,0x18,0x4B,0x4E,0x2F } }; // 0C1AA3E3-DF8D-4079-A3FE-6849184B4E2F
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMseSourceBufferList>{ 0x95FAE8E7,0xA8E7,0x4EBF,{ 0x89,0x27,0x14,0x5E,0x94,0x0B,0xA5,0x11 } }; // 95FAE8E7-A8E7-4EBF-8927-145E940BA511
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMseStreamSource>{ 0xB0B4198D,0x02F4,0x4923,{ 0x88,0xDD,0x81,0xBC,0x3F,0x36,0x0F,0xFA } }; // B0B4198D-02F4-4923-88DD-81BC3F360FFA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMseStreamSource2>{ 0x66F57D37,0xF9E7,0x418A,{ 0x9C,0xDE,0xA0,0x20,0xE9,0x56,0x55,0x2B } }; // 66F57D37-F9E7-418A-9CDE-A020E956552B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IMseStreamSourceStatics>{ 0x465C679D,0xD570,0x43CE,{ 0xBA,0x21,0x0B,0xFF,0x5F,0x3F,0xBD,0x0A } }; // 465C679D-D570-43CE-BA21-0BFF5F3FBD0A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISceneAnalysisEffect>{ 0xC04BA319,0xCA41,0x4813,{ 0xBF,0xFD,0x7B,0x08,0xB0,0xED,0x25,0x57 } }; // C04BA319-CA41-4813-BFFD-7B08B0ED2557
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame>{ 0xD8B10E4C,0x7FD9,0x42E1,{ 0x85,0xEB,0x65,0x72,0xC2,0x97,0xC9,0x87 } }; // D8B10E4C-7FD9-42E1-85EB-6572C297C987
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2>{ 0x2D4E29BE,0x061F,0x47AE,{ 0x99,0x15,0x02,0x52,0x4B,0x5F,0x9A,0x5F } }; // 2D4E29BE-061F-47AE-9915-02524B5F9A5F
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs>{ 0x146B9588,0x2851,0x45E4,{ 0xAD,0x55,0x44,0xCF,0x8D,0xF8,0xDB,0x4D } }; // 146B9588-2851-45E4-AD55-44CF8DF8DB4D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>{ 0x77206F1F,0xC34F,0x494F,{ 0x80,0x77,0x2B,0xAD,0x9F,0xF4,0xEC,0xF1 } }; // 77206F1F-C34F-494F-8077-2BAD9FF4ECF1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ISpeechCue>{ 0xAEE254DC,0x1725,0x4BAD,{ 0x80,0x43,0xA9,0x84,0x99,0xB0,0x17,0xA2 } }; // AEE254DC-1725-4BAD-8043-A98499B017A2
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor>{ 0x133336BF,0x296A,0x463E,{ 0x9F,0xF9,0x01,0xCD,0x25,0x69,0x14,0x08 } }; // 133336BF-296A-463E-9FF9-01CD25691408
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ 0xC027DE30,0x7362,0x4FF9,{ 0x98,0xB1,0x2D,0xFD,0x0B,0x8D,0x1C,0xAE } }; // C027DE30-7362-4FF9-98B1-2DFD0B8D1CAE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrack>{ 0x9E6AED9E,0xF67A,0x49A9,{ 0xB3,0x30,0xCF,0x03,0xB0,0xE9,0xCF,0x07 } }; // 9E6AED9E-F67A-49A9-B330-CF03B0E9CF07
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrack2>{ 0x21B4B648,0x9F9D,0x40BA,{ 0xA8,0xF3,0x1A,0x92,0x75,0x3A,0xEF,0x0B } }; // 21B4B648-9F9D-40BA-A8F3-1A92753AEF0B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrackError>{ 0xB3767915,0x4114,0x4819,{ 0xB9,0xD9,0xDD,0x76,0x08,0x9E,0x72,0xF8 } }; // B3767915-4114-4819-B9D9-DD76089E72F8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrackFactory>{ 0x8DD57611,0x97B3,0x4E1F,{ 0x85,0x2C,0x0F,0x48,0x2C,0x81,0xAD,0x26 } }; // 8DD57611-97B3-4E1F-852C-0F482C81AD26
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ 0xA57FC9D1,0x6789,0x4D4D,{ 0xB0,0x7F,0x84,0xB4,0xF3,0x1A,0xCB,0x70 } }; // A57FC9D1-6789-4D4D-B07F-84B4F31ACB70
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>{ 0x3B7F2024,0xF74E,0x4ADE,{ 0x93,0xC5,0x21,0x9D,0xA0,0x5B,0x68,0x56 } }; // 3B7F2024-F74E-4ADE-93C5-219DA05B6856
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextBouten>{ 0xD9062783,0x5597,0x5092,{ 0x82,0x0C,0x8F,0x73,0x8E,0x0F,0x77,0x4A } }; // D9062783-5597-5092-820C-8F738E0F774A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextCue>{ 0x51C79E51,0x3B86,0x494D,{ 0xB3,0x59,0xBB,0x2E,0xA7,0xAC,0xA9,0xA9 } }; // 51C79E51-3B86-494D-B359-BB2EA7ACA9A9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextLine>{ 0x978D7CE2,0x7308,0x4C66,{ 0xBE,0x50,0x65,0x77,0x72,0x89,0xF5,0xDF } }; // 978D7CE2-7308-4C66-BE50-65777289F5DF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextRegion>{ 0x1ED0881F,0x8A06,0x4222,{ 0x9F,0x59,0xB2,0x1B,0xF4,0x01,0x24,0xB4 } }; // 1ED0881F-8A06-4222-9F59-B21BF40124B4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextRuby>{ 0x10335C29,0x5B3C,0x5693,{ 0x99,0x59,0xD0,0x5A,0x0B,0xD2,0x46,0x28 } }; // 10335C29-5B3C-5693-9959-D05A0BD24628
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextSource>{ 0xC4ED9BA6,0x101F,0x404D,{ 0xA9,0x49,0x82,0xF3,0x3F,0xCD,0x93,0xB7 } }; // C4ED9BA6-101F-404D-A949-82F33FCD93B7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ 0x48907C9C,0xDCD8,0x4C33,{ 0x9A,0xD3,0x6C,0xDC,0xE7,0xB1,0xC5,0x66 } }; // 48907C9C-DCD8-4C33-9AD3-6CDCE7B1C566
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextSourceStatics>{ 0x7E311853,0x9ABA,0x4AC4,{ 0xBB,0x98,0x2F,0xB1,0x76,0xC3,0xBF,0xDD } }; // 7E311853-9ABA-4AC4-BB98-2FB176C3BFDD
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextSourceStatics2>{ 0xB66B7602,0x923E,0x43FA,{ 0x96,0x33,0x58,0x70,0x75,0x81,0x2D,0xB5 } }; // B66B7602-923E-43FA-9633-587075812DB5
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextStyle>{ 0x1BB2384D,0xA825,0x40C2,{ 0xA7,0xF5,0x28,0x1E,0xAE,0xDF,0x3B,0x55 } }; // 1BB2384D-A825-40C2-A7F5-281EAEDF3B55
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextStyle2>{ 0x655F492D,0x6111,0x4787,{ 0x89,0xCC,0x68,0x6F,0xEC,0xE5,0x7E,0x14 } }; // 655F492D-6111-4787-89CC-686FECE57E14
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextStyle3>{ 0xF803F93B,0x3E99,0x595E,{ 0xBB,0xB7,0x78,0xA2,0xFA,0x13,0xC2,0x70 } }; // F803F93B-3E99-595E-BBB7-78A2FA13C270
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::ITimedTextSubformat>{ 0xD713502F,0x3261,0x4722,{ 0xA0,0xC2,0xB9,0x37,0xB2,0x39,0x0F,0x14 } }; // D713502F-3261-4722-A0C2-B937B2390F14
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoStabilizationEffect>{ 0x0808A650,0x9698,0x4E57,{ 0x87,0x7B,0xBD,0x7C,0xB2,0xEE,0x0F,0x8A } }; // 0808A650-9698-4E57-877B-BD7CB2EE0F8A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ 0x187EFF28,0x67BB,0x4713,{ 0xB9,0x00,0x41,0x68,0xDA,0x16,0x45,0x29 } }; // 187EFF28-67BB-4713-B900-4168DA164529
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoStreamDescriptor>{ 0x12EE0D55,0x9C2B,0x4440,{ 0x80,0x57,0x2C,0x7A,0x90,0xF0,0xCB,0xEC } }; // 12EE0D55-9C2B-4440-8057-2C7A90F0CBEC
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoStreamDescriptor2>{ 0x8B306E10,0x453E,0x4088,{ 0x83,0x2D,0xC3,0x6F,0xA4,0xF9,0x4A,0xF3 } }; // 8B306E10-453E-4088-832D-C36FA4F94AF3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory>{ 0x494EF6D1,0xBB75,0x43D2,{ 0x9E,0x5E,0x7B,0x79,0xA3,0xAF,0xCE,0xD4 } }; // 494EF6D1-BB75-43D2-9E5E-7B79A3AFCED4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoTrack>{ 0x99F3B7F3,0xE298,0x4396,{ 0xBB,0x6A,0xA5,0x1B,0xE6,0xA2,0xA2,0x0A } }; // 99F3B7F3-E298-4396-BB6A-A51BE6A2A20A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ 0x7679E231,0x04F9,0x4C82,{ 0xA4,0xEE,0x86,0x02,0xC8,0xBB,0x47,0x54 } }; // 7679E231-04F9-4C82-A4EE-8602C8BB4754
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Core::IVideoTrackSupportInfo>{ 0x4BB534A0,0xFC5F,0x450D,{ 0x8F,0xF0,0x77,0x8D,0x59,0x04,0x86,0xDE } }; // 4BB534A0-FC5F-450D-8FF0-778D590486DE
    template <> struct default_interface<winrt::Windows::Media::Core::AudioStreamDescriptor>{ using type = winrt::Windows::Media::Core::IAudioStreamDescriptor; };
    template <> struct default_interface<winrt::Windows::Media::Core::AudioTrack>{ using type = winrt::Windows::Media::Core::IMediaTrack; };
    template <> struct default_interface<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::AudioTrackSupportInfo>{ using type = winrt::Windows::Media::Core::IAudioTrackSupportInfo; };
    template <> struct default_interface<winrt::Windows::Media::Core::ChapterCue>{ using type = winrt::Windows::Media::Core::IChapterCue; };
    template <> struct default_interface<winrt::Windows::Media::Core::CodecInfo>{ using type = winrt::Windows::Media::Core::ICodecInfo; };
    template <> struct default_interface<winrt::Windows::Media::Core::CodecQuery>{ using type = winrt::Windows::Media::Core::ICodecQuery; };
    template <> struct default_interface<winrt::Windows::Media::Core::DataCue>{ using type = winrt::Windows::Media::Core::IDataCue; };
    template <> struct default_interface<winrt::Windows::Media::Core::FaceDetectedEventArgs>{ using type = winrt::Windows::Media::Core::IFaceDetectedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::FaceDetectionEffect>{ using type = winrt::Windows::Media::Core::IFaceDetectionEffect; };
    template <> struct default_interface<winrt::Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = winrt::Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<winrt::Windows::Media::Core::FaceDetectionEffectFrame>{ using type = winrt::Windows::Media::Core::IFaceDetectionEffectFrame; };
    template <> struct default_interface<winrt::Windows::Media::Core::HighDynamicRangeControl>{ using type = winrt::Windows::Media::Core::IHighDynamicRangeControl; };
    template <> struct default_interface<winrt::Windows::Media::Core::HighDynamicRangeOutput>{ using type = winrt::Windows::Media::Core::IHighDynamicRangeOutput; };
    template <> struct default_interface<winrt::Windows::Media::Core::ImageCue>{ using type = winrt::Windows::Media::Core::IImageCue; };
    template <> struct default_interface<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::LowLightFusionResult>{ using type = winrt::Windows::Media::Core::ILowLightFusionResult; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaBinder>{ using type = winrt::Windows::Media::Core::IMediaBinder; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaBindingEventArgs>{ using type = winrt::Windows::Media::Core::IMediaBindingEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaCueEventArgs>{ using type = winrt::Windows::Media::Core::IMediaCueEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaSource>{ using type = winrt::Windows::Media::Core::IMediaSource2; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = winrt::Windows::Media::Core::IMediaSourceAppServiceConnection; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaSourceError>{ using type = winrt::Windows::Media::Core::IMediaSourceError; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSample>{ using type = winrt::Windows::Media::Core::IMediaStreamSample; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = winrt::Windows::Foundation::Collections::IMap<winrt::guid, winrt::Windows::Foundation::IInspectable>; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSource>{ using type = winrt::Windows::Media::Core::IMediaStreamSource; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral; };
    template <> struct default_interface<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::MseSourceBuffer>{ using type = winrt::Windows::Media::Core::IMseSourceBuffer; };
    template <> struct default_interface<winrt::Windows::Media::Core::MseSourceBufferList>{ using type = winrt::Windows::Media::Core::IMseSourceBufferList; };
    template <> struct default_interface<winrt::Windows::Media::Core::MseStreamSource>{ using type = winrt::Windows::Media::Core::IMseStreamSource; };
    template <> struct default_interface<winrt::Windows::Media::Core::SceneAnalysisEffect>{ using type = winrt::Windows::Media::Core::ISceneAnalysisEffect; };
    template <> struct default_interface<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = winrt::Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<winrt::Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = winrt::Windows::Media::Core::ISceneAnalysisEffectFrame; };
    template <> struct default_interface<winrt::Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = winrt::Windows::Media::Core::ISceneAnalyzedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::SpeechCue>{ using type = winrt::Windows::Media::Core::ISpeechCue; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = winrt::Windows::Media::Core::IMediaStreamDescriptor; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedMetadataTrack>{ using type = winrt::Windows::Media::Core::ITimedMetadataTrack; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedMetadataTrackError>{ using type = winrt::Windows::Media::Core::ITimedMetadataTrackError; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextBouten>{ using type = winrt::Windows::Media::Core::ITimedTextBouten; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextCue>{ using type = winrt::Windows::Media::Core::ITimedTextCue; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextLine>{ using type = winrt::Windows::Media::Core::ITimedTextLine; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextRegion>{ using type = winrt::Windows::Media::Core::ITimedTextRegion; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextRuby>{ using type = winrt::Windows::Media::Core::ITimedTextRuby; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextSource>{ using type = winrt::Windows::Media::Core::ITimedTextSource; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextStyle>{ using type = winrt::Windows::Media::Core::ITimedTextStyle; };
    template <> struct default_interface<winrt::Windows::Media::Core::TimedTextSubformat>{ using type = winrt::Windows::Media::Core::ITimedTextSubformat; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoStabilizationEffect>{ using type = winrt::Windows::Media::Core::IVideoStabilizationEffect; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = winrt::Windows::Media::Effects::IVideoEffectDefinition; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoStreamDescriptor>{ using type = winrt::Windows::Media::Core::IVideoStreamDescriptor; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoTrack>{ using type = winrt::Windows::Media::Core::IMediaTrack; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Core::VideoTrackSupportInfo>{ using type = winrt::Windows::Media::Core::IVideoTrackSupportInfo; };
    template <> struct abi<winrt::Windows::Media::Core::IAudioStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_LeadingEncoderPadding(void*) noexcept = 0;
            virtual int32_t __stdcall get_LeadingEncoderPadding(void**) noexcept = 0;
            virtual int32_t __stdcall put_TrailingEncoderPadding(void*) noexcept = 0;
            virtual int32_t __stdcall get_TrailingEncoderPadding(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioStreamDescriptor3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IAudioTrackSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecoderStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Degradation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DegradationReason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSourceStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IChapterCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ICodecInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Subtypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTrusted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ICodecQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(int32_t, int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ICodecSubtypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFormatDV25(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDV50(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvc(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvh1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvhD(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvsd(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatDvsl(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH263(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH264(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH265(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatH264ES(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatHevc(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatHevcES(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatM4S2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMjpg(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP43(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP4S(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMP4V(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMpeg2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatVP80(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatVP90(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMpg1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMss1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatMss2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv2(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWmv3(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormatWvc1(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormat420O(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAdts(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAlac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrNB(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrWB(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatAmrWP(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyAC3(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyAC3Spdif(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDolbyDDPlus(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDrm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatDts(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatFlac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatFloat(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMP3(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMPeg(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatMsp1(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatOpus(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatPcm(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWmaSpdif(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioLossless(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioV8(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioFormatWMAudioV9(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IDataCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IDataCue2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IFaceDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IFaceDetectionEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDetectionInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredDetectionInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_FaceDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FaceDetected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DetectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DetectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SynchronousDetectionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SynchronousDetectionEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IFaceDetectionEffectFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DetectedFaces(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IHighDynamicRangeControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IHighDynamicRangeOutput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certainty(double*) noexcept = 0;
            virtual int32_t __stdcall get_FrameControllers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IImageCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint*) noexcept = 0;
            virtual int32_t __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint) noexcept = 0;
            virtual int32_t __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize*) noexcept = 0;
            virtual int32_t __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize) noexcept = 0;
            virtual int32_t __stdcall put_SoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
            virtual int32_t __stdcall get_RandomAccessStream(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ILowLightFusionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Frame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ILowLightFusionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedBitmapPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxSupportedFrameCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall FuseAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaBinder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Binding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Binding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Token(void**) noexcept = 0;
            virtual int32_t __stdcall put_Token(void*) noexcept = 0;
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaBindingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Canceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Canceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_MediaBinder(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetUri(void*) noexcept = 0;
            virtual int32_t __stdcall SetStream(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetStreamReference(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaBindingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAdaptiveMediaSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetStorageFile(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaBindingEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDownloadOperation(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_StartTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Id(void*) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaCueEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cue(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenOperationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenOperationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_CustomProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExternalTimedTextSources(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExternalTimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSource4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AdaptiveMediaSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_MseStreamSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall OpenAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSource5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DownloadOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_InitializeMediaStreamSourceRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InitializeMediaStreamSourceRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromAdaptiveMediaSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMediaStreamSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromMseStreamSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIMediaSource(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStorageFile(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStream(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamReference(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromMediaBinder(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromMediaFrameSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaSourceStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDownloadOperation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Language(void*) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSample>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Processed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Processed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Buffer(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Protection(void**) noexcept = 0;
            virtual int32_t __stdcall put_DecodeTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DecodeTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyFrame(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyFrame(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Discontinuous(bool) noexcept = 0;
            virtual int32_t __stdcall get_Discontinuous(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSample2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direct3D11Surface(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetKeyIdentifier(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetKeyIdentifier(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetInitializationVector(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetInitializationVector(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetSubSampleMapping(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetSubSampleMapping(uint32_t*, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSampleStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBuffer(void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamAsync(void*, uint32_t, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSampleStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDirect3D11Surface(void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Starting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Starting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Paused(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Paused(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SampleRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SampleRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SwitchStreamsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SwitchStreamsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyError(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddStreamDescriptor(void*) noexcept = 0;
            virtual int32_t __stdcall put_MediaProtectionManager(void*) noexcept = 0;
            virtual int32_t __stdcall get_MediaProtectionManager(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_CanSeek(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanSeek(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BufferTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_BufferTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetBufferedRange(int64_t, int64_t) noexcept = 0;
            virtual int32_t __stdcall get_MusicProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbnail(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbnail(void**) noexcept = 0;
            virtual int32_t __stdcall AddProtectionKey(void*, uint32_t, uint8_t*, uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SampleRendered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SampleRendered(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSource3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MaxSupportedPlaybackRate(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSupportedPlaybackRate(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSource4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_IsLive(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsLive(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDescriptor(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDescriptors(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SampleLag(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall put_Sample(void*) noexcept = 0;
            virtual int32_t __stdcall get_Sample(void**) noexcept = 0;
            virtual int32_t __stdcall ReportSampleProgress(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPosition(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall SetActualStartPosition(int64_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldStreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStreamDescriptor(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMediaTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrackKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMseSourceBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UpdateStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Updated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Updated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_UpdateEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UpdateEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ErrorOccurred(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ErrorOccurred(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Aborted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Aborted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsUpdating(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Buffered(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimestampOffset(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimestampOffset(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AppendWindowStart(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_AppendWindowStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AppendWindowEnd(void**) noexcept = 0;
            virtual int32_t __stdcall put_AppendWindowEnd(void*) noexcept = 0;
            virtual int32_t __stdcall AppendBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall AppendStream(void*) noexcept = 0;
            virtual int32_t __stdcall AppendStreamMaxSize(void*, uint64_t) noexcept = 0;
            virtual int32_t __stdcall Abort() noexcept = 0;
            virtual int32_t __stdcall Remove(int64_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMseSourceBufferList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SourceBufferAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceBufferAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SourceBufferRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SourceBufferRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Buffers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMseStreamSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Ended(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Ended(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SourceBuffers(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveSourceBuffers(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReadyState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Duration(void*) noexcept = 0;
            virtual int32_t __stdcall AddSourceBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveSourceBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall EndOfStream(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMseStreamSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LiveSeekableRange(void**) noexcept = 0;
            virtual int32_t __stdcall put_LiveSeekableRange(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IMseStreamSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsContentTypeSupported(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISceneAnalysisEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighDynamicRangeAnalyzer(void**) noexcept = 0;
            virtual int32_t __stdcall put_DesiredAnalysisInterval(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredAnalysisInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_SceneAnalyzed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SceneAnalyzed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameControlValues(void**) noexcept = 0;
            virtual int32_t __stdcall get_HighDynamicRange(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnalysisRecommendation(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ResultFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SelectedIndexChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectedIndexChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ISpeechCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartPositionInInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartPositionInInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_EndPositionInInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_EndPositionInInput(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CueEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CueEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CueExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CueExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TrackFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TrackFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Cues(void**) noexcept = 0;
            virtual int32_t __stdcall get_ActiveCues(void**) noexcept = 0;
            virtual int32_t __stdcall get_TimedMetadataKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DispatchType(void**) noexcept = 0;
            virtual int32_t __stdcall AddCue(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveCue(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrack2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrackError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrackFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextBouten>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Type(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Position(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextCue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CueRegion(void**) noexcept = 0;
            virtual int32_t __stdcall put_CueRegion(void*) noexcept = 0;
            virtual int32_t __stdcall get_CueStyle(void**) noexcept = 0;
            virtual int32_t __stdcall put_CueStyle(void*) noexcept = 0;
            virtual int32_t __stdcall get_Lines(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextLine>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subformats(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint*) noexcept = 0;
            virtual int32_t __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint) noexcept = 0;
            virtual int32_t __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize*) noexcept = 0;
            virtual int32_t __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize) noexcept = 0;
            virtual int32_t __stdcall get_Background(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Background(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_WritingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WritingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DisplayAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DisplayAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_IsOverflowClipped(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOverflowClipped(bool) noexcept = 0;
            virtual int32_t __stdcall get_Padding(struct struct_Windows_Media_Core_TimedTextPadding*) noexcept = 0;
            virtual int32_t __stdcall put_Padding(struct struct_Windows_Media_Core_TimedTextPadding) noexcept = 0;
            virtual int32_t __stdcall get_TextWrapping(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TextWrapping(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScrollMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScrollMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextRuby>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
            virtual int32_t __stdcall get_Position(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Position(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Align(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Align(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Reserve(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Reserve(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Resolved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Resolved(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromStream(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamWithLanguage(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithLanguage(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromStreamWithIndex(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithIndex(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamWithIndexAndLanguage(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromUriWithIndexAndLanguage(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextStyle>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontFamily(void**) noexcept = 0;
            virtual int32_t __stdcall put_FontFamily(void*) noexcept = 0;
            virtual int32_t __stdcall get_FontSize(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_FontSize(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_FontWeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontWeight(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Foreground(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Foreground(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Background(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Background(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_IsBackgroundAlwaysShown(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsBackgroundAlwaysShown(bool) noexcept = 0;
            virtual int32_t __stdcall get_FlowDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FlowDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LineAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LineAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OutlineColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
            virtual int32_t __stdcall get_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextStyle2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FontStyle(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FontStyle(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsUnderlineEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsUnderlineEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsLineThroughEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLineThroughEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOverlineEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOverlineEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextStyle3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ruby(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bouten(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTextCombined(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTextCombined(bool) noexcept = 0;
            virtual int32_t __stdcall get_FontAngleInDegrees(double*) noexcept = 0;
            virtual int32_t __stdcall put_FontAngleInDegrees(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::ITimedTextSubformat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_StartIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Length(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Length(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SubformatStyle(void**) noexcept = 0;
            virtual int32_t __stdcall put_SubformatStyle(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoStabilizationEffect>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_EnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetRecommendedStreamConfiguration(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoStreamDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoStreamDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoTrack>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_OpenFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OpenFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaybackItem(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Core::IVideoTrackSupportInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecoderStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaSourceStatus(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor
    {
        [[nodiscard]] auto EncodingProperties() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor2
    {
        auto LeadingEncoderPadding(winrt::Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto LeadingEncoderPadding() const;
        auto TrailingEncoderPadding(winrt::Windows::Foundation::IReference<uint32_t> const& value) const;
        [[nodiscard]] auto TrailingEncoderPadding() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptor3
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioStreamDescriptor3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioStreamDescriptorFactory
    {
        auto Create(winrt::Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrack
    {
        auto OpenFailed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::AudioTrack, winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
        using OpenFailed_revoker = impl::event_revoker<winrt::Windows::Media::Core::IAudioTrack, &impl::abi_t<winrt::Windows::Media::Core::IAudioTrack>::remove_OpenFailed>;
        [[nodiscard]] OpenFailed_revoker OpenFailed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::AudioTrack, winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
        auto OpenFailed(winrt::event_token const& token) const noexcept;
        auto GetEncodingProperties() const;
        [[nodiscard]] auto PlaybackItem() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto SupportInfo() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IAudioTrackSupportInfo
    {
        [[nodiscard]] auto DecoderStatus() const;
        [[nodiscard]] auto Degradation() const;
        [[nodiscard]] auto DegradationReason() const;
        [[nodiscard]] auto MediaSourceStatus() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IAudioTrackSupportInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_IAudioTrackSupportInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IChapterCue
    {
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Title() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IChapterCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IChapterCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecInfo
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto Subtypes() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto IsTrusted() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ICodecInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecQuery
    {
        auto FindAllAsync(winrt::Windows::Media::Core::CodecKind const& kind, winrt::Windows::Media::Core::CodecCategory const& category, param::hstring const& subType) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ICodecQuery>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ICodecSubtypesStatics
    {
        [[nodiscard]] auto VideoFormatDV25() const;
        [[nodiscard]] auto VideoFormatDV50() const;
        [[nodiscard]] auto VideoFormatDvc() const;
        [[nodiscard]] auto VideoFormatDvh1() const;
        [[nodiscard]] auto VideoFormatDvhD() const;
        [[nodiscard]] auto VideoFormatDvsd() const;
        [[nodiscard]] auto VideoFormatDvsl() const;
        [[nodiscard]] auto VideoFormatH263() const;
        [[nodiscard]] auto VideoFormatH264() const;
        [[nodiscard]] auto VideoFormatH265() const;
        [[nodiscard]] auto VideoFormatH264ES() const;
        [[nodiscard]] auto VideoFormatHevc() const;
        [[nodiscard]] auto VideoFormatHevcES() const;
        [[nodiscard]] auto VideoFormatM4S2() const;
        [[nodiscard]] auto VideoFormatMjpg() const;
        [[nodiscard]] auto VideoFormatMP43() const;
        [[nodiscard]] auto VideoFormatMP4S() const;
        [[nodiscard]] auto VideoFormatMP4V() const;
        [[nodiscard]] auto VideoFormatMpeg2() const;
        [[nodiscard]] auto VideoFormatVP80() const;
        [[nodiscard]] auto VideoFormatVP90() const;
        [[nodiscard]] auto VideoFormatMpg1() const;
        [[nodiscard]] auto VideoFormatMss1() const;
        [[nodiscard]] auto VideoFormatMss2() const;
        [[nodiscard]] auto VideoFormatWmv1() const;
        [[nodiscard]] auto VideoFormatWmv2() const;
        [[nodiscard]] auto VideoFormatWmv3() const;
        [[nodiscard]] auto VideoFormatWvc1() const;
        [[nodiscard]] auto VideoFormat420O() const;
        [[nodiscard]] auto AudioFormatAac() const;
        [[nodiscard]] auto AudioFormatAdts() const;
        [[nodiscard]] auto AudioFormatAlac() const;
        [[nodiscard]] auto AudioFormatAmrNB() const;
        [[nodiscard]] auto AudioFormatAmrWB() const;
        [[nodiscard]] auto AudioFormatAmrWP() const;
        [[nodiscard]] auto AudioFormatDolbyAC3() const;
        [[nodiscard]] auto AudioFormatDolbyAC3Spdif() const;
        [[nodiscard]] auto AudioFormatDolbyDDPlus() const;
        [[nodiscard]] auto AudioFormatDrm() const;
        [[nodiscard]] auto AudioFormatDts() const;
        [[nodiscard]] auto AudioFormatFlac() const;
        [[nodiscard]] auto AudioFormatFloat() const;
        [[nodiscard]] auto AudioFormatMP3() const;
        [[nodiscard]] auto AudioFormatMPeg() const;
        [[nodiscard]] auto AudioFormatMsp1() const;
        [[nodiscard]] auto AudioFormatOpus() const;
        [[nodiscard]] auto AudioFormatPcm() const;
        [[nodiscard]] auto AudioFormatWmaSpdif() const;
        [[nodiscard]] auto AudioFormatWMAudioLossless() const;
        [[nodiscard]] auto AudioFormatWMAudioV8() const;
        [[nodiscard]] auto AudioFormatWMAudioV9() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ICodecSubtypesStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ICodecSubtypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IDataCue
    {
        auto Data(winrt::Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto Data() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IDataCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IDataCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IDataCue2
    {
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IDataCue2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IDataCue2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectedEventArgs
    {
        [[nodiscard]] auto ResultFrame() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IFaceDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffect
    {
        auto Enabled(bool value) const;
        [[nodiscard]] auto Enabled() const;
        auto DesiredDetectionInterval(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto DesiredDetectionInterval() const;
        auto FaceDetected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::FaceDetectionEffect, winrt::Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
        using FaceDetected_revoker = impl::event_revoker<winrt::Windows::Media::Core::IFaceDetectionEffect, &impl::abi_t<winrt::Windows::Media::Core::IFaceDetectionEffect>::remove_FaceDetected>;
        [[nodiscard]] FaceDetected_revoker FaceDetected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::FaceDetectionEffect, winrt::Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
        auto FaceDetected(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Core::IFaceDetectionEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffectDefinition
    {
        auto DetectionMode(winrt::Windows::Media::Core::FaceDetectionMode const& value) const;
        [[nodiscard]] auto DetectionMode() const;
        auto SynchronousDetectionEnabled(bool value) const;
        [[nodiscard]] auto SynchronousDetectionEnabled() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IFaceDetectionEffectFrame
    {
        [[nodiscard]] auto DetectedFaces() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IFaceDetectionEffectFrame>
    {
        template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IHighDynamicRangeControl
    {
        auto Enabled(bool value) const;
        [[nodiscard]] auto Enabled() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IHighDynamicRangeControl>
    {
        template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeControl<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IHighDynamicRangeOutput
    {
        [[nodiscard]] auto Certainty() const;
        [[nodiscard]] auto FrameControllers() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IHighDynamicRangeOutput>
    {
        template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeOutput<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IImageCue
    {
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Media::Core::TimedTextPoint const& value) const;
        [[nodiscard]] auto Extent() const;
        auto Extent(winrt::Windows::Media::Core::TimedTextSize const& value) const;
        auto SoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& value) const;
        [[nodiscard]] auto SoftwareBitmap() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IImageCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IImageCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs
    {
        [[nodiscard]] auto Source() const;
        [[nodiscard]] auto RandomAccessStream() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ILowLightFusionResult
    {
        [[nodiscard]] auto Frame() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ILowLightFusionResult>
    {
        template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ILowLightFusionStatics
    {
        [[nodiscard]] auto SupportedBitmapPixelFormats() const;
        [[nodiscard]] auto MaxSupportedFrameCount() const;
        auto FuseAsync(param::async_iterable<winrt::Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ILowLightFusionStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBinder
    {
        auto Binding(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaBinder, winrt::Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
        using Binding_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaBinder, &impl::abi_t<winrt::Windows::Media::Core::IMediaBinder>::remove_Binding>;
        [[nodiscard]] Binding_revoker Binding(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaBinder, winrt::Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
        auto Binding(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Token() const;
        auto Token(param::hstring const& value) const;
        [[nodiscard]] auto Source() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaBinder>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBinder<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs
    {
        auto Canceled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaBindingEventArgs, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Canceled_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaBindingEventArgs, &impl::abi_t<winrt::Windows::Media::Core::IMediaBindingEventArgs>::remove_Canceled>;
        [[nodiscard]] Canceled_revoker Canceled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaBindingEventArgs, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Canceled(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto MediaBinder() const;
        auto GetDeferral() const;
        auto SetUri(winrt::Windows::Foundation::Uri const& uri) const;
        auto SetStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
        auto SetStreamReference(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaBindingEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs2
    {
        auto SetAdaptiveMediaSource(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
        auto SetStorageFile(winrt::Windows::Storage::IStorageFile const& file) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaBindingEventArgs2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaBindingEventArgs3
    {
        auto SetDownloadOperation(winrt::Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaBindingEventArgs3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaCue
    {
        auto StartTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto StartTime() const;
        auto Duration(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Duration() const;
        auto Id(param::hstring const& value) const;
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaCueEventArgs
    {
        [[nodiscard]] auto Cue() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaCueEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaCueEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource
    {
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource2
    {
        auto OpenOperationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSource, winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
        using OpenOperationCompleted_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaSource2, &impl::abi_t<winrt::Windows::Media::Core::IMediaSource2>::remove_OpenOperationCompleted>;
        [[nodiscard]] OpenOperationCompleted_revoker OpenOperationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSource, winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
        auto OpenOperationCompleted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto CustomProperties() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto IsOpen() const;
        [[nodiscard]] auto ExternalTimedTextSources() const;
        [[nodiscard]] auto ExternalTimedMetadataTracks() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource3
    {
        auto StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSource, winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaSource3, &impl::abi_t<winrt::Windows::Media::Core::IMediaSource3>::remove_StateChanged>;
        [[nodiscard]] StateChanged_revoker StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSource, winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto State() const;
        auto Reset() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSource3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource4
    {
        [[nodiscard]] auto AdaptiveMediaSource() const;
        [[nodiscard]] auto MediaStreamSource() const;
        [[nodiscard]] auto MseStreamSource() const;
        [[nodiscard]] auto Uri() const;
        auto OpenAsync() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSource4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSource5
    {
        [[nodiscard]] auto DownloadOperation() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSource5>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSource5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceAppServiceConnection
    {
        auto InitializeMediaStreamSourceRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSourceAppServiceConnection, winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
        using InitializeMediaStreamSourceRequested_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection, &impl::abi_t<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection>::remove_InitializeMediaStreamSourceRequested>;
        [[nodiscard]] InitializeMediaStreamSourceRequested_revoker InitializeMediaStreamSourceRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaSourceAppServiceConnection, winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
        auto InitializeMediaStreamSourceRequested(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory
    {
        auto Create(winrt::Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceError
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceError>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceError<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs
    {
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs
    {
        [[nodiscard]] auto OldState() const;
        [[nodiscard]] auto NewState() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics
    {
        auto CreateFromAdaptiveMediaSource(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
        auto CreateFromMediaStreamSource(winrt::Windows::Media::Core::MediaStreamSource const& mediaSource) const;
        auto CreateFromMseStreamSource(winrt::Windows::Media::Core::MseStreamSource const& mediaSource) const;
        auto CreateFromIMediaSource(winrt::Windows::Media::Core::IMediaSource const& mediaSource) const;
        auto CreateFromStorageFile(winrt::Windows::Storage::IStorageFile const& file) const;
        auto CreateFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
        auto CreateFromStreamReference(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
        auto CreateFromUri(winrt::Windows::Foundation::Uri const& uri) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics2
    {
        auto CreateFromMediaBinder(winrt::Windows::Media::Core::MediaBinder const& binder) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics3
    {
        auto CreateFromMediaFrameSource(winrt::Windows::Media::Capture::Frames::MediaFrameSource const& frameSource) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceStatics3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaSourceStatics4
    {
        auto CreateFromDownloadOperation(winrt::Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaSourceStatics4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamDescriptor
    {
        [[nodiscard]] auto IsSelected() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Name() const;
        auto Language(param::hstring const& value) const;
        [[nodiscard]] auto Language() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamDescriptor2
    {
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto Label() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSample
    {
        auto Processed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSample, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Processed_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSample, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSample>::remove_Processed>;
        [[nodiscard]] Processed_revoker Processed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSample, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Processed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Buffer() const;
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto ExtendedProperties() const;
        [[nodiscard]] auto Protection() const;
        auto DecodeTimestamp(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto DecodeTimestamp() const;
        auto Duration(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Duration() const;
        auto KeyFrame(bool value) const;
        [[nodiscard]] auto KeyFrame() const;
        auto Discontinuous(bool value) const;
        [[nodiscard]] auto Discontinuous() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSample>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSample2
    {
        [[nodiscard]] auto Direct3D11Surface() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSample2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties
    {
        auto SetKeyIdentifier(array_view<uint8_t const> value) const;
        auto GetKeyIdentifier(com_array<uint8_t>& value) const;
        auto SetInitializationVector(array_view<uint8_t const> value) const;
        auto GetInitializationVector(com_array<uint8_t>& value) const;
        auto SetSubSampleMapping(array_view<uint8_t const> value) const;
        auto GetSubSampleMapping(com_array<uint8_t>& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleStatics
    {
        auto CreateFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Foundation::TimeSpan const& timestamp) const;
        auto CreateFromStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& stream, uint32_t count, winrt::Windows::Foundation::TimeSpan const& timestamp) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSampleStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSampleStatics2
    {
        auto CreateFromDirect3D11Surface(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, winrt::Windows::Foundation::TimeSpan const& timestamp) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSampleStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource
    {
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        auto Starting(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
        using Starting_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource>::remove_Starting>;
        [[nodiscard]] Starting_revoker Starting(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
        auto Starting(winrt::event_token const& token) const noexcept;
        auto Paused(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Paused_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource>::remove_Paused>;
        [[nodiscard]] Paused_revoker Paused(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Paused(winrt::event_token const& token) const noexcept;
        auto SampleRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
        using SampleRequested_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource>::remove_SampleRequested>;
        [[nodiscard]] SampleRequested_revoker SampleRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
        auto SampleRequested(winrt::event_token const& token) const noexcept;
        auto SwitchStreamsRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
        using SwitchStreamsRequested_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource>::remove_SwitchStreamsRequested>;
        [[nodiscard]] SwitchStreamsRequested_revoker SwitchStreamsRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
        auto SwitchStreamsRequested(winrt::event_token const& token) const noexcept;
        auto NotifyError(winrt::Windows::Media::Core::MediaStreamSourceErrorStatus const& errorStatus) const;
        auto AddStreamDescriptor(winrt::Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
        auto MediaProtectionManager(winrt::Windows::Media::Protection::MediaProtectionManager const& value) const;
        [[nodiscard]] auto MediaProtectionManager() const;
        auto Duration(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto Duration() const;
        auto CanSeek(bool value) const;
        [[nodiscard]] auto CanSeek() const;
        auto BufferTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto BufferTime() const;
        auto SetBufferedRange(winrt::Windows::Foundation::TimeSpan const& startOffset, winrt::Windows::Foundation::TimeSpan const& endOffset) const;
        [[nodiscard]] auto MusicProperties() const;
        [[nodiscard]] auto VideoProperties() const;
        auto Thumbnail(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] auto Thumbnail() const;
        auto AddProtectionKey(winrt::Windows::Media::Core::IMediaStreamDescriptor const& streamDescriptor, array_view<uint8_t const> keyIdentifier, array_view<uint8_t const> licenseData) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource2
    {
        auto SampleRendered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
        using SampleRendered_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMediaStreamSource2, &impl::abi_t<winrt::Windows::Media::Core::IMediaStreamSource2>::remove_SampleRendered>;
        [[nodiscard]] SampleRendered_revoker SampleRendered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MediaStreamSource, winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
        auto SampleRendered(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource3
    {
        auto MaxSupportedPlaybackRate(winrt::Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] auto MaxSupportedPlaybackRate() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSource3>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSource4
    {
        auto IsLive(bool value) const;
        [[nodiscard]] auto IsLive() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSource4>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceClosedRequest
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceFactory
    {
        auto CreateFromDescriptor(winrt::Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
        auto CreateFromDescriptors(winrt::Windows::Media::Core::IMediaStreamDescriptor const& descriptor, winrt::Windows::Media::Core::IMediaStreamDescriptor const& descriptor2) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs
    {
        [[nodiscard]] auto SampleLag() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequest
    {
        [[nodiscard]] auto StreamDescriptor() const;
        auto GetDeferral() const;
        auto Sample(winrt::Windows::Media::Core::MediaStreamSample const& value) const;
        [[nodiscard]] auto Sample() const;
        auto ReportSampleProgress(uint32_t progress) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequest
    {
        [[nodiscard]] auto StartPosition() const;
        auto GetDeferral() const;
        auto SetActualStartPosition(winrt::Windows::Foundation::TimeSpan const& position) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest
    {
        [[nodiscard]] auto OldStreamDescriptor() const;
        [[nodiscard]] auto NewStreamDescriptor() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMediaTrack
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto TrackKind() const;
        auto Label(param::hstring const& value) const;
        [[nodiscard]] auto Label() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMediaTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMediaTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseSourceBuffer
    {
        auto UpdateStarting(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using UpdateStarting_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBuffer>::remove_UpdateStarting>;
        [[nodiscard]] UpdateStarting_revoker UpdateStarting(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto UpdateStarting(winrt::event_token const& token) const noexcept;
        auto Updated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Updated_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBuffer>::remove_Updated>;
        [[nodiscard]] Updated_revoker Updated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Updated(winrt::event_token const& token) const noexcept;
        auto UpdateEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using UpdateEnded_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBuffer>::remove_UpdateEnded>;
        [[nodiscard]] UpdateEnded_revoker UpdateEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto UpdateEnded(winrt::event_token const& token) const noexcept;
        auto ErrorOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ErrorOccurred_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBuffer>::remove_ErrorOccurred>;
        [[nodiscard]] ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ErrorOccurred(winrt::event_token const& token) const noexcept;
        auto Aborted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Aborted_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBuffer>::remove_Aborted>;
        [[nodiscard]] Aborted_revoker Aborted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBuffer, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Aborted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Mode() const;
        auto Mode(winrt::Windows::Media::Core::MseAppendMode const& value) const;
        [[nodiscard]] auto IsUpdating() const;
        [[nodiscard]] auto Buffered() const;
        [[nodiscard]] auto TimestampOffset() const;
        auto TimestampOffset(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto AppendWindowStart() const;
        auto AppendWindowStart(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto AppendWindowEnd() const;
        auto AppendWindowEnd(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        auto AppendBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        auto AppendStream(winrt::Windows::Storage::Streams::IInputStream const& stream) const;
        auto AppendStream(winrt::Windows::Storage::Streams::IInputStream const& stream, uint64_t maxSize) const;
        auto Abort() const;
        auto Remove(winrt::Windows::Foundation::TimeSpan const& start, winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& end) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMseSourceBuffer>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseSourceBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseSourceBufferList
    {
        auto SourceBufferAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBufferList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SourceBufferAdded_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferAdded>;
        [[nodiscard]] SourceBufferAdded_revoker SourceBufferAdded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBufferList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SourceBufferAdded(winrt::event_token const& token) const noexcept;
        auto SourceBufferRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBufferList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SourceBufferRemoved_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<winrt::Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferRemoved>;
        [[nodiscard]] SourceBufferRemoved_revoker SourceBufferRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseSourceBufferList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SourceBufferRemoved(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Buffers() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMseSourceBufferList>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseSourceBufferList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSource
    {
        auto Opened(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMseStreamSource>::remove_Opened>;
        [[nodiscard]] Opened_revoker Opened(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Opened(winrt::event_token const& token) const noexcept;
        auto Ended(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Ended_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMseStreamSource>::remove_Ended>;
        [[nodiscard]] Ended_revoker Ended(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Ended(winrt::event_token const& token) const noexcept;
        auto Closed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<winrt::Windows::Media::Core::IMseStreamSource, &impl::abi_t<winrt::Windows::Media::Core::IMseStreamSource>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::MseStreamSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Closed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto SourceBuffers() const;
        [[nodiscard]] auto ActiveSourceBuffers() const;
        [[nodiscard]] auto ReadyState() const;
        [[nodiscard]] auto Duration() const;
        auto Duration(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        auto AddSourceBuffer(param::hstring const& mimeType) const;
        auto RemoveSourceBuffer(winrt::Windows::Media::Core::MseSourceBuffer const& buffer) const;
        auto EndOfStream(winrt::Windows::Media::Core::MseEndOfStreamStatus const& status) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMseStreamSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSource2
    {
        [[nodiscard]] auto LiveSeekableRange() const;
        auto LiveSeekableRange(winrt::Windows::Foundation::IReference<winrt::Windows::Media::Core::MseTimeRange> const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMseStreamSource2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IMseStreamSourceStatics
    {
        auto IsContentTypeSupported(param::hstring const& contentType) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IMseStreamSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_IMseStreamSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffect
    {
        [[nodiscard]] auto HighDynamicRangeAnalyzer() const;
        auto DesiredAnalysisInterval(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto DesiredAnalysisInterval() const;
        auto SceneAnalyzed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::SceneAnalysisEffect, winrt::Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
        using SceneAnalyzed_revoker = impl::event_revoker<winrt::Windows::Media::Core::ISceneAnalysisEffect, &impl::abi_t<winrt::Windows::Media::Core::ISceneAnalysisEffect>::remove_SceneAnalyzed>;
        [[nodiscard]] SceneAnalyzed_revoker SceneAnalyzed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::SceneAnalysisEffect, winrt::Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
        auto SceneAnalyzed(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISceneAnalysisEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame
    {
        [[nodiscard]] auto FrameControlValues() const;
        [[nodiscard]] auto HighDynamicRange() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame2
    {
        [[nodiscard]] auto AnalysisRecommendation() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISceneAnalyzedEventArgs
    {
        [[nodiscard]] auto ResultFrame() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISceneAnalyzedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISingleSelectMediaTrackList
    {
        auto SelectedIndexChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::ISingleSelectMediaTrackList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SelectedIndexChanged_revoker = impl::event_revoker<winrt::Windows::Media::Core::ISingleSelectMediaTrackList, &impl::abi_t<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>::remove_SelectedIndexChanged>;
        [[nodiscard]] SelectedIndexChanged_revoker SelectedIndexChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::ISingleSelectMediaTrackList, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SelectedIndexChanged(winrt::event_token const& token) const noexcept;
        auto SelectedIndex(int32_t value) const;
        [[nodiscard]] auto SelectedIndex() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ISpeechCue
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto StartPositionInInput() const;
        auto StartPositionInInput(winrt::Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] auto EndPositionInInput() const;
        auto EndPositionInInput(winrt::Windows::Foundation::IReference<int32_t> const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ISpeechCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_ISpeechCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptor
    {
        [[nodiscard]] auto EncodingProperties() const;
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory
    {
        auto Create(winrt::Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrack
    {
        auto CueEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        using CueEntered_revoker = impl::event_revoker<winrt::Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<winrt::Windows::Media::Core::ITimedMetadataTrack>::remove_CueEntered>;
        [[nodiscard]] CueEntered_revoker CueEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        auto CueEntered(winrt::event_token const& token) const noexcept;
        auto CueExited(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        using CueExited_revoker = impl::event_revoker<winrt::Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<winrt::Windows::Media::Core::ITimedMetadataTrack>::remove_CueExited>;
        [[nodiscard]] CueExited_revoker CueExited(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::MediaCueEventArgs> const& handler) const;
        auto CueExited(winrt::event_token const& token) const noexcept;
        auto TrackFailed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
        using TrackFailed_revoker = impl::event_revoker<winrt::Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<winrt::Windows::Media::Core::ITimedMetadataTrack>::remove_TrackFailed>;
        [[nodiscard]] TrackFailed_revoker TrackFailed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedMetadataTrack, winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
        auto TrackFailed(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Cues() const;
        [[nodiscard]] auto ActiveCues() const;
        [[nodiscard]] auto TimedMetadataKind() const;
        [[nodiscard]] auto DispatchType() const;
        auto AddCue(winrt::Windows::Media::Core::IMediaCue const& cue) const;
        auto RemoveCue(winrt::Windows::Media::Core::IMediaCue const& cue) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrack2
    {
        [[nodiscard]] auto PlaybackItem() const;
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrack2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackError
    {
        [[nodiscard]] auto ErrorCode() const;
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrackError>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackError<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackFactory
    {
        auto Create(param::hstring const& id, param::hstring const& language, winrt::Windows::Media::Core::TimedMetadataKind const& kind) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrackFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs
    {
        [[nodiscard]] auto Error() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedMetadataTrackProvider
    {
        [[nodiscard]] auto TimedMetadataTracks() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextBouten
    {
        [[nodiscard]] auto Type() const;
        auto Type(winrt::Windows::Media::Core::TimedTextBoutenType const& value) const;
        [[nodiscard]] auto Color() const;
        auto Color(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Media::Core::TimedTextBoutenPosition const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextBouten>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextBouten<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextCue
    {
        [[nodiscard]] auto CueRegion() const;
        auto CueRegion(winrt::Windows::Media::Core::TimedTextRegion const& value) const;
        [[nodiscard]] auto CueStyle() const;
        auto CueStyle(winrt::Windows::Media::Core::TimedTextStyle const& value) const;
        [[nodiscard]] auto Lines() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextCue>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextCue<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextLine
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto Subformats() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextLine>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextLine<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextRegion
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Media::Core::TimedTextPoint const& value) const;
        [[nodiscard]] auto Extent() const;
        auto Extent(winrt::Windows::Media::Core::TimedTextSize const& value) const;
        [[nodiscard]] auto Background() const;
        auto Background(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto WritingMode() const;
        auto WritingMode(winrt::Windows::Media::Core::TimedTextWritingMode const& value) const;
        [[nodiscard]] auto DisplayAlignment() const;
        auto DisplayAlignment(winrt::Windows::Media::Core::TimedTextDisplayAlignment const& value) const;
        [[nodiscard]] auto LineHeight() const;
        auto LineHeight(winrt::Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] auto IsOverflowClipped() const;
        auto IsOverflowClipped(bool value) const;
        [[nodiscard]] auto Padding() const;
        auto Padding(winrt::Windows::Media::Core::TimedTextPadding const& value) const;
        [[nodiscard]] auto TextWrapping() const;
        auto TextWrapping(winrt::Windows::Media::Core::TimedTextWrapping const& value) const;
        [[nodiscard]] auto ZIndex() const;
        auto ZIndex(int32_t value) const;
        [[nodiscard]] auto ScrollMode() const;
        auto ScrollMode(winrt::Windows::Media::Core::TimedTextScrollMode const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextRegion>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextRegion<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextRuby
    {
        [[nodiscard]] auto Text() const;
        auto Text(param::hstring const& value) const;
        [[nodiscard]] auto Position() const;
        auto Position(winrt::Windows::Media::Core::TimedTextRubyPosition const& value) const;
        [[nodiscard]] auto Align() const;
        auto Align(winrt::Windows::Media::Core::TimedTextRubyAlign const& value) const;
        [[nodiscard]] auto Reserve() const;
        auto Reserve(winrt::Windows::Media::Core::TimedTextRubyReserve const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextRuby>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextRuby<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSource
    {
        auto Resolved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedTextSource, winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
        using Resolved_revoker = impl::event_revoker<winrt::Windows::Media::Core::ITimedTextSource, &impl::abi_t<winrt::Windows::Media::Core::ITimedTextSource>::remove_Resolved>;
        [[nodiscard]] Resolved_revoker Resolved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::TimedTextSource, winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
        auto Resolved(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextSource>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs
    {
        [[nodiscard]] auto Error() const;
        [[nodiscard]] auto Tracks() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceStatics
    {
        auto CreateFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto CreateFromUri(winrt::Windows::Foundation::Uri const& uri) const;
        auto CreateFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage) const;
        auto CreateFromUri(winrt::Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextSourceStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSourceStatics2
    {
        auto CreateFromStreamWithIndex(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Storage::Streams::IRandomAccessStream const& indexStream) const;
        auto CreateFromUriWithIndex(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Foundation::Uri const& indexUri) const;
        auto CreateFromStreamWithIndex(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage) const;
        auto CreateFromUriWithIndex(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextSourceStatics2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextStyle
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
        [[nodiscard]] auto FontFamily() const;
        auto FontFamily(param::hstring const& value) const;
        [[nodiscard]] auto FontSize() const;
        auto FontSize(winrt::Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] auto FontWeight() const;
        auto FontWeight(winrt::Windows::Media::Core::TimedTextWeight const& value) const;
        [[nodiscard]] auto Foreground() const;
        auto Foreground(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto Background() const;
        auto Background(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto IsBackgroundAlwaysShown() const;
        auto IsBackgroundAlwaysShown(bool value) const;
        [[nodiscard]] auto FlowDirection() const;
        auto FlowDirection(winrt::Windows::Media::Core::TimedTextFlowDirection const& value) const;
        [[nodiscard]] auto LineAlignment() const;
        auto LineAlignment(winrt::Windows::Media::Core::TimedTextLineAlignment const& value) const;
        [[nodiscard]] auto OutlineColor() const;
        auto OutlineColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto OutlineThickness() const;
        auto OutlineThickness(winrt::Windows::Media::Core::TimedTextDouble const& value) const;
        [[nodiscard]] auto OutlineRadius() const;
        auto OutlineRadius(winrt::Windows::Media::Core::TimedTextDouble const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextStyle>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextStyle2
    {
        [[nodiscard]] auto FontStyle() const;
        auto FontStyle(winrt::Windows::Media::Core::TimedTextFontStyle const& value) const;
        [[nodiscard]] auto IsUnderlineEnabled() const;
        auto IsUnderlineEnabled(bool value) const;
        [[nodiscard]] auto IsLineThroughEnabled() const;
        auto IsLineThroughEnabled(bool value) const;
        [[nodiscard]] auto IsOverlineEnabled() const;
        auto IsOverlineEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextStyle2>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextStyle3
    {
        [[nodiscard]] auto Ruby() const;
        [[nodiscard]] auto Bouten() const;
        [[nodiscard]] auto IsTextCombined() const;
        auto IsTextCombined(bool value) const;
        [[nodiscard]] auto FontAngleInDegrees() const;
        auto FontAngleInDegrees(double value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextStyle3>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_ITimedTextSubformat
    {
        [[nodiscard]] auto StartIndex() const;
        auto StartIndex(int32_t value) const;
        [[nodiscard]] auto Length() const;
        auto Length(int32_t value) const;
        [[nodiscard]] auto SubformatStyle() const;
        auto SubformatStyle(winrt::Windows::Media::Core::TimedTextStyle const& value) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::ITimedTextSubformat>
    {
        template <typename D> using type = consume_Windows_Media_Core_ITimedTextSubformat<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStabilizationEffect
    {
        auto Enabled(bool value) const;
        [[nodiscard]] auto Enabled() const;
        auto EnabledChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::VideoStabilizationEffect, winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
        using EnabledChanged_revoker = impl::event_revoker<winrt::Windows::Media::Core::IVideoStabilizationEffect, &impl::abi_t<winrt::Windows::Media::Core::IVideoStabilizationEffect>::remove_EnabledChanged>;
        [[nodiscard]] EnabledChanged_revoker EnabledChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::VideoStabilizationEffect, winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
        auto EnabledChanged(winrt::event_token const& cookie) const noexcept;
        auto GetRecommendedStreamConfiguration(winrt::Windows::Media::Devices::VideoDeviceController const& controller, winrt::Windows::Media::MediaProperties::VideoEncodingProperties const& desiredProperties) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoStabilizationEffect>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffect<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs
    {
        [[nodiscard]] auto Reason() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptor
    {
        [[nodiscard]] auto EncodingProperties() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoStreamDescriptor>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptor2
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoStreamDescriptor2>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoStreamDescriptorFactory
    {
        auto Create(winrt::Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties) const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrack
    {
        auto OpenFailed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::VideoTrack, winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
        using OpenFailed_revoker = impl::event_revoker<winrt::Windows::Media::Core::IVideoTrack, &impl::abi_t<winrt::Windows::Media::Core::IVideoTrack>::remove_OpenFailed>;
        [[nodiscard]] OpenFailed_revoker OpenFailed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Core::VideoTrack, winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
        auto OpenFailed(winrt::event_token const& token) const noexcept;
        auto GetEncodingProperties() const;
        [[nodiscard]] auto PlaybackItem() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto SupportInfo() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoTrack>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrack<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs
    {
        [[nodiscard]] auto ExtendedError() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Core_IVideoTrackSupportInfo
    {
        [[nodiscard]] auto DecoderStatus() const;
        [[nodiscard]] auto MediaSourceStatus() const;
    };
    template <> struct consume<winrt::Windows::Media::Core::IVideoTrackSupportInfo>
    {
        template <typename D> using type = consume_Windows_Media_Core_IVideoTrackSupportInfo<D>;
    };
    struct struct_Windows_Media_Core_MseTimeRange
    {
        int64_t Start;
        int64_t End;
    };
    template <> struct abi<Windows::Media::Core::MseTimeRange>
    {
        using type = struct_Windows_Media_Core_MseTimeRange;
    };
    struct struct_Windows_Media_Core_TimedTextDouble
    {
        double Value;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextDouble>
    {
        using type = struct_Windows_Media_Core_TimedTextDouble;
    };
    struct struct_Windows_Media_Core_TimedTextPadding
    {
        double Before;
        double After;
        double Start;
        double End;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextPadding>
    {
        using type = struct_Windows_Media_Core_TimedTextPadding;
    };
    struct struct_Windows_Media_Core_TimedTextPoint
    {
        double X;
        double Y;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextPoint>
    {
        using type = struct_Windows_Media_Core_TimedTextPoint;
    };
    struct struct_Windows_Media_Core_TimedTextSize
    {
        double Height;
        double Width;
        int32_t Unit;
    };
    template <> struct abi<Windows::Media::Core::TimedTextSize>
    {
        using type = struct_Windows_Media_Core_TimedTextSize;
    };
}
#endif