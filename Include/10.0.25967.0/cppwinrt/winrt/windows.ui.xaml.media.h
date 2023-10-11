// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Media_H
#define WINRT_Windows_UI_Xaml_Media_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::BackgroundSource() const
    {
        winrt::Windows::UI::Xaml::Media::AcrylicBackgroundSource value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->get_BackgroundSource(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::BackgroundSource(winrt::Windows::UI::Xaml::Media::AcrylicBackgroundSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->put_BackgroundSource(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintOpacity() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintOpacity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintOpacity(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintOpacity(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintTransitionDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintTransitionDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintTransitionDuration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintTransitionDuration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::AlwaysUseFallback() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->get_AlwaysUseFallback(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::AlwaysUseFallback(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush)->put_AlwaysUseFallback(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush2<D>::TintLuminosityOpacity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush2)->get_TintLuminosityOpacity(&value));
        return winrt::Windows::Foundation::IReference<double>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrush2<D>::TintLuminosityOpacity(winrt::Windows::Foundation::IReference<double> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrush2)->put_TintLuminosityOpacity(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::AcrylicBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::BackgroundSourceProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_BackgroundSourceProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintColorProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintOpacityProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintOpacityProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintTransitionDurationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintTransitionDurationProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::AlwaysUseFallbackProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_AlwaysUseFallbackProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics2<D>::TintLuminosityOpacityProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics2)->get_TintLuminosityOpacityProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::Point() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->get_Point(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::Point(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->put_Point(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::Size() const
    {
        winrt::Windows::Foundation::Size value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->get_Size(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::Size(winrt::Windows::Foundation::Size const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->put_Size(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::RotationAngle() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->get_RotationAngle(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::RotationAngle(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->put_RotationAngle(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::IsLargeArc() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->get_IsLargeArc(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::IsLargeArc(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->put_IsLargeArc(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::SweepDirection() const
    {
        winrt::Windows::UI::Xaml::Media::SweepDirection value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->get_SweepDirection(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegment<D>::SweepDirection(winrt::Windows::UI::Xaml::Media::SweepDirection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegment)->put_SweepDirection(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::PointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegmentStatics)->get_PointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::SizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegmentStatics)->get_SizeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::RotationAngleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegmentStatics)->get_RotationAngleProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::IsLargeArcProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegmentStatics)->get_IsLargeArcProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::SweepDirectionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IArcSegmentStatics)->get_SweepDirectionProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point1() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->get_Point1(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point1(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->put_Point1(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point2() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->get_Point2(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point2(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->put_Point2(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point3() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->get_Point3(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point3(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegment)->put_Point3(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point1Property() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point1Property(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point2Property() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point2Property(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point3Property() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point3Property(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::Opacity() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->get_Opacity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::Opacity(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->put_Opacity(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::Transform() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->get_Transform(&value));
        return winrt::Windows::UI::Xaml::Media::Transform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::Transform(winrt::Windows::UI::Xaml::Media::Transform const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->put_Transform(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::RelativeTransform() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->get_RelativeTransform(&value));
        return winrt::Windows::UI::Xaml::Media::Transform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrush<D>::RelativeTransform(winrt::Windows::UI::Xaml::Media::Transform const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrush)->put_RelativeTransform(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::Brush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrushOverrides2<D>::PopulatePropertyInfoOverride(param::hstring const& propertyName, winrt::Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrushOverrides2)->PopulatePropertyInfoOverride(*(void**)(&propertyName), *(void**)(&animationPropertyInfo)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrushStatics<D>::OpacityProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrushStatics)->get_OpacityProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrushStatics<D>::TransformProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrushStatics)->get_TransformProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IBrushStatics<D>::RelativeTransformProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IBrushStatics)->get_RelativeTransformProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICacheModeFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICacheModeFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::CacheMode{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_CenterX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_CenterX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_CenterY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_CenterY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_ScaleX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_ScaleX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_ScaleY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_ScaleY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_SkewX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_SkewX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_SkewY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_SkewY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::Rotation() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_Rotation(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::Rotation(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_Rotation(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_TranslateX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_TranslateX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->get_TranslateY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransform)->put_TranslateY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::CenterXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_CenterXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::CenterYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_CenterYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::ScaleXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_ScaleXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::ScaleYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_ScaleYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::SkewXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_SkewXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::SkewYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_SkewYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::RotationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_RotationProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::TranslateXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_TranslateXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::TranslateYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_TranslateYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics)->add_Rendering(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering_revoker consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Rendering_revoker>(this, Rendering(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics)->remove_Rendering(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics)->add_SurfaceContentsLost(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost_revoker consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SurfaceContentsLost_revoker>(this, SurfaceContentsLost(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics)->remove_SurfaceContentsLost(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3)->add_Rendered(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered_revoker consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Rendered_revoker>(this, Rendered(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3)->remove_Rendered(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::Center() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->get_Center(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::Center(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->put_Center(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->get_RadiusX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->put_RadiusX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->get_RadiusY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometry)->put_RadiusY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::CenterProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_CenterProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::RadiusXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_RadiusXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::RadiusYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_RadiusYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IFontFamily<D>::Source() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IFontFamily)->get_Source(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IFontFamilyFactory<D>::CreateInstanceWithName(param::hstring const& familyName, winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IFontFamilyFactory)->CreateInstanceWithName(*(void**)(&familyName), *(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::FontFamily{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IFontFamilyStatics2<D>::XamlAutoFontFamily() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2)->get_XamlAutoFontFamily(&value));
        return winrt::Windows::UI::Xaml::Media::FontFamily{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::Inverse() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransform)->get_Inverse(&value));
        return winrt::Windows::UI::Xaml::Media::GeneralTransform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TransformPoint(winrt::Windows::Foundation::Point const& point) const
    {
        winrt::Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransform)->TransformPoint(impl::bind_in(point), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TryTransform(winrt::Windows::Foundation::Point const& inPoint, winrt::Windows::Foundation::Point& outPoint) const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransform)->TryTransform(impl::bind_in(inPoint), impl::bind_out(outPoint), &returnValue));
        return returnValue;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TransformBounds(winrt::Windows::Foundation::Rect const& rect) const
    {
        winrt::Windows::Foundation::Rect result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransform)->TransformBounds(impl::bind_in(rect), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransformFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::GeneralTransform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::InverseCore() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides)->get_InverseCore(&value));
        return winrt::Windows::UI::Xaml::Media::GeneralTransform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::TryTransformCore(winrt::Windows::Foundation::Point const& inPoint, winrt::Windows::Foundation::Point& outPoint) const
    {
        bool returnValue{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides)->TryTransformCore(impl::bind_in(inPoint), impl::bind_out(outPoint), &returnValue));
        return returnValue;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::TransformBoundsCore(winrt::Windows::Foundation::Rect const& rect) const
    {
        winrt::Windows::Foundation::Rect result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides)->TransformBoundsCore(impl::bind_in(rect), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometry<D>::Transform() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometry)->get_Transform(&value));
        return winrt::Windows::UI::Xaml::Media::Transform{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometry<D>::Transform(winrt::Windows::UI::Xaml::Media::Transform const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometry)->put_Transform(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometry<D>::Bounds() const
    {
        winrt::Windows::Foundation::Rect value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometry)->get_Bounds(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::FillRule() const
    {
        winrt::Windows::UI::Xaml::Media::FillRule value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroup)->get_FillRule(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::FillRule(winrt::Windows::UI::Xaml::Media::FillRule const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroup)->put_FillRule(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::Children() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroup)->get_Children(&value));
        return winrt::Windows::UI::Xaml::Media::GeometryCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::Children(winrt::Windows::UI::Xaml::Media::GeometryCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroup)->put_Children(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>::FillRuleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics)->get_FillRuleProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>::ChildrenProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics)->get_ChildrenProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::Empty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryStatics)->get_Empty(&value));
        return winrt::Windows::UI::Xaml::Media::Geometry{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::StandardFlatteningTolerance() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryStatics)->get_StandardFlatteningTolerance(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::TransformProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGeometryStatics)->get_TransformProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::SpreadMethod() const
    {
        winrt::Windows::UI::Xaml::Media::GradientSpreadMethod value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->get_SpreadMethod(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::SpreadMethod(winrt::Windows::UI::Xaml::Media::GradientSpreadMethod const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->put_SpreadMethod(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::MappingMode() const
    {
        winrt::Windows::UI::Xaml::Media::BrushMappingMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->get_MappingMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::MappingMode(winrt::Windows::UI::Xaml::Media::BrushMappingMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->put_MappingMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::ColorInterpolationMode() const
    {
        winrt::Windows::UI::Xaml::Media::ColorInterpolationMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->get_ColorInterpolationMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::ColorInterpolationMode(winrt::Windows::UI::Xaml::Media::ColorInterpolationMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->put_ColorInterpolationMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::GradientStops() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->get_GradientStops(&value));
        return winrt::Windows::UI::Xaml::Media::GradientStopCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrush<D>::GradientStops(winrt::Windows::UI::Xaml::Media::GradientStopCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrush)->put_GradientStops(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::GradientBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::SpreadMethodProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrushStatics)->get_SpreadMethodProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::MappingModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrushStatics)->get_MappingModeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::ColorInterpolationModeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrushStatics)->get_ColorInterpolationModeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::GradientStopsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientBrushStatics)->get_GradientStopsProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStop<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStop)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStop<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStop)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStop<D>::Offset() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStop)->get_Offset(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStop<D>::Offset(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStop)->put_Offset(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>::ColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStopStatics)->get_ColorProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>::OffsetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IGradientStopStatics)->get_OffsetProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageSource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->get_ImageSource(&value));
        return winrt::Windows::UI::Xaml::Media::ImageSource{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageSource(winrt::Windows::UI::Xaml::Media::ImageSource const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->put_ImageSource(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(winrt::Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->add_ImageFailed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed_revoker consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(auto_revoke_t, winrt::Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, ImageFailed_revoker>(this, ImageFailed(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->remove_ImageFailed(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->add_ImageOpened(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened_revoker consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(auto_revoke_t, winrt::Windows::UI::Xaml::RoutedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, ImageOpened_revoker>(this, ImageOpened(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrush)->remove_ImageOpened(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IImageBrushStatics<D>::ImageSourceProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IImageBrushStatics)->get_ImageSourceProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometry<D>::StartPoint() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometry)->get_StartPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometry<D>::StartPoint(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometry)->put_StartPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometry<D>::EndPoint() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometry)->get_EndPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometry<D>::EndPoint(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometry)->put_EndPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>::StartPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometryStatics)->get_StartPointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>::EndPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineGeometryStatics)->get_EndPointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineSegment<D>::Point() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineSegment)->get_Point(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineSegment<D>::Point(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineSegment)->put_Point(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILineSegmentStatics<D>::PointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILineSegmentStatics)->get_PointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::StartPoint() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrush)->get_StartPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::StartPoint(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrush)->put_StartPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::EndPoint() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrush)->get_EndPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::EndPoint(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrush)->put_EndPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory<D>::CreateInstanceWithGradientStopCollectionAndAngle(winrt::Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory)->CreateInstanceWithGradientStopCollectionAndAngle(*(void**)(&gradientStopCollection), angle, &value));
        return winrt::Windows::UI::Xaml::Media::LinearGradientBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>::StartPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics)->get_StartPointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>::EndPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics)->get_EndPointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs<D>::Status() const
    {
        winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::DecodedPhysicalSize() const
    {
        winrt::Windows::Foundation::Size value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurface)->get_DecodedPhysicalSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::DecodedSize() const
    {
        winrt::Windows::Foundation::Size value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurface)->get_DecodedSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::NaturalSize() const
    {
        winrt::Windows::Foundation::Size value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurface)->get_NaturalSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Media::LoadedImageSurface, winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurface)->add_LoadCompleted(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted_revoker consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Media::LoadedImageSurface, winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, LoadCompleted_revoker>(this, LoadCompleted(handler));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurface)->remove_LoadCompleted(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromUri(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Foundation::Size const& desiredMaxSize) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromUriWithSize(*(void**)(&uri), impl::bind_in(desiredMaxSize), &result));
        return winrt::Windows::UI::Xaml::Media::LoadedImageSurface{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromUri(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromUri(*(void**)(&uri), &result));
        return winrt::Windows::UI::Xaml::Media::LoadedImageSurface{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Foundation::Size const& desiredMaxSize) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromStreamWithSize(*(void**)(&stream), impl::bind_in(desiredMaxSize), &result));
        return winrt::Windows::UI::Xaml::Media::LoadedImageSurface{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromStream(*(void**)(&stream), &result));
        return winrt::Windows::UI::Xaml::Media::LoadedImageSurface{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>::ProjectionMatrix() const
    {
        winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrix3DProjection)->get_ProjectionMatrix(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>::ProjectionMatrix(winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrix3DProjection)->put_ProjectionMatrix(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics<D>::ProjectionMatrixProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics)->get_ProjectionMatrixProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::Identity() const
    {
        winrt::Windows::UI::Xaml::Media::Matrix value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics)->get_Identity(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY) const
    {
        winrt::Windows::UI::Xaml::Media::Matrix result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics)->FromElements(m11, m12, m21, m22, offsetX, offsetY, put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::GetIsIdentity(winrt::Windows::UI::Xaml::Media::Matrix const& target) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics)->GetIsIdentity(impl::bind_in(target), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::Transform(winrt::Windows::UI::Xaml::Media::Matrix const& target, winrt::Windows::Foundation::Point const& point) const
    {
        winrt::Windows::Foundation::Point result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics)->Transform(impl::bind_in(target), impl::bind_in(point), put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixTransform<D>::Matrix() const
    {
        winrt::Windows::UI::Xaml::Media::Matrix value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixTransform)->get_Matrix(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixTransform<D>::Matrix(winrt::Windows::UI::Xaml::Media::Matrix const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixTransform)->put_Matrix(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMatrixTransformStatics<D>::MatrixProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics)->get_MatrixProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>::SetThumbnailImage(winrt::Windows::Storage::Streams::IInputStream const& source) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)->SetThumbnailImage(*(void**)(&source)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)->GetDeferral(&result));
        return winrt::Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs<D>::StreamKind() const
    {
        winrt::Windows::Media::Playback::FailedMediaStreamKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs)->get_StreamKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::Segments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->get_Segments(&value));
        return winrt::Windows::UI::Xaml::Media::PathSegmentCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::Segments(winrt::Windows::UI::Xaml::Media::PathSegmentCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->put_Segments(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::StartPoint() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->get_StartPoint(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::StartPoint(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->put_StartPoint(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsClosed() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->get_IsClosed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsClosed(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->put_IsClosed(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsFilled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->get_IsFilled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsFilled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigure)->put_IsFilled(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::SegmentsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigureStatics)->get_SegmentsProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::StartPointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigureStatics)->get_StartPointProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::IsClosedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigureStatics)->get_IsClosedProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::IsFilledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathFigureStatics)->get_IsFilledProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometry<D>::FillRule() const
    {
        winrt::Windows::UI::Xaml::Media::FillRule value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometry)->get_FillRule(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometry<D>::FillRule(winrt::Windows::UI::Xaml::Media::FillRule const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometry)->put_FillRule(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometry<D>::Figures() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometry)->get_Figures(&value));
        return winrt::Windows::UI::Xaml::Media::PathFigureCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometry<D>::Figures(winrt::Windows::UI::Xaml::Media::PathFigureCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometry)->put_Figures(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>::FillRuleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometryStatics)->get_FillRuleProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>::FiguresProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPathGeometryStatics)->get_FiguresProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetZ() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetZ(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetZ(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetZ(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationZ() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationZ(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationZ(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationZ(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationZ() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationZ(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationZ(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationZ(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetZ() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetZ(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetZ(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetZ(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::ProjectionMatrix() const
    {
        winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjection)->get_ProjectionMatrix(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetZProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetZProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationZProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationZProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationZProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationZProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetZProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetZProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::ProjectionMatrixProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_ProjectionMatrixProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>::Points() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyBezierSegment)->get_Points(&value));
        return winrt::Windows::UI::Xaml::Media::PointCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>::Points(winrt::Windows::UI::Xaml::Media::PointCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyBezierSegment)->put_Points(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics<D>::PointsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics)->get_PointsProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>::Points() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyLineSegment)->get_Points(&value));
        return winrt::Windows::UI::Xaml::Media::PointCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>::Points(winrt::Windows::UI::Xaml::Media::PointCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyLineSegment)->put_Points(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics<D>::PointsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics)->get_PointsProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>::Points() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment)->get_Points(&value));
        return winrt::Windows::UI::Xaml::Media::PointCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>::Points(winrt::Windows::UI::Xaml::Media::PointCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment)->put_Points(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics<D>::PointsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics)->get_PointsProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IProjectionFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IProjectionFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::Projection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point1() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment)->get_Point1(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point1(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment)->put_Point1(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point2() const
    {
        winrt::Windows::Foundation::Point value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment)->get_Point2(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point2(winrt::Windows::Foundation::Point const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment)->put_Point2(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>::Point1Property() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics)->get_Point1Property(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>::Point2Property() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics)->get_Point2Property(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>::Rect() const
    {
        winrt::Windows::Foundation::Rect value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRectangleGeometry)->get_Rect(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>::Rect(winrt::Windows::Foundation::Rect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRectangleGeometry)->put_Rect(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics<D>::RectProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics)->get_RectProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRenderedEventArgs<D>::FrameDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRenderedEventArgs)->get_FrameDuration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRenderingEventArgs<D>::RenderingTime() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRenderingEventArgs)->get_RenderingTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::RevealBackgroundBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::RevealBorderBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::TargetTheme() const
    {
        winrt::Windows::UI::Xaml::ApplicationTheme value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->get_TargetTheme(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::TargetTheme(winrt::Windows::UI::Xaml::ApplicationTheme const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->put_TargetTheme(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::AlwaysUseFallback() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->get_AlwaysUseFallback(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrush<D>::AlwaysUseFallback(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrush)->put_AlwaysUseFallback(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::RevealBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::ColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->get_ColorProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::TargetThemeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->get_TargetThemeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::AlwaysUseFallbackProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->get_AlwaysUseFallbackProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::StateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->get_StateProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::SetState(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::UI::Xaml::Media::RevealBrushState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->SetState(*(void**)(&element), static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::GetState(winrt::Windows::UI::Xaml::UIElement const& element) const
    {
        winrt::Windows::UI::Xaml::Media::RevealBrushState result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRevealBrushStatics)->GetState(*(void**)(&element), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->get_CenterX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->put_CenterX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->get_CenterY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->put_CenterY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::Angle() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->get_Angle(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransform<D>::Angle(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransform)->put_Angle(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::CenterXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransformStatics)->get_CenterXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::CenterYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransformStatics)->get_CenterYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::AngleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IRotateTransformStatics)->get_AngleProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->get_CenterX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->put_CenterX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->get_CenterY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->put_CenterY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->get_ScaleX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->put_ScaleX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->get_ScaleY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransform)->put_ScaleY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::CenterXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransformStatics)->get_CenterXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::CenterYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransformStatics)->get_CenterYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::ScaleXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransformStatics)->get_ScaleXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::ScaleYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IScaleTransformStatics)->get_ScaleYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->get_CenterX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->put_CenterX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->get_CenterY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->put_CenterY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleX() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->get_AngleX(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleX(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->put_AngleX(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleY() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->get_AngleY(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleY(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransform)->put_AngleY(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::CenterXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransformStatics)->get_CenterXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::CenterYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransformStatics)->get_CenterYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::AngleXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransformStatics)->get_AngleXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::AngleYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISkewTransformStatics)->get_AngleYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISolidColorBrush)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISolidColorBrush)->put_Color(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<D>::CreateInstanceWithColor(winrt::Windows::UI::Color const& color) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory)->CreateInstanceWithColor(impl::bind_in(color), &value));
        return winrt::Windows::UI::Xaml::Media::SolidColorBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics<D>::ColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics)->get_ColorProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IThemeShadow<D>::Receivers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IThemeShadow)->get_Receivers(&value));
        return winrt::Windows::UI::Xaml::UIElementWeakCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IThemeShadowFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IThemeShadowFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::ThemeShadow{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentX() const
    {
        winrt::Windows::UI::Xaml::Media::AlignmentX value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->get_AlignmentX(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentX(winrt::Windows::UI::Xaml::Media::AlignmentX const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->put_AlignmentX(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentY() const
    {
        winrt::Windows::UI::Xaml::Media::AlignmentY value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->get_AlignmentY(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentY(winrt::Windows::UI::Xaml::Media::AlignmentY const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->put_AlignmentY(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::Stretch() const
    {
        winrt::Windows::UI::Xaml::Media::Stretch value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->get_Stretch(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrush<D>::Stretch(winrt::Windows::UI::Xaml::Media::Stretch const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrush)->put_Stretch(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrushFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrushFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::TileBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::AlignmentXProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrushStatics)->get_AlignmentXProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::AlignmentYProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrushStatics)->get_AlignmentYProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::StretchProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITileBrushStatics)->get_StretchProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Time() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->get_Time(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Time(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->put_Time(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Type() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->get_Type(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Type(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->put_Type(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Text() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->get_Text(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Text(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarker)->put_Text(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>::Marker() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs)->get_Marker(&value));
        return winrt::Windows::UI::Xaml::Media::TimelineMarker{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>::Marker(winrt::Windows::UI::Xaml::Media::TimelineMarker const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs)->put_Marker(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TimeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TimeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TypeProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TextProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TextProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Children() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITransformGroup)->get_Children(&value));
        return winrt::Windows::UI::Xaml::Media::TransformCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Children(winrt::Windows::UI::Xaml::Media::TransformCollection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITransformGroup)->put_Children(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Value() const
    {
        winrt::Windows::UI::Xaml::Media::Matrix value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITransformGroup)->get_Value(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITransformGroupStatics<D>::ChildrenProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITransformGroupStatics)->get_ChildrenProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::X() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransform)->get_X(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::X(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransform)->put_X(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::Y() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransform)->get_Y(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::Y(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransform)->put_Y(value));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>::XProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics)->get_XProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>::YProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics)->get_YProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(winrt::Windows::Foundation::Point const& intersectingPoint, winrt::Windows::UI::Xaml::UIElement const& subtree) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindElementsInHostCoordinatesPoint(impl::bind_in(intersectingPoint), *(void**)(&subtree), &result));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(winrt::Windows::Foundation::Rect const& intersectingRect, winrt::Windows::UI::Xaml::UIElement const& subtree) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindElementsInHostCoordinatesRect(impl::bind_in(intersectingRect), *(void**)(&subtree), &result));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(winrt::Windows::Foundation::Point const& intersectingPoint, winrt::Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindAllElementsInHostCoordinatesPoint(impl::bind_in(intersectingPoint), *(void**)(&subtree), includeAllElements, &result));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(winrt::Windows::Foundation::Rect const& intersectingRect, winrt::Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindAllElementsInHostCoordinatesRect(impl::bind_in(intersectingRect), *(void**)(&subtree), includeAllElements, &result));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetChild(winrt::Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetChild(*(void**)(&reference), childIndex, &result));
        return winrt::Windows::UI::Xaml::DependencyObject{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetChildrenCount(winrt::Windows::UI::Xaml::DependencyObject const& reference) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetChildrenCount(*(void**)(&reference), &result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetParent(winrt::Windows::UI::Xaml::DependencyObject const& reference) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetParent(*(void**)(&reference), &result));
        return winrt::Windows::UI::Xaml::DependencyObject{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::DisconnectChildrenRecursive(winrt::Windows::UI::Xaml::UIElement const& element) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->DisconnectChildrenRecursive(*(void**)(&element)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2<D>::GetOpenPopups(winrt::Windows::UI::Xaml::Window const& window) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2)->GetOpenPopups(*(void**)(&window), &result));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3<D>::GetOpenPopupsForXamlRoot(winrt::Windows::UI::Xaml::XamlRoot const& xamlRoot) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics3)->GetOpenPopupsForXamlRoot(*(void**)(&xamlRoot), &result));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>::FallbackColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase)->get_FallbackColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>::FallbackColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase)->put_FallbackColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>::OnConnected() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides)->OnConnected());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>::OnDisconnected() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides)->OnDisconnected());
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>::CompositionBrush() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected)->get_CompositionBrush(&value));
        return winrt::Windows::UI::Composition::CompositionBrush{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>::CompositionBrush(winrt::Windows::UI::Composition::CompositionBrush const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected)->put_CompositionBrush(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics<D>::FallbackColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics)->get_FallbackColorProperty(&value));
        return winrt::Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Media::XamlLight{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::GetId() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightOverrides)->GetId(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::OnConnected(winrt::Windows::UI::Xaml::UIElement const& newElement) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightOverrides)->OnConnected(*(void**)(&newElement)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::OnDisconnected(winrt::Windows::UI::Xaml::UIElement const& oldElement) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightOverrides)->OnDisconnected(*(void**)(&oldElement)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>::CompositionLight() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightProtected)->get_CompositionLight(&value));
        return winrt::Windows::UI::Composition::CompositionLight{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>::CompositionLight(winrt::Windows::UI::Composition::CompositionLight const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightProtected)->put_CompositionLight(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::AddTargetElement(param::hstring const& lightId, winrt::Windows::UI::Xaml::UIElement const& element) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightStatics)->AddTargetElement(*(void**)(&lightId), *(void**)(&element)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::RemoveTargetElement(param::hstring const& lightId, winrt::Windows::UI::Xaml::UIElement const& element) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightStatics)->RemoveTargetElement(*(void**)(&lightId), *(void**)(&element)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::AddTargetBrush(param::hstring const& lightId, winrt::Windows::UI::Xaml::Media::Brush const& brush) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightStatics)->AddTargetBrush(*(void**)(&lightId), *(void**)(&brush)));
    }
    template <typename D> auto consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::RemoveTargetBrush(param::hstring const& lightId, winrt::Windows::UI::Xaml::Media::Brush const& brush) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Media::IXamlLightStatics)->RemoveTargetBrush(*(void**)(&lightId), *(void**)(&brush)));
    }
    template <typename H> struct delegate<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventHandler, H> final : implements_delegate<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler, H> final : implements_delegate<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        int32_t __stdcall get_BackgroundSource(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::AcrylicBackgroundSource>(this->shim().BackgroundSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BackgroundSource(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundSource(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::AcrylicBackgroundSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().TintColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintOpacity(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TintOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintOpacity(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintOpacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintTransitionDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().TintTransitionDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintTransitionDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintTransitionDuration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysUseFallback(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysUseFallback());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlwaysUseFallback(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysUseFallback(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrush2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        int32_t __stdcall get_TintLuminosityOpacity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<double>>(this->shim().TintLuminosityOpacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TintLuminosityOpacity(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintLuminosityOpacity(*reinterpret_cast<winrt::Windows::Foundation::IReference<double> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::AcrylicBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        int32_t __stdcall get_BackgroundSourceProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().BackgroundSourceProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TintColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintOpacityProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TintOpacityProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TintTransitionDurationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TintTransitionDurationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysUseFallbackProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AlwaysUseFallbackProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        int32_t __stdcall get_TintLuminosityOpacityProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TintLuminosityOpacityProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IArcSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IArcSegment>
    {
        int32_t __stdcall get_Point(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(winrt::Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Size>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Size(winrt::Windows::Foundation::Size value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<winrt::Windows::Foundation::Size const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationAngle(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationAngle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RotationAngle(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsLargeArc(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLargeArc());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsLargeArc(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLargeArc(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SweepDirection(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::SweepDirection>(this->shim().SweepDirection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SweepDirection(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SweepDirection(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::SweepDirection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IArcSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        int32_t __stdcall get_PointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().PointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationAngleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RotationAngleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsLargeArcProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().IsLargeArcProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SweepDirectionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SweepDirectionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBezierSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBezierSegment>
    {
        int32_t __stdcall get_Point1(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point1(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point1(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point2(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point2(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point2(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point3(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point3());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point3(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point3(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        int32_t __stdcall get_Point1Property(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().Point1Property());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point2Property(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().Point2Property());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point3Property(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().Point3Property());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBitmapCache> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBitmapCache>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBrush>
    {
        int32_t __stdcall get_Opacity(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Opacity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Opacity(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Transform(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Transform>(this->shim().Transform());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Transform(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Transform const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RelativeTransform(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Transform>(this->shim().RelativeTransform());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RelativeTransform(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeTransform(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Transform const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Brush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        int32_t __stdcall PopulatePropertyInfoOverride(void* propertyName, void* animationPropertyInfo) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PopulatePropertyInfoOverride(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<winrt::Windows::UI::Composition::AnimationPropertyInfo const*>(&animationPropertyInfo));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IBrushStatics>
    {
        int32_t __stdcall get_OpacityProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().OpacityProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransformProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TransformProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RelativeTransformProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RelativeTransformProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICacheMode> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICacheMode>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICacheModeFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::CacheMode>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICompositeTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICompositeTransform>
    {
        int32_t __stdcall get_CenterX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SkewX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SkewX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SkewX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkewX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SkewY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SkewY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SkewY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkewY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Rotation(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Rotation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Rotation(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TranslateX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TranslateX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TranslateX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TranslateY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TranslateY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TranslateY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        int32_t __stdcall get_CenterXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SkewXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SkewXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SkewYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SkewYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RotationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TranslateXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TranslateXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TranslateYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TranslateYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICompositionTarget> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICompositionTarget>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        int32_t __stdcall add_Rendering(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Rendering(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Rendering(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rendering(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SurfaceContentsLost(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SurfaceContentsLost(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SurfaceContentsLost(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SurfaceContentsLost(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> : produce_base<D, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        int32_t __stdcall add_Rendered(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Rendered(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Rendered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rendered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IEllipseGeometry> : produce_base<D, winrt::Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        int32_t __stdcall get_Center(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Center());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Center(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadiusX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RadiusX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RadiusX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadiusY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RadiusY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RadiusY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        int32_t __stdcall get_CenterProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadiusXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RadiusXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RadiusYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RadiusYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IFontFamily> : produce_base<D, winrt::Windows::UI::Xaml::Media::IFontFamily>
    {
        int32_t __stdcall get_Source(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IFontFamilyFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        int32_t __stdcall CreateInstanceWithName(void* familyName, void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::FontFamily>(this->shim().CreateInstanceWithName(*reinterpret_cast<hstring const*>(&familyName), *reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        int32_t __stdcall get_XamlAutoFontFamily(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::FontFamily>(this->shim().XamlAutoFontFamily());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeneralTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeneralTransform>
    {
        int32_t __stdcall get_Inverse(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GeneralTransform>(this->shim().Inverse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TransformPoint(winrt::Windows::Foundation::Point point, winrt::Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Point>(this->shim().TransformPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&point)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryTransform(winrt::Windows::Foundation::Point inPoint, winrt::Windows::Foundation::Point* outPoint, bool* returnValue) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(outPoint);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryTransform(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&inPoint), *reinterpret_cast<winrt::Windows::Foundation::Point*>(outPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TransformBounds(winrt::Windows::Foundation::Rect rect, winrt::Windows::Foundation::Rect* result) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Rect>(this->shim().TransformBounds(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&rect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GeneralTransform>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        int32_t __stdcall get_InverseCore(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GeneralTransform>(this->shim().InverseCore());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryTransformCore(winrt::Windows::Foundation::Point inPoint, winrt::Windows::Foundation::Point* outPoint, bool* returnValue) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(outPoint);
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryTransformCore(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&inPoint), *reinterpret_cast<winrt::Windows::Foundation::Point*>(outPoint)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TransformBoundsCore(winrt::Windows::Foundation::Rect rect, winrt::Windows::Foundation::Rect* result) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Rect>(this->shim().TransformBoundsCore(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&rect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeometry> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeometry>
    {
        int32_t __stdcall get_Transform(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Transform>(this->shim().Transform());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Transform(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Transform const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bounds(winrt::Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Rect>(this->shim().Bounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeometryFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeometryFactory>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeometryGroup> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeometryGroup>
    {
        int32_t __stdcall get_FillRule(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::FillRule>(this->shim().FillRule());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FillRule(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRule(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::FillRule const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Children(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GeometryCollection>(this->shim().Children());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Children(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Children(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::GeometryCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        int32_t __stdcall get_FillRuleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().FillRuleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChildrenProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ChildrenProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGeometryStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGeometryStatics>
    {
        int32_t __stdcall get_Empty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Geometry>(this->shim().Empty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StandardFlatteningTolerance(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StandardFlatteningTolerance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TransformProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TransformProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGradientBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGradientBrush>
    {
        int32_t __stdcall get_SpreadMethod(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GradientSpreadMethod>(this->shim().SpreadMethod());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SpreadMethod(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpreadMethod(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::GradientSpreadMethod const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MappingMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::BrushMappingMode>(this->shim().MappingMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MappingMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MappingMode(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::BrushMappingMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorInterpolationMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::ColorInterpolationMode>(this->shim().ColorInterpolationMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ColorInterpolationMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorInterpolationMode(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::ColorInterpolationMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GradientStops(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GradientStopCollection>(this->shim().GradientStops());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GradientStops(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GradientStops(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::GradientStopCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGradientBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::GradientBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGradientBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        int32_t __stdcall get_SpreadMethodProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SpreadMethodProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MappingModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().MappingModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColorInterpolationModeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ColorInterpolationModeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GradientStopsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().GradientStopsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGradientStop> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGradientStop>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Offset(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Offset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Offset(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IGradientStopStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        int32_t __stdcall get_ColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OffsetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().OffsetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IImageBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IImageBrush>
    {
        int32_t __stdcall get_ImageSource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::ImageSource>(this->shim().ImageSource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ImageSource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageSource(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::ImageSource const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ImageFailed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ImageFailed(*reinterpret_cast<winrt::Windows::UI::Xaml::ExceptionRoutedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ImageFailed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageFailed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ImageOpened(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ImageOpened(*reinterpret_cast<winrt::Windows::UI::Xaml::RoutedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ImageOpened(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageOpened(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IImageBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        int32_t __stdcall get_ImageSourceProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ImageSourceProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IImageSource> : produce_base<D, winrt::Windows::UI::Xaml::Media::IImageSource>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IImageSourceFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IImageSourceFactory>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILineGeometry> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILineGeometry>
    {
        int32_t __stdcall get_StartPoint(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().StartPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartPoint(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndPoint(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().EndPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EndPoint(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILineGeometryStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        int32_t __stdcall get_StartPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().EndPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILineSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILineSegment>
    {
        int32_t __stdcall get_Point(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILineSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        int32_t __stdcall get_PointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().PointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        int32_t __stdcall get_StartPoint(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().StartPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartPoint(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndPoint(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().EndPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EndPoint(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        int32_t __stdcall CreateInstanceWithGradientStopCollectionAndAngle(void* gradientStopCollection, double angle, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::LinearGradientBrush>(this->shim().CreateInstanceWithGradientStopCollectionAndAngle(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::GradientStopCollection const*>(&gradientStopCollection), angle));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        int32_t __stdcall get_StartPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().EndPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSurface> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        int32_t __stdcall get_DecodedPhysicalSize(winrt::Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Size>(this->shim().DecodedPhysicalSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DecodedSize(winrt::Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Size>(this->shim().DecodedSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NaturalSize(winrt::Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Size>(this->shim().NaturalSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_LoadCompleted(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LoadCompleted(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Media::LoadedImageSurface, winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_LoadCompleted(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadCompleted(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        int32_t __stdcall StartLoadFromUriWithSize(void* uri, winrt::Windows::Foundation::Size desiredMaxSize, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<winrt::Windows::Foundation::Size const*>(&desiredMaxSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartLoadFromUri(void* uri, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartLoadFromStreamWithSize(void* stream, winrt::Windows::Foundation::Size desiredMaxSize, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromStream(*reinterpret_cast<winrt::Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<winrt::Windows::Foundation::Size const*>(&desiredMaxSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartLoadFromStream(void* stream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromStream(*reinterpret_cast<winrt::Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrix3DProjection> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D>(this->shim().ProjectionMatrix());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectionMatrix(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        int32_t __stdcall get_ProjectionMatrixProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ProjectionMatrixProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrixHelper> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrixHelper>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        int32_t __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Matrix>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Matrix>(this->shim().Identity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY, struct struct_Windows_UI_Xaml_Media_Matrix* result) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Matrix>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::Matrix>(this->shim().FromElements(m11, m12, m21, m22, offsetX, offsetY));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Matrix target, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetIsIdentity(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Matrix const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Transform(struct struct_Windows_UI_Xaml_Media_Matrix target, winrt::Windows::Foundation::Point point, winrt::Windows::Foundation::Point* result) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Point>(this->shim().Transform(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Matrix const*>(&target), *reinterpret_cast<winrt::Windows::Foundation::Point const*>(&point)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrixTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrixTransform>
    {
        int32_t __stdcall get_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Matrix>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Matrix>(this->shim().Matrix());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Matrix(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Matrix const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        int32_t __stdcall get_MatrixProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().MatrixProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        int32_t __stdcall SetThumbnailImage(void* source) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetThumbnailImage(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&source));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        int32_t __stdcall get_StreamKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Playback::FailedMediaStreamKind>(this->shim().StreamKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathFigure> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathFigure>
    {
        int32_t __stdcall get_Segments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::PathSegmentCollection>(this->shim().Segments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Segments(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Segments(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::PathSegmentCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartPoint(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().StartPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartPoint(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsClosed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsClosed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsClosed(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsClosed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFilled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFilled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsFilled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFilled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathFigureStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        int32_t __stdcall get_SegmentsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().SegmentsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartPointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsClosedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().IsClosedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFilledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().IsFilledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathGeometry> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathGeometry>
    {
        int32_t __stdcall get_FillRule(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::FillRule>(this->shim().FillRule());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FillRule(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRule(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::FillRule const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Figures(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::PathFigureCollection>(this->shim().Figures());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Figures(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Figures(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::PathFigureCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathGeometryStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        int32_t __stdcall get_FillRuleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().FillRuleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FiguresProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().FiguresProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathSegment>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPathSegmentFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPlaneProjection> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPlaneProjection>
    {
        int32_t __stdcall get_LocalOffsetX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LocalOffsetX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalOffsetY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LocalOffsetY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalOffsetZ(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetZ());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LocalOffsetZ(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetZ(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RotationX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RotationY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationZ(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationZ());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RotationZ(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationZ(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterOfRotationX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterOfRotationY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationZ(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationZ());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterOfRotationZ(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationZ(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GlobalOffsetX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GlobalOffsetY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetZ(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetZ());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GlobalOffsetZ(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetZ(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D>(this->shim().ProjectionMatrix());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        int32_t __stdcall get_LocalOffsetXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalOffsetYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalOffsetZProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetZProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RotationXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RotationYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RotationZProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RotationZProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterOfRotationZProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationZProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GlobalOffsetZProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetZProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProjectionMatrixProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ProjectionMatrixProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyBezierSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        int32_t __stdcall get_Points(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Points(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        int32_t __stdcall get_PointsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyLineSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        int32_t __stdcall get_Points(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Points(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        int32_t __stdcall get_PointsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        int32_t __stdcall get_Points(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Points(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        int32_t __stdcall get_PointsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IProjection> : produce_base<D, winrt::Windows::UI::Xaml::Media::IProjection>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IProjectionFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IProjectionFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Projection>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment> : produce_base<D, winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        int32_t __stdcall get_Point1(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point1(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point1(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point2(winrt::Windows::Foundation::Point* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Point>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Point>(this->shim().Point2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Point2(winrt::Windows::Foundation::Point value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point2(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        int32_t __stdcall get_Point1Property(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().Point1Property());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Point2Property(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().Point2Property());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRectangleGeometry> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        int32_t __stdcall get_Rect(winrt::Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Rect>(this->shim().Rect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Rect(winrt::Windows::Foundation::Rect value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rect(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        int32_t __stdcall get_RectProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().RectProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRenderedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        int32_t __stdcall get_FrameDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().FrameDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRenderingEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        int32_t __stdcall get_RenderingTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().RenderingTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::RevealBackgroundBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBorderBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::RevealBorderBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBrush>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetTheme(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::ApplicationTheme>(this->shim().TargetTheme());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetTheme(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetTheme(*reinterpret_cast<winrt::Windows::UI::Xaml::ApplicationTheme const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysUseFallback(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysUseFallback());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlwaysUseFallback(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysUseFallback(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::RevealBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRevealBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        int32_t __stdcall get_ColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetThemeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TargetThemeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlwaysUseFallbackProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AlwaysUseFallbackProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().StateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetState(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetState(*reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<winrt::Windows::UI::Xaml::Media::RevealBrushState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetState(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::Media::RevealBrushState>(this->shim().GetState(*reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRotateTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRotateTransform>
    {
        int32_t __stdcall get_CenterX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Angle(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Angle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Angle(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IRotateTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        int32_t __stdcall get_CenterXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AngleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AngleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IScaleTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::IScaleTransform>
    {
        int32_t __stdcall get_CenterX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ScaleY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IScaleTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        int32_t __stdcall get_CenterXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ScaleYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IShadow> : produce_base<D, winrt::Windows::UI::Xaml::Media::IShadow>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IShadowFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IShadowFactory>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ISkewTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::ISkewTransform>
    {
        int32_t __stdcall get_CenterX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CenterY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AngleX(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AngleX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AngleX(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AngleX(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AngleY(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AngleY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AngleY(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AngleY(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ISkewTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        int32_t __stdcall get_CenterXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CenterYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AngleXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AngleXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AngleYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AngleYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        int32_t __stdcall CreateInstanceWithColor(struct struct_Windows_UI_Color color, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::SolidColorBrush>(this->shim().CreateInstanceWithColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&color)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        int32_t __stdcall get_ColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IThemeShadow> : produce_base<D, winrt::Windows::UI::Xaml::Media::IThemeShadow>
    {
        int32_t __stdcall get_Receivers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::UIElementWeakCollection>(this->shim().Receivers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IThemeShadowFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::ThemeShadow>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITileBrush> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITileBrush>
    {
        int32_t __stdcall get_AlignmentX(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::AlignmentX>(this->shim().AlignmentX());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlignmentX(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentX(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::AlignmentX const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlignmentY(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::AlignmentY>(this->shim().AlignmentY());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlignmentY(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentY(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::AlignmentY const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Stretch(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Stretch>(this->shim().Stretch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Stretch(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stretch(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::Stretch const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITileBrushFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::TileBrush>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITileBrushStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        int32_t __stdcall get_AlignmentXProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AlignmentXProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlignmentYProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().AlignmentYProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StretchProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().StretchProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITimelineMarker> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITimelineMarker>
    {
        int32_t __stdcall get_Time(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Time());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Time(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Time(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Type(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Type(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Text(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        int32_t __stdcall get_Marker(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::TimelineMarker>(this->shim().Marker());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Marker(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Marker(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::TimelineMarker const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        int32_t __stdcall get_TimeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TimeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TextProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().TextProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITransform>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITransformFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITransformFactory>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITransformGroup> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITransformGroup>
    {
        int32_t __stdcall get_Children(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::TransformCollection>(this->shim().Children());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Children(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Children(*reinterpret_cast<winrt::Windows::UI::Xaml::Media::TransformCollection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Xaml::Media::Matrix>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::Matrix>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITransformGroupStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        int32_t __stdcall get_ChildrenProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().ChildrenProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITranslateTransform> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITranslateTransform>
    {
        int32_t __stdcall get_X(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().X());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_X(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().X(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Y(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Y());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Y(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Y(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        int32_t __stdcall get_XProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().XProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_YProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().YProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelper> : produce_base<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        int32_t __stdcall FindElementsInHostCoordinatesPoint(winrt::Windows::Foundation::Point intersectingPoint, void* subtree, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&intersectingPoint), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&subtree)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindElementsInHostCoordinatesRect(winrt::Windows::Foundation::Rect intersectingRect, void* subtree, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&intersectingRect), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&subtree)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllElementsInHostCoordinatesPoint(winrt::Windows::Foundation::Point intersectingPoint, void* subtree, bool includeAllElements, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<winrt::Windows::Foundation::Point const*>(&intersectingPoint), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&subtree), includeAllElements));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllElementsInHostCoordinatesRect(winrt::Windows::Foundation::Rect intersectingRect, void* subtree, bool includeAllElements, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&intersectingRect), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&subtree), includeAllElements));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetChild(void* reference, int32_t childIndex, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::DependencyObject>(this->shim().GetChild(*reinterpret_cast<winrt::Windows::UI::Xaml::DependencyObject const*>(&reference), childIndex));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetChildrenCount(void* reference, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetChildrenCount(*reinterpret_cast<winrt::Windows::UI::Xaml::DependencyObject const*>(&reference)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetParent(void* reference, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Xaml::DependencyObject>(this->shim().GetParent(*reinterpret_cast<winrt::Windows::UI::Xaml::DependencyObject const*>(&reference)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DisconnectChildrenRecursive(void* element) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisconnectChildrenRecursive(*reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&element));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> : produce_base<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        int32_t __stdcall GetOpenPopups(void* window, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>>(this->shim().GetOpenPopups(*reinterpret_cast<winrt::Windows::UI::Xaml::Window const*>(&window)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics3> : produce_base<D, winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        int32_t __stdcall GetOpenPopupsForXamlRoot(void* xamlRoot, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Controls::Primitives::Popup>>(this->shim().GetOpenPopupsForXamlRoot(*reinterpret_cast<winrt::Windows::UI::Xaml::XamlRoot const*>(&xamlRoot)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().FallbackColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        int32_t __stdcall OnConnected() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnConnected();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnDisconnected() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnected();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        int32_t __stdcall get_CompositionBrush(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Composition::CompositionBrush>(this->shim().CompositionBrush());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompositionBrush(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionBrush(*reinterpret_cast<winrt::Windows::UI::Composition::CompositionBrush const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        int32_t __stdcall get_FallbackColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::DependencyProperty>(this->shim().FallbackColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlLight> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlLight>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlLightFactory> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Media::XamlLight>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlLightOverrides> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        int32_t __stdcall GetId(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnConnected(void* newElement) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnConnected(*reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&newElement));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnDisconnected(void* oldElement) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnected(*reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&oldElement));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlLightProtected> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        int32_t __stdcall get_CompositionLight(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Composition::CompositionLight>(this->shim().CompositionLight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompositionLight(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionLight(*reinterpret_cast<winrt::Windows::UI::Composition::CompositionLight const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Media::IXamlLightStatics> : produce_base<D, winrt::Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        int32_t __stdcall AddTargetElement(void* lightId, void* element) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTargetElement(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&element));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveTargetElement(void* lightId, void* element) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveTargetElement(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<winrt::Windows::UI::Xaml::UIElement const*>(&element));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddTargetBrush(void* lightId, void* brush) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTargetBrush(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<winrt::Windows::UI::Xaml::Media::Brush const*>(&brush));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveTargetBrush(void* lightId, void* brush) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveTargetBrush(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<winrt::Windows::UI::Xaml::Media::Brush const*>(&brush));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2>
    : produce_dispatch_to_overridable_base<T, D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2>
{
    auto PopulatePropertyInfoOverride(hstring const& propertyName, winrt::Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.PopulatePropertyInfoOverride(propertyName, animationPropertyInfo);
        }

        return this->shim().PopulatePropertyInfoOverride(propertyName, animationPropertyInfo);
    }
};
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    : produce_dispatch_to_overridable_base<T, D, winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides>
{
    auto InverseCore()
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.InverseCore();
        }

        return this->shim().InverseCore();
    }
    auto TryTransformCore(winrt::Windows::Foundation::Point const& inPoint, winrt::Windows::Foundation::Point& outPoint)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.TryTransformCore(inPoint, outPoint);
        }

        return this->shim().TryTransformCore(inPoint, outPoint);
    }
    auto TransformBoundsCore(winrt::Windows::Foundation::Rect const& rect)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.TransformBoundsCore(rect);
        }

        return this->shim().TransformBoundsCore(rect);
    }
};
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    : produce_dispatch_to_overridable_base<T, D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
{
    auto OnConnected()
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.OnConnected();
        }

        return this->shim().OnConnected();
    }
    auto OnDisconnected()
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.OnDisconnected();
        }

        return this->shim().OnDisconnected();
    }
};
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, winrt::Windows::UI::Xaml::Media::IXamlLightOverrides>
    : produce_dispatch_to_overridable_base<T, D, winrt::Windows::UI::Xaml::Media::IXamlLightOverrides>
{
    auto GetId()
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.GetId();
        }

        return this->shim().GetId();
    }
    auto OnConnected(winrt::Windows::UI::Xaml::UIElement const& newElement)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.OnConnected(newElement);
        }

        return this->shim().OnConnected(newElement);
    }
    auto OnDisconnected(winrt::Windows::UI::Xaml::UIElement const& oldElement)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.OnDisconnected(oldElement);
        }

        return this->shim().OnDisconnected(oldElement);
    }
};
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media
{
    inline AcrylicBrush::AcrylicBrush()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<AcrylicBrush, IAcrylicBrushFactory>([&](IAcrylicBrushFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto AcrylicBrush::BackgroundSourceProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics const&), AcrylicBrush, IAcrylicBrushStatics>([](IAcrylicBrushStatics const& f) { return f.BackgroundSourceProperty(); });
    }
    inline auto AcrylicBrush::TintColorProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics const&), AcrylicBrush, IAcrylicBrushStatics>([](IAcrylicBrushStatics const& f) { return f.TintColorProperty(); });
    }
    inline auto AcrylicBrush::TintOpacityProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics const&), AcrylicBrush, IAcrylicBrushStatics>([](IAcrylicBrushStatics const& f) { return f.TintOpacityProperty(); });
    }
    inline auto AcrylicBrush::TintTransitionDurationProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics const&), AcrylicBrush, IAcrylicBrushStatics>([](IAcrylicBrushStatics const& f) { return f.TintTransitionDurationProperty(); });
    }
    inline auto AcrylicBrush::AlwaysUseFallbackProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics const&), AcrylicBrush, IAcrylicBrushStatics>([](IAcrylicBrushStatics const& f) { return f.AlwaysUseFallbackProperty(); });
    }
    inline auto AcrylicBrush::TintLuminosityOpacityProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IAcrylicBrushStatics2 const&), AcrylicBrush, IAcrylicBrushStatics2>([](IAcrylicBrushStatics2 const& f) { return f.TintLuminosityOpacityProperty(); });
    }
    inline ArcSegment::ArcSegment() :
        ArcSegment(impl::call_factory_cast<ArcSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), ArcSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ArcSegment>(); }))
    {
    }
    inline auto ArcSegment::PointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IArcSegmentStatics const&), ArcSegment, IArcSegmentStatics>([](IArcSegmentStatics const& f) { return f.PointProperty(); });
    }
    inline auto ArcSegment::SizeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IArcSegmentStatics const&), ArcSegment, IArcSegmentStatics>([](IArcSegmentStatics const& f) { return f.SizeProperty(); });
    }
    inline auto ArcSegment::RotationAngleProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IArcSegmentStatics const&), ArcSegment, IArcSegmentStatics>([](IArcSegmentStatics const& f) { return f.RotationAngleProperty(); });
    }
    inline auto ArcSegment::IsLargeArcProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IArcSegmentStatics const&), ArcSegment, IArcSegmentStatics>([](IArcSegmentStatics const& f) { return f.IsLargeArcProperty(); });
    }
    inline auto ArcSegment::SweepDirectionProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IArcSegmentStatics const&), ArcSegment, IArcSegmentStatics>([](IArcSegmentStatics const& f) { return f.SweepDirectionProperty(); });
    }
    inline BezierSegment::BezierSegment() :
        BezierSegment(impl::call_factory_cast<BezierSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), BezierSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BezierSegment>(); }))
    {
    }
    inline auto BezierSegment::Point1Property()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBezierSegmentStatics const&), BezierSegment, IBezierSegmentStatics>([](IBezierSegmentStatics const& f) { return f.Point1Property(); });
    }
    inline auto BezierSegment::Point2Property()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBezierSegmentStatics const&), BezierSegment, IBezierSegmentStatics>([](IBezierSegmentStatics const& f) { return f.Point2Property(); });
    }
    inline auto BezierSegment::Point3Property()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBezierSegmentStatics const&), BezierSegment, IBezierSegmentStatics>([](IBezierSegmentStatics const& f) { return f.Point3Property(); });
    }
    inline BitmapCache::BitmapCache() :
        BitmapCache(impl::call_factory_cast<BitmapCache(*)(winrt::Windows::Foundation::IActivationFactory const&), BitmapCache>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BitmapCache>(); }))
    {
    }
    inline auto Brush::OpacityProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBrushStatics const&), Brush, IBrushStatics>([](IBrushStatics const& f) { return f.OpacityProperty(); });
    }
    inline auto Brush::TransformProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBrushStatics const&), Brush, IBrushStatics>([](IBrushStatics const& f) { return f.TransformProperty(); });
    }
    inline auto Brush::RelativeTransformProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IBrushStatics const&), Brush, IBrushStatics>([](IBrushStatics const& f) { return f.RelativeTransformProperty(); });
    }
    inline BrushCollection::BrushCollection() :
        BrushCollection(impl::call_factory_cast<BrushCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), BrushCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BrushCollection>(); }))
    {
    }
    inline CompositeTransform::CompositeTransform() :
        CompositeTransform(impl::call_factory_cast<CompositeTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), CompositeTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CompositeTransform>(); }))
    {
    }
    inline auto CompositeTransform::CenterXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.CenterXProperty(); });
    }
    inline auto CompositeTransform::CenterYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.CenterYProperty(); });
    }
    inline auto CompositeTransform::ScaleXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.ScaleXProperty(); });
    }
    inline auto CompositeTransform::ScaleYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.ScaleYProperty(); });
    }
    inline auto CompositeTransform::SkewXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.SkewXProperty(); });
    }
    inline auto CompositeTransform::SkewYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.SkewYProperty(); });
    }
    inline auto CompositeTransform::RotationProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.RotationProperty(); });
    }
    inline auto CompositeTransform::TranslateXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.TranslateXProperty(); });
    }
    inline auto CompositeTransform::TranslateYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ICompositeTransformStatics const&), CompositeTransform, ICompositeTransformStatics>([](ICompositeTransformStatics const& f) { return f.TranslateYProperty(); });
    }
    inline auto CompositionTarget::Rendering(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<CompositionTarget, ICompositionTargetStatics>([&](ICompositionTargetStatics const& f) { return f.Rendering(handler); });
    }
    inline CompositionTarget::Rendering_revoker CompositionTarget::Rendering(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<CompositionTarget, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics>();
        return { f, f.Rendering(handler) };
    }
    inline auto CompositionTarget::Rendering(winrt::event_token const& token)
    {
        impl::call_factory<CompositionTarget, ICompositionTargetStatics>([&](ICompositionTargetStatics const& f) { return f.Rendering(token); });
    }
    inline auto CompositionTarget::SurfaceContentsLost(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<CompositionTarget, ICompositionTargetStatics>([&](ICompositionTargetStatics const& f) { return f.SurfaceContentsLost(handler); });
    }
    inline CompositionTarget::SurfaceContentsLost_revoker CompositionTarget::SurfaceContentsLost(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<CompositionTarget, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics>();
        return { f, f.SurfaceContentsLost(handler) };
    }
    inline auto CompositionTarget::SurfaceContentsLost(winrt::event_token const& token)
    {
        impl::call_factory<CompositionTarget, ICompositionTargetStatics>([&](ICompositionTargetStatics const& f) { return f.SurfaceContentsLost(token); });
    }
    inline auto CompositionTarget::Rendered(winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> const& handler)
    {
        return impl::call_factory<CompositionTarget, ICompositionTargetStatics3>([&](ICompositionTargetStatics3 const& f) { return f.Rendered(handler); });
    }
    inline CompositionTarget::Rendered_revoker CompositionTarget::Rendered(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> const& handler)
    {
        auto f = get_activation_factory<CompositionTarget, winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>();
        return { f, f.Rendered(handler) };
    }
    inline auto CompositionTarget::Rendered(winrt::event_token const& token)
    {
        impl::call_factory<CompositionTarget, ICompositionTargetStatics3>([&](ICompositionTargetStatics3 const& f) { return f.Rendered(token); });
    }
    inline DoubleCollection::DoubleCollection() :
        DoubleCollection(impl::call_factory_cast<DoubleCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), DoubleCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DoubleCollection>(); }))
    {
    }
    inline EllipseGeometry::EllipseGeometry() :
        EllipseGeometry(impl::call_factory_cast<EllipseGeometry(*)(winrt::Windows::Foundation::IActivationFactory const&), EllipseGeometry>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EllipseGeometry>(); }))
    {
    }
    inline auto EllipseGeometry::CenterProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IEllipseGeometryStatics const&), EllipseGeometry, IEllipseGeometryStatics>([](IEllipseGeometryStatics const& f) { return f.CenterProperty(); });
    }
    inline auto EllipseGeometry::RadiusXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IEllipseGeometryStatics const&), EllipseGeometry, IEllipseGeometryStatics>([](IEllipseGeometryStatics const& f) { return f.RadiusXProperty(); });
    }
    inline auto EllipseGeometry::RadiusYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IEllipseGeometryStatics const&), EllipseGeometry, IEllipseGeometryStatics>([](IEllipseGeometryStatics const& f) { return f.RadiusYProperty(); });
    }
    inline FontFamily::FontFamily(param::hstring const& familyName)
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<FontFamily, IFontFamilyFactory>([&](IFontFamilyFactory const& f) { return f.CreateInstanceWithName(familyName, baseInterface, innerInterface); });
    }
    inline auto FontFamily::XamlAutoFontFamily()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::Media::FontFamily(*)(IFontFamilyStatics2 const&), FontFamily, IFontFamilyStatics2>([](IFontFamilyStatics2 const& f) { return f.XamlAutoFontFamily(); });
    }
    inline auto Geometry::Empty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::Media::Geometry(*)(IGeometryStatics const&), Geometry, IGeometryStatics>([](IGeometryStatics const& f) { return f.Empty(); });
    }
    inline auto Geometry::StandardFlatteningTolerance()
    {
        return impl::call_factory_cast<double(*)(IGeometryStatics const&), Geometry, IGeometryStatics>([](IGeometryStatics const& f) { return f.StandardFlatteningTolerance(); });
    }
    inline auto Geometry::TransformProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGeometryStatics const&), Geometry, IGeometryStatics>([](IGeometryStatics const& f) { return f.TransformProperty(); });
    }
    inline GeometryCollection::GeometryCollection() :
        GeometryCollection(impl::call_factory_cast<GeometryCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), GeometryCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GeometryCollection>(); }))
    {
    }
    inline GeometryGroup::GeometryGroup() :
        GeometryGroup(impl::call_factory_cast<GeometryGroup(*)(winrt::Windows::Foundation::IActivationFactory const&), GeometryGroup>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GeometryGroup>(); }))
    {
    }
    inline auto GeometryGroup::FillRuleProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGeometryGroupStatics const&), GeometryGroup, IGeometryGroupStatics>([](IGeometryGroupStatics const& f) { return f.FillRuleProperty(); });
    }
    inline auto GeometryGroup::ChildrenProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGeometryGroupStatics const&), GeometryGroup, IGeometryGroupStatics>([](IGeometryGroupStatics const& f) { return f.ChildrenProperty(); });
    }
    inline auto GradientBrush::SpreadMethodProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientBrushStatics const&), GradientBrush, IGradientBrushStatics>([](IGradientBrushStatics const& f) { return f.SpreadMethodProperty(); });
    }
    inline auto GradientBrush::MappingModeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientBrushStatics const&), GradientBrush, IGradientBrushStatics>([](IGradientBrushStatics const& f) { return f.MappingModeProperty(); });
    }
    inline auto GradientBrush::ColorInterpolationModeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientBrushStatics const&), GradientBrush, IGradientBrushStatics>([](IGradientBrushStatics const& f) { return f.ColorInterpolationModeProperty(); });
    }
    inline auto GradientBrush::GradientStopsProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientBrushStatics const&), GradientBrush, IGradientBrushStatics>([](IGradientBrushStatics const& f) { return f.GradientStopsProperty(); });
    }
    inline GradientStop::GradientStop() :
        GradientStop(impl::call_factory_cast<GradientStop(*)(winrt::Windows::Foundation::IActivationFactory const&), GradientStop>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GradientStop>(); }))
    {
    }
    inline auto GradientStop::ColorProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientStopStatics const&), GradientStop, IGradientStopStatics>([](IGradientStopStatics const& f) { return f.ColorProperty(); });
    }
    inline auto GradientStop::OffsetProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IGradientStopStatics const&), GradientStop, IGradientStopStatics>([](IGradientStopStatics const& f) { return f.OffsetProperty(); });
    }
    inline GradientStopCollection::GradientStopCollection() :
        GradientStopCollection(impl::call_factory_cast<GradientStopCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), GradientStopCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GradientStopCollection>(); }))
    {
    }
    inline ImageBrush::ImageBrush() :
        ImageBrush(impl::call_factory_cast<ImageBrush(*)(winrt::Windows::Foundation::IActivationFactory const&), ImageBrush>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ImageBrush>(); }))
    {
    }
    inline auto ImageBrush::ImageSourceProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IImageBrushStatics const&), ImageBrush, IImageBrushStatics>([](IImageBrushStatics const& f) { return f.ImageSourceProperty(); });
    }
    inline LineGeometry::LineGeometry() :
        LineGeometry(impl::call_factory_cast<LineGeometry(*)(winrt::Windows::Foundation::IActivationFactory const&), LineGeometry>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<LineGeometry>(); }))
    {
    }
    inline auto LineGeometry::StartPointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ILineGeometryStatics const&), LineGeometry, ILineGeometryStatics>([](ILineGeometryStatics const& f) { return f.StartPointProperty(); });
    }
    inline auto LineGeometry::EndPointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ILineGeometryStatics const&), LineGeometry, ILineGeometryStatics>([](ILineGeometryStatics const& f) { return f.EndPointProperty(); });
    }
    inline LineSegment::LineSegment() :
        LineSegment(impl::call_factory_cast<LineSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), LineSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<LineSegment>(); }))
    {
    }
    inline auto LineSegment::PointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ILineSegmentStatics const&), LineSegment, ILineSegmentStatics>([](ILineSegmentStatics const& f) { return f.PointProperty(); });
    }
    inline LinearGradientBrush::LinearGradientBrush() :
        LinearGradientBrush(impl::call_factory_cast<LinearGradientBrush(*)(winrt::Windows::Foundation::IActivationFactory const&), LinearGradientBrush>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<LinearGradientBrush>(); }))
    {
    }
    inline LinearGradientBrush::LinearGradientBrush(winrt::Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) :
        LinearGradientBrush(impl::call_factory<LinearGradientBrush, ILinearGradientBrushFactory>([&](ILinearGradientBrushFactory const& f) { return f.CreateInstanceWithGradientStopCollectionAndAngle(gradientStopCollection, angle); }))
    {
    }
    inline auto LinearGradientBrush::StartPointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ILinearGradientBrushStatics const&), LinearGradientBrush, ILinearGradientBrushStatics>([](ILinearGradientBrushStatics const& f) { return f.StartPointProperty(); });
    }
    inline auto LinearGradientBrush::EndPointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ILinearGradientBrushStatics const&), LinearGradientBrush, ILinearGradientBrushStatics>([](ILinearGradientBrushStatics const& f) { return f.EndPointProperty(); });
    }
    inline auto LoadedImageSurface::StartLoadFromUri(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Foundation::Size const& desiredMaxSize)
    {
        return impl::call_factory<LoadedImageSurface, ILoadedImageSurfaceStatics>([&](ILoadedImageSurfaceStatics const& f) { return f.StartLoadFromUri(uri, desiredMaxSize); });
    }
    inline auto LoadedImageSurface::StartLoadFromUri(winrt::Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<LoadedImageSurface, ILoadedImageSurfaceStatics>([&](ILoadedImageSurfaceStatics const& f) { return f.StartLoadFromUri(uri); });
    }
    inline auto LoadedImageSurface::StartLoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Foundation::Size const& desiredMaxSize)
    {
        return impl::call_factory<LoadedImageSurface, ILoadedImageSurfaceStatics>([&](ILoadedImageSurfaceStatics const& f) { return f.StartLoadFromStream(stream, desiredMaxSize); });
    }
    inline auto LoadedImageSurface::StartLoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream)
    {
        return impl::call_factory<LoadedImageSurface, ILoadedImageSurfaceStatics>([&](ILoadedImageSurfaceStatics const& f) { return f.StartLoadFromStream(stream); });
    }
    inline Matrix3DProjection::Matrix3DProjection() :
        Matrix3DProjection(impl::call_factory_cast<Matrix3DProjection(*)(winrt::Windows::Foundation::IActivationFactory const&), Matrix3DProjection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<Matrix3DProjection>(); }))
    {
    }
    inline auto Matrix3DProjection::ProjectionMatrixProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IMatrix3DProjectionStatics const&), Matrix3DProjection, IMatrix3DProjectionStatics>([](IMatrix3DProjectionStatics const& f) { return f.ProjectionMatrixProperty(); });
    }
    inline auto MatrixHelper::Identity()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::Media::Matrix(*)(IMatrixHelperStatics const&), MatrixHelper, IMatrixHelperStatics>([](IMatrixHelperStatics const& f) { return f.Identity(); });
    }
    inline auto MatrixHelper::FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY)
    {
        return impl::call_factory<MatrixHelper, IMatrixHelperStatics>([&](IMatrixHelperStatics const& f) { return f.FromElements(m11, m12, m21, m22, offsetX, offsetY); });
    }
    inline auto MatrixHelper::GetIsIdentity(winrt::Windows::UI::Xaml::Media::Matrix const& target)
    {
        return impl::call_factory<MatrixHelper, IMatrixHelperStatics>([&](IMatrixHelperStatics const& f) { return f.GetIsIdentity(target); });
    }
    inline auto MatrixHelper::Transform(winrt::Windows::UI::Xaml::Media::Matrix const& target, winrt::Windows::Foundation::Point const& point)
    {
        return impl::call_factory<MatrixHelper, IMatrixHelperStatics>([&](IMatrixHelperStatics const& f) { return f.Transform(target, point); });
    }
    inline MatrixTransform::MatrixTransform() :
        MatrixTransform(impl::call_factory_cast<MatrixTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), MatrixTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MatrixTransform>(); }))
    {
    }
    inline auto MatrixTransform::MatrixProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IMatrixTransformStatics const&), MatrixTransform, IMatrixTransformStatics>([](IMatrixTransformStatics const& f) { return f.MatrixProperty(); });
    }
    inline PartialMediaFailureDetectedEventArgs::PartialMediaFailureDetectedEventArgs() :
        PartialMediaFailureDetectedEventArgs(impl::call_factory_cast<PartialMediaFailureDetectedEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), PartialMediaFailureDetectedEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PartialMediaFailureDetectedEventArgs>(); }))
    {
    }
    inline PathFigure::PathFigure() :
        PathFigure(impl::call_factory_cast<PathFigure(*)(winrt::Windows::Foundation::IActivationFactory const&), PathFigure>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PathFigure>(); }))
    {
    }
    inline auto PathFigure::SegmentsProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathFigureStatics const&), PathFigure, IPathFigureStatics>([](IPathFigureStatics const& f) { return f.SegmentsProperty(); });
    }
    inline auto PathFigure::StartPointProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathFigureStatics const&), PathFigure, IPathFigureStatics>([](IPathFigureStatics const& f) { return f.StartPointProperty(); });
    }
    inline auto PathFigure::IsClosedProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathFigureStatics const&), PathFigure, IPathFigureStatics>([](IPathFigureStatics const& f) { return f.IsClosedProperty(); });
    }
    inline auto PathFigure::IsFilledProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathFigureStatics const&), PathFigure, IPathFigureStatics>([](IPathFigureStatics const& f) { return f.IsFilledProperty(); });
    }
    inline PathFigureCollection::PathFigureCollection() :
        PathFigureCollection(impl::call_factory_cast<PathFigureCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), PathFigureCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PathFigureCollection>(); }))
    {
    }
    inline PathGeometry::PathGeometry() :
        PathGeometry(impl::call_factory_cast<PathGeometry(*)(winrt::Windows::Foundation::IActivationFactory const&), PathGeometry>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PathGeometry>(); }))
    {
    }
    inline auto PathGeometry::FillRuleProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathGeometryStatics const&), PathGeometry, IPathGeometryStatics>([](IPathGeometryStatics const& f) { return f.FillRuleProperty(); });
    }
    inline auto PathGeometry::FiguresProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPathGeometryStatics const&), PathGeometry, IPathGeometryStatics>([](IPathGeometryStatics const& f) { return f.FiguresProperty(); });
    }
    inline PathSegmentCollection::PathSegmentCollection() :
        PathSegmentCollection(impl::call_factory_cast<PathSegmentCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), PathSegmentCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PathSegmentCollection>(); }))
    {
    }
    inline PlaneProjection::PlaneProjection() :
        PlaneProjection(impl::call_factory_cast<PlaneProjection(*)(winrt::Windows::Foundation::IActivationFactory const&), PlaneProjection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PlaneProjection>(); }))
    {
    }
    inline auto PlaneProjection::LocalOffsetXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.LocalOffsetXProperty(); });
    }
    inline auto PlaneProjection::LocalOffsetYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.LocalOffsetYProperty(); });
    }
    inline auto PlaneProjection::LocalOffsetZProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.LocalOffsetZProperty(); });
    }
    inline auto PlaneProjection::RotationXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.RotationXProperty(); });
    }
    inline auto PlaneProjection::RotationYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.RotationYProperty(); });
    }
    inline auto PlaneProjection::RotationZProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.RotationZProperty(); });
    }
    inline auto PlaneProjection::CenterOfRotationXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.CenterOfRotationXProperty(); });
    }
    inline auto PlaneProjection::CenterOfRotationYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.CenterOfRotationYProperty(); });
    }
    inline auto PlaneProjection::CenterOfRotationZProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.CenterOfRotationZProperty(); });
    }
    inline auto PlaneProjection::GlobalOffsetXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.GlobalOffsetXProperty(); });
    }
    inline auto PlaneProjection::GlobalOffsetYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.GlobalOffsetYProperty(); });
    }
    inline auto PlaneProjection::GlobalOffsetZProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.GlobalOffsetZProperty(); });
    }
    inline auto PlaneProjection::ProjectionMatrixProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPlaneProjectionStatics const&), PlaneProjection, IPlaneProjectionStatics>([](IPlaneProjectionStatics const& f) { return f.ProjectionMatrixProperty(); });
    }
    inline PointCollection::PointCollection() :
        PointCollection(impl::call_factory_cast<PointCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), PointCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PointCollection>(); }))
    {
    }
    inline PolyBezierSegment::PolyBezierSegment() :
        PolyBezierSegment(impl::call_factory_cast<PolyBezierSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), PolyBezierSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PolyBezierSegment>(); }))
    {
    }
    inline auto PolyBezierSegment::PointsProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPolyBezierSegmentStatics const&), PolyBezierSegment, IPolyBezierSegmentStatics>([](IPolyBezierSegmentStatics const& f) { return f.PointsProperty(); });
    }
    inline PolyLineSegment::PolyLineSegment() :
        PolyLineSegment(impl::call_factory_cast<PolyLineSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), PolyLineSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PolyLineSegment>(); }))
    {
    }
    inline auto PolyLineSegment::PointsProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPolyLineSegmentStatics const&), PolyLineSegment, IPolyLineSegmentStatics>([](IPolyLineSegmentStatics const& f) { return f.PointsProperty(); });
    }
    inline PolyQuadraticBezierSegment::PolyQuadraticBezierSegment() :
        PolyQuadraticBezierSegment(impl::call_factory_cast<PolyQuadraticBezierSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), PolyQuadraticBezierSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PolyQuadraticBezierSegment>(); }))
    {
    }
    inline auto PolyQuadraticBezierSegment::PointsProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IPolyQuadraticBezierSegmentStatics const&), PolyQuadraticBezierSegment, IPolyQuadraticBezierSegmentStatics>([](IPolyQuadraticBezierSegmentStatics const& f) { return f.PointsProperty(); });
    }
    inline QuadraticBezierSegment::QuadraticBezierSegment() :
        QuadraticBezierSegment(impl::call_factory_cast<QuadraticBezierSegment(*)(winrt::Windows::Foundation::IActivationFactory const&), QuadraticBezierSegment>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<QuadraticBezierSegment>(); }))
    {
    }
    inline auto QuadraticBezierSegment::Point1Property()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IQuadraticBezierSegmentStatics const&), QuadraticBezierSegment, IQuadraticBezierSegmentStatics>([](IQuadraticBezierSegmentStatics const& f) { return f.Point1Property(); });
    }
    inline auto QuadraticBezierSegment::Point2Property()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IQuadraticBezierSegmentStatics const&), QuadraticBezierSegment, IQuadraticBezierSegmentStatics>([](IQuadraticBezierSegmentStatics const& f) { return f.Point2Property(); });
    }
    inline RateChangedRoutedEventArgs::RateChangedRoutedEventArgs() :
        RateChangedRoutedEventArgs(impl::call_factory_cast<RateChangedRoutedEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), RateChangedRoutedEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RateChangedRoutedEventArgs>(); }))
    {
    }
    inline RectangleGeometry::RectangleGeometry() :
        RectangleGeometry(impl::call_factory_cast<RectangleGeometry(*)(winrt::Windows::Foundation::IActivationFactory const&), RectangleGeometry>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RectangleGeometry>(); }))
    {
    }
    inline auto RectangleGeometry::RectProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRectangleGeometryStatics const&), RectangleGeometry, IRectangleGeometryStatics>([](IRectangleGeometryStatics const& f) { return f.RectProperty(); });
    }
    inline RevealBackgroundBrush::RevealBackgroundBrush()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<RevealBackgroundBrush, IRevealBackgroundBrushFactory>([&](IRevealBackgroundBrushFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline RevealBorderBrush::RevealBorderBrush()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<RevealBorderBrush, IRevealBorderBrushFactory>([&](IRevealBorderBrushFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto RevealBrush::ColorProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRevealBrushStatics const&), RevealBrush, IRevealBrushStatics>([](IRevealBrushStatics const& f) { return f.ColorProperty(); });
    }
    inline auto RevealBrush::TargetThemeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRevealBrushStatics const&), RevealBrush, IRevealBrushStatics>([](IRevealBrushStatics const& f) { return f.TargetThemeProperty(); });
    }
    inline auto RevealBrush::AlwaysUseFallbackProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRevealBrushStatics const&), RevealBrush, IRevealBrushStatics>([](IRevealBrushStatics const& f) { return f.AlwaysUseFallbackProperty(); });
    }
    inline auto RevealBrush::StateProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRevealBrushStatics const&), RevealBrush, IRevealBrushStatics>([](IRevealBrushStatics const& f) { return f.StateProperty(); });
    }
    inline auto RevealBrush::SetState(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::UI::Xaml::Media::RevealBrushState const& value)
    {
        impl::call_factory<RevealBrush, IRevealBrushStatics>([&](IRevealBrushStatics const& f) { return f.SetState(element, value); });
    }
    inline auto RevealBrush::GetState(winrt::Windows::UI::Xaml::UIElement const& element)
    {
        return impl::call_factory<RevealBrush, IRevealBrushStatics>([&](IRevealBrushStatics const& f) { return f.GetState(element); });
    }
    inline RotateTransform::RotateTransform() :
        RotateTransform(impl::call_factory_cast<RotateTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), RotateTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RotateTransform>(); }))
    {
    }
    inline auto RotateTransform::CenterXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRotateTransformStatics const&), RotateTransform, IRotateTransformStatics>([](IRotateTransformStatics const& f) { return f.CenterXProperty(); });
    }
    inline auto RotateTransform::CenterYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRotateTransformStatics const&), RotateTransform, IRotateTransformStatics>([](IRotateTransformStatics const& f) { return f.CenterYProperty(); });
    }
    inline auto RotateTransform::AngleProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IRotateTransformStatics const&), RotateTransform, IRotateTransformStatics>([](IRotateTransformStatics const& f) { return f.AngleProperty(); });
    }
    inline ScaleTransform::ScaleTransform() :
        ScaleTransform(impl::call_factory_cast<ScaleTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), ScaleTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ScaleTransform>(); }))
    {
    }
    inline auto ScaleTransform::CenterXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IScaleTransformStatics const&), ScaleTransform, IScaleTransformStatics>([](IScaleTransformStatics const& f) { return f.CenterXProperty(); });
    }
    inline auto ScaleTransform::CenterYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IScaleTransformStatics const&), ScaleTransform, IScaleTransformStatics>([](IScaleTransformStatics const& f) { return f.CenterYProperty(); });
    }
    inline auto ScaleTransform::ScaleXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IScaleTransformStatics const&), ScaleTransform, IScaleTransformStatics>([](IScaleTransformStatics const& f) { return f.ScaleXProperty(); });
    }
    inline auto ScaleTransform::ScaleYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IScaleTransformStatics const&), ScaleTransform, IScaleTransformStatics>([](IScaleTransformStatics const& f) { return f.ScaleYProperty(); });
    }
    inline SkewTransform::SkewTransform() :
        SkewTransform(impl::call_factory_cast<SkewTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), SkewTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SkewTransform>(); }))
    {
    }
    inline auto SkewTransform::CenterXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ISkewTransformStatics const&), SkewTransform, ISkewTransformStatics>([](ISkewTransformStatics const& f) { return f.CenterXProperty(); });
    }
    inline auto SkewTransform::CenterYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ISkewTransformStatics const&), SkewTransform, ISkewTransformStatics>([](ISkewTransformStatics const& f) { return f.CenterYProperty(); });
    }
    inline auto SkewTransform::AngleXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ISkewTransformStatics const&), SkewTransform, ISkewTransformStatics>([](ISkewTransformStatics const& f) { return f.AngleXProperty(); });
    }
    inline auto SkewTransform::AngleYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ISkewTransformStatics const&), SkewTransform, ISkewTransformStatics>([](ISkewTransformStatics const& f) { return f.AngleYProperty(); });
    }
    inline SolidColorBrush::SolidColorBrush() :
        SolidColorBrush(impl::call_factory_cast<SolidColorBrush(*)(winrt::Windows::Foundation::IActivationFactory const&), SolidColorBrush>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SolidColorBrush>(); }))
    {
    }
    inline SolidColorBrush::SolidColorBrush(winrt::Windows::UI::Color const& color) :
        SolidColorBrush(impl::call_factory<SolidColorBrush, ISolidColorBrushFactory>([&](ISolidColorBrushFactory const& f) { return f.CreateInstanceWithColor(color); }))
    {
    }
    inline auto SolidColorBrush::ColorProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ISolidColorBrushStatics const&), SolidColorBrush, ISolidColorBrushStatics>([](ISolidColorBrushStatics const& f) { return f.ColorProperty(); });
    }
    inline ThemeShadow::ThemeShadow()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<ThemeShadow, IThemeShadowFactory>([&](IThemeShadowFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto TileBrush::AlignmentXProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITileBrushStatics const&), TileBrush, ITileBrushStatics>([](ITileBrushStatics const& f) { return f.AlignmentXProperty(); });
    }
    inline auto TileBrush::AlignmentYProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITileBrushStatics const&), TileBrush, ITileBrushStatics>([](ITileBrushStatics const& f) { return f.AlignmentYProperty(); });
    }
    inline auto TileBrush::StretchProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITileBrushStatics const&), TileBrush, ITileBrushStatics>([](ITileBrushStatics const& f) { return f.StretchProperty(); });
    }
    inline TimelineMarker::TimelineMarker() :
        TimelineMarker(impl::call_factory_cast<TimelineMarker(*)(winrt::Windows::Foundation::IActivationFactory const&), TimelineMarker>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TimelineMarker>(); }))
    {
    }
    inline auto TimelineMarker::TimeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITimelineMarkerStatics const&), TimelineMarker, ITimelineMarkerStatics>([](ITimelineMarkerStatics const& f) { return f.TimeProperty(); });
    }
    inline auto TimelineMarker::TypeProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITimelineMarkerStatics const&), TimelineMarker, ITimelineMarkerStatics>([](ITimelineMarkerStatics const& f) { return f.TypeProperty(); });
    }
    inline auto TimelineMarker::TextProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITimelineMarkerStatics const&), TimelineMarker, ITimelineMarkerStatics>([](ITimelineMarkerStatics const& f) { return f.TextProperty(); });
    }
    inline TimelineMarkerCollection::TimelineMarkerCollection() :
        TimelineMarkerCollection(impl::call_factory_cast<TimelineMarkerCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), TimelineMarkerCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TimelineMarkerCollection>(); }))
    {
    }
    inline TimelineMarkerRoutedEventArgs::TimelineMarkerRoutedEventArgs() :
        TimelineMarkerRoutedEventArgs(impl::call_factory_cast<TimelineMarkerRoutedEventArgs(*)(winrt::Windows::Foundation::IActivationFactory const&), TimelineMarkerRoutedEventArgs>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TimelineMarkerRoutedEventArgs>(); }))
    {
    }
    inline TransformCollection::TransformCollection() :
        TransformCollection(impl::call_factory_cast<TransformCollection(*)(winrt::Windows::Foundation::IActivationFactory const&), TransformCollection>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TransformCollection>(); }))
    {
    }
    inline TransformGroup::TransformGroup() :
        TransformGroup(impl::call_factory_cast<TransformGroup(*)(winrt::Windows::Foundation::IActivationFactory const&), TransformGroup>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TransformGroup>(); }))
    {
    }
    inline auto TransformGroup::ChildrenProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITransformGroupStatics const&), TransformGroup, ITransformGroupStatics>([](ITransformGroupStatics const& f) { return f.ChildrenProperty(); });
    }
    inline TranslateTransform::TranslateTransform() :
        TranslateTransform(impl::call_factory_cast<TranslateTransform(*)(winrt::Windows::Foundation::IActivationFactory const&), TranslateTransform>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TranslateTransform>(); }))
    {
    }
    inline auto TranslateTransform::XProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITranslateTransformStatics const&), TranslateTransform, ITranslateTransformStatics>([](ITranslateTransformStatics const& f) { return f.XProperty(); });
    }
    inline auto TranslateTransform::YProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(ITranslateTransformStatics const&), TranslateTransform, ITranslateTransformStatics>([](ITranslateTransformStatics const& f) { return f.YProperty(); });
    }
    inline auto VisualTreeHelper::FindElementsInHostCoordinates(winrt::Windows::Foundation::Point const& intersectingPoint, winrt::Windows::UI::Xaml::UIElement const& subtree)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.FindElementsInHostCoordinates(intersectingPoint, subtree); });
    }
    inline auto VisualTreeHelper::FindElementsInHostCoordinates(winrt::Windows::Foundation::Rect const& intersectingRect, winrt::Windows::UI::Xaml::UIElement const& subtree)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.FindElementsInHostCoordinates(intersectingRect, subtree); });
    }
    inline auto VisualTreeHelper::FindElementsInHostCoordinates(winrt::Windows::Foundation::Point const& intersectingPoint, winrt::Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.FindElementsInHostCoordinates(intersectingPoint, subtree, includeAllElements); });
    }
    inline auto VisualTreeHelper::FindElementsInHostCoordinates(winrt::Windows::Foundation::Rect const& intersectingRect, winrt::Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.FindElementsInHostCoordinates(intersectingRect, subtree, includeAllElements); });
    }
    inline auto VisualTreeHelper::GetChild(winrt::Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.GetChild(reference, childIndex); });
    }
    inline auto VisualTreeHelper::GetChildrenCount(winrt::Windows::UI::Xaml::DependencyObject const& reference)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.GetChildrenCount(reference); });
    }
    inline auto VisualTreeHelper::GetParent(winrt::Windows::UI::Xaml::DependencyObject const& reference)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.GetParent(reference); });
    }
    inline auto VisualTreeHelper::DisconnectChildrenRecursive(winrt::Windows::UI::Xaml::UIElement const& element)
    {
        impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics>([&](IVisualTreeHelperStatics const& f) { return f.DisconnectChildrenRecursive(element); });
    }
    inline auto VisualTreeHelper::GetOpenPopups(winrt::Windows::UI::Xaml::Window const& window)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics2>([&](IVisualTreeHelperStatics2 const& f) { return f.GetOpenPopups(window); });
    }
    inline auto VisualTreeHelper::GetOpenPopupsForXamlRoot(winrt::Windows::UI::Xaml::XamlRoot const& xamlRoot)
    {
        return impl::call_factory<VisualTreeHelper, IVisualTreeHelperStatics3>([&](IVisualTreeHelperStatics3 const& f) { return f.GetOpenPopupsForXamlRoot(xamlRoot); });
    }
    inline auto XamlCompositionBrushBase::FallbackColorProperty()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::DependencyProperty(*)(IXamlCompositionBrushBaseStatics const&), XamlCompositionBrushBase, IXamlCompositionBrushBaseStatics>([](IXamlCompositionBrushBaseStatics const& f) { return f.FallbackColorProperty(); });
    }
    inline XamlLight::XamlLight()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<XamlLight, IXamlLightFactory>([&](IXamlLightFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto XamlLight::AddTargetElement(param::hstring const& lightId, winrt::Windows::UI::Xaml::UIElement const& element)
    {
        impl::call_factory<XamlLight, IXamlLightStatics>([&](IXamlLightStatics const& f) { return f.AddTargetElement(lightId, element); });
    }
    inline auto XamlLight::RemoveTargetElement(param::hstring const& lightId, winrt::Windows::UI::Xaml::UIElement const& element)
    {
        impl::call_factory<XamlLight, IXamlLightStatics>([&](IXamlLightStatics const& f) { return f.RemoveTargetElement(lightId, element); });
    }
    inline auto XamlLight::AddTargetBrush(param::hstring const& lightId, winrt::Windows::UI::Xaml::Media::Brush const& brush)
    {
        impl::call_factory<XamlLight, IXamlLightStatics>([&](IXamlLightStatics const& f) { return f.AddTargetBrush(lightId, brush); });
    }
    inline auto XamlLight::RemoveTargetBrush(param::hstring const& lightId, winrt::Windows::UI::Xaml::Media::Brush const& brush)
    {
        impl::call_factory<XamlLight, IXamlLightStatics>([&](IXamlLightStatics const& f) { return f.RemoveTargetBrush(lightId, brush); });
    }
    template <typename L> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(L handler) :
        RateChangedRoutedEventHandler(impl::make_delegate<RateChangedRoutedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(F* handler) :
        RateChangedRoutedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(O* object, M method) :
        RateChangedRoutedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(com_ptr<O>&& object, M method) :
        RateChangedRoutedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(weak_ref<O>&& object, M method) :
        RateChangedRoutedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto RateChangedRoutedEventHandler::operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<RateChangedRoutedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(L handler) :
        TimelineMarkerRoutedEventHandler(impl::make_delegate<TimelineMarkerRoutedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(F* handler) :
        TimelineMarkerRoutedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(O* object, M method) :
        TimelineMarkerRoutedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(com_ptr<O>&& object, M method) :
        TimelineMarkerRoutedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(weak_ref<O>&& object, M method) :
        TimelineMarkerRoutedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto TimelineMarkerRoutedEventHandler::operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<TimelineMarkerRoutedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename D> auto IBrushOverrides2T<D>::PopulatePropertyInfoOverride(param::hstring const& propertyName, winrt::Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const
    {
        return shim().template try_as<IBrushOverrides2>().PopulatePropertyInfoOverride(propertyName, animationPropertyInfo);
    }
    template <typename D> auto IGeneralTransformOverridesT<D>::InverseCore() const
    {
        return shim().template try_as<IGeneralTransformOverrides>().InverseCore();
    }
    template <typename D> auto IGeneralTransformOverridesT<D>::TryTransformCore(winrt::Windows::Foundation::Point const& inPoint, winrt::Windows::Foundation::Point& outPoint) const
    {
        return shim().template try_as<IGeneralTransformOverrides>().TryTransformCore(inPoint, outPoint);
    }
    template <typename D> auto IGeneralTransformOverridesT<D>::TransformBoundsCore(winrt::Windows::Foundation::Rect const& rect) const
    {
        return shim().template try_as<IGeneralTransformOverrides>().TransformBoundsCore(rect);
    }
    template <typename D> auto IXamlCompositionBrushBaseOverridesT<D>::OnConnected() const
    {
        return shim().template try_as<IXamlCompositionBrushBaseOverrides>().OnConnected();
    }
    template <typename D> auto IXamlCompositionBrushBaseOverridesT<D>::OnDisconnected() const
    {
        return shim().template try_as<IXamlCompositionBrushBaseOverrides>().OnDisconnected();
    }
    template <typename D> auto IXamlLightOverridesT<D>::GetId() const
    {
        return shim().template try_as<IXamlLightOverrides>().GetId();
    }
    template <typename D> auto IXamlLightOverridesT<D>::OnConnected(winrt::Windows::UI::Xaml::UIElement const& newElement) const
    {
        return shim().template try_as<IXamlLightOverrides>().OnConnected(newElement);
    }
    template <typename D> auto IXamlLightOverridesT<D>::OnDisconnected(winrt::Windows::UI::Xaml::UIElement const& oldElement) const
    {
        return shim().template try_as<IXamlLightOverrides>().OnDisconnected(oldElement);
    }
    template <typename D, typename... Interfaces>
    struct AcrylicBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IAcrylicBrush, winrt::Windows::UI::Xaml::Media::IAcrylicBrush2, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, AcrylicBrush, winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>, winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = AcrylicBrush;
    protected:
        AcrylicBrushT()
        {
            impl::call_factory<AcrylicBrush, IAcrylicBrushFactory>([&](IAcrylicBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct BrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = Brush;
    protected:
        BrushT()
        {
            impl::call_factory<Brush, IBrushFactory>([&](IBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct CacheModeT :
        implements<D, winrt::Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::ICacheMode, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, CacheMode, winrt::Windows::UI::Xaml::DependencyObject>
    {
        using composable = CacheMode;
    protected:
        CacheModeT()
        {
            impl::call_factory<CacheMode, ICacheModeFactory>([&](ICacheModeFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct FontFamilyT :
        implements<D, winrt::Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IFontFamily>,
        impl::base<D, FontFamily>
    {
        using composable = FontFamily;
    protected:
        FontFamilyT(param::hstring const& familyName)
        {
            impl::call_factory<FontFamily, IFontFamilyFactory>([&](IFontFamilyFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstanceWithName(familyName, *this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct GeneralTransformT :
        implements<D, winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IGeneralTransform, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, GeneralTransform, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IGeneralTransformOverridesT<D>
    {
        using composable = GeneralTransform;
    protected:
        GeneralTransformT()
        {
            impl::call_factory<GeneralTransform, IGeneralTransformFactory>([&](IGeneralTransformFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct GradientBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IGradientBrush, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, GradientBrush, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = GradientBrush;
    protected:
        GradientBrushT()
        {
            impl::call_factory<GradientBrush, IGradientBrushFactory>([&](IGradientBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct ProjectionT :
        implements<D, winrt::Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IProjection, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, Projection, winrt::Windows::UI::Xaml::DependencyObject>
    {
        using composable = Projection;
    protected:
        ProjectionT()
        {
            impl::call_factory<Projection, IProjectionFactory>([&](IProjectionFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct RevealBackgroundBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush, winrt::Windows::UI::Xaml::Media::IRevealBrush, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, RevealBackgroundBrush, winrt::Windows::UI::Xaml::Media::RevealBrush, winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>, winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = RevealBackgroundBrush;
    protected:
        RevealBackgroundBrushT()
        {
            impl::call_factory<RevealBackgroundBrush, IRevealBackgroundBrushFactory>([&](IRevealBackgroundBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct RevealBorderBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IRevealBorderBrush, winrt::Windows::UI::Xaml::Media::IRevealBrush, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, RevealBorderBrush, winrt::Windows::UI::Xaml::Media::RevealBrush, winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>, winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = RevealBorderBrush;
    protected:
        RevealBorderBrushT()
        {
            impl::call_factory<RevealBorderBrush, IRevealBorderBrushFactory>([&](IRevealBorderBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct RevealBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IRevealBrush, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, RevealBrush, winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>, winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = RevealBrush;
    protected:
        RevealBrushT()
        {
            impl::call_factory<RevealBrush, IRevealBrushFactory>([&](IRevealBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct ThemeShadowT :
        implements<D, winrt::Windows::Foundation::IInspectable, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IThemeShadow, winrt::Windows::UI::Xaml::Media::IShadow, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, ThemeShadow, winrt::Windows::UI::Xaml::Media::Shadow, winrt::Windows::UI::Xaml::DependencyObject>
    {
        using composable = ThemeShadow;
    protected:
        ThemeShadowT()
        {
            impl::call_factory<ThemeShadow, IThemeShadowFactory>([&](IThemeShadowFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct TileBrushT :
        implements<D, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::ITileBrush, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, TileBrush, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = TileBrush;
    protected:
        TileBrushT()
        {
            impl::call_factory<TileBrush, ITileBrushFactory>([&](ITileBrushFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct XamlCompositionBrushBaseT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, XamlCompositionBrushBase, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>, winrt::Windows::UI::Xaml::Media::IBrushOverrides2T<D>
    {
        using composable = XamlCompositionBrushBase;
    protected:
        XamlCompositionBrushBaseT()
        {
            impl::call_factory<XamlCompositionBrushBase, IXamlCompositionBrushBaseFactory>([&](IXamlCompositionBrushBaseFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
    template <typename D, typename... Interfaces>
    struct XamlLightT :
        implements<D, winrt::Windows::UI::Xaml::Media::IXamlLightOverrides, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Media::IXamlLight, winrt::Windows::UI::Xaml::Media::IXamlLightProtected, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>,
        impl::base<D, XamlLight, winrt::Windows::UI::Xaml::DependencyObject>,
        winrt::Windows::UI::Xaml::Media::IXamlLightOverridesT<D>
    {
        using composable = XamlLight;
    protected:
        XamlLightT()
        {
            impl::call_factory<XamlLight, IXamlLightFactory>([&](IXamlLightFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrush2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IArcSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IArcSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBitmapCache> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrushOverrides2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICacheMode> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICacheModeFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositeTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IEllipseGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamily> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamilyFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientStop> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientStopStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageSourceFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineGeometryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSurface> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrix3DProjection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixHelper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathFigure> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathFigureStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathGeometryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathSegmentFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPlaneProjection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyLineSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IProjection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IProjectionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRectangleGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRenderedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRenderingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBorderBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRotateTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IRotateTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IScaleTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IScaleTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IShadow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IShadowFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ISkewTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ISkewTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IThemeShadow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IThemeShadowFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrushFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrushStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformGroupStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITranslateTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLight> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightOverrides> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightProtected> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::AcrylicBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ArcSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::BezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::BitmapCache> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Brush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::BrushCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::CacheMode> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::CompositeTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::CompositionTarget> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::DoubleCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::EllipseGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::FontFamily> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GeneralTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Geometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GeometryCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GeometryGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientStop> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientStopCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ImageBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ImageSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::LineGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::LineSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::LinearGradientBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::LoadedImageSurface> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Matrix3DProjection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::MatrixHelper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::MatrixTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PathFigure> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PathFigureCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PathGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PathSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PathSegmentCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PlaneProjection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PointCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyLineSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyQuadraticBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Projection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::QuadraticBezierSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RectangleGeometry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RenderingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBackgroundBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBorderBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::RotateTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ScaleTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Shadow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::SkewTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::SolidColorBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::ThemeShadow> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TileBrush> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarkerCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::Transform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TransformCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TransformGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::TranslateTransform> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::VisualTreeHelper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Media::XamlLight> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
