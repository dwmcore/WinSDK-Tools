// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Holographic_H
#define WINRT_Windows_ApplicationModel_Holographic_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.ApplicationModel.Holographic.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::SetPlacementOverride(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& topCenterPosition, winrt::Windows::Foundation::Numerics::quaternion const& orientation) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard)->SetPlacementOverride(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(orientation)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::SetPlacementOverride(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& topCenterPosition, winrt::Windows::Foundation::Numerics::quaternion const& orientation, winrt::Windows::Foundation::Numerics::float2 const& maxSize) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard)->SetPlacementOverrideWithMaxSize(*(void**)(&coordinateSystem), impl::bind_in(topCenterPosition), impl::bind_in(orientation), impl::bind_in(maxSize)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_Holographic_IHolographicKeyboard<D>::ResetPlacementOverride() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard)->ResetPlacementOverride());
    }
    template <typename D> auto consume_Windows_ApplicationModel_Holographic_IHolographicKeyboardStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics)->GetDefault(&result));
        return winrt::Windows::ApplicationModel::Holographic::HolographicKeyboard{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard> : produce_base<D, winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard>
    {
        int32_t __stdcall SetPlacementOverride(void* coordinateSystem, winrt::Windows::Foundation::Numerics::float3 topCenterPosition, winrt::Windows::Foundation::Numerics::quaternion orientation) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<winrt::Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<winrt::Windows::Foundation::Numerics::quaternion const*>(&orientation));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPlacementOverrideWithMaxSize(void* coordinateSystem, winrt::Windows::Foundation::Numerics::float3 topCenterPosition, winrt::Windows::Foundation::Numerics::quaternion orientation, winrt::Windows::Foundation::Numerics::float2 maxSize) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPlacementOverride(*reinterpret_cast<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<winrt::Windows::Foundation::Numerics::float3 const*>(&topCenterPosition), *reinterpret_cast<winrt::Windows::Foundation::Numerics::quaternion const*>(&orientation), *reinterpret_cast<winrt::Windows::Foundation::Numerics::float2 const*>(&maxSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetPlacementOverride() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetPlacementOverride();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics> : produce_base<D, winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Holographic::HolographicKeyboard>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Holographic
{
    inline auto HolographicKeyboard::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::Holographic::HolographicKeyboard(*)(IHolographicKeyboardStatics const&), HolographicKeyboard, IHolographicKeyboardStatics>([](IHolographicKeyboardStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboard> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::IHolographicKeyboardStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Holographic::HolographicKeyboard> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
