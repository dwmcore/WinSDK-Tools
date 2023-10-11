// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Imaging_0_H
#define WINRT_Windows_Graphics_Imaging_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    enum class PropertyType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IKeyValuePair;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DSurface;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStream;
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t
    {
        Premultiplied = 0,
        Straight = 1,
        Ignore = 2,
    };
    enum class BitmapBufferAccessMode : int32_t
    {
        Read = 0,
        ReadWrite = 1,
        Write = 2,
    };
    enum class BitmapFlip : int32_t
    {
        None = 0,
        Horizontal = 1,
        Vertical = 2,
    };
    enum class BitmapInterpolationMode : int32_t
    {
        NearestNeighbor = 0,
        Linear = 1,
        Cubic = 2,
        Fant = 3,
    };
    enum class BitmapPixelFormat : int32_t
    {
        Unknown = 0,
        Rgba16 = 12,
        Rgba8 = 30,
        Gray16 = 57,
        Gray8 = 62,
        Bgra8 = 87,
        Nv12 = 103,
        P010 = 104,
        Yuy2 = 107,
    };
    enum class BitmapRotation : int32_t
    {
        None = 0,
        Clockwise90Degrees = 1,
        Clockwise180Degrees = 2,
        Clockwise270Degrees = 3,
    };
    enum class ColorManagementMode : int32_t
    {
        DoNotColorManage = 0,
        ColorManageToSRgb = 1,
    };
    enum class ExifOrientationMode : int32_t
    {
        IgnoreExifOrientation = 0,
        RespectExifOrientation = 1,
    };
    enum class JpegSubsamplingMode : int32_t
    {
        Default = 0,
        Y4Cb2Cr0 = 1,
        Y4Cb2Cr2 = 2,
        Y4Cb4Cr4 = 3,
    };
    enum class PngFilterMode : int32_t
    {
        Automatic = 0,
        None = 1,
        Sub = 2,
        Up = 3,
        Average = 4,
        Paeth = 5,
        Adaptive = 6,
    };
    enum class TiffCompressionMode : int32_t
    {
        Automatic = 0,
        None = 1,
        Ccitt3 = 2,
        Ccitt4 = 3,
        Lzw = 4,
        Rle = 5,
        Zip = 6,
        LzwhDifferencing = 7,
    };
    struct IBitmapBuffer;
    struct IBitmapCodecInformation;
    struct IBitmapDecoder;
    struct IBitmapDecoderStatics;
    struct IBitmapDecoderStatics2;
    struct IBitmapEncoder;
    struct IBitmapEncoderStatics;
    struct IBitmapEncoderStatics2;
    struct IBitmapEncoderWithSoftwareBitmap;
    struct IBitmapFrame;
    struct IBitmapFrameWithSoftwareBitmap;
    struct IBitmapProperties;
    struct IBitmapPropertiesView;
    struct IBitmapTransform;
    struct IBitmapTypedValue;
    struct IBitmapTypedValueFactory;
    struct IPixelDataProvider;
    struct ISoftwareBitmap;
    struct ISoftwareBitmapFactory;
    struct ISoftwareBitmapStatics;
    struct BitmapBuffer;
    struct BitmapCodecInformation;
    struct BitmapDecoder;
    struct BitmapEncoder;
    struct BitmapFrame;
    struct BitmapProperties;
    struct BitmapPropertiesView;
    struct BitmapPropertySet;
    struct BitmapTransform;
    struct BitmapTypedValue;
    struct ImageStream;
    struct PixelDataProvider;
    struct SoftwareBitmap;
    struct BitmapBounds;
    struct BitmapPlaneDescription;
    struct BitmapSize;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapBuffer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapDecoder>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapEncoder>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapTransform>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapTypedValue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::IPixelDataProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ISoftwareBitmap>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapBuffer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapCodecInformation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapDecoder>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapEncoder>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapPropertiesView>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapPropertySet>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapTransform>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapTypedValue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ImageStream>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::PixelDataProvider>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::SoftwareBitmap>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapAlphaMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapBufferAccessMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapFlip>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapInterpolationMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapRotation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ColorManagementMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::ExifOrientationMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::JpegSubsamplingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::PngFilterMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::TiffCompressionMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapBounds>{ using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t>; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapPlaneDescription>{ using type = struct_category<int32_t, int32_t, int32_t, int32_t>; };
    template <> struct category<winrt::Windows::Graphics::Imaging::BitmapSize>{ using type = struct_category<uint32_t, uint32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapBuffer> = L"Windows.Graphics.Imaging.BitmapBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapCodecInformation> = L"Windows.Graphics.Imaging.BitmapCodecInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapDecoder> = L"Windows.Graphics.Imaging.BitmapDecoder";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapEncoder> = L"Windows.Graphics.Imaging.BitmapEncoder";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapFrame> = L"Windows.Graphics.Imaging.BitmapFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapProperties> = L"Windows.Graphics.Imaging.BitmapProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapPropertiesView> = L"Windows.Graphics.Imaging.BitmapPropertiesView";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapPropertySet> = L"Windows.Graphics.Imaging.BitmapPropertySet";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapTransform> = L"Windows.Graphics.Imaging.BitmapTransform";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapTypedValue> = L"Windows.Graphics.Imaging.BitmapTypedValue";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ImageStream> = L"Windows.Graphics.Imaging.ImageStream";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::PixelDataProvider> = L"Windows.Graphics.Imaging.PixelDataProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::SoftwareBitmap> = L"Windows.Graphics.Imaging.SoftwareBitmap";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapAlphaMode> = L"Windows.Graphics.Imaging.BitmapAlphaMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapBufferAccessMode> = L"Windows.Graphics.Imaging.BitmapBufferAccessMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapFlip> = L"Windows.Graphics.Imaging.BitmapFlip";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapInterpolationMode> = L"Windows.Graphics.Imaging.BitmapInterpolationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapPixelFormat> = L"Windows.Graphics.Imaging.BitmapPixelFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapRotation> = L"Windows.Graphics.Imaging.BitmapRotation";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ColorManagementMode> = L"Windows.Graphics.Imaging.ColorManagementMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ExifOrientationMode> = L"Windows.Graphics.Imaging.ExifOrientationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::JpegSubsamplingMode> = L"Windows.Graphics.Imaging.JpegSubsamplingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::PngFilterMode> = L"Windows.Graphics.Imaging.PngFilterMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::TiffCompressionMode> = L"Windows.Graphics.Imaging.TiffCompressionMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapBounds> = L"Windows.Graphics.Imaging.BitmapBounds";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapPlaneDescription> = L"Windows.Graphics.Imaging.BitmapPlaneDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::BitmapSize> = L"Windows.Graphics.Imaging.BitmapSize";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapBuffer> = L"Windows.Graphics.Imaging.IBitmapBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation> = L"Windows.Graphics.Imaging.IBitmapCodecInformation";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapDecoder> = L"Windows.Graphics.Imaging.IBitmapDecoder";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics> = L"Windows.Graphics.Imaging.IBitmapDecoderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2> = L"Windows.Graphics.Imaging.IBitmapDecoderStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapEncoder> = L"Windows.Graphics.Imaging.IBitmapEncoder";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics> = L"Windows.Graphics.Imaging.IBitmapEncoderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2> = L"Windows.Graphics.Imaging.IBitmapEncoderStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> = L"Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapFrame> = L"Windows.Graphics.Imaging.IBitmapFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> = L"Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapProperties> = L"Windows.Graphics.Imaging.IBitmapProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView> = L"Windows.Graphics.Imaging.IBitmapPropertiesView";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapTransform> = L"Windows.Graphics.Imaging.IBitmapTransform";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapTypedValue> = L"Windows.Graphics.Imaging.IBitmapTypedValue";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory> = L"Windows.Graphics.Imaging.IBitmapTypedValueFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::IPixelDataProvider> = L"Windows.Graphics.Imaging.IPixelDataProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmap> = L"Windows.Graphics.Imaging.ISoftwareBitmap";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory> = L"Windows.Graphics.Imaging.ISoftwareBitmapFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics> = L"Windows.Graphics.Imaging.ISoftwareBitmapStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapBuffer>{ 0xA53E04C4,0x399C,0x438C,{ 0xB2,0x8F,0xA6,0x3A,0x6B,0x83,0xD1,0xA1 } }; // A53E04C4-399C-438C-B28F-A63A6B83D1A1
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation>{ 0x400CAAF2,0xC4B0,0x4392,{ 0xA3,0xB0,0x6F,0x6F,0x9B,0xA9,0x5C,0xB4 } }; // 400CAAF2-C4B0-4392-A3B0-6F6F9BA95CB4
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapDecoder>{ 0xACEF22BA,0x1D74,0x4C91,{ 0x9D,0xFC,0x96,0x20,0x74,0x52,0x33,0xE6 } }; // ACEF22BA-1D74-4C91-9DFC-9620745233E6
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics>{ 0x438CCB26,0xBCEF,0x4E95,{ 0xBA,0xD6,0x23,0xA8,0x22,0xE5,0x8D,0x01 } }; // 438CCB26-BCEF-4E95-BAD6-23A822E58D01
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2>{ 0x50BA68EA,0x99A1,0x40C4,{ 0x80,0xD9,0xAE,0xF0,0xDA,0xFA,0x6C,0x3F } }; // 50BA68EA-99A1-40C4-80D9-AEF0DAFA6C3F
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapEncoder>{ 0x2BC468E3,0xE1F8,0x4B54,{ 0x95,0xE8,0x32,0x91,0x95,0x51,0xCE,0x62 } }; // 2BC468E3-E1F8-4B54-95E8-32919551CE62
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics>{ 0xA74356A7,0xA4E4,0x4EB9,{ 0x8E,0x40,0x56,0x4D,0xE7,0xE1,0xCC,0xB2 } }; // A74356A7-A4E4-4EB9-8E40-564DE7E1CCB2
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2>{ 0x33CBC259,0xFE31,0x41B1,{ 0xB8,0x12,0x08,0x6D,0x21,0xE8,0x7E,0x16 } }; // 33CBC259-FE31-41B1-B812-086D21E87E16
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>{ 0x686CD241,0x4330,0x4C77,{ 0xAC,0xE4,0x03,0x34,0x96,0x8B,0x17,0x68 } }; // 686CD241-4330-4C77-ACE4-0334968B1768
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapFrame>{ 0x72A49A1C,0x8081,0x438D,{ 0x91,0xBC,0x94,0xEC,0xFC,0x81,0x85,0xC6 } }; // 72A49A1C-8081-438D-91BC-94ECFC8185C6
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>{ 0xFE287C9A,0x420C,0x4963,{ 0x87,0xAD,0x69,0x14,0x36,0xE0,0x83,0x83 } }; // FE287C9A-420C-4963-87AD-691436E08383
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapProperties>{ 0xEA9F4F1B,0xB505,0x4450,{ 0xA4,0xD1,0xE8,0xCA,0x94,0x52,0x9D,0x8D } }; // EA9F4F1B-B505-4450-A4D1-E8CA94529D8D
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>{ 0x7E0FE87A,0x3A70,0x48F8,{ 0x9C,0x55,0x19,0x6C,0xF5,0xA5,0x45,0xF5 } }; // 7E0FE87A-3A70-48F8-9C55-196CF5A545F5
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapTransform>{ 0xAE755344,0xE268,0x4D35,{ 0xAD,0xCF,0xE9,0x95,0xD3,0x1A,0x8D,0x34 } }; // AE755344-E268-4D35-ADCF-E995D31A8D34
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapTypedValue>{ 0xCD8044A9,0x2443,0x4000,{ 0xB0,0xCD,0x79,0x31,0x6C,0x56,0xF5,0x89 } }; // CD8044A9-2443-4000-B0CD-79316C56F589
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory>{ 0x92DBB599,0xCE13,0x46BB,{ 0x95,0x45,0xCB,0x3A,0x3F,0x63,0xEB,0x8B } }; // 92DBB599-CE13-46BB-9545-CB3A3F63EB8B
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::IPixelDataProvider>{ 0xDD831F25,0x185C,0x4595,{ 0x9F,0xB9,0xCC,0xBE,0x6E,0xC1,0x8A,0x6F } }; // DD831F25-185C-4595-9FB9-CCBE6EC18A6F
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmap>{ 0x689E0708,0x7EEF,0x483F,{ 0x96,0x3F,0xDA,0x93,0x88,0x18,0xE0,0x73 } }; // 689E0708-7EEF-483F-963F-DA938818E073
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory>{ 0xC99FEB69,0x2D62,0x4D47,{ 0xA6,0xB3,0x4F,0xDB,0x6A,0x07,0xFD,0xF8 } }; // C99FEB69-2D62-4D47-A6B3-4FDB6A07FDF8
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics>{ 0xDF0385DB,0x672F,0x4A9D,{ 0x80,0x6E,0xC2,0x44,0x2F,0x34,0x3E,0x86 } }; // DF0385DB-672F-4A9D-806E-C2442F343E86
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapBuffer>{ using type = winrt::Windows::Graphics::Imaging::IBitmapBuffer; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapCodecInformation>{ using type = winrt::Windows::Graphics::Imaging::IBitmapCodecInformation; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapDecoder>{ using type = winrt::Windows::Graphics::Imaging::IBitmapDecoder; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapEncoder>{ using type = winrt::Windows::Graphics::Imaging::IBitmapEncoder; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapFrame>{ using type = winrt::Windows::Graphics::Imaging::IBitmapFrame; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapProperties>{ using type = winrt::Windows::Graphics::Imaging::IBitmapProperties; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapPropertiesView>{ using type = winrt::Windows::Graphics::Imaging::IBitmapPropertiesView; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapPropertySet>{ using type = winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapTransform>{ using type = winrt::Windows::Graphics::Imaging::IBitmapTransform; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::BitmapTypedValue>{ using type = winrt::Windows::Graphics::Imaging::IBitmapTypedValue; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::ImageStream>{ using type = winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::PixelDataProvider>{ using type = winrt::Windows::Graphics::Imaging::IPixelDataProvider; };
    template <> struct default_interface<winrt::Windows::Graphics::Imaging::SoftwareBitmap>{ using type = winrt::Windows::Graphics::Imaging::ISoftwareBitmap; };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPlaneCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPlaneDescription(int32_t, struct struct_Windows_Graphics_Imaging_BitmapPlaneDescription*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CodecId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_FileExtensions(void**) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_MimeTypes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapDecoder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapContainerProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_DecoderInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPreviewAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetFrameAsync(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BmpDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_JpegDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PngDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TiffDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GifDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_JpegXRDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_IcoDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall GetDecoderInformationEnumerator(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithIdAsync(winrt::guid, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeifDecoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_WebpDecoderId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapEncoder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncoderInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapContainerProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsThumbnailGenerated(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsThumbnailGenerated(bool) noexcept = 0;
            virtual int32_t __stdcall get_GeneratedThumbnailWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GeneratedThumbnailWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_GeneratedThumbnailHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GeneratedThumbnailHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_BitmapTransform(void**) noexcept = 0;
            virtual int32_t __stdcall SetPixelData(int32_t, int32_t, uint32_t, uint32_t, double, double, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GoToNextFrameAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GoToNextFrameWithEncodingOptionsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FlushAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BmpEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_JpegEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PngEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_TiffEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_GifEncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_JpegXREncoderId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall GetEncoderInformationEnumerator(void**) noexcept = 0;
            virtual int32_t __stdcall CreateAsync(winrt::guid, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithEncodingOptionsAsync(winrt::guid, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForTranscodingAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForInPlacePropertyEncodingAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeifEncoderId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetSoftwareBitmap(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetThumbnailAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapProperties(void**) noexcept = 0;
            virtual int32_t __stdcall get_BitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DpiX(double*) noexcept = 0;
            virtual int32_t __stdcall get_DpiY(double*) noexcept = 0;
            virtual int32_t __stdcall get_PixelWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OrientedPixelWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OrientedPixelHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetPixelDataAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetPixelDataTransformedAsync(int32_t, int32_t, void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetSoftwareBitmapAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSoftwareBitmapConvertedAsync(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetSoftwareBitmapTransformedAsync(int32_t, int32_t, void*, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetPropertiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetPropertiesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScaledWidth(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaledWidth(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ScaledHeight(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ScaledHeight(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_InterpolationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InterpolationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Flip(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Flip(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds*) noexcept = 0;
            virtual int32_t __stdcall put_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapTypedValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::IPixelDataProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DetachPixelData(uint32_t* __pixelDataSize, uint8_t**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::ISoftwareBitmap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PixelHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsReadOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DpiX(double) noexcept = 0;
            virtual int32_t __stdcall get_DpiX(double*) noexcept = 0;
            virtual int32_t __stdcall put_DpiY(double) noexcept = 0;
            virtual int32_t __stdcall get_DpiY(double*) noexcept = 0;
            virtual int32_t __stdcall LockBuffer(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CopyTo(void*) noexcept = 0;
            virtual int32_t __stdcall CopyFromBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall CopyToBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall GetReadOnlyView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithAlpha(int32_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Copy(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Convert(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConvertWithAlpha(void*, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCopyFromBuffer(void*, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCopyWithAlphaFromBuffer(void*, int32_t, int32_t, int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCopyFromSurfaceAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCopyWithAlphaFromSurfaceAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapBuffer
    {
        auto GetPlaneCount() const;
        auto GetPlaneDescription(int32_t index) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapBuffer>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapCodecInformation
    {
        [[nodiscard]] auto CodecId() const;
        [[nodiscard]] auto FileExtensions() const;
        [[nodiscard]] auto FriendlyName() const;
        [[nodiscard]] auto MimeTypes() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapDecoder
    {
        [[nodiscard]] auto BitmapContainerProperties() const;
        [[nodiscard]] auto DecoderInformation() const;
        [[nodiscard]] auto FrameCount() const;
        auto GetPreviewAsync() const;
        auto GetFrameAsync(uint32_t frameIndex) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapDecoder>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapDecoder<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapDecoderStatics
    {
        [[nodiscard]] auto BmpDecoderId() const;
        [[nodiscard]] auto JpegDecoderId() const;
        [[nodiscard]] auto PngDecoderId() const;
        [[nodiscard]] auto TiffDecoderId() const;
        [[nodiscard]] auto GifDecoderId() const;
        [[nodiscard]] auto JpegXRDecoderId() const;
        [[nodiscard]] auto IcoDecoderId() const;
        auto GetDecoderInformationEnumerator() const;
        auto CreateAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto CreateAsync(winrt::guid const& decoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapDecoderStatics2
    {
        [[nodiscard]] auto HeifDecoderId() const;
        [[nodiscard]] auto WebpDecoderId() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics2>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapDecoderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapEncoder
    {
        [[nodiscard]] auto EncoderInformation() const;
        [[nodiscard]] auto BitmapProperties() const;
        [[nodiscard]] auto BitmapContainerProperties() const;
        [[nodiscard]] auto IsThumbnailGenerated() const;
        auto IsThumbnailGenerated(bool value) const;
        [[nodiscard]] auto GeneratedThumbnailWidth() const;
        auto GeneratedThumbnailWidth(uint32_t value) const;
        [[nodiscard]] auto GeneratedThumbnailHeight() const;
        auto GeneratedThumbnailHeight(uint32_t value) const;
        [[nodiscard]] auto BitmapTransform() const;
        auto SetPixelData(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, array_view<uint8_t const> pixels) const;
        auto GoToNextFrameAsync() const;
        auto GoToNextFrameAsync(param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const;
        auto FlushAsync() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapEncoder>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapEncoder<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapEncoderStatics
    {
        [[nodiscard]] auto BmpEncoderId() const;
        [[nodiscard]] auto JpegEncoderId() const;
        [[nodiscard]] auto PngEncoderId() const;
        [[nodiscard]] auto TiffEncoderId() const;
        [[nodiscard]] auto GifEncoderId() const;
        [[nodiscard]] auto JpegXREncoderId() const;
        auto GetEncoderInformationEnumerator() const;
        auto CreateAsync(winrt::guid const& encoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const;
        auto CreateAsync(winrt::guid const& encoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const;
        auto CreateForTranscodingAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const;
        auto CreateForInPlacePropertyEncodingAsync(winrt::Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapEncoderStatics2
    {
        [[nodiscard]] auto HeifEncoderId() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics2>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapEncoderStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap
    {
        auto SetSoftwareBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapFrame
    {
        auto GetThumbnailAsync() const;
        [[nodiscard]] auto BitmapProperties() const;
        [[nodiscard]] auto BitmapPixelFormat() const;
        [[nodiscard]] auto BitmapAlphaMode() const;
        [[nodiscard]] auto DpiX() const;
        [[nodiscard]] auto DpiY() const;
        [[nodiscard]] auto PixelWidth() const;
        [[nodiscard]] auto PixelHeight() const;
        [[nodiscard]] auto OrientedPixelWidth() const;
        [[nodiscard]] auto OrientedPixelHeight() const;
        auto GetPixelDataAsync() const;
        auto GetPixelDataAsync(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, winrt::Windows::Graphics::Imaging::BitmapTransform const& transform, winrt::Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, winrt::Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapFrame>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap
    {
        auto GetSoftwareBitmapAsync() const;
        auto GetSoftwareBitmapAsync(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode) const;
        auto GetSoftwareBitmapAsync(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, winrt::Windows::Graphics::Imaging::BitmapTransform const& transform, winrt::Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, winrt::Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapProperties
    {
        auto SetPropertiesAsync(param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>> const& propertiesToSet) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapProperties>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapPropertiesView
    {
        auto GetPropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapPropertiesView<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapTransform
    {
        [[nodiscard]] auto ScaledWidth() const;
        auto ScaledWidth(uint32_t value) const;
        [[nodiscard]] auto ScaledHeight() const;
        auto ScaledHeight(uint32_t value) const;
        [[nodiscard]] auto InterpolationMode() const;
        auto InterpolationMode(winrt::Windows::Graphics::Imaging::BitmapInterpolationMode const& value) const;
        [[nodiscard]] auto Flip() const;
        auto Flip(winrt::Windows::Graphics::Imaging::BitmapFlip const& value) const;
        [[nodiscard]] auto Rotation() const;
        auto Rotation(winrt::Windows::Graphics::Imaging::BitmapRotation const& value) const;
        [[nodiscard]] auto Bounds() const;
        auto Bounds(winrt::Windows::Graphics::Imaging::BitmapBounds const& value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapTransform>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapTransform<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapTypedValue
    {
        [[nodiscard]] auto Value() const;
        [[nodiscard]] auto Type() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapTypedValue>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapTypedValue<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IBitmapTypedValueFactory
    {
        auto Create(winrt::Windows::Foundation::IInspectable const& value, winrt::Windows::Foundation::PropertyType const& type) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IBitmapTypedValueFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_IPixelDataProvider
    {
        auto DetachPixelData() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::IPixelDataProvider>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_IPixelDataProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_ISoftwareBitmap
    {
        [[nodiscard]] auto BitmapPixelFormat() const;
        [[nodiscard]] auto BitmapAlphaMode() const;
        [[nodiscard]] auto PixelWidth() const;
        [[nodiscard]] auto PixelHeight() const;
        [[nodiscard]] auto IsReadOnly() const;
        auto DpiX(double value) const;
        [[nodiscard]] auto DpiX() const;
        auto DpiY(double value) const;
        [[nodiscard]] auto DpiY() const;
        auto LockBuffer(winrt::Windows::Graphics::Imaging::BitmapBufferAccessMode const& mode) const;
        auto CopyTo(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
        auto CopyFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        auto CopyToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
        auto GetReadOnlyView() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::ISoftwareBitmap>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory
    {
        auto Create(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const;
        auto CreateWithAlpha(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics
    {
        auto Copy(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source) const;
        auto Convert(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format) const;
        auto Convert(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
        auto CreateCopyFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const;
        auto CreateCopyFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
        auto CreateCopyFromSurfaceAsync(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const;
        auto CreateCopyFromSurfaceAsync(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>;
    };
    struct struct_Windows_Graphics_Imaging_BitmapBounds
    {
        uint32_t X;
        uint32_t Y;
        uint32_t Width;
        uint32_t Height;
    };
    template <> struct abi<Windows::Graphics::Imaging::BitmapBounds>
    {
        using type = struct_Windows_Graphics_Imaging_BitmapBounds;
    };
    struct struct_Windows_Graphics_Imaging_BitmapPlaneDescription
    {
        int32_t StartIndex;
        int32_t Width;
        int32_t Height;
        int32_t Stride;
    };
    template <> struct abi<Windows::Graphics::Imaging::BitmapPlaneDescription>
    {
        using type = struct_Windows_Graphics_Imaging_BitmapPlaneDescription;
    };
    struct struct_Windows_Graphics_Imaging_BitmapSize
    {
        uint32_t Width;
        uint32_t Height;
    };
    template <> struct abi<Windows::Graphics::Imaging::BitmapSize>
    {
        using type = struct_Windows_Graphics_Imaging_BitmapSize;
    };
}
#endif
