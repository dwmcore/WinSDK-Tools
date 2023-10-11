// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Perception_Spatial_Surfaces_0_H
#define WINRT_Windows_Perception_Spatial_Surfaces_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial
{
    struct SpatialBoundingVolume;
    struct SpatialCoordinateSystem;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Surfaces
{
    struct ISpatialSurfaceInfo;
    struct ISpatialSurfaceMesh;
    struct ISpatialSurfaceMeshBuffer;
    struct ISpatialSurfaceMeshOptions;
    struct ISpatialSurfaceMeshOptionsStatics;
    struct ISpatialSurfaceObserver;
    struct ISpatialSurfaceObserverStatics;
    struct ISpatialSurfaceObserverStatics2;
    struct SpatialSurfaceInfo;
    struct SpatialSurfaceMesh;
    struct SpatialSurfaceMeshBuffer;
    struct SpatialSurfaceMeshOptions;
    struct SpatialSurfaceObserver;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo> = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh> = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer> = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions> = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver> = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2> = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo>{ 0xF8E9EBE7,0x39B7,0x3962,{ 0xBB,0x03,0x57,0xF5,0x6E,0x1F,0xB0,0xA1 } }; // F8E9EBE7-39B7-3962-BB03-57F56E1FB0A1
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh>{ 0x108F57D9,0xDF0D,0x3950,{ 0xA0,0xFD,0xF9,0x72,0xC7,0x7C,0x27,0xB4 } }; // 108F57D9-DF0D-3950-A0FD-F972C77C27B4
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer>{ 0x93CF59E0,0x871F,0x33F8,{ 0x98,0xB2,0x03,0xD1,0x01,0x45,0x8F,0x6F } }; // 93CF59E0-871F-33F8-98B2-03D101458F6F
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions>{ 0xD2759F89,0x3572,0x3D2D,{ 0xA1,0x0D,0x5F,0xEE,0x93,0x94,0xAA,0x37 } }; // D2759F89-3572-3D2D-A10D-5FEE9394AA37
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>{ 0x9B340ABF,0x9781,0x4505,{ 0x89,0x35,0x01,0x35,0x75,0xCA,0xAE,0x5E } }; // 9B340ABF-9781-4505-8935-013575CAAE5E
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>{ 0x10B69819,0xDDCA,0x3483,{ 0xAC,0x3A,0x74,0x8F,0xE8,0xC8,0x6D,0xF5 } }; // 10B69819-DDCA-3483-AC3A-748FE8C86DF5
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>{ 0x165951ED,0x2108,0x4168,{ 0x91,0x75,0x87,0xE0,0x27,0xBC,0x92,0x85 } }; // 165951ED-2108-4168-9175-87E027BC9285
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>{ 0x0F534261,0xC55D,0x4E6B,{ 0xA8,0x95,0xA1,0x9D,0xE6,0x9A,0x42,0xE3 } }; // 0F534261-C55D-4E6B-A895-A19DE69A42E3
    template <> struct default_interface<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo>{ using type = winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh>{ using type = winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshBuffer>{ using type = winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions>{ using type = winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions; };
    template <> struct default_interface<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver>{ using type = winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver; };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall TryGetBounds(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryComputeLatestMeshAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryComputeLatestMeshWithOptionsAsync(double, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SurfaceInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_CoordinateSystem(void**) noexcept = 0;
            virtual int32_t __stdcall get_TriangleIndices(void**) noexcept = 0;
            virtual int32_t __stdcall get_VertexPositions(void**) noexcept = 0;
            virtual int32_t __stdcall get_VertexPositionScale(winrt::Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_VertexNormals(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Stride(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ElementCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VertexPositionFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VertexPositionFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TriangleIndexFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TriangleIndexFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_VertexNormalFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_VertexNormalFormat(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IncludeVertexNormals(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeVertexNormals(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedVertexPositionFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedTriangleIndexFormats(void**) noexcept = 0;
            virtual int32_t __stdcall get_SupportedVertexNormalFormats(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetObservedSurfaces(void**) noexcept = 0;
            virtual int32_t __stdcall SetBoundingVolume(void*) noexcept = 0;
            virtual int32_t __stdcall SetBoundingVolumes(void*) noexcept = 0;
            virtual int32_t __stdcall add_ObservedSurfacesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ObservedSurfacesChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto UpdateTime() const;
        auto TryGetBounds(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const;
        auto TryComputeLatestMeshAsync(double maxTrianglesPerCubicMeter) const;
        auto TryComputeLatestMeshAsync(double maxTrianglesPerCubicMeter, winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMeshOptions const& options) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh
    {
        [[nodiscard]] auto SurfaceInfo() const;
        [[nodiscard]] auto CoordinateSystem() const;
        [[nodiscard]] auto TriangleIndices() const;
        [[nodiscard]] auto VertexPositions() const;
        [[nodiscard]] auto VertexPositionScale() const;
        [[nodiscard]] auto VertexNormals() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer
    {
        [[nodiscard]] auto Format() const;
        [[nodiscard]] auto Stride() const;
        [[nodiscard]] auto ElementCount() const;
        [[nodiscard]] auto Data() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions
    {
        [[nodiscard]] auto VertexPositionFormat() const;
        auto VertexPositionFormat(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& value) const;
        [[nodiscard]] auto TriangleIndexFormat() const;
        auto TriangleIndexFormat(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& value) const;
        [[nodiscard]] auto VertexNormalFormat() const;
        auto VertexNormalFormat(winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& value) const;
        [[nodiscard]] auto IncludeVertexNormals() const;
        auto IncludeVertexNormals(bool value) const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics
    {
        [[nodiscard]] auto SupportedVertexPositionFormats() const;
        [[nodiscard]] auto SupportedTriangleIndexFormats() const;
        [[nodiscard]] auto SupportedVertexNormalFormats() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver
    {
        auto GetObservedSurfaces() const;
        auto SetBoundingVolume(winrt::Windows::Perception::Spatial::SpatialBoundingVolume const& bounds) const;
        auto SetBoundingVolumes(param::iterable<winrt::Windows::Perception::Spatial::SpatialBoundingVolume> const& bounds) const;
        auto ObservedSurfacesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ObservedSurfacesChanged_revoker = impl::event_revoker<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver, &impl::abi_t<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>::remove_ObservedSurfacesChanged>;
        [[nodiscard]] ObservedSurfacesChanged_revoker ObservedSurfacesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ObservedSurfacesChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics
    {
        auto RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2
    {
        auto IsSupported() const;
    };
    template <> struct consume<winrt::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2>
    {
        template <typename D> using type = consume_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2<D>;
    };
}
#endif
