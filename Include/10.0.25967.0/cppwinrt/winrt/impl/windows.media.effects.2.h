// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Effects_2_H
#define WINRT_Windows_Media_Effects_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Effects
{
    struct __declspec(empty_bases) AudioCaptureEffectsManager : winrt::Windows::Media::Effects::IAudioCaptureEffectsManager
    {
        AudioCaptureEffectsManager(std::nullptr_t) noexcept {}
        AudioCaptureEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IAudioCaptureEffectsManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioEffect : winrt::Windows::Media::Effects::IAudioEffect
    {
        AudioEffect(std::nullptr_t) noexcept {}
        AudioEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IAudioEffect(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AudioEffectDefinition : winrt::Windows::Media::Effects::IAudioEffectDefinition
    {
        AudioEffectDefinition(std::nullptr_t) noexcept {}
        AudioEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IAudioEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit AudioEffectDefinition(param::hstring const& activatableClassId);
        AudioEffectDefinition(param::hstring const& activatableClassId, winrt::Windows::Foundation::Collections::IPropertySet const& props);
    };
    struct AudioEffectsManager
    {
        AudioEffectsManager() = delete;
        static auto CreateAudioRenderEffectsManager(param::hstring const& deviceId, winrt::Windows::Media::Render::AudioRenderCategory const& category);
        static auto CreateAudioRenderEffectsManager(param::hstring const& deviceId, winrt::Windows::Media::Render::AudioRenderCategory const& category, winrt::Windows::Media::AudioProcessing const& mode);
        static auto CreateAudioCaptureEffectsManager(param::hstring const& deviceId, winrt::Windows::Media::Capture::MediaCategory const& category);
        static auto CreateAudioCaptureEffectsManager(param::hstring const& deviceId, winrt::Windows::Media::Capture::MediaCategory const& category, winrt::Windows::Media::AudioProcessing const& mode);
    };
    struct __declspec(empty_bases) AudioRenderEffectsManager : winrt::Windows::Media::Effects::IAudioRenderEffectsManager,
        impl::require<AudioRenderEffectsManager, winrt::Windows::Media::Effects::IAudioRenderEffectsManager2>
    {
        AudioRenderEffectsManager(std::nullptr_t) noexcept {}
        AudioRenderEffectsManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IAudioRenderEffectsManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompositeVideoFrameContext : winrt::Windows::Media::Effects::ICompositeVideoFrameContext
    {
        CompositeVideoFrameContext(std::nullptr_t) noexcept {}
        CompositeVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::ICompositeVideoFrameContext(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProcessAudioFrameContext : winrt::Windows::Media::Effects::IProcessAudioFrameContext
    {
        ProcessAudioFrameContext(std::nullptr_t) noexcept {}
        ProcessAudioFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IProcessAudioFrameContext(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProcessVideoFrameContext : winrt::Windows::Media::Effects::IProcessVideoFrameContext
    {
        ProcessVideoFrameContext(std::nullptr_t) noexcept {}
        ProcessVideoFrameContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IProcessVideoFrameContext(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VideoCompositorDefinition : winrt::Windows::Media::Effects::IVideoCompositorDefinition
    {
        VideoCompositorDefinition(std::nullptr_t) noexcept {}
        VideoCompositorDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IVideoCompositorDefinition(ptr, take_ownership_from_abi) {}
        explicit VideoCompositorDefinition(param::hstring const& activatableClassId);
        VideoCompositorDefinition(param::hstring const& activatableClassId, winrt::Windows::Foundation::Collections::IPropertySet const& props);
    };
    struct __declspec(empty_bases) VideoEffectDefinition : winrt::Windows::Media::Effects::IVideoEffectDefinition
    {
        VideoEffectDefinition(std::nullptr_t) noexcept {}
        VideoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IVideoEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit VideoEffectDefinition(param::hstring const& activatableClassId);
        VideoEffectDefinition(param::hstring const& activatableClassId, winrt::Windows::Foundation::Collections::IPropertySet const& props);
    };
    struct __declspec(empty_bases) VideoTransformEffectDefinition : winrt::Windows::Media::Effects::IVideoEffectDefinition,
        impl::require<VideoTransformEffectDefinition, winrt::Windows::Media::Effects::IVideoTransformEffectDefinition, winrt::Windows::Media::Effects::IVideoTransformEffectDefinition2>
    {
        VideoTransformEffectDefinition(std::nullptr_t) noexcept {}
        VideoTransformEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IVideoEffectDefinition(ptr, take_ownership_from_abi) {}
        VideoTransformEffectDefinition();
    };
    struct __declspec(empty_bases) VideoTransformSphericalProjection : winrt::Windows::Media::Effects::IVideoTransformSphericalProjection
    {
        VideoTransformSphericalProjection(std::nullptr_t) noexcept {}
        VideoTransformSphericalProjection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Effects::IVideoTransformSphericalProjection(ptr, take_ownership_from_abi) {}
    };
}
#endif
