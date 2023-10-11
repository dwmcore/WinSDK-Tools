// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_MediaProperties_0_H
#define WINRT_Windows_Media_MediaProperties_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core
{
    struct AudioStreamDescriptor;
    struct TimedMetadataStreamDescriptor;
    struct VideoStreamDescriptor;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties
{
    enum class AudioEncodingQuality : int32_t
    {
        Auto = 0,
        High = 1,
        Medium = 2,
        Low = 3,
    };
    enum class MediaMirroringOptions : uint32_t
    {
        None = 0,
        Horizontal = 0x1,
        Vertical = 0x2,
    };
    enum class MediaPixelFormat : int32_t
    {
        Nv12 = 0,
        Bgra8 = 1,
        P010 = 2,
    };
    enum class MediaRotation : int32_t
    {
        None = 0,
        Clockwise90Degrees = 1,
        Clockwise180Degrees = 2,
        Clockwise270Degrees = 3,
    };
    enum class MediaThumbnailFormat : int32_t
    {
        Bmp = 0,
        Bgra8 = 1,
    };
    enum class SphericalVideoFrameFormat : int32_t
    {
        None = 0,
        Unsupported = 1,
        Equirectangular = 2,
    };
    enum class StereoscopicVideoPackingMode : int32_t
    {
        None = 0,
        SideBySide = 1,
        TopBottom = 2,
    };
    enum class VideoEncodingQuality : int32_t
    {
        Auto = 0,
        HD1080p = 1,
        HD720p = 2,
        Wvga = 3,
        Ntsc = 4,
        Pal = 5,
        Vga = 6,
        Qvga = 7,
        Uhd2160p = 8,
        Uhd4320p = 9,
    };
    struct IAudioEncodingProperties;
    struct IAudioEncodingProperties2;
    struct IAudioEncodingProperties3;
    struct IAudioEncodingPropertiesStatics;
    struct IAudioEncodingPropertiesStatics2;
    struct IAudioEncodingPropertiesWithFormatUserData;
    struct IAv1ProfileIdsStatics;
    struct IContainerEncodingProperties;
    struct IContainerEncodingProperties2;
    struct IH264ProfileIdsStatics;
    struct IHevcProfileIdsStatics;
    struct IImageEncodingProperties;
    struct IImageEncodingProperties2;
    struct IImageEncodingPropertiesStatics;
    struct IImageEncodingPropertiesStatics2;
    struct IImageEncodingPropertiesStatics3;
    struct IMediaEncodingProfile;
    struct IMediaEncodingProfile2;
    struct IMediaEncodingProfile3;
    struct IMediaEncodingProfileStatics;
    struct IMediaEncodingProfileStatics2;
    struct IMediaEncodingProfileStatics3;
    struct IMediaEncodingProfileStatics4;
    struct IMediaEncodingProperties;
    struct IMediaEncodingSubtypesStatics;
    struct IMediaEncodingSubtypesStatics2;
    struct IMediaEncodingSubtypesStatics3;
    struct IMediaEncodingSubtypesStatics4;
    struct IMediaEncodingSubtypesStatics5;
    struct IMediaEncodingSubtypesStatics6;
    struct IMediaEncodingSubtypesStatics7;
    struct IMediaRatio;
    struct IMpeg2ProfileIdsStatics;
    struct ITimedMetadataEncodingProperties;
    struct ITimedMetadataEncodingPropertiesStatics;
    struct IVideoEncodingProperties;
    struct IVideoEncodingProperties2;
    struct IVideoEncodingProperties3;
    struct IVideoEncodingProperties4;
    struct IVideoEncodingProperties5;
    struct IVideoEncodingPropertiesStatics;
    struct IVideoEncodingPropertiesStatics2;
    struct IVideoEncodingPropertiesStatics3;
    struct IVp9ProfileIdsStatics;
    struct AudioEncodingProperties;
    struct Av1ProfileIds;
    struct ContainerEncodingProperties;
    struct H264ProfileIds;
    struct HevcProfileIds;
    struct ImageEncodingProperties;
    struct MediaEncodingProfile;
    struct MediaEncodingSubtypes;
    struct MediaPropertySet;
    struct MediaRatio;
    struct Mpeg2ProfileIds;
    struct TimedMetadataEncodingProperties;
    struct VideoEncodingProperties;
    struct Vp9ProfileIds;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IAv1ProfileIdsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IHevcProfileIdsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IImageEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IImageEncodingProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics7>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMediaRatio>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::IVp9ProfileIdsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::AudioEncodingProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::Av1ProfileIds>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::ContainerEncodingProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::H264ProfileIds>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::HevcProfileIds>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::ImageEncodingProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaEncodingProfile>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaEncodingSubtypes>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaPropertySet>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaRatio>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::Mpeg2ProfileIds>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::TimedMetadataEncodingProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::VideoEncodingProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::Vp9ProfileIds>{ using type = class_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::AudioEncodingQuality>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaMirroringOptions>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaPixelFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaRotation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::SphericalVideoFrameFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::StereoscopicVideoPackingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Media::MediaProperties::VideoEncodingQuality>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::AudioEncodingProperties> = L"Windows.Media.MediaProperties.AudioEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::Av1ProfileIds> = L"Windows.Media.MediaProperties.Av1ProfileIds";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::ContainerEncodingProperties> = L"Windows.Media.MediaProperties.ContainerEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::H264ProfileIds> = L"Windows.Media.MediaProperties.H264ProfileIds";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::HevcProfileIds> = L"Windows.Media.MediaProperties.HevcProfileIds";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::ImageEncodingProperties> = L"Windows.Media.MediaProperties.ImageEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaEncodingProfile> = L"Windows.Media.MediaProperties.MediaEncodingProfile";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaEncodingSubtypes> = L"Windows.Media.MediaProperties.MediaEncodingSubtypes";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaPropertySet> = L"Windows.Media.MediaProperties.MediaPropertySet";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaRatio> = L"Windows.Media.MediaProperties.MediaRatio";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::Mpeg2ProfileIds> = L"Windows.Media.MediaProperties.Mpeg2ProfileIds";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::TimedMetadataEncodingProperties> = L"Windows.Media.MediaProperties.TimedMetadataEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::VideoEncodingProperties> = L"Windows.Media.MediaProperties.VideoEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::Vp9ProfileIds> = L"Windows.Media.MediaProperties.Vp9ProfileIds";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::AudioEncodingQuality> = L"Windows.Media.MediaProperties.AudioEncodingQuality";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaMirroringOptions> = L"Windows.Media.MediaProperties.MediaMirroringOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaPixelFormat> = L"Windows.Media.MediaProperties.MediaPixelFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaRotation> = L"Windows.Media.MediaProperties.MediaRotation";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat> = L"Windows.Media.MediaProperties.MediaThumbnailFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::SphericalVideoFrameFormat> = L"Windows.Media.MediaProperties.SphericalVideoFrameFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::StereoscopicVideoPackingMode> = L"Windows.Media.MediaProperties.StereoscopicVideoPackingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::VideoEncodingQuality> = L"Windows.Media.MediaProperties.VideoEncodingQuality";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties> = L"Windows.Media.MediaProperties.IAudioEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2> = L"Windows.Media.MediaProperties.IAudioEncodingProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties3> = L"Windows.Media.MediaProperties.IAudioEncodingProperties3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics> = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2> = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData> = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IAv1ProfileIdsStatics> = L"Windows.Media.MediaProperties.IAv1ProfileIdsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties> = L"Windows.Media.MediaProperties.IContainerEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties2> = L"Windows.Media.MediaProperties.IContainerEncodingProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics> = L"Windows.Media.MediaProperties.IH264ProfileIdsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IHevcProfileIdsStatics> = L"Windows.Media.MediaProperties.IHevcProfileIdsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IImageEncodingProperties> = L"Windows.Media.MediaProperties.IImageEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IImageEncodingProperties2> = L"Windows.Media.MediaProperties.IImageEncodingProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics> = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2> = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics3> = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile> = L"Windows.Media.MediaProperties.IMediaEncodingProfile";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile2> = L"Windows.Media.MediaProperties.IMediaEncodingProfile2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile3> = L"Windows.Media.MediaProperties.IMediaEncodingProfile3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics> = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2> = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3> = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics4> = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties> = L"Windows.Media.MediaProperties.IMediaEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics4> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics5> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics5";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics6> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics6";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics7> = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics7";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMediaRatio> = L"Windows.Media.MediaProperties.IMediaRatio";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics> = L"Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingProperties> = L"Windows.Media.MediaProperties.ITimedMetadataEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingPropertiesStatics> = L"Windows.Media.MediaProperties.ITimedMetadataEncodingPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties> = L"Windows.Media.MediaProperties.IVideoEncodingProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2> = L"Windows.Media.MediaProperties.IVideoEncodingProperties2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3> = L"Windows.Media.MediaProperties.IVideoEncodingProperties3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4> = L"Windows.Media.MediaProperties.IVideoEncodingProperties4";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties5> = L"Windows.Media.MediaProperties.IVideoEncodingProperties5";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics> = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2> = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics3> = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Media::MediaProperties::IVp9ProfileIdsStatics> = L"Windows.Media.MediaProperties.IVp9ProfileIdsStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties>{ 0x62BC7A16,0x005C,0x4B3B,{ 0x8A,0x0B,0x0A,0x09,0x0E,0x96,0x87,0xF3 } }; // 62BC7A16-005C-4B3B-8A0B-0A090E9687F3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2>{ 0xC45D54DA,0x80BD,0x4C23,{ 0x80,0xD5,0x72,0xD4,0xA1,0x81,0xE8,0x94 } }; // C45D54DA-80BD-4C23-80D5-72D4A181E894
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties3>{ 0x87600341,0x748C,0x4F8D,{ 0xB0,0xFD,0x10,0xCA,0xF0,0x8F,0xF0,0x87 } }; // 87600341-748C-4F8D-B0FD-10CAF08FF087
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>{ 0x0CAD332C,0xEBE9,0x4527,{ 0xB3,0x6D,0xE4,0x2A,0x13,0xCF,0x38,0xDB } }; // 0CAD332C-EBE9-4527-B36D-E42A13CF38DB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>{ 0x7489316F,0x77A0,0x433D,{ 0x8E,0xD5,0x40,0x40,0x28,0x0E,0x86,0x65 } }; // 7489316F-77A0-433D-8ED5-4040280E8665
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>{ 0x98F10D79,0x13EA,0x49FF,{ 0xBE,0x70,0x26,0x73,0xDB,0x69,0x70,0x2C } }; // 98F10D79-13EA-49FF-BE70-2673DB69702C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IAv1ProfileIdsStatics>{ 0x9105812B,0x7C09,0x5882,{ 0x88,0xA4,0x67,0x80,0x08,0xA5,0x17,0x4D } }; // 9105812B-7C09-5882-88A4-678008A5174D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties>{ 0x59AC2A57,0xB32A,0x479E,{ 0x8A,0x61,0x4B,0x7F,0x2E,0x9E,0x7E,0xA0 } }; // 59AC2A57-B32A-479E-8A61-4B7F2E9E7EA0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties2>{ 0xB272C029,0xAE26,0x4819,{ 0xBA,0xAD,0xAD,0x7A,0x49,0xB0,0xA8,0x76 } }; // B272C029-AE26-4819-BAAD-AD7A49B0A876
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics>{ 0x38654CA7,0x846A,0x4F97,{ 0xA2,0xE5,0xC3,0xA1,0x5B,0xBF,0x70,0xFD } }; // 38654CA7-846A-4F97-A2E5-C3A15BBF70FD
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IHevcProfileIdsStatics>{ 0x1E50D280,0x2AA7,0x53C1,{ 0x97,0x3F,0x21,0x89,0xFA,0x65,0x6F,0x53 } }; // 1E50D280-2AA7-53C1-973F-2189FA656F53
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IImageEncodingProperties>{ 0x78625635,0xF331,0x4189,{ 0xB1,0xC3,0xB4,0x8D,0x5A,0xE0,0x34,0xF1 } }; // 78625635-F331-4189-B1C3-B48D5AE034F1
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IImageEncodingProperties2>{ 0xC854A2DF,0xC923,0x469B,{ 0xAC,0x8E,0x6A,0x9F,0x3C,0x1C,0xD9,0xE3 } }; // C854A2DF-C923-469B-AC8E-6A9F3C1CD9E3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>{ 0x257C68DC,0x8B99,0x439E,{ 0xAA,0x59,0x91,0x3A,0x36,0x16,0x12,0x97 } }; // 257C68DC-8B99-439E-AA59-913A36161297
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>{ 0xF6C25B29,0x3824,0x46B0,{ 0x95,0x6E,0x50,0x13,0x29,0xE1,0xBE,0x3C } }; // F6C25B29-3824-46B0-956E-501329E1BE3C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics3>{ 0x48F4814D,0xA2FF,0x48DC,{ 0x8E,0xA0,0xE9,0x06,0x80,0x66,0x36,0x56 } }; // 48F4814D-A2FF-48DC-8EA0-E90680663656
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile>{ 0xE7DBF5A8,0x1DB9,0x4783,{ 0x87,0x6B,0x3D,0xFE,0x12,0xAC,0xFD,0xB3 } }; // E7DBF5A8-1DB9-4783-876B-3DFE12ACFDB3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile2>{ 0x349B3E0A,0x4035,0x488E,{ 0x98,0x77,0x85,0x63,0x28,0x65,0xED,0x10 } }; // 349B3E0A-4035-488E-9877-85632865ED10
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile3>{ 0xBA6EBE88,0x7570,0x4E69,{ 0xAC,0xCF,0x56,0x11,0xAD,0x01,0x5F,0x88 } }; // BA6EBE88-7570-4E69-ACCF-5611AD015F88
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics>{ 0x197F352C,0x2EDE,0x4A45,{ 0xA8,0x96,0x81,0x7A,0x48,0x54,0xF8,0xFE } }; // 197F352C-2EDE-4A45-A896-817A4854F8FE
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>{ 0xCE8DE74F,0x6AF4,0x4288,{ 0x8F,0xE2,0x79,0xAD,0xF1,0xF7,0x9A,0x43 } }; // CE8DE74F-6AF4-4288-8FE2-79ADF1F79A43
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>{ 0x90DAC5AA,0xCF76,0x4294,{ 0xA9,0xED,0x1A,0x14,0x20,0xF5,0x1F,0x6B } }; // 90DAC5AA-CF76-4294-A9ED-1A1420F51F6B
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics4>{ 0x6FAFD7B5,0x9404,0x514A,{ 0x81,0xDD,0xC9,0x44,0x4D,0x64,0x8A,0xF0 } }; // 6FAFD7B5-9404-514A-81DD-C9444D648AF0
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>{ 0xB4002AF6,0xACD4,0x4E5A,{ 0xA2,0x4B,0x5D,0x74,0x98,0xA8,0xB8,0xC4 } }; // B4002AF6-ACD4-4E5A-A24B-5D7498A8B8C4
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>{ 0x37B6580E,0xA171,0x4464,{ 0xBA,0x5A,0x53,0x18,0x9E,0x48,0xC1,0xC8 } }; // 37B6580E-A171-4464-BA5A-53189E48C1C8
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>{ 0x4B7CD23D,0x42FF,0x4D33,{ 0x85,0x31,0x06,0x26,0xBE,0xE4,0xB5,0x2D } }; // 4B7CD23D-42FF-4D33-8531-0626BEE4B52D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>{ 0xBA2414E4,0x883D,0x464E,{ 0xA4,0x4F,0x09,0x7D,0xA0,0x8E,0xF7,0xFF } }; // BA2414E4-883D-464E-A44F-097DA08EF7FF
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics4>{ 0xDDECE58A,0x3949,0x4644,{ 0x8A,0x2C,0x59,0xEF,0x02,0xC6,0x42,0xFA } }; // DDECE58A-3949-4644-8A2C-59EF02C642FA
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics5>{ 0x5AD4A007,0xFFCE,0x4760,{ 0x98,0x28,0x5D,0x0C,0x99,0x63,0x7E,0x6A } }; // 5AD4A007-FFCE-4760-9828-5D0C99637E6A
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics6>{ 0xA1252973,0xA984,0x5912,{ 0x93,0xBB,0x54,0xE7,0xE5,0x69,0xE0,0x53 } }; // A1252973-A984-5912-93BB-54E7E569E053
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics7>{ 0x92F2DCA7,0x9937,0x52A1,{ 0xB6,0x19,0xDD,0xFA,0xD8,0x1C,0xD9,0x9C } }; // 92F2DCA7-9937-52A1-B619-DDFAD81CD99C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMediaRatio>{ 0xD2D0FEE5,0x8929,0x401D,{ 0xAC,0x78,0x7D,0x35,0x7E,0x37,0x81,0x63 } }; // D2D0FEE5-8929-401D-AC78-7D357E378163
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>{ 0xA461FF85,0xE57A,0x4128,{ 0x9B,0x21,0xD5,0x33,0x1B,0x04,0x23,0x5C } }; // A461FF85-E57A-4128-9B21-D5331B04235C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>{ 0x51CD30D3,0xD690,0x4CFA,{ 0x97,0xF4,0x4A,0x39,0x8E,0x9D,0xB4,0x20 } }; // 51CD30D3-D690-4CFA-97F4-4A398E9DB420
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingPropertiesStatics>{ 0x6629BB67,0x6E55,0x5643,{ 0x89,0xA0,0x7A,0x7E,0x8D,0x85,0xB5,0x2C } }; // 6629BB67-6E55-5643-89A0-7A7E8D85B52C
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties>{ 0x76EE6C9A,0x37C2,0x4F2A,{ 0x88,0x0A,0x12,0x82,0xBB,0xB4,0x37,0x3D } }; // 76EE6C9A-37C2-4F2A-880A-1282BBB4373D
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2>{ 0xF743A1EF,0xD465,0x4290,{ 0xA9,0x4B,0xEF,0x0F,0x15,0x28,0xF8,0xE3 } }; // F743A1EF-D465-4290-A94B-EF0F1528F8E3
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3>{ 0x386BCDC4,0x873A,0x479F,{ 0xB3,0xEB,0x56,0xC1,0xFC,0xBE,0xC6,0xD7 } }; // 386BCDC4-873A-479F-B3EB-56C1FCBEC6D7
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4>{ 0x724EF014,0xC10C,0x40F2,{ 0x9D,0x72,0x3E,0xE1,0x3B,0x45,0xFA,0x8E } }; // 724EF014-C10C-40F2-9D72-3EE13B45FA8E
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties5>{ 0x4959080F,0x272F,0x4ECE,{ 0xA4,0xDF,0xC0,0xCC,0xDB,0x33,0xD8,0x40 } }; // 4959080F-272F-4ECE-A4DF-C0CCDB33D840
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>{ 0x3CE14D44,0x1DC5,0x43DB,{ 0x9F,0x38,0xEB,0xEB,0xF9,0x01,0x52,0xCB } }; // 3CE14D44-1DC5-43DB-9F38-EBEBF90152CB
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>{ 0xCF1EBD5D,0x49FE,0x4D00,{ 0xB5,0x9A,0xCF,0xA4,0xDF,0xC5,0x19,0x44 } }; // CF1EBD5D-49FE-4D00-B59A-CFA4DFC51944
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics3>{ 0x65B46685,0x60DA,0x5E51,{ 0x91,0xA2,0xB3,0x8C,0x47,0x63,0xB8,0x72 } }; // 65B46685-60DA-5E51-91A2-B38C4763B872
    template <> inline constexpr guid guid_v<winrt::Windows::Media::MediaProperties::IVp9ProfileIdsStatics>{ 0x20311A55,0xFE06,0x5883,{ 0x92,0xD9,0x60,0x80,0xC9,0x77,0x43,0xE5 } }; // 20311A55-FE06-5883-92D9-6080C97743E5
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::AudioEncodingProperties>{ using type = winrt::Windows::Media::MediaProperties::IAudioEncodingProperties; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::ContainerEncodingProperties>{ using type = winrt::Windows::Media::MediaProperties::IContainerEncodingProperties; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::ImageEncodingProperties>{ using type = winrt::Windows::Media::MediaProperties::IImageEncodingProperties; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::MediaEncodingProfile>{ using type = winrt::Windows::Media::MediaProperties::IMediaEncodingProfile; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::MediaPropertySet>{ using type = winrt::Windows::Foundation::Collections::IMap<winrt::guid, winrt::Windows::Foundation::IInspectable>; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::MediaRatio>{ using type = winrt::Windows::Media::MediaProperties::IMediaRatio; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::TimedMetadataEncodingProperties>{ using type = winrt::Windows::Media::MediaProperties::IMediaEncodingProperties; };
    template <> struct default_interface<winrt::Windows::Media::MediaProperties::VideoEncodingProperties>{ using type = winrt::Windows::Media::MediaProperties::IVideoEncodingProperties; };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Bitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ChannelCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ChannelCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SampleRate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_SampleRate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BitsPerSample(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BitsPerSample(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSpatial(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAac(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAacAdts(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMp3(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePcm(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWma(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAlac(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFlac(uint32_t, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetFormatUserData(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetFormatUserData(uint32_t*, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IAv1ProfileIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MainChromaSubsampling420BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling420BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling400BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling400BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HighChromaSubsampling444BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HighChromaSubsampling444BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling420BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling400BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling444BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling422BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling422BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProfessionalChromaSubsampling422BitDepth12(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConstrainedBaseline(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Baseline(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Extended(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Main(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_High(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_High10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_High422(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_High444(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StereoHigh(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MultiviewHigh(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IHevcProfileIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MainChromaSubsampling420BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling420BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling420BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling422BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling422BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling444BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling444BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainChromaSubsampling444BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MonochromeBitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MonochromeBitDepth16(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling420BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling420BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling420BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling422BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling422BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling444BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling444BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling444BitDepth12(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainIntraChromaSubsampling444BitDepth16(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainStillChromaSubsampling420BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainStillChromaSubsampling444BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MainStillChromaSubsampling444BitDepth16(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IImageEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Width(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Height(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IImageEncodingProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateJpeg(void**) noexcept = 0;
            virtual int32_t __stdcall CreatePng(void**) noexcept = 0;
            virtual int32_t __stdcall CreateJpegXR(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateUncompressed(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBmp(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateHeif(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Audio(void*) noexcept = 0;
            virtual int32_t __stdcall get_Audio(void**) noexcept = 0;
            virtual int32_t __stdcall put_Video(void*) noexcept = 0;
            virtual int32_t __stdcall get_Video(void**) noexcept = 0;
            virtual int32_t __stdcall put_Container(void*) noexcept = 0;
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetAudioTracks(void*) noexcept = 0;
            virtual int32_t __stdcall GetAudioTracks(void**) noexcept = 0;
            virtual int32_t __stdcall SetVideoTracks(void*) noexcept = 0;
            virtual int32_t __stdcall GetVideoTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTimedMetadataTracks(void*) noexcept = 0;
            virtual int32_t __stdcall GetTimedMetadataTracks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateM4a(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMp3(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWma(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMp4(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWmv(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromStreamAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWav(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAvi(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAlac(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFlac(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateHevc(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVp9(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateAv1(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subtype(void*) noexcept = 0;
            virtual int32_t __stdcall get_Subtype(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Aac(void**) noexcept = 0;
            virtual int32_t __stdcall get_AacAdts(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ac3(void**) noexcept = 0;
            virtual int32_t __stdcall get_AmrNb(void**) noexcept = 0;
            virtual int32_t __stdcall get_AmrWb(void**) noexcept = 0;
            virtual int32_t __stdcall get_Argb32(void**) noexcept = 0;
            virtual int32_t __stdcall get_Asf(void**) noexcept = 0;
            virtual int32_t __stdcall get_Avi(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bgra8(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bmp(void**) noexcept = 0;
            virtual int32_t __stdcall get_Eac3(void**) noexcept = 0;
            virtual int32_t __stdcall get_Float(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gif(void**) noexcept = 0;
            virtual int32_t __stdcall get_H263(void**) noexcept = 0;
            virtual int32_t __stdcall get_H264(void**) noexcept = 0;
            virtual int32_t __stdcall get_H264Es(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hevc(void**) noexcept = 0;
            virtual int32_t __stdcall get_HevcEs(void**) noexcept = 0;
            virtual int32_t __stdcall get_Iyuv(void**) noexcept = 0;
            virtual int32_t __stdcall get_Jpeg(void**) noexcept = 0;
            virtual int32_t __stdcall get_JpegXr(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mjpg(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mpeg(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mpeg1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mpeg2(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mp3(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mpeg4(void**) noexcept = 0;
            virtual int32_t __stdcall get_Nv12(void**) noexcept = 0;
            virtual int32_t __stdcall get_Pcm(void**) noexcept = 0;
            virtual int32_t __stdcall get_Png(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rgb24(void**) noexcept = 0;
            virtual int32_t __stdcall get_Rgb32(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tiff(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wave(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wma8(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wma9(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wmv3(void**) noexcept = 0;
            virtual int32_t __stdcall get_Wvc1(void**) noexcept = 0;
            virtual int32_t __stdcall get_Yuy2(void**) noexcept = 0;
            virtual int32_t __stdcall get_Yv12(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Vp9(void**) noexcept = 0;
            virtual int32_t __stdcall get_L8(void**) noexcept = 0;
            virtual int32_t __stdcall get_L16(void**) noexcept = 0;
            virtual int32_t __stdcall get_D16(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Alac(void**) noexcept = 0;
            virtual int32_t __stdcall get_Flac(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_P010(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Heif(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Pgs(void**) noexcept = 0;
            virtual int32_t __stdcall get_Srt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ssa(void**) noexcept = 0;
            virtual int32_t __stdcall get_VobSub(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Av1(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMediaRatio>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Numerator(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Numerator(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Denominator(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Denominator(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Simple(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Main(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SignalNoiseRatioScalable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SpatiallyScalable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_High(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetFormatUserData(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetFormatUserData(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePgs(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSrt(void**) noexcept = 0;
            virtual int32_t __stdcall CreateSsa(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateVobSub(uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Bitrate(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bitrate(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Width(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Height(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FrameRate(void**) noexcept = 0;
            virtual int32_t __stdcall get_PixelAspectRatio(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetFormatUserData(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetFormatUserData(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_ProfileId(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProfileId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StereoscopicVideoPackingMode(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SphericalVideoFrameFormat(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateH264(void**) noexcept = 0;
            virtual int32_t __stdcall CreateMpeg2(void**) noexcept = 0;
            virtual int32_t __stdcall CreateUncompressed(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateHevc(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateVp9(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAv1(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Media::MediaProperties::IVp9ProfileIdsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Profile0ChromaSubsampling420BitDepth8(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Profile2ChromaSubsampling420BitDepth10(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Profile2ChromaSubsampling420BitDepth12(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingProperties
    {
        auto Bitrate(uint32_t value) const;
        [[nodiscard]] auto Bitrate() const;
        auto ChannelCount(uint32_t value) const;
        [[nodiscard]] auto ChannelCount() const;
        auto SampleRate(uint32_t value) const;
        [[nodiscard]] auto SampleRate() const;
        auto BitsPerSample(uint32_t value) const;
        [[nodiscard]] auto BitsPerSample() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingProperties2
    {
        [[nodiscard]] auto IsSpatial() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingProperties3
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics
    {
        auto CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
        auto CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
        auto CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
        auto CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
        auto CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2
    {
        auto CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
        auto CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData
    {
        auto SetFormatUserData(array_view<uint8_t const> value) const;
        auto GetFormatUserData(com_array<uint8_t>& value) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IAv1ProfileIdsStatics
    {
        [[nodiscard]] auto MainChromaSubsampling420BitDepth8() const;
        [[nodiscard]] auto MainChromaSubsampling420BitDepth10() const;
        [[nodiscard]] auto MainChromaSubsampling400BitDepth8() const;
        [[nodiscard]] auto MainChromaSubsampling400BitDepth10() const;
        [[nodiscard]] auto HighChromaSubsampling444BitDepth8() const;
        [[nodiscard]] auto HighChromaSubsampling444BitDepth10() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling420BitDepth12() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling400BitDepth12() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling444BitDepth12() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling422BitDepth8() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling422BitDepth10() const;
        [[nodiscard]] auto ProfessionalChromaSubsampling422BitDepth12() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IAv1ProfileIdsStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IAv1ProfileIdsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IContainerEncodingProperties
    {
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IContainerEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IContainerEncodingProperties2
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IContainerEncodingProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics
    {
        [[nodiscard]] auto ConstrainedBaseline() const;
        [[nodiscard]] auto Baseline() const;
        [[nodiscard]] auto Extended() const;
        [[nodiscard]] auto Main() const;
        [[nodiscard]] auto High() const;
        [[nodiscard]] auto High10() const;
        [[nodiscard]] auto High422() const;
        [[nodiscard]] auto High444() const;
        [[nodiscard]] auto StereoHigh() const;
        [[nodiscard]] auto MultiviewHigh() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IHevcProfileIdsStatics
    {
        [[nodiscard]] auto MainChromaSubsampling420BitDepth8() const;
        [[nodiscard]] auto MainChromaSubsampling420BitDepth10() const;
        [[nodiscard]] auto MainChromaSubsampling420BitDepth12() const;
        [[nodiscard]] auto MainChromaSubsampling422BitDepth10() const;
        [[nodiscard]] auto MainChromaSubsampling422BitDepth12() const;
        [[nodiscard]] auto MainChromaSubsampling444BitDepth8() const;
        [[nodiscard]] auto MainChromaSubsampling444BitDepth10() const;
        [[nodiscard]] auto MainChromaSubsampling444BitDepth12() const;
        [[nodiscard]] auto MonochromeBitDepth12() const;
        [[nodiscard]] auto MonochromeBitDepth16() const;
        [[nodiscard]] auto MainIntraChromaSubsampling420BitDepth8() const;
        [[nodiscard]] auto MainIntraChromaSubsampling420BitDepth10() const;
        [[nodiscard]] auto MainIntraChromaSubsampling420BitDepth12() const;
        [[nodiscard]] auto MainIntraChromaSubsampling422BitDepth10() const;
        [[nodiscard]] auto MainIntraChromaSubsampling422BitDepth12() const;
        [[nodiscard]] auto MainIntraChromaSubsampling444BitDepth8() const;
        [[nodiscard]] auto MainIntraChromaSubsampling444BitDepth10() const;
        [[nodiscard]] auto MainIntraChromaSubsampling444BitDepth12() const;
        [[nodiscard]] auto MainIntraChromaSubsampling444BitDepth16() const;
        [[nodiscard]] auto MainStillChromaSubsampling420BitDepth8() const;
        [[nodiscard]] auto MainStillChromaSubsampling444BitDepth8() const;
        [[nodiscard]] auto MainStillChromaSubsampling444BitDepth16() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IHevcProfileIdsStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IHevcProfileIdsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IImageEncodingProperties
    {
        auto Width(uint32_t value) const;
        [[nodiscard]] auto Width() const;
        auto Height(uint32_t value) const;
        [[nodiscard]] auto Height() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IImageEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IImageEncodingProperties2
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IImageEncodingProperties2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics
    {
        auto CreateJpeg() const;
        auto CreatePng() const;
        auto CreateJpegXR() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2
    {
        auto CreateUncompressed(winrt::Windows::Media::MediaProperties::MediaPixelFormat const& format) const;
        auto CreateBmp() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics3
    {
        auto CreateHeif() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfile
    {
        auto Audio(winrt::Windows::Media::MediaProperties::AudioEncodingProperties const& value) const;
        [[nodiscard]] auto Audio() const;
        auto Video(winrt::Windows::Media::MediaProperties::VideoEncodingProperties const& value) const;
        [[nodiscard]] auto Video() const;
        auto Container(winrt::Windows::Media::MediaProperties::ContainerEncodingProperties const& value) const;
        [[nodiscard]] auto Container() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfile2
    {
        auto SetAudioTracks(param::iterable<winrt::Windows::Media::Core::AudioStreamDescriptor> const& value) const;
        auto GetAudioTracks() const;
        auto SetVideoTracks(param::iterable<winrt::Windows::Media::Core::VideoStreamDescriptor> const& value) const;
        auto GetVideoTracks() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfile2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfile3
    {
        auto SetTimedMetadataTracks(param::iterable<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor> const& value) const;
        auto GetTimedMetadataTracks() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfile3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics
    {
        auto CreateM4a(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateMp3(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateWma(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateMp4(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
        auto CreateWmv(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
        auto CreateFromFileAsync(winrt::Windows::Storage::IStorageFile const& file) const;
        auto CreateFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2
    {
        auto CreateWav(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateAvi(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3
    {
        auto CreateAlac(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateFlac(winrt::Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const;
        auto CreateHevc(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics4
    {
        auto CreateVp9(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
        auto CreateAv1(winrt::Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics4>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingProperties
    {
        [[nodiscard]] auto Properties() const;
        [[nodiscard]] auto Type() const;
        auto Subtype(param::hstring const& value) const;
        [[nodiscard]] auto Subtype() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics
    {
        [[nodiscard]] auto Aac() const;
        [[nodiscard]] auto AacAdts() const;
        [[nodiscard]] auto Ac3() const;
        [[nodiscard]] auto AmrNb() const;
        [[nodiscard]] auto AmrWb() const;
        [[nodiscard]] auto Argb32() const;
        [[nodiscard]] auto Asf() const;
        [[nodiscard]] auto Avi() const;
        [[nodiscard]] auto Bgra8() const;
        [[nodiscard]] auto Bmp() const;
        [[nodiscard]] auto Eac3() const;
        [[nodiscard]] auto Float() const;
        [[nodiscard]] auto Gif() const;
        [[nodiscard]] auto H263() const;
        [[nodiscard]] auto H264() const;
        [[nodiscard]] auto H264Es() const;
        [[nodiscard]] auto Hevc() const;
        [[nodiscard]] auto HevcEs() const;
        [[nodiscard]] auto Iyuv() const;
        [[nodiscard]] auto Jpeg() const;
        [[nodiscard]] auto JpegXr() const;
        [[nodiscard]] auto Mjpg() const;
        [[nodiscard]] auto Mpeg() const;
        [[nodiscard]] auto Mpeg1() const;
        [[nodiscard]] auto Mpeg2() const;
        [[nodiscard]] auto Mp3() const;
        [[nodiscard]] auto Mpeg4() const;
        [[nodiscard]] auto Nv12() const;
        [[nodiscard]] auto Pcm() const;
        [[nodiscard]] auto Png() const;
        [[nodiscard]] auto Rgb24() const;
        [[nodiscard]] auto Rgb32() const;
        [[nodiscard]] auto Tiff() const;
        [[nodiscard]] auto Wave() const;
        [[nodiscard]] auto Wma8() const;
        [[nodiscard]] auto Wma9() const;
        [[nodiscard]] auto Wmv3() const;
        [[nodiscard]] auto Wvc1() const;
        [[nodiscard]] auto Yuy2() const;
        [[nodiscard]] auto Yv12() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2
    {
        [[nodiscard]] auto Vp9() const;
        [[nodiscard]] auto L8() const;
        [[nodiscard]] auto L16() const;
        [[nodiscard]] auto D16() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3
    {
        [[nodiscard]] auto Alac() const;
        [[nodiscard]] auto Flac() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics4
    {
        [[nodiscard]] auto P010() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics4>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics5
    {
        [[nodiscard]] auto Heif() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics5>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics6
    {
        [[nodiscard]] auto Pgs() const;
        [[nodiscard]] auto Srt() const;
        [[nodiscard]] auto Ssa() const;
        [[nodiscard]] auto VobSub() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics6>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics7
    {
        [[nodiscard]] auto Av1() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics7>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics7<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMediaRatio
    {
        auto Numerator(uint32_t value) const;
        [[nodiscard]] auto Numerator() const;
        auto Denominator(uint32_t value) const;
        [[nodiscard]] auto Denominator() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMediaRatio>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMediaRatio<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics
    {
        [[nodiscard]] auto Simple() const;
        [[nodiscard]] auto Main() const;
        [[nodiscard]] auto SignalNoiseRatioScalable() const;
        [[nodiscard]] auto SpatiallyScalable() const;
        [[nodiscard]] auto High() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_ITimedMetadataEncodingProperties
    {
        auto SetFormatUserData(array_view<uint8_t const> value) const;
        auto GetFormatUserData(com_array<uint8_t>& value) const;
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_ITimedMetadataEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_ITimedMetadataEncodingPropertiesStatics
    {
        auto CreatePgs() const;
        auto CreateSrt() const;
        auto CreateSsa(array_view<uint8_t const> formatUserData) const;
        auto CreateVobSub(array_view<uint8_t const> formatUserData) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::ITimedMetadataEncodingPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_ITimedMetadataEncodingPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties
    {
        auto Bitrate(uint32_t value) const;
        [[nodiscard]] auto Bitrate() const;
        auto Width(uint32_t value) const;
        [[nodiscard]] auto Width() const;
        auto Height(uint32_t value) const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto FrameRate() const;
        [[nodiscard]] auto PixelAspectRatio() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties2
    {
        auto SetFormatUserData(array_view<uint8_t const> value) const;
        auto GetFormatUserData(com_array<uint8_t>& value) const;
        auto ProfileId(int32_t value) const;
        [[nodiscard]] auto ProfileId() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties3
    {
        [[nodiscard]] auto StereoscopicVideoPackingMode() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties4
    {
        [[nodiscard]] auto SphericalVideoFrameFormat() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties4<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingProperties5
    {
        auto Copy() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties5>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingProperties5<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics
    {
        auto CreateH264() const;
        auto CreateMpeg2() const;
        auto CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height) const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2
    {
        auto CreateHevc() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics3
    {
        auto CreateVp9() const;
        auto CreateAv1() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics3>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Media_MediaProperties_IVp9ProfileIdsStatics
    {
        [[nodiscard]] auto Profile0ChromaSubsampling420BitDepth8() const;
        [[nodiscard]] auto Profile2ChromaSubsampling420BitDepth10() const;
        [[nodiscard]] auto Profile2ChromaSubsampling420BitDepth12() const;
    };
    template <> struct consume<winrt::Windows::Media::MediaProperties::IVp9ProfileIdsStatics>
    {
        template <typename D> using type = consume_Windows_Media_MediaProperties_IVp9ProfileIdsStatics<D>;
    };
}
#endif
