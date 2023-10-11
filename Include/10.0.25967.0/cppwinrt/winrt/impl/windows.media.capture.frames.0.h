// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Capture_Frames_0_H
#define WINRT_Windows_Media_Capture_Frames_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
    enum class Panel : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct AudioFrame;
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture
{
    enum class MediaStreamType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    struct AudioDeviceController;
    struct VideoDeviceController;
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct CameraIntrinsics;
    struct DepthCorrelatedCoordinateMapper;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    struct AudioEncodingProperties;
    struct MediaRatio;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct DisplayRegion;
}
WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames
{
    enum class MediaFrameReaderAcquisitionMode : int32_t
    {
        Realtime = 0,
        Buffered = 1,
    };
    enum class MediaFrameReaderStartStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        DeviceNotAvailable = 2,
        OutputFormatNotSupported = 3,
        ExclusiveControlNotAvailable = 4,
    };
    enum class MediaFrameSourceGetPropertyStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        NotSupported = 2,
        DeviceNotAvailable = 3,
        MaxPropertyValueSizeTooSmall = 4,
        MaxPropertyValueSizeRequired = 5,
    };
    enum class MediaFrameSourceKind : int32_t
    {
        Custom = 0,
        Color = 1,
        Infrared = 2,
        Depth = 3,
        Audio = 4,
        Image = 5,
        Metadata = 6,
    };
    enum class MediaFrameSourceSetPropertyStatus : int32_t
    {
        Success = 0,
        UnknownFailure = 1,
        NotSupported = 2,
        InvalidValue = 3,
        DeviceNotAvailable = 4,
        NotInControl = 5,
    };
    enum class MultiSourceMediaFrameReaderStartStatus : int32_t
    {
        Success = 0,
        NotSupported = 1,
        InsufficientResources = 2,
        DeviceNotAvailable = 3,
        UnknownFailure = 4,
    };
    struct IAudioMediaFrame;
    struct IBufferMediaFrame;
    struct IDepthMediaFrame;
    struct IDepthMediaFrame2;
    struct IDepthMediaFrameFormat;
    struct IInfraredMediaFrame;
    struct IMediaFrameArrivedEventArgs;
    struct IMediaFrameFormat;
    struct IMediaFrameFormat2;
    struct IMediaFrameReader;
    struct IMediaFrameReader2;
    struct IMediaFrameReference;
    struct IMediaFrameReference2;
    struct IMediaFrameSource;
    struct IMediaFrameSourceController;
    struct IMediaFrameSourceController2;
    struct IMediaFrameSourceController3;
    struct IMediaFrameSourceGetPropertyResult;
    struct IMediaFrameSourceGroup;
    struct IMediaFrameSourceGroupStatics;
    struct IMediaFrameSourceInfo;
    struct IMediaFrameSourceInfo2;
    struct IMediaFrameSourceInfo3;
    struct IMediaFrameSourceInfo4;
    struct IMultiSourceMediaFrameArrivedEventArgs;
    struct IMultiSourceMediaFrameReader;
    struct IMultiSourceMediaFrameReader2;
    struct IMultiSourceMediaFrameReference;
    struct IVideoMediaFrame;
    struct IVideoMediaFrameFormat;
    struct AudioMediaFrame;
    struct BufferMediaFrame;
    struct DepthMediaFrame;
    struct DepthMediaFrameFormat;
    struct InfraredMediaFrame;
    struct MediaFrameArrivedEventArgs;
    struct MediaFrameFormat;
    struct MediaFrameReader;
    struct MediaFrameReference;
    struct MediaFrameSource;
    struct MediaFrameSourceController;
    struct MediaFrameSourceGetPropertyResult;
    struct MediaFrameSourceGroup;
    struct MediaFrameSourceInfo;
    struct MultiSourceMediaFrameArrivedEventArgs;
    struct MultiSourceMediaFrameReader;
    struct MultiSourceMediaFrameReference;
    struct VideoMediaFrame;
    struct VideoMediaFrameFormat;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Capture::Frames::IAudioMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameReader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameReference>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameReference2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::AudioMediaFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::BufferMediaFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::DepthMediaFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::DepthMediaFrameFormat>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::InfraredMediaFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameFormat>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameReader>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameReference>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceController>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGroup>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReference>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::VideoMediaFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::VideoMediaFrameFormat>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::AudioMediaFrame> = L"Windows.Media.Capture.Frames.AudioMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::BufferMediaFrame> = L"Windows.Media.Capture.Frames.BufferMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::DepthMediaFrame> = L"Windows.Media.Capture.Frames.DepthMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::DepthMediaFrameFormat> = L"Windows.Media.Capture.Frames.DepthMediaFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::InfraredMediaFrame> = L"Windows.Media.Capture.Frames.InfraredMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> = L"Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameFormat> = L"Windows.Media.Capture.Frames.MediaFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameReader> = L"Windows.Media.Capture.Frames.MediaFrameReader";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameReference> = L"Windows.Media.Capture.Frames.MediaFrameReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSource> = L"Windows.Media.Capture.Frames.MediaFrameSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceController> = L"Windows.Media.Capture.Frames.MediaFrameSourceController";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> = L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGroup> = L"Windows.Media.Capture.Frames.MediaFrameSourceGroup";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceInfo> = L"Windows.Media.Capture.Frames.MediaFrameSourceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReader";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReference> = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::VideoMediaFrame> = L"Windows.Media.Capture.Frames.VideoMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::VideoMediaFrameFormat> = L"Windows.Media.Capture.Frames.VideoMediaFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode> = L"Windows.Media.Capture.Frames.MediaFrameReaderAcquisitionMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> = L"Windows.Media.Capture.Frames.MediaFrameReaderStartStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus> = L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceKind> = L"Windows.Media.Capture.Frames.MediaFrameSourceKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> = L"Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IAudioMediaFrame> = L"Windows.Media.Capture.Frames.IAudioMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame> = L"Windows.Media.Capture.Frames.IBufferMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame> = L"Windows.Media.Capture.Frames.IDepthMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2> = L"Windows.Media.Capture.Frames.IDepthMediaFrame2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat> = L"Windows.Media.Capture.Frames.IDepthMediaFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame> = L"Windows.Media.Capture.Frames.IInfraredMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> = L"Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat> = L"Windows.Media.Capture.Frames.IMediaFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat2> = L"Windows.Media.Capture.Frames.IMediaFrameFormat2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReader> = L"Windows.Media.Capture.Frames.IMediaFrameReader";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2> = L"Windows.Media.Capture.Frames.IMediaFrameReader2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReference> = L"Windows.Media.Capture.Frames.IMediaFrameReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReference2> = L"Windows.Media.Capture.Frames.IMediaFrameReference2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSource> = L"Windows.Media.Capture.Frames.IMediaFrameSource";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController> = L"Windows.Media.Capture.Frames.IMediaFrameSourceController";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2> = L"Windows.Media.Capture.Frames.IMediaFrameSourceController2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController3> = L"Windows.Media.Capture.Frames.IMediaFrameSourceController3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> = L"Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup> = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroup";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo> = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo2> = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo3> = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo4> = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs> = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2> = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference> = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame> = L"Windows.Media.Capture.Frames.IVideoMediaFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat> = L"Windows.Media.Capture.Frames.IVideoMediaFrameFormat";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IAudioMediaFrame>{ 0xA3A9FEFF,0x8021,0x441B,{ 0x9A,0x46,0xE7,0xF0,0x13,0x7B,0x79,0x81 } }; // A3A9FEFF-8021-441B-9A46-E7F0137B7981
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame>{ 0xB5B153C7,0x9B84,0x4062,{ 0xB7,0x9C,0xA3,0x65,0xB2,0x59,0x68,0x54 } }; // B5B153C7-9B84-4062-B79C-A365B2596854
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame>{ 0x47135E4F,0x8549,0x45C0,{ 0x92,0x5B,0x80,0xD3,0x5E,0xFD,0xB1,0x0A } }; // 47135E4F-8549-45C0-925B-80D35EFDB10A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2>{ 0x6CCA473D,0xC4A4,0x4176,{ 0xB0,0xCD,0x33,0xEA,0xE3,0xB3,0x5A,0xA3 } }; // 6CCA473D-C4A4-4176-B0CD-33EAE3B35AA3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat>{ 0xC312CF40,0xD729,0x453E,{ 0x87,0x80,0x2E,0x04,0xF1,0x40,0xD2,0x8E } }; // C312CF40-D729-453E-8780-2E04F140D28E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame>{ 0x3FD13503,0x004B,0x4F0E,{ 0x91,0xAC,0x46,0x52,0x99,0xB4,0x16,0x58 } }; // 3FD13503-004B-4F0E-91AC-465299B41658
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>{ 0x0B430ADD,0xA490,0x4435,{ 0xAD,0xA1,0x9A,0xFF,0xD5,0x52,0x39,0xF7 } }; // 0B430ADD-A490-4435-ADA1-9AFFD55239F7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat>{ 0x71902B4E,0xB279,0x4A97,{ 0xA9,0xDB,0xBD,0x5A,0x2F,0xB7,0x8F,0x39 } }; // 71902B4E-B279-4A97-A9DB-BD5A2FB78F39
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat2>{ 0x63856340,0x5E87,0x4C10,{ 0x86,0xD1,0x6D,0xF0,0x97,0xA6,0xC6,0xA8 } }; // 63856340-5E87-4C10-86D1-6DF097A6C6A8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReader>{ 0xE4C94395,0x2028,0x48ED,{ 0x90,0xB0,0xD1,0xC1,0xB1,0x62,0xE2,0x4C } }; // E4C94395-2028-48ED-90B0-D1C1B162E24C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2>{ 0x871127B3,0x8531,0x4050,{ 0x87,0xCC,0xA1,0x37,0x33,0xCF,0x3E,0x9B } }; // 871127B3-8531-4050-87CC-A13733CF3E9B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReference>{ 0xF6B88641,0xF0DC,0x4044,{ 0x8D,0xC9,0x96,0x1C,0xED,0xD0,0x5B,0xAD } }; // F6B88641-F0DC-4044-8DC9-961CEDD05BAD
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameReference2>{ 0xDDBC3ECC,0xD5B2,0x49EF,{ 0x83,0x6A,0x94,0x7D,0x98,0x9B,0x80,0xC1 } }; // DDBC3ECC-D5B2-49EF-836A-947D989B80C1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSource>{ 0xD6782953,0x90DB,0x46A8,{ 0x8A,0xDD,0x2A,0xA8,0x84,0xA8,0xD2,0x53 } }; // D6782953-90DB-46A8-8ADD-2AA884A8D253
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController>{ 0x6D076635,0x316D,0x4B8F,{ 0xB7,0xB6,0xEE,0xB0,0x4A,0x8C,0x65,0x25 } }; // 6D076635-316D-4B8F-B7B6-EEB04A8C6525
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2>{ 0xEFC49FD4,0xFCF2,0x4A03,{ 0xB4,0xE4,0xAC,0x96,0x28,0x73,0x9B,0xEE } }; // EFC49FD4-FCF2-4A03-B4E4-AC9628739BEE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController3>{ 0x1F0CF815,0x2464,0x4651,{ 0xB1,0xE8,0x4A,0x82,0xDB,0xDB,0x54,0xDE } }; // 1F0CF815-2464-4651-B1E8-4A82DBDB54DE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>{ 0x088616C2,0x3A64,0x4BD5,{ 0xBD,0x2B,0xE7,0xC8,0x98,0xD2,0xF3,0x7A } }; // 088616C2-3A64-4BD5-BD2B-E7C898D2F37A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup>{ 0x7F605B87,0x4832,0x4B5F,{ 0xAE,0x3D,0x41,0x2F,0xAA,0xB3,0x7D,0x34 } }; // 7F605B87-4832-4B5F-AE3D-412FAAB37D34
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>{ 0x1C48BFC5,0x436F,0x4508,{ 0x94,0xCF,0xD5,0xD8,0xB7,0x32,0x64,0x45 } }; // 1C48BFC5-436F-4508-94CF-D5D8B7326445
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo>{ 0x87BDC9CD,0x4601,0x408F,{ 0x91,0xCF,0x03,0x83,0x18,0xCD,0x0A,0xF3 } }; // 87BDC9CD-4601-408F-91CF-038318CD0AF3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo2>{ 0x195A7855,0x6457,0x42C6,{ 0xA7,0x69,0x19,0xB6,0x5B,0xD3,0x2E,0x6E } }; // 195A7855-6457-42C6-A769-19B65BD32E6E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo3>{ 0xCA824AB6,0x66EA,0x5885,{ 0xA2,0xB6,0x26,0xC0,0xEE,0xEC,0x3C,0x7B } }; // CA824AB6-66EA-5885-A2B6-26C0EEEC3C7B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo4>{ 0x4817D721,0x85EB,0x470C,{ 0x8F,0x37,0x43,0xCA,0x54,0x98,0xE4,0x1D } }; // 4817D721-85EB-470C-8F37-43CA5498E41D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>{ 0x63115E01,0xCF51,0x48FD,{ 0xAA,0xB0,0x6D,0x69,0x3E,0xB4,0x81,0x27 } }; // 63115E01-CF51-48FD-AAB0-6D693EB48127
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>{ 0x8D144402,0xF763,0x488D,{ 0x98,0xF2,0xB4,0x37,0xBC,0xF0,0x75,0xE7 } }; // 8D144402-F763-488D-98F2-B437BCF075E7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>{ 0xEF5C8ABD,0xFC5C,0x4C6B,{ 0x9D,0x81,0x3C,0xB9,0xCC,0x63,0x7C,0x26 } }; // EF5C8ABD-FC5C-4C6B-9D81-3CB9CC637C26
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>{ 0x21964B1A,0x7FE2,0x44D6,{ 0x92,0xE5,0x29,0x8E,0x6D,0x28,0x10,0xE9 } }; // 21964B1A-7FE2-44D6-92E5-298E6D2810E9
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame>{ 0x00DD4CCB,0x32BD,0x4FE1,{ 0xA0,0x13,0x7C,0xC1,0x3C,0xF5,0xDB,0xCF } }; // 00DD4CCB-32BD-4FE1-A013-7CC13CF5DBCF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat>{ 0x46027FC0,0xD71B,0x45C7,{ 0x8F,0x14,0x6D,0x9A,0x0A,0xE6,0x04,0xE4 } }; // 46027FC0-D71B-45C7-8F14-6D9A0AE604E4
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::AudioMediaFrame>{ using type = winrt::Windows::Media::Capture::Frames::IAudioMediaFrame; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::BufferMediaFrame>{ using type = winrt::Windows::Media::Capture::Frames::IBufferMediaFrame; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::DepthMediaFrame>{ using type = winrt::Windows::Media::Capture::Frames::IDepthMediaFrame; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::DepthMediaFrameFormat>{ using type = winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::InfraredMediaFrame>{ using type = winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameFormat>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameFormat; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameReader>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameReader; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameReference>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameReference; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameSource>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameSource; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameSourceController>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGroup>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MediaFrameSourceInfo>{ using type = winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs>{ using type = winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>{ using type = winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReference>{ using type = winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::VideoMediaFrame>{ using type = winrt::Windows::Media::Capture::Frames::IVideoMediaFrame; };
    template <> struct default_interface<winrt::Windows::Media::Capture::Frames::VideoMediaFrameFormat>{ using type = winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat; };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IAudioMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameReference(void**) noexcept = 0;
            virtual int32_t __stdcall get_AudioEncodingProperties(void**) noexcept = 0;
            virtual int32_t __stdcall GetAudioFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameReference(void**) noexcept = 0;
            virtual int32_t __stdcall get_Buffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameReference(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_DepthFormat(void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateCoordinateMapper(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxReliableDepth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinReliableDepth(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_DepthScaleInMeters(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameReference(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsIlluminated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MajorType(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subtype(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormat(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioEncodingProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryAcquireLatestFrame(void**) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AcquisitionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AcquisitionMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Format(void**) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTime(void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_BufferMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameReference2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioMediaFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Info(void**) noexcept = 0;
            virtual int32_t __stdcall get_Controller(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentFormat(void**) noexcept = 0;
            virtual int32_t __stdcall SetFormatAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_FormatChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FormatChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryGetCameraIntrinsics(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPropertyAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPropertyAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoDeviceController(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPropertyByExtendedIdAsync(uint32_t, uint8_t*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPropertyByExtendedIdAsync(uint32_t, uint8_t*, uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioDeviceController(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceInfos(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_MediaStreamType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourceGroup(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProfileId(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoProfileMediaDescription(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetRelativePanel(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsShareable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_FrameArrived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_FrameArrived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryAcquireLatestFrame(void**) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
            virtual int32_t __stdcall StopAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_AcquisitionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AcquisitionMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetFrameReferenceBySourceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameReference(void**) noexcept = 0;
            virtual int32_t __stdcall get_VideoFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_SoftwareBitmap(void**) noexcept = 0;
            virtual int32_t __stdcall get_Direct3DSurface(void**) noexcept = 0;
            virtual int32_t __stdcall get_CameraIntrinsics(void**) noexcept = 0;
            virtual int32_t __stdcall get_InfraredMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall get_DepthMediaFrame(void**) noexcept = 0;
            virtual int32_t __stdcall GetVideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MediaFrameFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_DepthFormat(void**) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IAudioMediaFrame
    {
        [[nodiscard]] auto FrameReference() const;
        [[nodiscard]] auto AudioEncodingProperties() const;
        auto GetAudioFrame() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IAudioMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IAudioMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IBufferMediaFrame
    {
        [[nodiscard]] auto FrameReference() const;
        [[nodiscard]] auto Buffer() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IBufferMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IDepthMediaFrame
    {
        [[nodiscard]] auto FrameReference() const;
        [[nodiscard]] auto VideoMediaFrame() const;
        [[nodiscard]] auto DepthFormat() const;
        auto TryCreateCoordinateMapper(winrt::Windows::Media::Devices::Core::CameraIntrinsics const& cameraIntrinsics, winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IDepthMediaFrame2
    {
        [[nodiscard]] auto MaxReliableDepth() const;
        [[nodiscard]] auto MinReliableDepth() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat
    {
        [[nodiscard]] auto VideoFormat() const;
        [[nodiscard]] auto DepthScaleInMeters() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IInfraredMediaFrame
    {
        [[nodiscard]] auto FrameReference() const;
        [[nodiscard]] auto VideoMediaFrame() const;
        [[nodiscard]] auto IsIlluminated() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IInfraredMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameFormat
    {
        [[nodiscard]] auto MajorType() const;
        [[nodiscard]] auto Subtype() const;
        [[nodiscard]] auto FrameRate() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto VideoFormat() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameFormat2
    {
        [[nodiscard]] auto AudioEncodingProperties() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameFormat2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameReader
    {
        auto FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MediaFrameReader, winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<winrt::Windows::Media::Capture::Frames::IMediaFrameReader, &impl::abi_t<winrt::Windows::Media::Capture::Frames::IMediaFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MediaFrameReader, winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const;
        auto FrameArrived(winrt::event_token const& token) const noexcept;
        auto TryAcquireLatestFrame() const;
        auto StartAsync() const;
        auto StopAsync() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameReader2
    {
        auto AcquisitionMode(winrt::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const& value) const;
        [[nodiscard]] auto AcquisitionMode() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReader2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameReference
    {
        [[nodiscard]] auto SourceKind() const;
        [[nodiscard]] auto Format() const;
        [[nodiscard]] auto SystemRelativeTime() const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto BufferMediaFrame() const;
        [[nodiscard]] auto VideoMediaFrame() const;
        [[nodiscard]] auto CoordinateSystem() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameReference>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameReference2
    {
        [[nodiscard]] auto AudioMediaFrame() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameReference2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameReference2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSource
    {
        [[nodiscard]] auto Info() const;
        [[nodiscard]] auto Controller() const;
        [[nodiscard]] auto SupportedFormats() const;
        [[nodiscard]] auto CurrentFormat() const;
        auto SetFormatAsync(winrt::Windows::Media::Capture::Frames::MediaFrameFormat const& format) const;
        auto FormatChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MediaFrameSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using FormatChanged_revoker = impl::event_revoker<winrt::Windows::Media::Capture::Frames::IMediaFrameSource, &impl::abi_t<winrt::Windows::Media::Capture::Frames::IMediaFrameSource>::remove_FormatChanged>;
        [[nodiscard]] FormatChanged_revoker FormatChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MediaFrameSource, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto FormatChanged(winrt::event_token const& token) const noexcept;
        auto TryGetCameraIntrinsics(winrt::Windows::Media::Capture::Frames::MediaFrameFormat const& format) const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSource>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceController
    {
        auto GetPropertyAsync(param::hstring const& propertyId) const;
        auto SetPropertyAsync(param::hstring const& propertyId, winrt::Windows::Foundation::IInspectable const& propertyValue) const;
        [[nodiscard]] auto VideoDeviceController() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceController<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2
    {
        auto GetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, winrt::Windows::Foundation::IReference<uint32_t> const& maxPropertyValueSize) const;
        auto SetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceController3
    {
        [[nodiscard]] auto AudioDeviceController() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceController3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto SourceInfos() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics
    {
        auto FindAllAsync() const;
        auto FromIdAsync(param::hstring const& id) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto MediaStreamType() const;
        [[nodiscard]] auto SourceKind() const;
        [[nodiscard]] auto SourceGroup() const;
        [[nodiscard]] auto DeviceInformation() const;
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto CoordinateSystem() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo2
    {
        [[nodiscard]] auto ProfileId() const;
        [[nodiscard]] auto VideoProfileMediaDescription() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo3
    {
        auto GetRelativePanel(winrt::Windows::UI::WindowManagement::DisplayRegion const& displayRegion) const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo3>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo4
    {
        [[nodiscard]] auto IsShareable() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo4>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs
    {
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader
    {
        auto FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const;
        using FrameArrived_revoker = impl::event_revoker<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader, &impl::abi_t<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>::remove_FrameArrived>;
        [[nodiscard]] FrameArrived_revoker FrameArrived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const;
        auto FrameArrived(winrt::event_token const& token) const noexcept;
        auto TryAcquireLatestFrame() const;
        auto StartAsync() const;
        auto StopAsync() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2
    {
        auto AcquisitionMode(winrt::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const& value) const;
        [[nodiscard]] auto AcquisitionMode() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference
    {
        auto TryGetFrameReferenceBySourceId(param::hstring const& sourceId) const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IVideoMediaFrame
    {
        [[nodiscard]] auto FrameReference() const;
        [[nodiscard]] auto VideoFormat() const;
        [[nodiscard]] auto SoftwareBitmap() const;
        [[nodiscard]] auto Direct3DSurface() const;
        [[nodiscard]] auto CameraIntrinsics() const;
        [[nodiscard]] auto InfraredMediaFrame() const;
        [[nodiscard]] auto DepthMediaFrame() const;
        auto GetVideoFrame() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat
    {
        [[nodiscard]] auto MediaFrameFormat() const;
        [[nodiscard]] auto DepthFormat() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
    };
    template <> struct consume<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat>
    {
        template <typename D> using type = consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>;
    };
}
#endif
