// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Composition_2_H
#define WINRT_Windows_UI_Composition_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct InkTrailPoint
    {
        winrt::Windows::Foundation::Point Point;
        float Radius;
    };
    inline bool operator==(InkTrailPoint const& left, InkTrailPoint const& right) noexcept
    {
        return left.Point == right.Point && left.Radius == right.Radius;
    }
    inline bool operator!=(InkTrailPoint const& left, InkTrailPoint const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AmbientLight : winrt::Windows::UI::Composition::IAmbientLight,
        impl::base<AmbientLight, winrt::Windows::UI::Composition::CompositionLight, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<AmbientLight, winrt::Windows::UI::Composition::IAmbientLight2, winrt::Windows::UI::Composition::ICompositionLight, winrt::Windows::UI::Composition::ICompositionLight2, winrt::Windows::UI::Composition::ICompositionLight3, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        AmbientLight(std::nullptr_t) noexcept {}
        AmbientLight(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IAmbientLight(ptr, take_ownership_from_abi) {}
        using impl::consume_t<AmbientLight, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<AmbientLight, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) AnimationController : winrt::Windows::UI::Composition::IAnimationController,
        impl::base<AnimationController, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<AnimationController, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        AnimationController(std::nullptr_t) noexcept {}
        AnimationController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IAnimationController(ptr, take_ownership_from_abi) {}
        using impl::consume_t<AnimationController, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<AnimationController, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
        [[nodiscard]] static auto MaxPlaybackRate();
        [[nodiscard]] static auto MinPlaybackRate();
    };
    struct __declspec(empty_bases) AnimationPropertyInfo : winrt::Windows::UI::Composition::IAnimationPropertyInfo,
        impl::base<AnimationPropertyInfo, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<AnimationPropertyInfo, winrt::Windows::UI::Composition::IAnimationPropertyInfo2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        AnimationPropertyInfo(std::nullptr_t) noexcept {}
        AnimationPropertyInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IAnimationPropertyInfo(ptr, take_ownership_from_abi) {}
        using impl::consume_t<AnimationPropertyInfo, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<AnimationPropertyInfo, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BackEasingFunction : winrt::Windows::UI::Composition::IBackEasingFunction,
        impl::base<BackEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BackEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BackEasingFunction(std::nullptr_t) noexcept {}
        BackEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBackEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BackEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BackEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BooleanKeyFrameAnimation : winrt::Windows::UI::Composition::IBooleanKeyFrameAnimation,
        impl::base<BooleanKeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BooleanKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BooleanKeyFrameAnimation(std::nullptr_t) noexcept {}
        BooleanKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBooleanKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BooleanKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BooleanKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BounceEasingFunction : winrt::Windows::UI::Composition::IBounceEasingFunction,
        impl::base<BounceEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BounceEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BounceEasingFunction(std::nullptr_t) noexcept {}
        BounceEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBounceEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BounceEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BounceEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BounceScalarNaturalMotionAnimation : winrt::Windows::UI::Composition::IBounceScalarNaturalMotionAnimation,
        impl::base<BounceScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BounceScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BounceScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBounceScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BounceScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BounceScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BounceVector2NaturalMotionAnimation : winrt::Windows::UI::Composition::IBounceVector2NaturalMotionAnimation,
        impl::base<BounceVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BounceVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BounceVector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceVector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBounceVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BounceVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BounceVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) BounceVector3NaturalMotionAnimation : winrt::Windows::UI::Composition::IBounceVector3NaturalMotionAnimation,
        impl::base<BounceVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<BounceVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        BounceVector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        BounceVector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IBounceVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<BounceVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<BounceVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CircleEasingFunction : winrt::Windows::UI::Composition::ICircleEasingFunction,
        impl::base<CircleEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CircleEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CircleEasingFunction(std::nullptr_t) noexcept {}
        CircleEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICircleEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CircleEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CircleEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ColorKeyFrameAnimation : winrt::Windows::UI::Composition::IColorKeyFrameAnimation,
        impl::base<ColorKeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ColorKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ColorKeyFrameAnimation(std::nullptr_t) noexcept {}
        ColorKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IColorKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ColorKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ColorKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionAnimation : winrt::Windows::UI::Composition::ICompositionAnimation,
        impl::base<CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionAnimation(std::nullptr_t) noexcept {}
        CompositionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionAnimationGroup : winrt::Windows::UI::Composition::ICompositionAnimationGroup,
        impl::base<CompositionAnimationGroup, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionAnimationGroup, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::CompositionAnimation>, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionAnimationGroup(std::nullptr_t) noexcept {}
        CompositionAnimationGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionAnimationGroup(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionAnimationGroup, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionAnimationGroup, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionBackdropBrush : winrt::Windows::UI::Composition::ICompositionBackdropBrush,
        impl::base<CompositionBackdropBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBackdropBrush, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionBackdropBrush(std::nullptr_t) noexcept {}
        CompositionBackdropBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionBackdropBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionBackdropBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionBackdropBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionBatchCompletedEventArgs : winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs,
        impl::base<CompositionBatchCompletedEventArgs, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBatchCompletedEventArgs, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionBatchCompletedEventArgs(std::nullptr_t) noexcept {}
        CompositionBatchCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionBatchCompletedEventArgs, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionBatchCompletedEventArgs, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionBrush : winrt::Windows::UI::Composition::ICompositionBrush,
        impl::base<CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionBrush(std::nullptr_t) noexcept {}
        CompositionBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionCapabilities : winrt::Windows::UI::Composition::ICompositionCapabilities
    {
        CompositionCapabilities(std::nullptr_t) noexcept {}
        CompositionCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionCapabilities(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) CompositionClip : winrt::Windows::UI::Composition::ICompositionClip,
        impl::base<CompositionClip, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionClip, winrt::Windows::UI::Composition::ICompositionClip2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionClip(std::nullptr_t) noexcept {}
        CompositionClip(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionClip(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionClip, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionClip, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionColorBrush : winrt::Windows::UI::Composition::ICompositionColorBrush,
        impl::base<CompositionColorBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionColorBrush, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionColorBrush(std::nullptr_t) noexcept {}
        CompositionColorBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionColorBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionColorBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionColorBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionColorGradientStop : winrt::Windows::UI::Composition::ICompositionColorGradientStop,
        impl::base<CompositionColorGradientStop, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionColorGradientStop, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionColorGradientStop(std::nullptr_t) noexcept {}
        CompositionColorGradientStop(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionColorGradientStop(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionColorGradientStop, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionColorGradientStop, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionColorGradientStopCollection : winrt::Windows::UI::Composition::ICompositionColorGradientStopCollection,
        impl::require<CompositionColorGradientStopCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::CompositionColorGradientStop>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::CompositionColorGradientStop>>
    {
        CompositionColorGradientStopCollection(std::nullptr_t) noexcept {}
        CompositionColorGradientStopCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionColorGradientStopCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositionCommitBatch : winrt::Windows::UI::Composition::ICompositionCommitBatch,
        impl::base<CompositionCommitBatch, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionCommitBatch, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionCommitBatch(std::nullptr_t) noexcept {}
        CompositionCommitBatch(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionCommitBatch(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionCommitBatch, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionCommitBatch, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionContainerShape : winrt::Windows::UI::Composition::ICompositionContainerShape,
        impl::base<CompositionContainerShape, winrt::Windows::UI::Composition::CompositionShape, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionContainerShape, winrt::Windows::UI::Composition::ICompositionShape, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionContainerShape(std::nullptr_t) noexcept {}
        CompositionContainerShape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionContainerShape(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionContainerShape, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionContainerShape, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionDrawingSurface : winrt::Windows::UI::Composition::ICompositionDrawingSurface,
        impl::base<CompositionDrawingSurface, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionDrawingSurface, winrt::Windows::UI::Composition::ICompositionDrawingSurface2, winrt::Windows::UI::Composition::ICompositionSurface, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionDrawingSurface(std::nullptr_t) noexcept {}
        CompositionDrawingSurface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionDrawingSurface(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionDrawingSurface, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionDrawingSurface, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionEasingFunction : winrt::Windows::UI::Composition::ICompositionEasingFunction,
        impl::base<CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionEasingFunction(std::nullptr_t) noexcept {}
        CompositionEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto CreateCubicBezierEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::Foundation::Numerics::float2 const& controlPoint1, winrt::Windows::Foundation::Numerics::float2 const& controlPoint2);
        static auto CreateLinearEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner);
        static auto CreateStepEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner);
        static auto CreateStepEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, int32_t stepCount);
        static auto CreateBackEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float amplitude);
        static auto CreateBounceEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode, int32_t bounces, float bounciness);
        static auto CreateCircleEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode);
        static auto CreateElasticEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode, int32_t oscillations, float springiness);
        static auto CreateExponentialEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float exponent);
        static auto CreatePowerEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode, float power);
        static auto CreateSineEasingFunction(winrt::Windows::UI::Composition::Compositor const& owner, winrt::Windows::UI::Composition::CompositionEasingFunctionMode const& mode);
    };
    struct __declspec(empty_bases) CompositionEffectBrush : winrt::Windows::UI::Composition::ICompositionEffectBrush,
        impl::base<CompositionEffectBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEffectBrush, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionEffectBrush(std::nullptr_t) noexcept {}
        CompositionEffectBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionEffectBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionEffectBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionEffectBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionEffectFactory : winrt::Windows::UI::Composition::ICompositionEffectFactory,
        impl::base<CompositionEffectFactory, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEffectFactory, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionEffectFactory(std::nullptr_t) noexcept {}
        CompositionEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionEffectFactory(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionEffectFactory, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionEffectFactory, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionEffectSourceParameter : winrt::Windows::UI::Composition::ICompositionEffectSourceParameter,
        impl::require<CompositionEffectSourceParameter, winrt::Windows::Graphics::Effects::IGraphicsEffectSource>
    {
        CompositionEffectSourceParameter(std::nullptr_t) noexcept {}
        CompositionEffectSourceParameter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionEffectSourceParameter(ptr, take_ownership_from_abi) {}
        explicit CompositionEffectSourceParameter(param::hstring const& name);
    };
    struct __declspec(empty_bases) CompositionEllipseGeometry : winrt::Windows::UI::Composition::ICompositionEllipseGeometry,
        impl::base<CompositionEllipseGeometry, winrt::Windows::UI::Composition::CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionEllipseGeometry, winrt::Windows::UI::Composition::ICompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionEllipseGeometry(std::nullptr_t) noexcept {}
        CompositionEllipseGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionEllipseGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionEllipseGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionEllipseGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionGeometricClip : winrt::Windows::UI::Composition::ICompositionGeometricClip,
        impl::base<CompositionGeometricClip, winrt::Windows::UI::Composition::CompositionClip, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGeometricClip, winrt::Windows::UI::Composition::ICompositionClip, winrt::Windows::UI::Composition::ICompositionClip2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionGeometricClip(std::nullptr_t) noexcept {}
        CompositionGeometricClip(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionGeometricClip(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionGeometricClip, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionGeometricClip, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionGeometry : winrt::Windows::UI::Composition::ICompositionGeometry,
        impl::base<CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionGeometry(std::nullptr_t) noexcept {}
        CompositionGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionGradientBrush : winrt::Windows::UI::Composition::ICompositionGradientBrush,
        impl::base<CompositionGradientBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGradientBrush, winrt::Windows::UI::Composition::ICompositionGradientBrush2, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionGradientBrush(std::nullptr_t) noexcept {}
        CompositionGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionGradientBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionGradientBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionGradientBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionGraphicsDevice : winrt::Windows::UI::Composition::ICompositionGraphicsDevice,
        impl::base<CompositionGraphicsDevice, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionGraphicsDevice, winrt::Windows::UI::Composition::ICompositionGraphicsDevice2, winrt::Windows::UI::Composition::ICompositionGraphicsDevice3, winrt::Windows::UI::Composition::ICompositionGraphicsDevice4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionGraphicsDevice(std::nullptr_t) noexcept {}
        CompositionGraphicsDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionGraphicsDevice(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionGraphicsDevice, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionGraphicsDevice, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionLight : winrt::Windows::UI::Composition::ICompositionLight,
        impl::base<CompositionLight, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLight, winrt::Windows::UI::Composition::ICompositionLight2, winrt::Windows::UI::Composition::ICompositionLight3, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionLight(std::nullptr_t) noexcept {}
        CompositionLight(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionLight(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionLight, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionLight, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionLineGeometry : winrt::Windows::UI::Composition::ICompositionLineGeometry,
        impl::base<CompositionLineGeometry, winrt::Windows::UI::Composition::CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLineGeometry, winrt::Windows::UI::Composition::ICompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionLineGeometry(std::nullptr_t) noexcept {}
        CompositionLineGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionLineGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionLineGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionLineGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionLinearGradientBrush : winrt::Windows::UI::Composition::ICompositionLinearGradientBrush,
        impl::base<CompositionLinearGradientBrush, winrt::Windows::UI::Composition::CompositionGradientBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionLinearGradientBrush, winrt::Windows::UI::Composition::ICompositionGradientBrush, winrt::Windows::UI::Composition::ICompositionGradientBrush2, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionLinearGradientBrush(std::nullptr_t) noexcept {}
        CompositionLinearGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionLinearGradientBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionLinearGradientBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionLinearGradientBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionMaskBrush : winrt::Windows::UI::Composition::ICompositionMaskBrush,
        impl::base<CompositionMaskBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionMaskBrush, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionMaskBrush(std::nullptr_t) noexcept {}
        CompositionMaskBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionMaskBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionMaskBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionMaskBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionMipmapSurface : winrt::Windows::UI::Composition::ICompositionMipmapSurface,
        impl::base<CompositionMipmapSurface, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionMipmapSurface, winrt::Windows::UI::Composition::ICompositionSurface, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionMipmapSurface(std::nullptr_t) noexcept {}
        CompositionMipmapSurface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionMipmapSurface(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionMipmapSurface, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionMipmapSurface, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionNineGridBrush : winrt::Windows::UI::Composition::ICompositionNineGridBrush,
        impl::base<CompositionNineGridBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionNineGridBrush, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionNineGridBrush(std::nullptr_t) noexcept {}
        CompositionNineGridBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionNineGridBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionNineGridBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionNineGridBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionObject : winrt::Windows::UI::Composition::ICompositionObject,
        impl::require<CompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionObject(std::nullptr_t) noexcept {}
        CompositionObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionObject(ptr, take_ownership_from_abi) {}
        using winrt::Windows::UI::Composition::ICompositionObject::StartAnimation;
        using impl::consume_t<CompositionObject, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto StartAnimationWithIAnimationObject(winrt::Windows::UI::Composition::IAnimationObject const& target, param::hstring const& propertyName, winrt::Windows::UI::Composition::CompositionAnimation const& animation);
        static auto StartAnimationGroupWithIAnimationObject(winrt::Windows::UI::Composition::IAnimationObject const& target, winrt::Windows::UI::Composition::ICompositionAnimationBase const& animation);
    };
    struct __declspec(empty_bases) CompositionPath : winrt::Windows::UI::Composition::ICompositionPath,
        impl::require<CompositionPath, winrt::Windows::Graphics::IGeometrySource2D>
    {
        CompositionPath(std::nullptr_t) noexcept {}
        CompositionPath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionPath(ptr, take_ownership_from_abi) {}
        explicit CompositionPath(winrt::Windows::Graphics::IGeometrySource2D const& source);
    };
    struct __declspec(empty_bases) CompositionPathGeometry : winrt::Windows::UI::Composition::ICompositionPathGeometry,
        impl::base<CompositionPathGeometry, winrt::Windows::UI::Composition::CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionPathGeometry, winrt::Windows::UI::Composition::ICompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionPathGeometry(std::nullptr_t) noexcept {}
        CompositionPathGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionPathGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionPathGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionPathGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionProjectedShadow : winrt::Windows::UI::Composition::ICompositionProjectedShadow,
        impl::base<CompositionProjectedShadow, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadow, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadow(std::nullptr_t) noexcept {}
        CompositionProjectedShadow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionProjectedShadow(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionProjectedShadow, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionProjectedShadow, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionProjectedShadowCaster : winrt::Windows::UI::Composition::ICompositionProjectedShadowCaster,
        impl::base<CompositionProjectedShadowCaster, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowCaster, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowCaster(std::nullptr_t) noexcept {}
        CompositionProjectedShadowCaster(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionProjectedShadowCaster(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionProjectedShadowCaster, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionProjectedShadowCaster, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionProjectedShadowCasterCollection : winrt::Windows::UI::Composition::ICompositionProjectedShadowCasterCollection,
        impl::base<CompositionProjectedShadowCasterCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowCasterCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::CompositionProjectedShadowCaster>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowCasterCollection(std::nullptr_t) noexcept {}
        CompositionProjectedShadowCasterCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionProjectedShadowCasterCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionProjectedShadowCasterCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionProjectedShadowCasterCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
        [[nodiscard]] static auto MaxRespectedCasters();
    };
    struct __declspec(empty_bases) CompositionProjectedShadowReceiver : winrt::Windows::UI::Composition::ICompositionProjectedShadowReceiver,
        impl::base<CompositionProjectedShadowReceiver, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowReceiver, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowReceiver(std::nullptr_t) noexcept {}
        CompositionProjectedShadowReceiver(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionProjectedShadowReceiver(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionProjectedShadowReceiver, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionProjectedShadowReceiver, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionProjectedShadowReceiverUnorderedCollection : winrt::Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection,
        impl::base<CompositionProjectedShadowReceiverUnorderedCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionProjectedShadowReceiverUnorderedCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::CompositionProjectedShadowReceiver>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionProjectedShadowReceiverUnorderedCollection(std::nullptr_t) noexcept {}
        CompositionProjectedShadowReceiverUnorderedCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionProjectedShadowReceiverUnorderedCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionProjectedShadowReceiverUnorderedCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionPropertySet : winrt::Windows::UI::Composition::ICompositionPropertySet,
        impl::base<CompositionPropertySet, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionPropertySet, winrt::Windows::UI::Composition::ICompositionPropertySet2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionPropertySet(std::nullptr_t) noexcept {}
        CompositionPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionPropertySet(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionPropertySet, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionPropertySet, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionRadialGradientBrush : winrt::Windows::UI::Composition::ICompositionRadialGradientBrush,
        impl::base<CompositionRadialGradientBrush, winrt::Windows::UI::Composition::CompositionGradientBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRadialGradientBrush, winrt::Windows::UI::Composition::ICompositionGradientBrush, winrt::Windows::UI::Composition::ICompositionGradientBrush2, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionRadialGradientBrush(std::nullptr_t) noexcept {}
        CompositionRadialGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionRadialGradientBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionRadialGradientBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionRadialGradientBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionRectangleGeometry : winrt::Windows::UI::Composition::ICompositionRectangleGeometry,
        impl::base<CompositionRectangleGeometry, winrt::Windows::UI::Composition::CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRectangleGeometry, winrt::Windows::UI::Composition::ICompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionRectangleGeometry(std::nullptr_t) noexcept {}
        CompositionRectangleGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionRectangleGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionRectangleGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionRectangleGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionRoundedRectangleGeometry : winrt::Windows::UI::Composition::ICompositionRoundedRectangleGeometry,
        impl::base<CompositionRoundedRectangleGeometry, winrt::Windows::UI::Composition::CompositionGeometry, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionRoundedRectangleGeometry, winrt::Windows::UI::Composition::ICompositionGeometry, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionRoundedRectangleGeometry(std::nullptr_t) noexcept {}
        CompositionRoundedRectangleGeometry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionRoundedRectangleGeometry(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionRoundedRectangleGeometry, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionRoundedRectangleGeometry, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionScopedBatch : winrt::Windows::UI::Composition::ICompositionScopedBatch,
        impl::base<CompositionScopedBatch, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionScopedBatch, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionScopedBatch(std::nullptr_t) noexcept {}
        CompositionScopedBatch(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionScopedBatch(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionScopedBatch, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionScopedBatch, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionShadow : winrt::Windows::UI::Composition::ICompositionShadow,
        impl::base<CompositionShadow, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShadow, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionShadow(std::nullptr_t) noexcept {}
        CompositionShadow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionShadow(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionShadow, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionShadow, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionShape : winrt::Windows::UI::Composition::ICompositionShape,
        impl::base<CompositionShape, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShape, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionShape(std::nullptr_t) noexcept {}
        CompositionShape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionShape(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionShape, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionShape, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionShapeCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::CompositionShape>,
        impl::base<CompositionShapeCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionShapeCollection, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionShapeCollection(std::nullptr_t) noexcept {}
        CompositionShapeCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::CompositionShape>(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionShapeCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionShapeCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionSpriteShape : winrt::Windows::UI::Composition::ICompositionSpriteShape,
        impl::base<CompositionSpriteShape, winrt::Windows::UI::Composition::CompositionShape, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionSpriteShape, winrt::Windows::UI::Composition::ICompositionShape, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionSpriteShape(std::nullptr_t) noexcept {}
        CompositionSpriteShape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionSpriteShape(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionSpriteShape, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionSpriteShape, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionStrokeDashArray : winrt::Windows::Foundation::Collections::IVector<float>,
        impl::base<CompositionStrokeDashArray, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionStrokeDashArray, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionStrokeDashArray(std::nullptr_t) noexcept {}
        CompositionStrokeDashArray(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<float>(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionStrokeDashArray, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionStrokeDashArray, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionSurfaceBrush : winrt::Windows::UI::Composition::ICompositionSurfaceBrush,
        impl::base<CompositionSurfaceBrush, winrt::Windows::UI::Composition::CompositionBrush, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionSurfaceBrush, winrt::Windows::UI::Composition::ICompositionSurfaceBrush2, winrt::Windows::UI::Composition::ICompositionSurfaceBrush3, winrt::Windows::UI::Composition::ICompositionBrush, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionSurfaceBrush(std::nullptr_t) noexcept {}
        CompositionSurfaceBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionSurfaceBrush(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionSurfaceBrush, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionSurfaceBrush, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionTarget : winrt::Windows::UI::Composition::ICompositionTarget,
        impl::base<CompositionTarget, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionTarget, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionTarget(std::nullptr_t) noexcept {}
        CompositionTarget(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionTarget(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionTarget, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionTarget, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionTexture : winrt::Windows::UI::Composition::ICompositionTexture,
        impl::base<CompositionTexture, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionTexture, winrt::Windows::UI::Composition::ICompositionSurface, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionTexture(std::nullptr_t) noexcept {}
        CompositionTexture(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionTexture(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionTexture, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionTexture, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionTransform : winrt::Windows::UI::Composition::ICompositionTransform,
        impl::base<CompositionTransform, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionTransform, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionTransform(std::nullptr_t) noexcept {}
        CompositionTransform(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionTransform(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionTransform, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionTransform, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionViewBox : winrt::Windows::UI::Composition::ICompositionViewBox,
        impl::base<CompositionViewBox, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionViewBox, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionViewBox(std::nullptr_t) noexcept {}
        CompositionViewBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionViewBox(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionViewBox, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionViewBox, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionVirtualDrawingSurface : winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface,
        impl::base<CompositionVirtualDrawingSurface, winrt::Windows::UI::Composition::CompositionDrawingSurface, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionVirtualDrawingSurface, winrt::Windows::UI::Composition::ICompositionDrawingSurface, winrt::Windows::UI::Composition::ICompositionDrawingSurface2, winrt::Windows::UI::Composition::ICompositionSurface, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionVirtualDrawingSurface(std::nullptr_t) noexcept {}
        CompositionVirtualDrawingSurface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionVirtualDrawingSurface, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionVirtualDrawingSurface, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CompositionVisualSurface : winrt::Windows::UI::Composition::ICompositionVisualSurface,
        impl::base<CompositionVisualSurface, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionVisualSurface, winrt::Windows::UI::Composition::ICompositionSurface, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionVisualSurface(std::nullptr_t) noexcept {}
        CompositionVisualSurface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositionVisualSurface(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionVisualSurface, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionVisualSurface, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Compositor : winrt::Windows::UI::Composition::ICompositor,
        impl::require<Compositor, winrt::Windows::UI::Composition::ICompositor2, winrt::Windows::UI::Composition::ICompositor3, winrt::Windows::UI::Composition::ICompositor4, winrt::Windows::UI::Composition::ICompositor5, winrt::Windows::UI::Composition::ICompositor6, winrt::Windows::UI::Composition::ICompositorWithProjectedShadow, winrt::Windows::UI::Composition::ICompositorWithRadialGradient, winrt::Windows::UI::Composition::ICompositorWithVisualSurface, winrt::Windows::UI::Composition::ICompositor7, winrt::Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush, winrt::Windows::UI::Composition::ICompositor8, winrt::Windows::Foundation::IClosable>
    {
        Compositor(std::nullptr_t) noexcept {}
        Compositor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICompositor(ptr, take_ownership_from_abi) {}
        Compositor();
        [[nodiscard]] static auto MaxGlobalPlaybackRate();
        [[nodiscard]] static auto MinGlobalPlaybackRate();
    };
    struct __declspec(empty_bases) ContainerVisual : winrt::Windows::UI::Composition::IContainerVisual,
        impl::base<ContainerVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ContainerVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ContainerVisual(std::nullptr_t) noexcept {}
        ContainerVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IContainerVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ContainerVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ContainerVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) CubicBezierEasingFunction : winrt::Windows::UI::Composition::ICubicBezierEasingFunction,
        impl::base<CubicBezierEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CubicBezierEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CubicBezierEasingFunction(std::nullptr_t) noexcept {}
        CubicBezierEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ICubicBezierEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CubicBezierEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CubicBezierEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) DelegatedInkTrailVisual : winrt::Windows::UI::Composition::IDelegatedInkTrailVisual,
        impl::base<DelegatedInkTrailVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<DelegatedInkTrailVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        DelegatedInkTrailVisual(std::nullptr_t) noexcept {}
        DelegatedInkTrailVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IDelegatedInkTrailVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<DelegatedInkTrailVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<DelegatedInkTrailVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
        static auto CreateForSwapChain(winrt::Windows::UI::Composition::Compositor const& compositor, winrt::Windows::UI::Composition::ICompositionSurface const& swapChain);
    };
    struct __declspec(empty_bases) DistantLight : winrt::Windows::UI::Composition::IDistantLight,
        impl::base<DistantLight, winrt::Windows::UI::Composition::CompositionLight, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<DistantLight, winrt::Windows::UI::Composition::IDistantLight2, winrt::Windows::UI::Composition::ICompositionLight, winrt::Windows::UI::Composition::ICompositionLight2, winrt::Windows::UI::Composition::ICompositionLight3, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        DistantLight(std::nullptr_t) noexcept {}
        DistantLight(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IDistantLight(ptr, take_ownership_from_abi) {}
        using impl::consume_t<DistantLight, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<DistantLight, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) DropShadow : winrt::Windows::UI::Composition::IDropShadow,
        impl::base<DropShadow, winrt::Windows::UI::Composition::CompositionShadow, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<DropShadow, winrt::Windows::UI::Composition::IDropShadow2, winrt::Windows::UI::Composition::ICompositionShadow, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        DropShadow(std::nullptr_t) noexcept {}
        DropShadow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IDropShadow(ptr, take_ownership_from_abi) {}
        using impl::consume_t<DropShadow, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<DropShadow, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ElasticEasingFunction : winrt::Windows::UI::Composition::IElasticEasingFunction,
        impl::base<ElasticEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ElasticEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ElasticEasingFunction(std::nullptr_t) noexcept {}
        ElasticEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IElasticEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ElasticEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ElasticEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ExponentialEasingFunction : winrt::Windows::UI::Composition::IExponentialEasingFunction,
        impl::base<ExponentialEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ExponentialEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ExponentialEasingFunction(std::nullptr_t) noexcept {}
        ExponentialEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IExponentialEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ExponentialEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ExponentialEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ExpressionAnimation : winrt::Windows::UI::Composition::IExpressionAnimation,
        impl::base<ExpressionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ExpressionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ExpressionAnimation(std::nullptr_t) noexcept {}
        ExpressionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IExpressionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ExpressionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ExpressionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ImplicitAnimationCollection : winrt::Windows::UI::Composition::IImplicitAnimationCollection,
        impl::base<ImplicitAnimationCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ImplicitAnimationCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::UI::Composition::ICompositionAnimationBase>>, winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::UI::Composition::ICompositionAnimationBase>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ImplicitAnimationCollection(std::nullptr_t) noexcept {}
        ImplicitAnimationCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IImplicitAnimationCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ImplicitAnimationCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ImplicitAnimationCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) InitialValueExpressionCollection : winrt::Windows::Foundation::Collections::IMap<hstring, hstring>,
        impl::base<InitialValueExpressionCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InitialValueExpressionCollection, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InitialValueExpressionCollection(std::nullptr_t) noexcept {}
        InitialValueExpressionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IMap<hstring, hstring>(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InitialValueExpressionCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InitialValueExpressionCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) InsetClip : winrt::Windows::UI::Composition::IInsetClip,
        impl::base<InsetClip, winrt::Windows::UI::Composition::CompositionClip, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InsetClip, winrt::Windows::UI::Composition::ICompositionClip, winrt::Windows::UI::Composition::ICompositionClip2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InsetClip(std::nullptr_t) noexcept {}
        InsetClip(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IInsetClip(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InsetClip, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InsetClip, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) KeyFrameAnimation : winrt::Windows::UI::Composition::IKeyFrameAnimation,
        impl::base<KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<KeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        KeyFrameAnimation(std::nullptr_t) noexcept {}
        KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) LayerVisual : winrt::Windows::UI::Composition::ILayerVisual,
        impl::base<LayerVisual, winrt::Windows::UI::Composition::ContainerVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<LayerVisual, winrt::Windows::UI::Composition::ILayerVisual2, winrt::Windows::UI::Composition::IContainerVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        LayerVisual(std::nullptr_t) noexcept {}
        LayerVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ILayerVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<LayerVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<LayerVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) LinearEasingFunction : winrt::Windows::UI::Composition::ILinearEasingFunction,
        impl::base<LinearEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<LinearEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        LinearEasingFunction(std::nullptr_t) noexcept {}
        LinearEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ILinearEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<LinearEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<LinearEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) NaturalMotionAnimation : winrt::Windows::UI::Composition::INaturalMotionAnimation,
        impl::base<NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        NaturalMotionAnimation(std::nullptr_t) noexcept {}
        NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::INaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) PathKeyFrameAnimation : winrt::Windows::UI::Composition::IPathKeyFrameAnimation,
        impl::base<PathKeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<PathKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        PathKeyFrameAnimation(std::nullptr_t) noexcept {}
        PathKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IPathKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PathKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<PathKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) PointLight : winrt::Windows::UI::Composition::IPointLight,
        impl::base<PointLight, winrt::Windows::UI::Composition::CompositionLight, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<PointLight, winrt::Windows::UI::Composition::IPointLight2, winrt::Windows::UI::Composition::IPointLight3, winrt::Windows::UI::Composition::ICompositionLight, winrt::Windows::UI::Composition::ICompositionLight2, winrt::Windows::UI::Composition::ICompositionLight3, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        PointLight(std::nullptr_t) noexcept {}
        PointLight(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IPointLight(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PointLight, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<PointLight, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) PowerEasingFunction : winrt::Windows::UI::Composition::IPowerEasingFunction,
        impl::base<PowerEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<PowerEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        PowerEasingFunction(std::nullptr_t) noexcept {}
        PowerEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IPowerEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PowerEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<PowerEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) QuaternionKeyFrameAnimation : winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation,
        impl::base<QuaternionKeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<QuaternionKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        QuaternionKeyFrameAnimation(std::nullptr_t) noexcept {}
        QuaternionKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<QuaternionKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<QuaternionKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) RectangleClip : winrt::Windows::UI::Composition::IRectangleClip,
        impl::base<RectangleClip, winrt::Windows::UI::Composition::CompositionClip, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<RectangleClip, winrt::Windows::UI::Composition::ICompositionClip, winrt::Windows::UI::Composition::ICompositionClip2, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        RectangleClip(std::nullptr_t) noexcept {}
        RectangleClip(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IRectangleClip(ptr, take_ownership_from_abi) {}
        using impl::consume_t<RectangleClip, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<RectangleClip, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) RedirectVisual : winrt::Windows::UI::Composition::IRedirectVisual,
        impl::base<RedirectVisual, winrt::Windows::UI::Composition::ContainerVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<RedirectVisual, winrt::Windows::UI::Composition::IContainerVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        RedirectVisual(std::nullptr_t) noexcept {}
        RedirectVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IRedirectVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<RedirectVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<RedirectVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) RenderingDeviceReplacedEventArgs : winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs,
        impl::base<RenderingDeviceReplacedEventArgs, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<RenderingDeviceReplacedEventArgs, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        RenderingDeviceReplacedEventArgs(std::nullptr_t) noexcept {}
        RenderingDeviceReplacedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs(ptr, take_ownership_from_abi) {}
        using impl::consume_t<RenderingDeviceReplacedEventArgs, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<RenderingDeviceReplacedEventArgs, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ScalarKeyFrameAnimation : winrt::Windows::UI::Composition::IScalarKeyFrameAnimation,
        impl::base<ScalarKeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ScalarKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ScalarKeyFrameAnimation(std::nullptr_t) noexcept {}
        ScalarKeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IScalarKeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ScalarKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ScalarKeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ScalarNaturalMotionAnimation : winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation,
        impl::base<ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        ScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) ShapeVisual : winrt::Windows::UI::Composition::IShapeVisual,
        impl::base<ShapeVisual, winrt::Windows::UI::Composition::ContainerVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<ShapeVisual, winrt::Windows::UI::Composition::IContainerVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        ShapeVisual(std::nullptr_t) noexcept {}
        ShapeVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IShapeVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ShapeVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ShapeVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SineEasingFunction : winrt::Windows::UI::Composition::ISineEasingFunction,
        impl::base<SineEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SineEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SineEasingFunction(std::nullptr_t) noexcept {}
        SineEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISineEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SineEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SineEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SpotLight : winrt::Windows::UI::Composition::ISpotLight,
        impl::base<SpotLight, winrt::Windows::UI::Composition::CompositionLight, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SpotLight, winrt::Windows::UI::Composition::ISpotLight2, winrt::Windows::UI::Composition::ISpotLight3, winrt::Windows::UI::Composition::ICompositionLight, winrt::Windows::UI::Composition::ICompositionLight2, winrt::Windows::UI::Composition::ICompositionLight3, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SpotLight(std::nullptr_t) noexcept {}
        SpotLight(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISpotLight(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SpotLight, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SpotLight, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SpringScalarNaturalMotionAnimation : winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation,
        impl::base<SpringScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SpringScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SpringScalarNaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringScalarNaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SpringScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SpringScalarNaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SpringVector2NaturalMotionAnimation : winrt::Windows::UI::Composition::ISpringVector2NaturalMotionAnimation,
        impl::base<SpringVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SpringVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SpringVector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringVector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISpringVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SpringVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SpringVector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SpringVector3NaturalMotionAnimation : winrt::Windows::UI::Composition::ISpringVector3NaturalMotionAnimation,
        impl::base<SpringVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SpringVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SpringVector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        SpringVector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISpringVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SpringVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SpringVector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) SpriteVisual : winrt::Windows::UI::Composition::ISpriteVisual,
        impl::base<SpriteVisual, winrt::Windows::UI::Composition::ContainerVisual, winrt::Windows::UI::Composition::Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<SpriteVisual, winrt::Windows::UI::Composition::ISpriteVisual2, winrt::Windows::UI::Composition::IContainerVisual, winrt::Windows::UI::Composition::IVisual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        SpriteVisual(std::nullptr_t) noexcept {}
        SpriteVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::ISpriteVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SpriteVisual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SpriteVisual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) StepEasingFunction : winrt::Windows::UI::Composition::IStepEasingFunction,
        impl::base<StepEasingFunction, winrt::Windows::UI::Composition::CompositionEasingFunction, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<StepEasingFunction, winrt::Windows::UI::Composition::ICompositionEasingFunction, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        StepEasingFunction(std::nullptr_t) noexcept {}
        StepEasingFunction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IStepEasingFunction(ptr, take_ownership_from_abi) {}
        using impl::consume_t<StepEasingFunction, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<StepEasingFunction, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Vector2KeyFrameAnimation : winrt::Windows::UI::Composition::IVector2KeyFrameAnimation,
        impl::base<Vector2KeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Vector2KeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Vector2KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector2KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVector2KeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Vector2KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Vector2KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Vector2NaturalMotionAnimation : winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation,
        impl::base<Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Vector2NaturalMotionAnimation(std::nullptr_t) noexcept {}
        Vector2NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Vector2NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Vector3KeyFrameAnimation : winrt::Windows::UI::Composition::IVector3KeyFrameAnimation,
        impl::base<Vector3KeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Vector3KeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Vector3KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector3KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVector3KeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Vector3KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Vector3KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Vector3NaturalMotionAnimation : winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation,
        impl::base<Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::NaturalMotionAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::INaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Vector3NaturalMotionAnimation(std::nullptr_t) noexcept {}
        Vector3NaturalMotionAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Vector3NaturalMotionAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Vector4KeyFrameAnimation : winrt::Windows::UI::Composition::IVector4KeyFrameAnimation,
        impl::base<Vector4KeyFrameAnimation, winrt::Windows::UI::Composition::KeyFrameAnimation, winrt::Windows::UI::Composition::CompositionAnimation, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Vector4KeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation, winrt::Windows::UI::Composition::IKeyFrameAnimation2, winrt::Windows::UI::Composition::IKeyFrameAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation, winrt::Windows::UI::Composition::ICompositionAnimation2, winrt::Windows::UI::Composition::ICompositionAnimation3, winrt::Windows::UI::Composition::ICompositionAnimation4, winrt::Windows::UI::Composition::ICompositionAnimationBase, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Vector4KeyFrameAnimation(std::nullptr_t) noexcept {}
        Vector4KeyFrameAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVector4KeyFrameAnimation(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Vector4KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Vector4KeyFrameAnimation, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) Visual : winrt::Windows::UI::Composition::IVisual,
        impl::base<Visual, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<Visual, winrt::Windows::UI::Composition::IVisual2, winrt::Windows::UI::Composition::IVisual3, winrt::Windows::UI::Composition::IVisual4, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        Visual(std::nullptr_t) noexcept {}
        Visual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<Visual, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<Visual, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) VisualCollection : winrt::Windows::UI::Composition::IVisualCollection,
        impl::base<VisualCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<VisualCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Visual>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        VisualCollection(std::nullptr_t) noexcept {}
        VisualCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVisualCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<VisualCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<VisualCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct __declspec(empty_bases) VisualUnorderedCollection : winrt::Windows::UI::Composition::IVisualUnorderedCollection,
        impl::base<VisualUnorderedCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<VisualUnorderedCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Visual>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        VisualUnorderedCollection(std::nullptr_t) noexcept {}
        VisualUnorderedCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::IVisualUnorderedCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<VisualUnorderedCollection, winrt::Windows::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<VisualUnorderedCollection, winrt::Windows::UI::Composition::ICompositionObject5>::StartAnimation;
    };
}
#endif
