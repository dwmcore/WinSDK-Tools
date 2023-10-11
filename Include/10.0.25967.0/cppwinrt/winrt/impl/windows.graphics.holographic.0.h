// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Holographic_0_H
#define WINRT_Windows_Graphics_Holographic_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
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
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct PerceptionTimestamp;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialCoordinateSystem;
    struct SpatialLocator;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct CoreWindow;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic
{
    enum class HolographicDepthReprojectionMethod : int32_t
    {
        DepthReprojection = 0,
        AutoPlanar = 1,
    };
    enum class HolographicFramePresentResult : int32_t
    {
        Success = 0,
        DeviceRemoved = 1,
    };
    enum class HolographicFramePresentWaitBehavior : int32_t
    {
        WaitForFrameToFinish = 0,
        DoNotWaitForFrameToFinish = 1,
    };
    enum class HolographicReprojectionMode : int32_t
    {
        PositionAndOrientation = 0,
        OrientationOnly = 1,
        Disabled = 2,
    };
    enum class HolographicSpaceUserPresence : int32_t
    {
        Absent = 0,
        PresentPassive = 1,
        PresentActive = 2,
    };
    enum class HolographicViewConfigurationKind : int32_t
    {
        Display = 0,
        PhotoVideoCamera = 1,
    };
    struct IHolographicCamera;
    struct IHolographicCamera2;
    struct IHolographicCamera3;
    struct IHolographicCamera4;
    struct IHolographicCamera5;
    struct IHolographicCamera6;
    struct IHolographicCameraPose;
    struct IHolographicCameraPose2;
    struct IHolographicCameraRenderingParameters;
    struct IHolographicCameraRenderingParameters2;
    struct IHolographicCameraRenderingParameters3;
    struct IHolographicCameraRenderingParameters4;
    struct IHolographicCameraViewportParameters;
    struct IHolographicDisplay;
    struct IHolographicDisplay2;
    struct IHolographicDisplay3;
    struct IHolographicDisplayStatics;
    struct IHolographicFrame;
    struct IHolographicFrame2;
    struct IHolographicFrame3;
    struct IHolographicFramePrediction;
    struct IHolographicFramePresentationMonitor;
    struct IHolographicFramePresentationReport;
    struct IHolographicFrameRenderingReport;
    struct IHolographicFrameScanoutMonitor;
    struct IHolographicFrameScanoutReport;
    struct IHolographicQuadLayer;
    struct IHolographicQuadLayerFactory;
    struct IHolographicQuadLayerUpdateParameters;
    struct IHolographicQuadLayerUpdateParameters2;
    struct IHolographicSpace;
    struct IHolographicSpace2;
    struct IHolographicSpace3;
    struct IHolographicSpaceCameraAddedEventArgs;
    struct IHolographicSpaceCameraRemovedEventArgs;
    struct IHolographicSpaceStatics;
    struct IHolographicSpaceStatics2;
    struct IHolographicSpaceStatics3;
    struct IHolographicViewConfiguration;
    struct IHolographicViewConfiguration2;
    struct HolographicCamera;
    struct HolographicCameraPose;
    struct HolographicCameraRenderingParameters;
    struct HolographicCameraViewportParameters;
    struct HolographicDisplay;
    struct HolographicFrame;
    struct HolographicFramePrediction;
    struct HolographicFramePresentationMonitor;
    struct HolographicFramePresentationReport;
    struct HolographicFrameRenderingReport;
    struct HolographicFrameScanoutMonitor;
    struct HolographicFrameScanoutReport;
    struct HolographicQuadLayer;
    struct HolographicQuadLayerUpdateParameters;
    struct HolographicSpace;
    struct HolographicSpaceCameraAddedEventArgs;
    struct HolographicSpaceCameraRemovedEventArgs;
    struct HolographicViewConfiguration;
    struct HolographicAdapterId;
    struct HolographicFrameId;
    struct HolographicStereoTransform;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCamera6>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraPose>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicDisplay>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicDisplay2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicDisplay3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrame2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrame3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpace>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpace2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpace3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicCamera>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicCameraPose>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicDisplay>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFrameRenderingReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicQuadLayer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicSpace>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicViewConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicDepthReprojectionMethod>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFramePresentResult>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicReprojectionMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicSpaceUserPresence>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicViewConfigurationKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicAdapterId>{ using type = struct_category<uint32_t, int32_t>; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicFrameId>{ using type = struct_category<uint64_t>; };
    template <> struct category<winrt::Windows::Graphics::Holographic::HolographicStereoTransform>{ using type = struct_category<winrt::Windows::Foundation::Numerics::float4x4, winrt::Windows::Foundation::Numerics::float4x4>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicCamera> = L"Windows.Graphics.Holographic.HolographicCamera";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicCameraPose> = L"Windows.Graphics.Holographic.HolographicCameraPose";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters> = L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters> = L"Windows.Graphics.Holographic.HolographicCameraViewportParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicDisplay> = L"Windows.Graphics.Holographic.HolographicDisplay";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFrame> = L"Windows.Graphics.Holographic.HolographicFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFramePrediction> = L"Windows.Graphics.Holographic.HolographicFramePrediction";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor> = L"Windows.Graphics.Holographic.HolographicFramePresentationMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport> = L"Windows.Graphics.Holographic.HolographicFramePresentationReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFrameRenderingReport> = L"Windows.Graphics.Holographic.HolographicFrameRenderingReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutMonitor> = L"Windows.Graphics.Holographic.HolographicFrameScanoutMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutReport> = L"Windows.Graphics.Holographic.HolographicFrameScanoutReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicQuadLayer> = L"Windows.Graphics.Holographic.HolographicQuadLayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters> = L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicSpace> = L"Windows.Graphics.Holographic.HolographicSpace";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> = L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> = L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicViewConfiguration> = L"Windows.Graphics.Holographic.HolographicViewConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicDepthReprojectionMethod> = L"Windows.Graphics.Holographic.HolographicDepthReprojectionMethod";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFramePresentResult> = L"Windows.Graphics.Holographic.HolographicFramePresentResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior> = L"Windows.Graphics.Holographic.HolographicFramePresentWaitBehavior";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicReprojectionMode> = L"Windows.Graphics.Holographic.HolographicReprojectionMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicSpaceUserPresence> = L"Windows.Graphics.Holographic.HolographicSpaceUserPresence";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicViewConfigurationKind> = L"Windows.Graphics.Holographic.HolographicViewConfigurationKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicAdapterId> = L"Windows.Graphics.Holographic.HolographicAdapterId";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicFrameId> = L"Windows.Graphics.Holographic.HolographicFrameId";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::HolographicStereoTransform> = L"Windows.Graphics.Holographic.HolographicStereoTransform";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera> = L"Windows.Graphics.Holographic.IHolographicCamera";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera2> = L"Windows.Graphics.Holographic.IHolographicCamera2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera3> = L"Windows.Graphics.Holographic.IHolographicCamera3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera4> = L"Windows.Graphics.Holographic.IHolographicCamera4";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera5> = L"Windows.Graphics.Holographic.IHolographicCamera5";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCamera6> = L"Windows.Graphics.Holographic.IHolographicCamera6";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraPose> = L"Windows.Graphics.Holographic.IHolographicCameraPose";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2> = L"Windows.Graphics.Holographic.IHolographicCameraPose2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3> = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4> = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters> = L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay> = L"Windows.Graphics.Holographic.IHolographicDisplay";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay2> = L"Windows.Graphics.Holographic.IHolographicDisplay2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay3> = L"Windows.Graphics.Holographic.IHolographicDisplay3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics> = L"Windows.Graphics.Holographic.IHolographicDisplayStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrame> = L"Windows.Graphics.Holographic.IHolographicFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrame2> = L"Windows.Graphics.Holographic.IHolographicFrame2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrame3> = L"Windows.Graphics.Holographic.IHolographicFrame3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction> = L"Windows.Graphics.Holographic.IHolographicFramePrediction";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor> = L"Windows.Graphics.Holographic.IHolographicFramePresentationMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport> = L"Windows.Graphics.Holographic.IHolographicFramePresentationReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport> = L"Windows.Graphics.Holographic.IHolographicFrameRenderingReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor> = L"Windows.Graphics.Holographic.IHolographicFrameScanoutMonitor";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport> = L"Windows.Graphics.Holographic.IHolographicFrameScanoutReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer> = L"Windows.Graphics.Holographic.IHolographicQuadLayer";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory> = L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters> = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2> = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpace> = L"Windows.Graphics.Holographic.IHolographicSpace";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpace2> = L"Windows.Graphics.Holographic.IHolographicSpace2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpace3> = L"Windows.Graphics.Holographic.IHolographicSpace3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> = L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> = L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics> = L"Windows.Graphics.Holographic.IHolographicSpaceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2> = L"Windows.Graphics.Holographic.IHolographicSpaceStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3> = L"Windows.Graphics.Holographic.IHolographicSpaceStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration> = L"Windows.Graphics.Holographic.IHolographicViewConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration2> = L"Windows.Graphics.Holographic.IHolographicViewConfiguration2";
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera>{ 0xE4E98445,0x9BED,0x4980,{ 0x9B,0xA0,0xE8,0x76,0x80,0xD1,0xCB,0x74 } }; // E4E98445-9BED-4980-9BA0-E87680D1CB74
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera2>{ 0xB55B9F1A,0xBA8C,0x4F84,{ 0xAD,0x79,0x2E,0x7E,0x1E,0x24,0x50,0xF3 } }; // B55B9F1A-BA8C-4F84-AD79-2E7E1E2450F3
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera3>{ 0x45AA4FB3,0x7B59,0x524E,{ 0x4A,0x3F,0x4A,0x6A,0xD6,0x65,0x04,0x77 } }; // 45AA4FB3-7B59-524E-4A3F-4A6AD6650477
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera4>{ 0x9A2531D6,0x4723,0x4F39,{ 0xA9,0xA5,0x9D,0x05,0x18,0x1D,0x9B,0x44 } }; // 9A2531D6-4723-4F39-A9A5-9D05181D9B44
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera5>{ 0x229706F2,0x628D,0x4EF5,{ 0x9C,0x08,0xA6,0x3F,0xDD,0x77,0x87,0xC6 } }; // 229706F2-628D-4EF5-9C08-A63FDD7787C6
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCamera6>{ 0x0209194F,0x632D,0x5154,{ 0xAB,0x52,0x0B,0x5D,0x15,0xB1,0x25,0x05 } }; // 0209194F-632D-5154-AB52-0B5D15B12505
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraPose>{ 0x0D7D7E30,0x12DE,0x45BD,{ 0x91,0x2B,0xC7,0xF6,0x56,0x15,0x99,0xD1 } }; // 0D7D7E30-12DE-45BD-912B-C7F6561599D1
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2>{ 0x232BE073,0x5D2D,0x4560,{ 0x81,0x4E,0x26,0x97,0xC4,0xFC,0xE1,0x6B } }; // 232BE073-5D2D-4560-814E-2697C4FCE16B
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>{ 0x8EAC2ED1,0x5BF4,0x4E16,{ 0x82,0x36,0xAE,0x08,0x00,0xC1,0x1D,0x0D } }; // 8EAC2ED1-5BF4-4E16-8236-AE0800C11D0D
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>{ 0x261270E3,0xB696,0x4634,{ 0x94,0xD6,0xBE,0x06,0x81,0x64,0x35,0x99 } }; // 261270E3-B696-4634-94D6-BE0681643599
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>{ 0xB1AA513F,0x136D,0x4B06,{ 0xB9,0xD4,0xE4,0xB9,0x14,0xCD,0x06,0x83 } }; // B1AA513F-136D-4B06-B9D4-E4B914CD0683
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4>{ 0x0878FA4C,0xE163,0x57DC,{ 0x82,0xB7,0xC4,0x06,0xAB,0x3E,0x05,0x37 } }; // 0878FA4C-E163-57DC-82B7-C406AB3E0537
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters>{ 0x80CDF3F7,0x842A,0x41E1,{ 0x93,0xED,0x56,0x92,0xAB,0x1F,0xBB,0x10 } }; // 80CDF3F7-842A-41E1-93ED-5692AB1FBB10
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay>{ 0x9ACEA414,0x1D9F,0x4090,{ 0xA3,0x88,0x90,0xC0,0x6F,0x6E,0xAE,0x9C } }; // 9ACEA414-1D9F-4090-A388-90C06F6EAE9C
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay2>{ 0x75AC3F82,0xE755,0x436C,{ 0x8D,0x96,0x4D,0x32,0xD1,0x31,0x47,0x3E } }; // 75AC3F82-E755-436C-8D96-4D32D131473E
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicDisplay3>{ 0xFC4C6AC6,0x6480,0x5008,{ 0xB2,0x9E,0x15,0x7D,0x77,0xC8,0x43,0xF7 } }; // FC4C6AC6-6480-5008-B29E-157D77C843F7
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics>{ 0xCB374983,0xE7B0,0x4841,{ 0x83,0x55,0x3A,0xE5,0xB5,0x36,0xE9,0xA4 } }; // CB374983-E7B0-4841-8355-3AE5B536E9A4
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrame>{ 0xC6988EB6,0xA8B9,0x3054,{ 0xA6,0xEB,0xD6,0x24,0xB6,0x53,0x63,0x75 } }; // C6988EB6-A8B9-3054-A6EB-D624B6536375
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrame2>{ 0x283F37BF,0x3BF2,0x5E91,{ 0x66,0x33,0x87,0x05,0x74,0xE6,0xF2,0x17 } }; // 283F37BF-3BF2-5E91-6633-870574E6F217
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrame3>{ 0xE5E964C9,0x8A27,0x55D3,{ 0x9F,0x98,0x94,0x53,0x0D,0x36,0x90,0x52 } }; // E5E964C9-8A27-55D3-9F98-94530D369052
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction>{ 0x520F4DE1,0x5C0A,0x4E79,{ 0xA8,0x1E,0x6A,0xBE,0x02,0xBB,0x27,0x39 } }; // 520F4DE1-5C0A-4E79-A81E-6ABE02BB2739
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>{ 0xCA87256C,0x6FAE,0x428E,{ 0xBB,0x83,0x25,0xDF,0xEE,0x51,0x13,0x6B } }; // CA87256C-6FAE-428E-BB83-25DFEE51136B
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport>{ 0x80BAF614,0xF2F4,0x4C8A,{ 0x8D,0xE3,0x06,0x5C,0x78,0xF6,0xD5,0xDE } }; // 80BAF614-F2F4-4C8A-8DE3-065C78F6D5DE
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport>{ 0x05F32DE4,0xE384,0x51B3,{ 0xB9,0x34,0xF0,0xD3,0xA0,0xF7,0x86,0x06 } }; // 05F32DE4-E384-51B3-B934-F0D3A0F78606
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>{ 0x7E83EFA9,0x843C,0x5401,{ 0x80,0x95,0x9B,0xC1,0xB8,0xB0,0x86,0x38 } }; // 7E83EFA9-843C-5401-8095-9BC1B8B08638
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport>{ 0x0EBBE606,0x03A0,0x5CA0,{ 0xB4,0x6E,0xBB,0xA0,0x68,0xD7,0x23,0x3F } }; // 0EBBE606-03A0-5CA0-B46E-BBA068D7233F
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer>{ 0x903460C9,0xC9D9,0x5D5C,{ 0x41,0xAC,0xA2,0xD5,0xAB,0x0F,0xD3,0x31 } }; // 903460C9-C9D9-5D5C-41AC-A2D5AB0FD331
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory>{ 0xA67538F3,0x5A14,0x5A10,{ 0x48,0x9A,0x45,0x50,0x65,0xB3,0x7B,0x76 } }; // A67538F3-5A14-5A10-489A-455065B37B76
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>{ 0x2B0EA3B0,0x798D,0x5BCA,{ 0x55,0xC2,0x2C,0x0C,0x76,0x2E,0xBB,0x08 } }; // 2B0EA3B0-798D-5BCA-55C2-2C0C762EBB08
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>{ 0x4F33D32D,0x82C1,0x46C1,{ 0x89,0x80,0x3C,0xB7,0x0D,0x98,0x18,0x2B } }; // 4F33D32D-82C1-46C1-8980-3CB70D98182B
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpace>{ 0x4380DBA6,0x5E78,0x434F,{ 0x80,0x7C,0x34,0x33,0xD1,0xEF,0xE8,0xB7 } }; // 4380DBA6-5E78-434F-807C-3433D1EFE8B7
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpace2>{ 0x4F81A9A8,0xB7FF,0x4883,{ 0x98,0x27,0x7D,0x67,0x72,0x87,0xEA,0x70 } }; // 4F81A9A8-B7FF-4883-9827-7D677287EA70
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpace3>{ 0xDF1733D1,0xF224,0x587E,{ 0x8D,0x71,0x1E,0x8F,0xC8,0xF0,0x7B,0x1F } }; // DF1733D1-F224-587E-8D71-1E8FC8F07B1F
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>{ 0x58F1DA35,0xBBB3,0x3C8F,{ 0x99,0x3D,0x6C,0x80,0xE7,0xFE,0xB9,0x9F } }; // 58F1DA35-BBB3-3C8F-993D-6C80E7FEB99F
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>{ 0x805444A8,0xF2AE,0x322E,{ 0x8D,0xA9,0x83,0x6A,0x0A,0x95,0xA4,0xC1 } }; // 805444A8-F2AE-322E-8DA9-836A0A95A4C1
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics>{ 0x364E6064,0xC8F2,0x3BA1,{ 0x83,0x91,0x66,0xB8,0x48,0x9E,0x67,0xFD } }; // 364E6064-C8F2-3BA1-8391-66B8489E67FD
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>{ 0x0E777088,0x75FC,0x48AF,{ 0x87,0x58,0x06,0x52,0xF6,0xF0,0x7C,0x59 } }; // 0E777088-75FC-48AF-8758-0652F6F07C59
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3>{ 0x3B00DE3D,0xB1A3,0x4DFE,{ 0x8E,0x79,0xFE,0xC5,0x90,0x9E,0x6D,0xF8 } }; // 3B00DE3D-B1A3-4DFE-8E79-FEC5909E6DF8
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration>{ 0x5C1DE6E6,0x67E9,0x5004,{ 0xB0,0x2C,0x67,0xA3,0xA1,0x22,0xB5,0x76 } }; // 5C1DE6E6-67E9-5004-B02C-67A3A122B576
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration2>{ 0xE241756E,0xE0D0,0x5019,{ 0x9A,0xF5,0x1B,0x16,0x5B,0xC2,0xF5,0x4E } }; // E241756E-E0D0-5019-9AF5-1B165BC2F54E
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicCamera>{ using type = winrt::Windows::Graphics::Holographic::IHolographicCamera; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicCameraPose>{ using type = winrt::Windows::Graphics::Holographic::IHolographicCameraPose; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters>{ using type = winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters>{ using type = winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicDisplay>{ using type = winrt::Windows::Graphics::Holographic::IHolographicDisplay; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFrame>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFrame; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFramePrediction>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFramePrediction; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFrameRenderingReport>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutMonitor>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicFrameScanoutReport>{ using type = winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicQuadLayer>{ using type = winrt::Windows::Graphics::Holographic::IHolographicQuadLayer; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>{ using type = winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicSpace>{ using type = winrt::Windows::Graphics::Holographic::IHolographicSpace; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs>{ using type = winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs>{ using type = winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs; };
    template <> struct default_interface<winrt::Windows::Graphics::Holographic::HolographicViewConfiguration>{ using type = winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration; };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderTargetSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportScaleFactor(double*) noexcept = 0;
            virtual int32_t __stdcall put_ViewportScaleFactor(double) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetNearPlaneDistance(double) noexcept = 0;
            virtual int32_t __stdcall SetFarPlaneDistance(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LeftViewportParameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_RightViewportParameters(void**) noexcept = 0;
            virtual int32_t __stdcall get_Display(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrimaryLayerEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrimaryLayerEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_MaxQuadLayerCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QuadLayers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanOverrideViewport(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsHardwareContentProtectionSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHardwareContentProtectionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsHardwareContentProtectionEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCamera6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ViewConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HolographicCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_Viewport(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall TryGetViewTransform(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform*) noexcept = 0;
            virtual int32_t __stdcall TryGetCullingFrustum(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryGetVisibleFrustum(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_NearPlaneDistance(double*) noexcept = 0;
            virtual int32_t __stdcall get_FarPlaneDistance(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OverrideViewTransform(void*, struct struct_Windows_Graphics_Holographic_HolographicStereoTransform) noexcept = 0;
            virtual int32_t __stdcall OverrideProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform) noexcept = 0;
            virtual int32_t __stdcall OverrideViewport(winrt::Windows::Foundation::Rect, winrt::Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetFocusPoint(void*, winrt::Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall SetFocusPointWithNormal(void*, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall SetFocusPointWithNormalLinearVelocity(void*, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11BackBuffer(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReprojectionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReprojectionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall CommitDirect3D11DepthBuffer(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsContentProtectionEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentProtectionEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DepthReprojectionMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DepthReprojectionMethod(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, winrt::Windows::Foundation::Numerics::float2**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, winrt::Windows::Foundation::Numerics::float2**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicDisplay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxViewportSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsOpaque(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_SpatialLocator(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RefreshRate(double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryGetViewConfiguration(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AddedCameras(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemovedCameras(void**) noexcept = 0;
            virtual int32_t __stdcall GetRenderingParameters(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Duration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPrediction(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateCurrentPrediction() noexcept = 0;
            virtual int32_t __stdcall PresentUsingCurrentPrediction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall PresentUsingCurrentPredictionWithBehavior(int32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall WaitForFrameToFinish() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrame2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetQuadLayerUpdateParameters(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrame3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(struct struct_Windows_Graphics_Holographic_HolographicFrameId*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CameraPoses(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositorGpuDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppGpuDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AppGpuOverrun(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_MissedPresentationOpportunityCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PresentationCount(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameId(struct struct_Windows_Graphics_Holographic_HolographicFrameId*) noexcept = 0;
            virtual int32_t __stdcall get_MissedLatchCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeFrameReadyTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeActualGpuFinishTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeTargetLatchTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadReports(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderingReport(void**) noexcept = 0;
            virtual int32_t __stdcall get_MissedScanoutCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeLatchTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativeScanoutStartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_SystemRelativePhotonTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Size(winrt::Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(winrt::Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithPixelFormat(winrt::Windows::Foundation::Size, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AcquireBufferToUpdateContent(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateViewport(winrt::Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall UpdateContentProtectionEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall UpdateExtents(winrt::Windows::Foundation::Numerics::float2) noexcept = 0;
            virtual int32_t __stdcall UpdateLocationWithStationaryMode(void*, winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall UpdateLocationWithDisplayRelativeMode(winrt::Windows::Foundation::Numerics::float3, winrt::Windows::Foundation::Numerics::quaternion) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanAcquireWithHardwareProtection(bool*) noexcept = 0;
            virtual int32_t __stdcall AcquireBufferToUpdateContentWithHardwareProtection(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpace>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrimaryAdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId*) noexcept = 0;
            virtual int32_t __stdcall SetDirect3D11Device(void*) noexcept = 0;
            virtual int32_t __stdcall add_CameraAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CameraRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CameraRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateNextFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpace2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserPresence(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_UserPresenceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserPresenceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall WaitForNextFrameReady() noexcept = 0;
            virtual int32_t __stdcall WaitForNextFrameReadyWithHeadStart(int64_t) noexcept = 0;
            virtual int32_t __stdcall CreateFramePresentationMonitor(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpace3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrameScanoutMonitor(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForCoreWindow(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsAvailableChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsAvailableChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsConfigured(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NativeRenderTargetSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_RenderTargetSize(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall RequestRenderTargetSize(winrt::Windows::Foundation::Size, winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedPixelFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_PixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PixelFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsStereo(bool*) noexcept = 0;
            virtual int32_t __stdcall get_RefreshRate(double*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Display(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedDepthReprojectionMethods(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera
    {
        [[nodiscard]] auto RenderTargetSize() const;
        [[nodiscard]] auto ViewportScaleFactor() const;
        auto ViewportScaleFactor(double value) const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto Id() const;
        auto SetNearPlaneDistance(double value) const;
        auto SetFarPlaneDistance(double value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera2
    {
        [[nodiscard]] auto LeftViewportParameters() const;
        [[nodiscard]] auto RightViewportParameters() const;
        [[nodiscard]] auto Display() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera3
    {
        [[nodiscard]] auto IsPrimaryLayerEnabled() const;
        auto IsPrimaryLayerEnabled(bool value) const;
        [[nodiscard]] auto MaxQuadLayerCount() const;
        [[nodiscard]] auto QuadLayers() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera4
    {
        [[nodiscard]] auto CanOverrideViewport() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera4>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera4<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera5
    {
        [[nodiscard]] auto IsHardwareContentProtectionSupported() const;
        [[nodiscard]] auto IsHardwareContentProtectionEnabled() const;
        auto IsHardwareContentProtectionEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera5>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera5<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCamera6
    {
        [[nodiscard]] auto ViewConfiguration() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCamera6>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCamera6<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraPose
    {
        [[nodiscard]] auto HolographicCamera() const;
        [[nodiscard]] auto Viewport() const;
        auto TryGetViewTransform(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto ProjectionTransform() const;
        auto TryGetCullingFrustum(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto TryGetVisibleFrustum(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        [[nodiscard]] auto NearPlaneDistance() const;
        [[nodiscard]] auto FarPlaneDistance() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraPose>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraPose2
    {
        auto OverrideViewTransform(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Graphics::Holographic::HolographicStereoTransform const& coordinateSystemToViewTransform) const;
        auto OverrideProjectionTransform(winrt::Windows::Graphics::Holographic::HolographicStereoTransform const& projectionTransform) const;
        auto OverrideViewport(winrt::Windows::Foundation::Rect const& leftViewport, winrt::Windows::Foundation::Rect const& rightViewport) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraPose2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters
    {
        auto SetFocusPoint(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position) const;
        auto SetFocusPoint(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position, winrt::Windows::Foundation::Numerics::float3 const& normal) const;
        auto SetFocusPoint(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position, winrt::Windows::Foundation::Numerics::float3 const& normal, winrt::Windows::Foundation::Numerics::float3 const& linearVelocity) const;
        [[nodiscard]] auto Direct3D11Device() const;
        [[nodiscard]] auto Direct3D11BackBuffer() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2
    {
        [[nodiscard]] auto ReprojectionMode() const;
        auto ReprojectionMode(winrt::Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const;
        auto CommitDirect3D11DepthBuffer(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3
    {
        [[nodiscard]] auto IsContentProtectionEnabled() const;
        auto IsContentProtectionEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters4
    {
        [[nodiscard]] auto DepthReprojectionMethod() const;
        auto DepthReprojectionMethod(winrt::Windows::Graphics::Holographic::HolographicDepthReprojectionMethod const& value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters4>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters4<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters
    {
        [[nodiscard]] auto HiddenAreaMesh() const;
        [[nodiscard]] auto VisibleAreaMesh() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay
    {
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto MaxViewportSize() const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto IsOpaque() const;
        [[nodiscard]] auto AdapterId() const;
        [[nodiscard]] auto SpatialLocator() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicDisplay>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay2
    {
        [[nodiscard]] auto RefreshRate() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicDisplay2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplay3
    {
        auto TryGetViewConfiguration(winrt::Windows::Graphics::Holographic::HolographicViewConfigurationKind const& kind) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplay3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicDisplayStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame
    {
        [[nodiscard]] auto AddedCameras() const;
        [[nodiscard]] auto RemovedCameras() const;
        auto GetRenderingParameters(winrt::Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const;
        [[nodiscard]] auto Duration() const;
        [[nodiscard]] auto CurrentPrediction() const;
        auto UpdateCurrentPrediction() const;
        auto PresentUsingCurrentPrediction() const;
        auto PresentUsingCurrentPrediction(winrt::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const;
        auto WaitForFrameToFinish() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrame>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame2
    {
        auto GetQuadLayerUpdateParameters(winrt::Windows::Graphics::Holographic::HolographicQuadLayer const& layer) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrame2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrame3
    {
        [[nodiscard]] auto Id() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrame3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrame3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePrediction
    {
        [[nodiscard]] auto CameraPoses() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor
    {
        auto ReadReports() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport
    {
        [[nodiscard]] auto CompositorGpuDuration() const;
        [[nodiscard]] auto AppGpuDuration() const;
        [[nodiscard]] auto AppGpuOverrun() const;
        [[nodiscard]] auto MissedPresentationOpportunityCount() const;
        [[nodiscard]] auto PresentationCount() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameRenderingReport
    {
        [[nodiscard]] auto FrameId() const;
        [[nodiscard]] auto MissedLatchCount() const;
        [[nodiscard]] auto SystemRelativeFrameReadyTime() const;
        [[nodiscard]] auto SystemRelativeActualGpuFinishTime() const;
        [[nodiscard]] auto SystemRelativeTargetLatchTime() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrameRenderingReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameRenderingReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameScanoutMonitor
    {
        auto ReadReports() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutMonitor>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameScanoutMonitor<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicFrameScanoutReport
    {
        [[nodiscard]] auto RenderingReport() const;
        [[nodiscard]] auto MissedScanoutCount() const;
        [[nodiscard]] auto SystemRelativeLatchTime() const;
        [[nodiscard]] auto SystemRelativeScanoutStartTime() const;
        [[nodiscard]] auto SystemRelativePhotonTime() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicFrameScanoutReport>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicFrameScanoutReport<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayer
    {
        [[nodiscard]] auto PixelFormat() const;
        [[nodiscard]] auto Size() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayer<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory
    {
        auto Create(winrt::Windows::Foundation::Size const& size) const;
        auto CreateWithPixelFormat(winrt::Windows::Foundation::Size const& size, winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters
    {
        auto AcquireBufferToUpdateContent() const;
        auto UpdateViewport(winrt::Windows::Foundation::Rect const& value) const;
        auto UpdateContentProtectionEnabled(bool value) const;
        auto UpdateExtents(winrt::Windows::Foundation::Numerics::float2 const& value) const;
        auto UpdateLocationWithStationaryMode(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& position, winrt::Windows::Foundation::Numerics::quaternion const& orientation) const;
        auto UpdateLocationWithDisplayRelativeMode(winrt::Windows::Foundation::Numerics::float3 const& position, winrt::Windows::Foundation::Numerics::quaternion const& orientation) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters2
    {
        [[nodiscard]] auto CanAcquireWithHardwareProtection() const;
        auto AcquireBufferToUpdateContentWithHardwareProtection() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace
    {
        [[nodiscard]] auto PrimaryAdapterId() const;
        auto SetDirect3D11Device(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& value) const;
        auto CameraAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
        using CameraAdded_revoker = impl::event_revoker<winrt::Windows::Graphics::Holographic::IHolographicSpace, &impl::abi_t<winrt::Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraAdded>;
        [[nodiscard]] CameraAdded_revoker CameraAdded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const;
        auto CameraAdded(winrt::event_token const& cookie) const noexcept;
        auto CameraRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
        using CameraRemoved_revoker = impl::event_revoker<winrt::Windows::Graphics::Holographic::IHolographicSpace, &impl::abi_t<winrt::Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraRemoved>;
        [[nodiscard]] CameraRemoved_revoker CameraRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const;
        auto CameraRemoved(winrt::event_token const& cookie) const noexcept;
        auto CreateNextFrame() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpace>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace2
    {
        [[nodiscard]] auto UserPresence() const;
        auto UserPresenceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using UserPresenceChanged_revoker = impl::event_revoker<winrt::Windows::Graphics::Holographic::IHolographicSpace2, &impl::abi_t<winrt::Windows::Graphics::Holographic::IHolographicSpace2>::remove_UserPresenceChanged>;
        [[nodiscard]] UserPresenceChanged_revoker UserPresenceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Graphics::Holographic::HolographicSpace, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto UserPresenceChanged(winrt::event_token const& token) const noexcept;
        auto WaitForNextFrameReady() const;
        auto WaitForNextFrameReadyWithHeadStart(winrt::Windows::Foundation::TimeSpan const& requestedHeadStartDuration) const;
        auto CreateFramePresentationMonitor(uint32_t maxQueuedReports) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpace2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpace3
    {
        auto CreateFrameScanoutMonitor(uint32_t maxQueuedReports) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpace3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpace3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs
    {
        [[nodiscard]] auto Camera() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs
    {
        [[nodiscard]] auto Camera() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics
    {
        auto CreateForCoreWindow(winrt::Windows::UI::Core::CoreWindow const& window) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsAvailable() const;
        auto IsAvailableChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsAvailableChanged_revoker = impl::event_revoker<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2, &impl::abi_t<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged>;
        [[nodiscard]] IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto IsAvailableChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3
    {
        [[nodiscard]] auto IsConfigured() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicViewConfiguration
    {
        [[nodiscard]] auto NativeRenderTargetSize() const;
        [[nodiscard]] auto RenderTargetSize() const;
        auto RequestRenderTargetSize(winrt::Windows::Foundation::Size const& size) const;
        [[nodiscard]] auto SupportedPixelFormats() const;
        [[nodiscard]] auto PixelFormat() const;
        auto PixelFormat(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& value) const;
        [[nodiscard]] auto IsStereo() const;
        [[nodiscard]] auto RefreshRate() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto Display() const;
        [[nodiscard]] auto IsEnabled() const;
        auto IsEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicViewConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Holographic_IHolographicViewConfiguration2
    {
        [[nodiscard]] auto SupportedDepthReprojectionMethods() const;
    };
    template <> struct consume<winrt::Windows::Graphics::Holographic::IHolographicViewConfiguration2>
    {
        template <typename D> using type = consume_Windows_Graphics_Holographic_IHolographicViewConfiguration2<D>;
    };
    struct struct_Windows_Graphics_Holographic_HolographicAdapterId
    {
        uint32_t LowPart;
        int32_t HighPart;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicAdapterId>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicAdapterId;
    };
    struct struct_Windows_Graphics_Holographic_HolographicFrameId
    {
        uint64_t Value;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicFrameId>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicFrameId;
    };
    struct struct_Windows_Graphics_Holographic_HolographicStereoTransform
    {
        winrt::Windows::Foundation::Numerics::float4x4 Left;
        winrt::Windows::Foundation::Numerics::float4x4 Right;
    };
    template <> struct abi<Windows::Graphics::Holographic::HolographicStereoTransform>
    {
        using type = struct_Windows_Graphics_Holographic_HolographicStereoTransform;
    };
}
#endif
