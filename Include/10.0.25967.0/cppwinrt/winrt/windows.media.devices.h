// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Devices_H
#define WINRT_Windows_Media_Devices_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>::Mode() const
    {
        winrt::Windows::Media::Devices::AdvancedPhotoMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>::Mode(winrt::Windows::Media::Devices::AdvancedPhotoMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AdvancedPhotoMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Mode() const
    {
        winrt::Windows::Media::Devices::AdvancedPhotoMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoControl)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Configure(winrt::Windows::Media::Devices::AdvancedPhotoCaptureSettings const& settings) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedPhotoControl)->Configure(*(void**)(&settings)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>::SetDeviceProperty(param::hstring const& propertyId, winrt::Windows::Foundation::IInspectable const& propertyValue) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController)->SetDeviceProperty(*(void**)(&propertyId), *(void**)(&propertyValue)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>::GetDeviceProperty(param::hstring const& propertyId) const
    {
        void* propertyValue{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController)->GetDeviceProperty(*(void**)(&propertyId), &propertyValue));
        return winrt::Windows::Foundation::IInspectable{ propertyValue, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController10<D>::CameraOcclusionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController10)->get_CameraOcclusionInfo(&value));
        return winrt::Windows::Media::Devices::CameraOcclusionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController11<D>::TryAcquireExclusiveControl(param::hstring const& deviceId, winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlReleaseMode const& mode) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController11)->TryAcquireExclusiveControl(*(void**)(&deviceId), static_cast<int32_t>(mode), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhotoSequence() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_LowLagPhotoSequence(&value));
        return winrt::Windows::Media::Devices::LowLagPhotoSequenceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhoto() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_LowLagPhoto(&value));
        return winrt::Windows::Media::Devices::LowLagPhotoControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::SceneModeControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_SceneModeControl(&value));
        return winrt::Windows::Media::Devices::SceneModeControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::TorchControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_TorchControl(&value));
        return winrt::Windows::Media::Devices::TorchControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::FlashControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_FlashControl(&value));
        return winrt::Windows::Media::Devices::FlashControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::WhiteBalanceControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_WhiteBalanceControl(&value));
        return winrt::Windows::Media::Devices::WhiteBalanceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::ExposureControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_ExposureControl(&value));
        return winrt::Windows::Media::Devices::ExposureControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::FocusControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_FocusControl(&value));
        return winrt::Windows::Media::Devices::FocusControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::ExposureCompensationControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_ExposureCompensationControl(&value));
        return winrt::Windows::Media::Devices::ExposureCompensationControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::IsoSpeedControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_IsoSpeedControl(&value));
        return winrt::Windows::Media::Devices::IsoSpeedControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::RegionsOfInterestControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_RegionsOfInterestControl(&value));
        return winrt::Windows::Media::Devices::RegionsOfInterestControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse() const
    {
        winrt::Windows::Media::Devices::CaptureUse value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_PrimaryUse(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse(winrt::Windows::Media::Devices::CaptureUse const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->put_PrimaryUse(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::VariablePhotoSequenceController() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_VariablePhotoSequenceController(&value));
        return winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::PhotoConfirmationControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_PhotoConfirmationControl(&value));
        return winrt::Windows::Media::Devices::PhotoConfirmationControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::ZoomControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_ZoomControl(&value));
        return winrt::Windows::Media::Devices::ZoomControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::ExposurePriorityVideoControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_ExposurePriorityVideoControl(&value));
        return winrt::Windows::Media::Devices::ExposurePriorityVideoControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization() const
    {
        winrt::Windows::Media::Devices::MediaCaptureOptimization value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_DesiredOptimization(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization(winrt::Windows::Media::Devices::MediaCaptureOptimization const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->put_DesiredOptimization(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::HdrVideoControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_HdrVideoControl(&value));
        return winrt::Windows::Media::Devices::HdrVideoControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::OpticalImageStabilizationControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_OpticalImageStabilizationControl(&value));
        return winrt::Windows::Media::Devices::OpticalImageStabilizationControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::AdvancedPhotoControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_AdvancedPhotoControl(&value));
        return winrt::Windows::Media::Devices::AdvancedPhotoControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::GetDevicePropertyById(param::hstring const& propertyId, winrt::Windows::Foundation::IReference<uint32_t> const& maxPropertyValueSize) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->GetDevicePropertyById(*(void**)(&propertyId), *(void**)(&maxPropertyValueSize), &value));
        return winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::SetDevicePropertyById(param::hstring const& propertyId, winrt::Windows::Foundation::IInspectable const& propertyValue) const
    {
        winrt::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->SetDevicePropertyById(*(void**)(&propertyId), *(void**)(&propertyValue), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::GetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, winrt::Windows::Foundation::IReference<uint32_t> const& maxPropertyValueSize) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->GetDevicePropertyByExtendedId(extendedPropertyId.size(), get_abi(extendedPropertyId), *(void**)(&maxPropertyValueSize), &value));
        return winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::SetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const
    {
        winrt::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->SetDevicePropertyByExtendedId(extendedPropertyId.size(), get_abi(extendedPropertyId), propertyValue.size(), get_abi(propertyValue), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController6<D>::VideoTemporalDenoisingControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6)->get_VideoTemporalDenoisingControl(&value));
        return winrt::Windows::Media::Devices::VideoTemporalDenoisingControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController7<D>::InfraredTorchControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7)->get_InfraredTorchControl(&value));
        return winrt::Windows::Media::Devices::InfraredTorchControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController8<D>::PanelBasedOptimizationControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8)->get_PanelBasedOptimizationControl(&value));
        return winrt::Windows::Media::Devices::PanelBasedOptimizationControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController9<D>::DigitalWindowControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController9)->get_DigitalWindowControl(&value));
        return winrt::Windows::Media::Devices::DigitalWindowControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceController<D>::Muted(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceController)->put_Muted(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceController<D>::Muted() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceController)->get_Muted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceController<D>::VolumePercent(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceController)->put_VolumePercent(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceController<D>::VolumePercent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceController)->get_VolumePercent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::ClassId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->get_ClassId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::InstanceId() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->get_InstanceId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::MajorVersion() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->get_MajorVersion(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::MinorVersion() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->get_MinorVersion(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModule<D>::SendCommandAsync(winrt::Windows::Storage::Streams::IBuffer const& Command) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModule)->SendCommandAsync(*(void**)(&Command), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Devices::ModuleCommandResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>::Module() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs)->get_Module(&value));
        return winrt::Windows::Media::Devices::AudioDeviceModule{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>::NotificationData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs)->get_NotificationData(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::AudioDeviceModulesManager, winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModulesManager)->add_ModuleNotificationReceived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived_revoker consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::AudioDeviceModulesManager, winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ModuleNotificationReceived_revoker>(this, ModuleNotificationReceived(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModulesManager)->remove_ModuleNotificationReceived(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::FindAllById(param::hstring const& moduleId) const
    {
        void* modules{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModulesManager)->FindAllById(*(void**)(&moduleId), &modules));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AudioDeviceModule>{ modules, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::FindAll() const
    {
        void* modules{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModulesManager)->FindAll(&modules));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AudioDeviceModule>{ modules, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory<D>::Create(param::hstring const& deviceId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory)->Create(*(void**)(&deviceId), &result));
        return winrt::Windows::Media::Devices::AudioDeviceModulesManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::IndicateNewIncomingCall(bool enableRinger, param::hstring const& callerId) const
    {
        uint64_t callToken{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->IndicateNewIncomingCall(enableRinger, *(void**)(&callerId), &callToken));
        return callToken;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::IndicateNewOutgoingCall() const
    {
        uint64_t callToken{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->IndicateNewOutgoingCall(&callToken));
        return callToken;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::IndicateActiveCall(uint64_t callToken) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->IndicateActiveCall(callToken));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::EndCall(uint64_t callToken) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->EndCall(callToken));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::HasRinger() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->get_HasRinger(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_AnswerRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested_revoker consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(auto_revoke_t, winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, AnswerRequested_revoker>(this, AnswerRequested(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_AnswerRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_HangUpRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested_revoker consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(auto_revoke_t, winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, HangUpRequested_revoker>(this, HangUpRequested(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_HangUpRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::DialRequested(winrt::Windows::Media::Devices::DialRequestedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_DialRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::DialRequested_revoker consume_Windows_Media_Devices_ICallControl<D>::DialRequested(auto_revoke_t, winrt::Windows::Media::Devices::DialRequestedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, DialRequested_revoker>(this, DialRequested(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::DialRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_DialRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(winrt::Windows::Media::Devices::RedialRequestedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_RedialRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::RedialRequested_revoker consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(auto_revoke_t, winrt::Windows::Media::Devices::RedialRequestedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, RedialRequested_revoker>(this, RedialRequested(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_RedialRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(winrt::Windows::Media::Devices::KeypadPressedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_KeypadPressed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed_revoker consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(auto_revoke_t, winrt::Windows::Media::Devices::KeypadPressedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, KeypadPressed_revoker>(this, KeypadPressed(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_KeypadPressed(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->add_AudioTransferRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested_revoker consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(auto_revoke_t, winrt::Windows::Media::Devices::CallControlEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, AudioTransferRequested_revoker>(this, AudioTransferRequested(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControl)->remove_AudioTransferRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControlStatics<D>::GetDefault() const
    {
        void* callControl{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControlStatics)->GetDefault(&callControl));
        return winrt::Windows::Media::Devices::CallControl{ callControl, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ICallControlStatics<D>::FromId(param::hstring const& deviceId) const
    {
        void* callControl{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICallControlStatics)->FromId(*(void**)(&deviceId), &callControl));
        return winrt::Windows::Media::Devices::CallControl{ callControl, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::GetState() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionInfo)->GetState(&result));
        return winrt::Windows::Media::Devices::CameraOcclusionState{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::IsOcclusionKindSupported(winrt::Windows::Media::Devices::CameraOcclusionKind const& occlusionKind) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionInfo)->IsOcclusionKindSupported(static_cast<int32_t>(occlusionKind), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::CameraOcclusionInfo, winrt::Windows::Media::Devices::CameraOcclusionStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionInfo)->add_StateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::StateChanged_revoker consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::CameraOcclusionInfo, winrt::Windows::Media::Devices::CameraOcclusionStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionInfo<D>::StateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionInfo)->remove_StateChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionState<D>::IsOccluded() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionState)->get_IsOccluded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionState<D>::IsOcclusionKind(winrt::Windows::Media::Devices::CameraOcclusionKind const& occlusionKind) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionState)->IsOcclusionKind(static_cast<int32_t>(occlusionKind), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Media_Devices_ICameraOcclusionStateChangedEventArgs<D>::State() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ICameraOcclusionStateChangedEventArgs)->get_State(&value));
        return winrt::Windows::Media::Devices::CameraOcclusionState{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>::Role() const
    {
        winrt::Windows::Media::Devices::AudioDeviceRole value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs)->get_Role(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDialRequestedEventArgs<D>::Handled() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDialRequestedEventArgs)->Handled());
    }
    template <typename D> auto consume_Windows_Media_Devices_IDialRequestedEventArgs<D>::Contact() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDialRequestedEventArgs)->get_Contact(&value));
        return winrt::Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::NormalizedOriginTop() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->get_NormalizedOriginTop(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::NormalizedOriginTop(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->put_NormalizedOriginTop(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::NormalizedOriginLeft() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->get_NormalizedOriginLeft(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::NormalizedOriginLeft(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->put_NormalizedOriginLeft(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::Scale() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->get_Scale(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowBounds<D>::Scale(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowBounds)->put_Scale(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::Width() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_Width(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::Height() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_Height(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::MinScaleValue() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_MinScaleValue(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::MaxScaleValue() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_MaxScaleValue(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::MinScaleValueWithoutUpsampling() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_MinScaleValueWithoutUpsampling(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowCapability<D>::NormalizedFieldOfViewLimit() const
    {
        winrt::Windows::Foundation::Rect value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowCapability)->get_NormalizedFieldOfViewLimit(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->get_IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::SupportedModes() const
    {
        uint32_t value_impl_size{};
        int32_t* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->get_SupportedModes(&value_impl_size, &value));
        return com_array<winrt::Windows::Media::Devices::DigitalWindowMode>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::CurrentMode() const
    {
        winrt::Windows::Media::Devices::DigitalWindowMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->get_CurrentMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::GetBounds() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->GetBounds(&result));
        return winrt::Windows::Media::Devices::DigitalWindowBounds{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::Configure(winrt::Windows::Media::Devices::DigitalWindowMode const& digitalWindowMode) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->Configure(static_cast<int32_t>(digitalWindowMode)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::Configure(winrt::Windows::Media::Devices::DigitalWindowMode const& digitalWindowMode, winrt::Windows::Media::Devices::DigitalWindowBounds const& digitalWindowBounds) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->ConfigureWithBounds(static_cast<int32_t>(digitalWindowMode), *(void**)(&digitalWindowBounds)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::SupportedCapabilities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->get_SupportedCapabilities(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::DigitalWindowCapability>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IDigitalWindowControl<D>::GetCapabilityForSize(int32_t width, int32_t height) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IDigitalWindowControl)->GetCapabilityForSize(width, height, &result));
        return winrt::Windows::Media::Devices::DigitalWindowCapability{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::Min() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::Max() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::Step() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::Value() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureCompensationControl<D>::SetValueAsync(float value) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureCompensationControl)->SetValueAsync(value, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Auto(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::SetAutoAsync(bool value) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->SetAutoAsync(value, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Min() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Min(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Max() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Max(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Step() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Step(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::Value() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->get_Value(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposureControl<D>::SetValueAsync(winrt::Windows::Foundation::TimeSpan const& shutterDuration) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposureControl)->SetValueAsync(impl::bind_in(shutterDuration), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposurePriorityVideoControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Enabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposurePriorityVideoControl)->get_Enabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Enabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IExposurePriorityVideoControl)->put_Enabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::PowerSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_PowerSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReductionSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_RedEyeReductionSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::Enabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_Enabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::Enabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->put_Enabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_Auto(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::Auto(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->put_Auto(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReduction() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_RedEyeReduction(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReduction(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->put_RedEyeReduction(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::PowerPercent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->get_PowerPercent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl<D>::PowerPercent(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl)->put_PowerPercent(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl2)->get_AssistantLightSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl2)->get_AssistantLightEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFlashControl2)->put_AssistantLightEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::SupportedPresets() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_SupportedPresets(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusPreset>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Preset() const
    {
        winrt::Windows::Media::Devices::FocusPreset value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Preset(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::SetPresetAsync(winrt::Windows::Media::Devices::FocusPreset const& preset) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->SetPresetAsync(static_cast<int32_t>(preset), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::SetPresetAsync(winrt::Windows::Media::Devices::FocusPreset const& preset, bool completeBeforeFocus) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->SetPresetWithCompletionOptionAsync(static_cast<int32_t>(preset), completeBeforeFocus, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Min() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Max() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Step() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::Value() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::SetValueAsync(uint32_t focus) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->SetValueAsync(focus, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl<D>::FocusAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl)->FocusAsync(&asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::FocusChangedSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_FocusChangedSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::WaitForFocusSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_WaitForFocusSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_SupportedFocusModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusDistances() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_SupportedFocusDistances(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ManualFocusDistance>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusRanges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_SupportedFocusRanges(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AutoFocusRange>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::Mode() const
    {
        winrt::Windows::Media::Devices::FocusMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::FocusState() const
    {
        winrt::Windows::Media::Devices::MediaCaptureFocusState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->get_FocusState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::UnlockAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->UnlockAsync(&asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::LockAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->LockAsync(&asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusControl2<D>::Configure(winrt::Windows::Media::Devices::FocusSettings const& settings) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusControl2)->Configure(*(void**)(&settings)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Mode() const
    {
        winrt::Windows::Media::Devices::FocusMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Mode(winrt::Windows::Media::Devices::FocusMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::AutoFocusRange() const
    {
        winrt::Windows::Media::Devices::AutoFocusRange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_AutoFocusRange(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::AutoFocusRange(winrt::Windows::Media::Devices::AutoFocusRange const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_AutoFocusRange(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_Value(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Value(winrt::Windows::Foundation::IReference<uint32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_Value(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Distance() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_Distance(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::Distance(winrt::Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_Distance(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::WaitForFocus() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_WaitForFocus(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::WaitForFocus(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_WaitForFocus(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::DisableDriverFallback() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->get_DisableDriverFallback(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IFocusSettings<D>::DisableDriverFallback(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IFocusSettings)->put_DisableDriverFallback(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IHdrVideoControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IHdrVideoControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IHdrVideoControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IHdrVideoControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::HdrVideoMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IHdrVideoControl<D>::Mode() const
    {
        winrt::Windows::Media::Devices::HdrVideoMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IHdrVideoControl)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IHdrVideoControl<D>::Mode(winrt::Windows::Media::Devices::HdrVideoMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IHdrVideoControl)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::InfraredTorchMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::CurrentMode() const
    {
        winrt::Windows::Media::Devices::InfraredTorchMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_CurrentMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::CurrentMode(winrt::Windows::Media::Devices::InfraredTorchMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->put_CurrentMode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::MinPower() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_MinPower(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::MaxPower() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_MaxPower(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::PowerStep() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_PowerStep(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::Power() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->get_Power(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IInfraredTorchControl<D>::Power(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IInfraredTorchControl)->put_Power(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl<D>::SupportedPresets() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl)->get_SupportedPresets(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::IsoSpeedPreset>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl<D>::Preset() const
    {
        winrt::Windows::Media::Devices::IsoSpeedPreset value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl)->get_Preset(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl<D>::SetPresetAsync(winrt::Windows::Media::Devices::IsoSpeedPreset const& preset) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl)->SetPresetAsync(static_cast<int32_t>(preset), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Min() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Max() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Step() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Value() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::SetValueAsync(uint32_t isoSpeed) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->SetValueAsync(isoSpeed, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Auto() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->get_Auto(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IIsoSpeedControl2<D>::SetAutoAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IIsoSpeedControl2)->SetAutoAsync(&asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IKeypadPressedEventArgs<D>::TelephonyKey() const
    {
        winrt::Windows::Media::Devices::TelephonyKey telephonyKey{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IKeypadPressedEventArgs)->get_TelephonyKey(reinterpret_cast<int32_t*>(&telephonyKey)));
        return telephonyKey;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::GetHighestConcurrentFrameRate(winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->GetHighestConcurrentFrameRate(*(void**)(&captureProperties), &value));
        return winrt::Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::GetCurrentFrameRate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->GetCurrentFrameRate(&value));
        return winrt::Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->get_ThumbnailEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->put_ThumbnailEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailFormat() const
    {
        winrt::Windows::Media::MediaProperties::MediaThumbnailFormat value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->get_ThumbnailFormat(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailFormat(winrt::Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->put_ThumbnailFormat(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::DesiredThumbnailSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->get_DesiredThumbnailSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::DesiredThumbnailSize(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->put_DesiredThumbnailSize(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoControl<D>::HardwareAcceleratedThumbnailSupported() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoControl)->get_HardwareAcceleratedThumbnailSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::MaxPastPhotos() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_MaxPastPhotos(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::MaxPhotosPerSecond() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_MaxPhotosPerSecond(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PastPhotoLimit() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_PastPhotoLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PastPhotoLimit(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_PastPhotoLimit(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_PhotosPerSecondLimit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_PhotosPerSecondLimit(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::GetHighestConcurrentFrameRate(winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->GetHighestConcurrentFrameRate(*(void**)(&captureProperties), &value));
        return winrt::Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::GetCurrentFrameRate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->GetCurrentFrameRate(&value));
        return winrt::Windows::Media::MediaProperties::MediaRatio{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_ThumbnailEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_ThumbnailEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailFormat() const
    {
        winrt::Windows::Media::MediaProperties::MediaThumbnailFormat value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_ThumbnailFormat(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailFormat(winrt::Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_ThumbnailFormat(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_DesiredThumbnailSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_DesiredThumbnailSize(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::HardwareAcceleratedThumbnailSupported() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_HardwareAcceleratedThumbnailSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControl<D>::Capabilities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControl)->get_Capabilities(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControlCapabilities{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControl<D>::TryGetValue(double& value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControl)->TryGetValue(&value, &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControl<D>::TrySetValue(double value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControl)->TrySetValue(value, &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControl<D>::TryGetAuto(bool& value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControl)->TryGetAuto(&value, &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControl<D>::TrySetAuto(bool value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControl)->TrySetAuto(value, &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Min() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Max() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Step() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Default() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Default(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::AutoModeSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_AutoModeSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceController<D>::GetAvailableMediaStreamProperties(winrt::Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceController)->GetAvailableMediaStreamProperties(static_cast<int32_t>(mediaStreamType), &value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceController<D>::GetMediaStreamProperties(winrt::Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceController)->GetMediaStreamProperties(static_cast<int32_t>(mediaStreamType), &value));
        return winrt::Windows::Media::MediaProperties::IMediaEncodingProperties{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceController<D>::SetMediaStreamPropertiesAsync(winrt::Windows::Media::Capture::MediaStreamType const& mediaStreamType, winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceController)->SetMediaStreamPropertiesAsync(static_cast<int32_t>(mediaStreamType), *(void**)(&mediaEncodingProperties), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetAudioCaptureSelector() const
    {
        void* selector{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->GetAudioCaptureSelector(&selector));
        return hstring{ selector, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetAudioRenderSelector() const
    {
        void* selector{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->GetAudioRenderSelector(&selector));
        return hstring{ selector, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetVideoCaptureSelector() const
    {
        void* selector{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->GetVideoCaptureSelector(&selector));
        return hstring{ selector, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetDefaultAudioCaptureId(winrt::Windows::Media::Devices::AudioDeviceRole const& role) const
    {
        void* deviceId{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->GetDefaultAudioCaptureId(static_cast<int32_t>(role), &deviceId));
        return hstring{ deviceId, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetDefaultAudioRenderId(winrt::Windows::Media::Devices::AudioDeviceRole const& role) const
    {
        void* deviceId{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->GetDefaultAudioRenderId(static_cast<int32_t>(role), &deviceId));
        return hstring{ deviceId, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->add_DefaultAudioCaptureDeviceChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged_revoker consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, DefaultAudioCaptureDeviceChanged_revoker>(this, DefaultAudioCaptureDeviceChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->remove_DefaultAudioCaptureDeviceChanged(impl::bind_in(cookie));
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->add_DefaultAudioRenderDeviceChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged_revoker consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, DefaultAudioRenderDeviceChanged_revoker>(this, DefaultAudioRenderDeviceChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IMediaDeviceStatics)->remove_DefaultAudioRenderDeviceChanged(impl::bind_in(cookie));
    }
    template <typename D> auto consume_Windows_Media_Devices_IModuleCommandResult<D>::Status() const
    {
        winrt::Windows::Media::Devices::SendCommandStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IModuleCommandResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IModuleCommandResult<D>::Result() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IModuleCommandResult)->get_Result(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IOpticalImageStabilizationControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IOpticalImageStabilizationControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::OpticalImageStabilizationMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Mode() const
    {
        winrt::Windows::Media::Devices::OpticalImageStabilizationMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IOpticalImageStabilizationControl)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Mode(winrt::Windows::Media::Devices::OpticalImageStabilizationMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IOpticalImageStabilizationControl)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IPanelBasedOptimizationControl<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPanelBasedOptimizationControl)->get_IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IPanelBasedOptimizationControl<D>::Panel() const
    {
        winrt::Windows::Devices::Enumeration::Panel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPanelBasedOptimizationControl)->get_Panel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IPanelBasedOptimizationControl<D>::Panel(winrt::Windows::Devices::Enumeration::Panel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPanelBasedOptimizationControl)->put_Panel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Supported() const
    {
        bool pbSupported{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPhotoConfirmationControl)->get_Supported(&pbSupported));
        return pbSupported;
    }
    template <typename D> auto consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Enabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPhotoConfirmationControl)->get_Enabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Enabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPhotoConfirmationControl)->put_Enabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::PixelFormat() const
    {
        winrt::Windows::Media::MediaProperties::MediaPixelFormat format{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPhotoConfirmationControl)->get_PixelFormat(reinterpret_cast<int32_t*>(&format)));
        return format;
    }
    template <typename D> auto consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::PixelFormat(winrt::Windows::Media::MediaProperties::MediaPixelFormat const& format) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IPhotoConfirmationControl)->put_PixelFormat(static_cast<int32_t>(format)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRedialRequestedEventArgs<D>::Handled() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRedialRequestedEventArgs)->Handled());
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoFocusEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->get_AutoFocusEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoFocusEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->put_AutoFocusEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoWhiteBalanceEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->get_AutoWhiteBalanceEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoWhiteBalanceEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->put_AutoWhiteBalanceEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoExposureEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->get_AutoExposureEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoExposureEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->put_AutoExposureEnabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::Bounds() const
    {
        winrt::Windows::Foundation::Rect value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->get_Bounds(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest<D>::Bounds(winrt::Windows::Foundation::Rect const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest)->put_Bounds(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::Type() const
    {
        winrt::Windows::Media::Devices::RegionOfInterestType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::Type(winrt::Windows::Media::Devices::RegionOfInterestType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->put_Type(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::BoundsNormalized() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->get_BoundsNormalized(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::BoundsNormalized(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->put_BoundsNormalized(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::Weight() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->get_Weight(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionOfInterest2<D>::Weight(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionOfInterest2)->put_Weight(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::MaxRegions() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->get_MaxRegions(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::SetRegionsAsync(param::async_iterable<winrt::Windows::Media::Devices::RegionOfInterest> const& regions) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->SetRegionsAsync(*(void**)(&regions), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::SetRegionsAsync(param::async_iterable<winrt::Windows::Media::Devices::RegionOfInterest> const& regions, bool lockValues) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->SetRegionsWithLockAsync(*(void**)(&regions), lockValues, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::ClearRegionsAsync() const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->ClearRegionsAsync(&asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoFocusSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoFocusSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoWhiteBalanceSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoWhiteBalanceSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoExposureSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoExposureSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ISceneModeControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ISceneModeControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::CaptureSceneMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ISceneModeControl<D>::Value() const
    {
        winrt::Windows::Media::Devices::CaptureSceneMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ISceneModeControl)->get_Value(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ISceneModeControl<D>::SetValueAsync(winrt::Windows::Media::Devices::CaptureSceneMode const& sceneMode) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ISceneModeControl)->SetValueAsync(static_cast<int32_t>(sceneMode), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::PowerSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->get_PowerSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::Enabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->get_Enabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::Enabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->put_Enabled(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::PowerPercent() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->get_PowerPercent(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_ITorchControl<D>::PowerPercent(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::ITorchControl)->put_PowerPercent(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Brightness() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Brightness(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Contrast() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Contrast(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Hue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Hue(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::WhiteBalance() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_WhiteBalance(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::BacklightCompensation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_BacklightCompensation(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Pan() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Pan(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Tilt() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Tilt(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Zoom() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Zoom(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Roll() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Roll(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Exposure() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Exposure(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::Focus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->get_Focus(&value));
        return winrt::Windows::Media::Devices::MediaDeviceControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::TrySetPowerlineFrequency(winrt::Windows::Media::Capture::PowerlineFrequency const& value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->TrySetPowerlineFrequency(static_cast<int32_t>(value), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceController<D>::TryGetPowerlineFrequency(winrt::Windows::Media::Capture::PowerlineFrequency& value) const
    {
        bool succeeded{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceController)->TryGetPowerlineFrequency(reinterpret_cast<int32_t*>(&value), &succeeded));
        return succeeded;
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>::Status() const
    {
        winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult)->get_Value(&value));
        return winrt::Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoTemporalDenoisingControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoTemporalDenoisingControl<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::VideoTemporalDenoisingMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoTemporalDenoisingControl<D>::Mode() const
    {
        winrt::Windows::Media::Devices::VideoTemporalDenoisingMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IVideoTemporalDenoisingControl<D>::Mode(winrt::Windows::Media::Devices::VideoTemporalDenoisingMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Preset() const
    {
        winrt::Windows::Media::Devices::ColorTemperaturePreset value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Preset(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::SetPresetAsync(winrt::Windows::Media::Devices::ColorTemperaturePreset const& preset) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->SetPresetAsync(static_cast<int32_t>(preset), &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Min() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Max() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Step() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Value() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IWhiteBalanceControl<D>::SetValueAsync(uint32_t temperature) const
    {
        void* asyncInfo{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IWhiteBalanceControl)->SetValueAsync(temperature, &asyncInfo));
        return winrt::Windows::Foundation::IAsyncAction{ asyncInfo, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Supported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->get_Supported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Min() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->get_Min(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Max() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->get_Max(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Step() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->get_Step(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Value() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl<D>::Value(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl)->put_Value(value));
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl2<D>::SupportedModes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl2)->get_SupportedModes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ZoomTransitionMode>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl2<D>::Mode() const
    {
        winrt::Windows::Media::Devices::ZoomTransitionMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl2)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomControl2<D>::Configure(winrt::Windows::Media::Devices::ZoomSettings const& settings) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomControl2)->Configure(*(void**)(&settings)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomSettings<D>::Mode() const
    {
        winrt::Windows::Media::Devices::ZoomTransitionMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomSettings)->get_Mode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomSettings<D>::Mode(winrt::Windows::Media::Devices::ZoomTransitionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomSettings)->put_Mode(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomSettings<D>::Value() const
    {
        float value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomSettings)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Media_Devices_IZoomSettings<D>::Value(float value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::Devices::IZoomSettings)->put_Value(value));
    }
    template <typename H> struct delegate<winrt::Windows::Media::Devices::CallControlEventHandler, H> final : implements_delegate<winrt::Windows::Media::Devices::CallControlEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Media::Devices::CallControlEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Media::Devices::CallControl const*>(&sender));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::Media::Devices::DialRequestedEventHandler, H> final : implements_delegate<winrt::Windows::Media::Devices::DialRequestedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Media::Devices::DialRequestedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<winrt::Windows::Media::Devices::DialRequestedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::Media::Devices::KeypadPressedEventHandler, H> final : implements_delegate<winrt::Windows::Media::Devices::KeypadPressedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Media::Devices::KeypadPressedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<winrt::Windows::Media::Devices::KeypadPressedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::Media::Devices::RedialRequestedEventHandler, H> final : implements_delegate<winrt::Windows::Media::Devices::RedialRequestedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Media::Devices::RedialRequestedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* e) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<winrt::Windows::Media::Devices::RedialRequestedEventArgs const*>(&e));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
    {
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AdvancedPhotoMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::AdvancedPhotoMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedPhotoControl> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedPhotoControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AdvancedPhotoMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AdvancedPhotoMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Configure(void* settings) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<winrt::Windows::Media::Devices::AdvancedPhotoCaptureSettings const*>(&settings));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
    {
        int32_t __stdcall SetDeviceProperty(void* propertyId, void* propertyValue) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDeviceProperty(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&propertyValue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceProperty(void* propertyId, void** propertyValue) noexcept final try
        {
            clear_abi(propertyValue);
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().GetDeviceProperty(*reinterpret_cast<hstring const*>(&propertyId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController10> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController10>
    {
        int32_t __stdcall get_CameraOcclusionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::CameraOcclusionInfo>(this->shim().CameraOcclusionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController11> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController11>
    {
        int32_t __stdcall TryAcquireExclusiveControl(void* deviceId, int32_t mode, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryAcquireExclusiveControl(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlReleaseMode const*>(&mode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
    {
        int32_t __stdcall get_LowLagPhotoSequence(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::LowLagPhotoSequenceControl>(this->shim().LowLagPhotoSequence());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LowLagPhoto(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::LowLagPhotoControl>(this->shim().LowLagPhoto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SceneModeControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::SceneModeControl>(this->shim().SceneModeControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TorchControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::TorchControl>(this->shim().TorchControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FlashControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::FlashControl>(this->shim().FlashControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WhiteBalanceControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::WhiteBalanceControl>(this->shim().WhiteBalanceControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ExposureControl>(this->shim().ExposureControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::FocusControl>(this->shim().FocusControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExposureCompensationControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ExposureCompensationControl>(this->shim().ExposureCompensationControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsoSpeedControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::IsoSpeedControl>(this->shim().IsoSpeedControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RegionsOfInterestControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::RegionsOfInterestControl>(this->shim().RegionsOfInterestControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrimaryUse(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::CaptureUse>(this->shim().PrimaryUse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrimaryUse(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryUse(*reinterpret_cast<winrt::Windows::Media::Devices::CaptureUse const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
    {
        int32_t __stdcall get_VariablePhotoSequenceController(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController>(this->shim().VariablePhotoSequenceController());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotoConfirmationControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::PhotoConfirmationControl>(this->shim().PhotoConfirmationControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ZoomControl>(this->shim().ZoomControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
    {
        int32_t __stdcall get_ExposurePriorityVideoControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ExposurePriorityVideoControl>(this->shim().ExposurePriorityVideoControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredOptimization(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaCaptureOptimization>(this->shim().DesiredOptimization());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredOptimization(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredOptimization(*reinterpret_cast<winrt::Windows::Media::Devices::MediaCaptureOptimization const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HdrVideoControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::HdrVideoControl>(this->shim().HdrVideoControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OpticalImageStabilizationControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::OpticalImageStabilizationControl>(this->shim().OpticalImageStabilizationControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdvancedPhotoControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AdvancedPhotoControl>(this->shim().AdvancedPhotoControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDevicePropertyById(void* propertyId, void* maxPropertyValueSize, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>(this->shim().GetDevicePropertyById(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<winrt::Windows::Foundation::IReference<uint32_t> const*>(&maxPropertyValueSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDevicePropertyById(void* propertyId, void* propertyValue, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>(this->shim().SetDevicePropertyById(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&propertyValue)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, void* maxPropertyValueSize, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>(this->shim().GetDevicePropertyByExtendedId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), *reinterpret_cast<winrt::Windows::Foundation::IReference<uint32_t> const*>(&maxPropertyValueSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, uint32_t __propertyValueSize, uint8_t* propertyValue, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>(this->shim().SetDevicePropertyByExtendedId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(propertyValue), reinterpret_cast<uint8_t const *>(propertyValue) + __propertyValueSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6>
    {
        int32_t __stdcall get_VideoTemporalDenoisingControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoTemporalDenoisingControl>(this->shim().VideoTemporalDenoisingControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7>
    {
        int32_t __stdcall get_InfraredTorchControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::InfraredTorchControl>(this->shim().InfraredTorchControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8>
    {
        int32_t __stdcall get_PanelBasedOptimizationControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::PanelBasedOptimizationControl>(this->shim().PanelBasedOptimizationControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController9> : produce_base<D, winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController9>
    {
        int32_t __stdcall get_DigitalWindowControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::DigitalWindowControl>(this->shim().DigitalWindowControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAudioDeviceController> : produce_base<D, winrt::Windows::Media::Devices::IAudioDeviceController>
    {
        int32_t __stdcall put_Muted(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Muted(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Muted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Muted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_VolumePercent(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VolumePercent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VolumePercent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().VolumePercent());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAudioDeviceModule> : produce_base<D, winrt::Windows::Media::Devices::IAudioDeviceModule>
    {
        int32_t __stdcall get_ClassId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ClassId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstanceId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().InstanceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MajorVersion(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MajorVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinorVersion(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinorVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendCommandAsync(void* Command, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Devices::ModuleCommandResult>>(this->shim().SendCommandAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&Command)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> : produce_base<D, winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
    {
        int32_t __stdcall get_Module(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AudioDeviceModule>(this->shim().Module());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NotificationData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().NotificationData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAudioDeviceModulesManager> : produce_base<D, winrt::Windows::Media::Devices::IAudioDeviceModulesManager>
    {
        int32_t __stdcall add_ModuleNotificationReceived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ModuleNotificationReceived(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::AudioDeviceModulesManager, winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ModuleNotificationReceived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModuleNotificationReceived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall FindAllById(void* moduleId, void** modules) noexcept final try
        {
            clear_abi(modules);
            typename D::abi_guard guard(this->shim());
            *modules = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AudioDeviceModule>>(this->shim().FindAllById(*reinterpret_cast<hstring const*>(&moduleId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAll(void** modules) noexcept final try
        {
            clear_abi(modules);
            typename D::abi_guard guard(this->shim());
            *modules = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AudioDeviceModule>>(this->shim().FindAll());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory> : produce_base<D, winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
    {
        int32_t __stdcall Create(void* deviceId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Media::Devices::AudioDeviceModulesManager>(this->shim().Create(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ICallControl> : produce_base<D, winrt::Windows::Media::Devices::ICallControl>
    {
        int32_t __stdcall IndicateNewIncomingCall(bool enableRinger, void* callerId, uint64_t* callToken) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *callToken = detach_from<uint64_t>(this->shim().IndicateNewIncomingCall(enableRinger, *reinterpret_cast<hstring const*>(&callerId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndicateNewOutgoingCall(uint64_t* callToken) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *callToken = detach_from<uint64_t>(this->shim().IndicateNewOutgoingCall());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndicateActiveCall(uint64_t callToken) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndicateActiveCall(callToken);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall EndCall(uint64_t callToken) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndCall(callToken);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasRinger(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasRinger());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AnswerRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AnswerRequested(*reinterpret_cast<winrt::Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AnswerRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnswerRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_HangUpRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().HangUpRequested(*reinterpret_cast<winrt::Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_HangUpRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HangUpRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_DialRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().DialRequested(*reinterpret_cast<winrt::Windows::Media::Devices::DialRequestedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DialRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DialRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_RedialRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RedialRequested(*reinterpret_cast<winrt::Windows::Media::Devices::RedialRequestedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RedialRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedialRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_KeypadPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().KeypadPressed(*reinterpret_cast<winrt::Windows::Media::Devices::KeypadPressedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_KeypadPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeypadPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AudioTransferRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AudioTransferRequested(*reinterpret_cast<winrt::Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AudioTransferRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioTransferRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ICallControlStatics> : produce_base<D, winrt::Windows::Media::Devices::ICallControlStatics>
    {
        int32_t __stdcall GetDefault(void** callControl) noexcept final try
        {
            clear_abi(callControl);
            typename D::abi_guard guard(this->shim());
            *callControl = detach_from<winrt::Windows::Media::Devices::CallControl>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromId(void* deviceId, void** callControl) noexcept final try
        {
            clear_abi(callControl);
            typename D::abi_guard guard(this->shim());
            *callControl = detach_from<winrt::Windows::Media::Devices::CallControl>(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ICameraOcclusionInfo> : produce_base<D, winrt::Windows::Media::Devices::ICameraOcclusionInfo>
    {
        int32_t __stdcall GetState(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Media::Devices::CameraOcclusionState>(this->shim().GetState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsOcclusionKindSupported(int32_t occlusionKind, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsOcclusionKindSupported(*reinterpret_cast<winrt::Windows::Media::Devices::CameraOcclusionKind const*>(&occlusionKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Media::Devices::CameraOcclusionInfo, winrt::Windows::Media::Devices::CameraOcclusionStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ICameraOcclusionState> : produce_base<D, winrt::Windows::Media::Devices::ICameraOcclusionState>
    {
        int32_t __stdcall get_IsOccluded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOccluded());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsOcclusionKind(int32_t occlusionKind, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsOcclusionKind(*reinterpret_cast<winrt::Windows::Media::Devices::CameraOcclusionKind const*>(&occlusionKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ICameraOcclusionStateChangedEventArgs> : produce_base<D, winrt::Windows::Media::Devices::ICameraOcclusionStateChangedEventArgs>
    {
        int32_t __stdcall get_State(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::CameraOcclusionState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> : produce_base<D, winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Role(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AudioDeviceRole>(this->shim().Role());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IDialRequestedEventArgs> : produce_base<D, winrt::Windows::Media::Devices::IDialRequestedEventArgs>
    {
        int32_t __stdcall Handled() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contact(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().Contact());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IDigitalWindowBounds> : produce_base<D, winrt::Windows::Media::Devices::IDigitalWindowBounds>
    {
        int32_t __stdcall get_NormalizedOriginTop(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NormalizedOriginTop());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NormalizedOriginTop(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedOriginTop(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedOriginLeft(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NormalizedOriginLeft());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NormalizedOriginLeft(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalizedOriginLeft(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Scale(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Scale());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Scale(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IDigitalWindowCapability> : produce_base<D, winrt::Windows::Media::Devices::IDigitalWindowCapability>
    {
        int32_t __stdcall get_Width(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Height(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinScaleValue(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinScaleValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxScaleValue(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxScaleValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinScaleValueWithoutUpsampling(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinScaleValueWithoutUpsampling());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NormalizedFieldOfViewLimit(winrt::Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Rect>(this->shim().NormalizedFieldOfViewLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IDigitalWindowControl> : produce_base<D, winrt::Windows::Media::Devices::IDigitalWindowControl>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(uint32_t* __valueSize, int32_t** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::DigitalWindowMode>(this->shim().CurrentMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetBounds(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Media::Devices::DigitalWindowBounds>(this->shim().GetBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Configure(int32_t digitalWindowMode) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<winrt::Windows::Media::Devices::DigitalWindowMode const*>(&digitalWindowMode));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConfigureWithBounds(int32_t digitalWindowMode, void* digitalWindowBounds) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<winrt::Windows::Media::Devices::DigitalWindowMode const*>(&digitalWindowMode), *reinterpret_cast<winrt::Windows::Media::Devices::DigitalWindowBounds const*>(&digitalWindowBounds));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedCapabilities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::DigitalWindowCapability>>(this->shim().SupportedCapabilities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCapabilityForSize(int32_t width, int32_t height, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Media::Devices::DigitalWindowCapability>(this->shim().GetCapabilityForSize(width, height));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IExposureCompensationControl> : produce_base<D, winrt::Windows::Media::Devices::IExposureCompensationControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(float value, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IExposureControl> : produce_base<D, winrt::Windows::Media::Devices::IExposureControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAutoAsync(bool value, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetAutoAsync(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(int64_t shutterDuration, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&shutterDuration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IExposurePriorityVideoControl> : produce_base<D, winrt::Windows::Media::Devices::IExposurePriorityVideoControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Enabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Enabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IFlashControl> : produce_base<D, winrt::Windows::Media::Devices::IFlashControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PowerSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RedEyeReductionSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RedEyeReductionSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Enabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Enabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Auto(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Auto(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RedEyeReduction(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RedEyeReduction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RedEyeReduction(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedEyeReduction(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerPercent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PowerPercent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PowerPercent(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerPercent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IFlashControl2> : produce_base<D, winrt::Windows::Media::Devices::IFlashControl2>
    {
        int32_t __stdcall get_AssistantLightSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AssistantLightSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AssistantLightEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AssistantLightEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AssistantLightEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AssistantLightEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IFocusControl> : produce_base<D, winrt::Windows::Media::Devices::IFocusControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedPresets(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusPreset>>(this->shim().SupportedPresets());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Preset(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::FocusPreset>(this->shim().Preset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPresetAsync(int32_t preset, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetPresetAsync(*reinterpret_cast<winrt::Windows::Media::Devices::FocusPreset const*>(&preset)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPresetWithCompletionOptionAsync(int32_t preset, bool completeBeforeFocus, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetPresetAsync(*reinterpret_cast<winrt::Windows::Media::Devices::FocusPreset const*>(&preset), completeBeforeFocus));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(uint32_t focus, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(focus));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FocusAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().FocusAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IFocusControl2> : produce_base<D, winrt::Windows::Media::Devices::IFocusControl2>
    {
        int32_t __stdcall get_FocusChangedSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().FocusChangedSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WaitForFocusSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().WaitForFocusSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedFocusModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::FocusMode>>(this->shim().SupportedFocusModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedFocusDistances(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ManualFocusDistance>>(this->shim().SupportedFocusDistances());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedFocusRanges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::AutoFocusRange>>(this->shim().SupportedFocusRanges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::FocusMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaCaptureFocusState>(this->shim().FocusState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnlockAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().UnlockAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LockAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().LockAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Configure(void* settings) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<winrt::Windows::Media::Devices::FocusSettings const*>(&settings));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IFocusSettings> : produce_base<D, winrt::Windows::Media::Devices::IFocusSettings>
    {
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::FocusMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::FocusMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoFocusRange(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::AutoFocusRange>(this->shim().AutoFocusRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutoFocusRange(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoFocusRange(*reinterpret_cast<winrt::Windows::Media::Devices::AutoFocusRange const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<winrt::Windows::Foundation::IReference<uint32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Distance(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance>>(this->shim().Distance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Distance(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Distance(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Media::Devices::ManualFocusDistance> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WaitForFocus(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().WaitForFocus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WaitForFocus(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForFocus(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisableDriverFallback(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DisableDriverFallback());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisableDriverFallback(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableDriverFallback(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IHdrVideoControl> : produce_base<D, winrt::Windows::Media::Devices::IHdrVideoControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::HdrVideoMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::HdrVideoMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::HdrVideoMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IInfraredTorchControl> : produce_base<D, winrt::Windows::Media::Devices::IInfraredTorchControl>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::InfraredTorchMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::InfraredTorchMode>(this->shim().CurrentMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurrentMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentMode(*reinterpret_cast<winrt::Windows::Media::Devices::InfraredTorchMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPower(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MinPower());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPower(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxPower());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerStep(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PowerStep());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Power(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Power());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Power(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Power(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IIsoSpeedControl> : produce_base<D, winrt::Windows::Media::Devices::IIsoSpeedControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedPresets(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::IsoSpeedPreset>>(this->shim().SupportedPresets());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Preset(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::IsoSpeedPreset>(this->shim().Preset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPresetAsync(int32_t preset, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetPresetAsync(*reinterpret_cast<winrt::Windows::Media::Devices::IsoSpeedPreset const*>(&preset)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IIsoSpeedControl2> : produce_base<D, winrt::Windows::Media::Devices::IIsoSpeedControl2>
    {
        int32_t __stdcall get_Min(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(uint32_t isoSpeed, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(isoSpeed));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Auto(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Auto());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAutoAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetAutoAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IKeypadPressedEventArgs> : produce_base<D, winrt::Windows::Media::Devices::IKeypadPressedEventArgs>
    {
        int32_t __stdcall get_TelephonyKey(int32_t* telephonyKey) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *telephonyKey = detach_from<winrt::Windows::Media::Devices::TelephonyKey>(this->shim().TelephonyKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ILowLagPhotoControl> : produce_base<D, winrt::Windows::Media::Devices::ILowLagPhotoControl>
    {
        int32_t __stdcall GetHighestConcurrentFrameRate(void* captureProperties, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaRatio>(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&captureProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentFrameRate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaRatio>(this->shim().GetCurrentFrameRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ThumbnailEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ThumbnailEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ThumbnailEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ThumbnailFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat>(this->shim().ThumbnailFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ThumbnailFormat(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailFormat(*reinterpret_cast<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredThumbnailSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DesiredThumbnailSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredThumbnailSize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HardwareAcceleratedThumbnailSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl> : produce_base<D, winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPastPhotos(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPastPhotos());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPhotosPerSecond(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxPhotosPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PastPhotoLimit(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PastPhotoLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PastPhotoLimit(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PastPhotoLimit(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhotosPerSecondLimit(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PhotosPerSecondLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PhotosPerSecondLimit(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotosPerSecondLimit(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHighestConcurrentFrameRate(void* captureProperties, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaRatio>(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&captureProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentFrameRate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaRatio>(this->shim().GetCurrentFrameRate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ThumbnailEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ThumbnailEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ThumbnailEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ThumbnailFormat(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat>(this->shim().ThumbnailFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ThumbnailFormat(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailFormat(*reinterpret_cast<winrt::Windows::Media::MediaProperties::MediaThumbnailFormat const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DesiredThumbnailSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DesiredThumbnailSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredThumbnailSize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HardwareAcceleratedThumbnailSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IMediaDeviceControl> : produce_base<D, winrt::Windows::Media::Devices::IMediaDeviceControl>
    {
        int32_t __stdcall get_Capabilities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControlCapabilities>(this->shim().Capabilities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetValue(double* value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryGetValue(*value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetValue(double value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetValue(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetAuto(bool* value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryGetAuto(*value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetAuto(bool value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetAuto(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities> : produce_base<D, winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Default(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Default());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoModeSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoModeSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IMediaDeviceController> : produce_base<D, winrt::Windows::Media::Devices::IMediaDeviceController>
    {
        int32_t __stdcall GetAvailableMediaStreamProperties(int32_t mediaStreamType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>>(this->shim().GetAvailableMediaStreamProperties(*reinterpret_cast<winrt::Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMediaStreamProperties(int32_t mediaStreamType, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties>(this->shim().GetMediaStreamProperties(*reinterpret_cast<winrt::Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetMediaStreamPropertiesAsync(int32_t mediaStreamType, void* mediaEncodingProperties, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetMediaStreamPropertiesAsync(*reinterpret_cast<winrt::Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&mediaEncodingProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IMediaDeviceStatics> : produce_base<D, winrt::Windows::Media::Devices::IMediaDeviceStatics>
    {
        int32_t __stdcall GetAudioCaptureSelector(void** selector) noexcept final try
        {
            clear_abi(selector);
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetAudioCaptureSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAudioRenderSelector(void** selector) noexcept final try
        {
            clear_abi(selector);
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetAudioRenderSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetVideoCaptureSelector(void** selector) noexcept final try
        {
            clear_abi(selector);
            typename D::abi_guard guard(this->shim());
            *selector = detach_from<hstring>(this->shim().GetVideoCaptureSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultAudioCaptureId(int32_t role, void** deviceId) noexcept final try
        {
            clear_abi(deviceId);
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_from<hstring>(this->shim().GetDefaultAudioCaptureId(*reinterpret_cast<winrt::Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultAudioRenderId(int32_t role, void** deviceId) noexcept final try
        {
            clear_abi(deviceId);
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_from<hstring>(this->shim().GetDefaultAudioRenderId(*reinterpret_cast<winrt::Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_DefaultAudioCaptureDeviceChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().DefaultAudioCaptureDeviceChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DefaultAudioCaptureDeviceChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAudioCaptureDeviceChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall add_DefaultAudioRenderDeviceChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().DefaultAudioRenderDeviceChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DefaultAudioRenderDeviceChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAudioRenderDeviceChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IModuleCommandResult> : produce_base<D, winrt::Windows::Media::Devices::IModuleCommandResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::SendCommandStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Result(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().Result());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IOpticalImageStabilizationControl> : produce_base<D, winrt::Windows::Media::Devices::IOpticalImageStabilizationControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::OpticalImageStabilizationMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::OpticalImageStabilizationMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::OpticalImageStabilizationMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IPanelBasedOptimizationControl> : produce_base<D, winrt::Windows::Media::Devices::IPanelBasedOptimizationControl>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Panel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Enumeration::Panel>(this->shim().Panel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Panel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Panel(*reinterpret_cast<winrt::Windows::Devices::Enumeration::Panel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IPhotoConfirmationControl> : produce_base<D, winrt::Windows::Media::Devices::IPhotoConfirmationControl>
    {
        int32_t __stdcall get_Supported(bool* pbSupported) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *pbSupported = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Enabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Enabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PixelFormat(int32_t* format) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *format = detach_from<winrt::Windows::Media::MediaProperties::MediaPixelFormat>(this->shim().PixelFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PixelFormat(int32_t format) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PixelFormat(*reinterpret_cast<winrt::Windows::Media::MediaProperties::MediaPixelFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IRedialRequestedEventArgs> : produce_base<D, winrt::Windows::Media::Devices::IRedialRequestedEventArgs>
    {
        int32_t __stdcall Handled() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IRegionOfInterest> : produce_base<D, winrt::Windows::Media::Devices::IRegionOfInterest>
    {
        int32_t __stdcall get_AutoFocusEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoFocusEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutoFocusEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoFocusEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoWhiteBalanceEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoWhiteBalanceEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutoWhiteBalanceEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoWhiteBalanceEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoExposureEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoExposureEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutoExposureEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoExposureEnabled(value);
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
        int32_t __stdcall put_Bounds(winrt::Windows::Foundation::Rect value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<winrt::Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IRegionOfInterest2> : produce_base<D, winrt::Windows::Media::Devices::IRegionOfInterest2>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::RegionOfInterestType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Type(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<winrt::Windows::Media::Devices::RegionOfInterestType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BoundsNormalized(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BoundsNormalized());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BoundsNormalized(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BoundsNormalized(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Weight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Weight());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Weight(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IRegionsOfInterestControl> : produce_base<D, winrt::Windows::Media::Devices::IRegionsOfInterestControl>
    {
        int32_t __stdcall get_MaxRegions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxRegions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRegionsAsync(void* regions, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetRegionsAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Devices::RegionOfInterest> const*>(&regions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetRegionsWithLockAsync(void* regions, bool lockValues, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetRegionsAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Devices::RegionOfInterest> const*>(&regions), lockValues));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearRegionsAsync(void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ClearRegionsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoFocusSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoFocusSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoWhiteBalanceSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoWhiteBalanceSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutoExposureSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutoExposureSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ISceneModeControl> : produce_base<D, winrt::Windows::Media::Devices::ISceneModeControl>
    {
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::CaptureSceneMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::CaptureSceneMode>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(int32_t sceneMode, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(*reinterpret_cast<winrt::Windows::Media::Devices::CaptureSceneMode const*>(&sceneMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::ITorchControl> : produce_base<D, winrt::Windows::Media::Devices::ITorchControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PowerSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Enabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Enabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PowerPercent(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PowerPercent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PowerPercent(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerPercent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IVideoDeviceController> : produce_base<D, winrt::Windows::Media::Devices::IVideoDeviceController>
    {
        int32_t __stdcall get_Brightness(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Brightness());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Contrast(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Contrast());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Hue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Hue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WhiteBalance(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().WhiteBalance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BacklightCompensation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().BacklightCompensation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pan(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Pan());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Tilt(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Tilt());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Zoom(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Zoom());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Roll(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Roll());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Exposure(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Exposure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Focus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::MediaDeviceControl>(this->shim().Focus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TrySetPowerlineFrequency(int32_t value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetPowerlineFrequency(*reinterpret_cast<winrt::Windows::Media::Capture::PowerlineFrequency const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetPowerlineFrequency(int32_t* value, bool* succeeded) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TryGetPowerlineFrequency(*reinterpret_cast<winrt::Windows::Media::Capture::PowerlineFrequency*>(value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> : produce_base<D, winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl> : produce_base<D, winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::VideoTemporalDenoisingMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::VideoTemporalDenoisingMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::VideoTemporalDenoisingMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IWhiteBalanceControl> : produce_base<D, winrt::Windows::Media::Devices::IWhiteBalanceControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Preset(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ColorTemperaturePreset>(this->shim().Preset());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPresetAsync(int32_t preset, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetPresetAsync(*reinterpret_cast<winrt::Windows::Media::Devices::ColorTemperaturePreset const*>(&preset)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetValueAsync(uint32_t temperature, void** asyncInfo) noexcept final try
        {
            clear_abi(asyncInfo);
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetValueAsync(temperature));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IZoomControl> : produce_base<D, winrt::Windows::Media::Devices::IZoomControl>
    {
        int32_t __stdcall get_Supported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Supported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Min(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Min());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Max(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Max());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Step(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Step());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IZoomControl2> : produce_base<D, winrt::Windows::Media::Devices::IZoomControl2>
    {
        int32_t __stdcall get_SupportedModes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Media::Devices::ZoomTransitionMode>>(this->shim().SupportedModes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ZoomTransitionMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Configure(void* settings) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<winrt::Windows::Media::Devices::ZoomSettings const*>(&settings));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::Devices::IZoomSettings> : produce_base<D, winrt::Windows::Media::Devices::IZoomSettings>
    {
        int32_t __stdcall get_Mode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::Devices::ZoomTransitionMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Mode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<winrt::Windows::Media::Devices::ZoomTransitionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(float* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(float value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::Devices
{
    inline AdvancedPhotoCaptureSettings::AdvancedPhotoCaptureSettings() :
        AdvancedPhotoCaptureSettings(impl::call_factory_cast<AdvancedPhotoCaptureSettings(*)(winrt::Windows::Foundation::IActivationFactory const&), AdvancedPhotoCaptureSettings>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AdvancedPhotoCaptureSettings>(); }))
    {
    }
    inline AudioDeviceModulesManager::AudioDeviceModulesManager(param::hstring const& deviceId) :
        AudioDeviceModulesManager(impl::call_factory<AudioDeviceModulesManager, IAudioDeviceModulesManagerFactory>([&](IAudioDeviceModulesManagerFactory const& f) { return f.Create(deviceId); }))
    {
    }
    inline auto CallControl::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Media::Devices::CallControl(*)(ICallControlStatics const&), CallControl, ICallControlStatics>([](ICallControlStatics const& f) { return f.GetDefault(); });
    }
    inline auto CallControl::FromId(param::hstring const& deviceId)
    {
        return impl::call_factory<CallControl, ICallControlStatics>([&](ICallControlStatics const& f) { return f.FromId(deviceId); });
    }
    inline DigitalWindowBounds::DigitalWindowBounds() :
        DigitalWindowBounds(impl::call_factory_cast<DigitalWindowBounds(*)(winrt::Windows::Foundation::IActivationFactory const&), DigitalWindowBounds>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DigitalWindowBounds>(); }))
    {
    }
    inline FocusSettings::FocusSettings() :
        FocusSettings(impl::call_factory_cast<FocusSettings(*)(winrt::Windows::Foundation::IActivationFactory const&), FocusSettings>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<FocusSettings>(); }))
    {
    }
    inline auto MediaDevice::GetAudioCaptureSelector()
    {
        return impl::call_factory_cast<hstring(*)(IMediaDeviceStatics const&), MediaDevice, IMediaDeviceStatics>([](IMediaDeviceStatics const& f) { return f.GetAudioCaptureSelector(); });
    }
    inline auto MediaDevice::GetAudioRenderSelector()
    {
        return impl::call_factory_cast<hstring(*)(IMediaDeviceStatics const&), MediaDevice, IMediaDeviceStatics>([](IMediaDeviceStatics const& f) { return f.GetAudioRenderSelector(); });
    }
    inline auto MediaDevice::GetVideoCaptureSelector()
    {
        return impl::call_factory_cast<hstring(*)(IMediaDeviceStatics const&), MediaDevice, IMediaDeviceStatics>([](IMediaDeviceStatics const& f) { return f.GetVideoCaptureSelector(); });
    }
    inline auto MediaDevice::GetDefaultAudioCaptureId(winrt::Windows::Media::Devices::AudioDeviceRole const& role)
    {
        return impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.GetDefaultAudioCaptureId(role); });
    }
    inline auto MediaDevice::GetDefaultAudioRenderId(winrt::Windows::Media::Devices::AudioDeviceRole const& role)
    {
        return impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.GetDefaultAudioRenderId(role); });
    }
    inline auto MediaDevice::DefaultAudioCaptureDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler)
    {
        return impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.DefaultAudioCaptureDeviceChanged(handler); });
    }
    inline MediaDevice::DefaultAudioCaptureDeviceChanged_revoker MediaDevice::DefaultAudioCaptureDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler)
    {
        auto f = get_activation_factory<MediaDevice, winrt::Windows::Media::Devices::IMediaDeviceStatics>();
        return { f, f.DefaultAudioCaptureDeviceChanged(handler) };
    }
    inline auto MediaDevice::DefaultAudioCaptureDeviceChanged(winrt::event_token const& cookie)
    {
        impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.DefaultAudioCaptureDeviceChanged(cookie); });
    }
    inline auto MediaDevice::DefaultAudioRenderDeviceChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler)
    {
        return impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.DefaultAudioRenderDeviceChanged(handler); });
    }
    inline MediaDevice::DefaultAudioRenderDeviceChanged_revoker MediaDevice::DefaultAudioRenderDeviceChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable, winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler)
    {
        auto f = get_activation_factory<MediaDevice, winrt::Windows::Media::Devices::IMediaDeviceStatics>();
        return { f, f.DefaultAudioRenderDeviceChanged(handler) };
    }
    inline auto MediaDevice::DefaultAudioRenderDeviceChanged(winrt::event_token const& cookie)
    {
        impl::call_factory<MediaDevice, IMediaDeviceStatics>([&](IMediaDeviceStatics const& f) { return f.DefaultAudioRenderDeviceChanged(cookie); });
    }
    inline RegionOfInterest::RegionOfInterest() :
        RegionOfInterest(impl::call_factory_cast<RegionOfInterest(*)(winrt::Windows::Foundation::IActivationFactory const&), RegionOfInterest>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RegionOfInterest>(); }))
    {
    }
    inline ZoomSettings::ZoomSettings() :
        ZoomSettings(impl::call_factory_cast<ZoomSettings(*)(winrt::Windows::Foundation::IActivationFactory const&), ZoomSettings>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ZoomSettings>(); }))
    {
    }
    template <typename L> CallControlEventHandler::CallControlEventHandler(L handler) :
        CallControlEventHandler(impl::make_delegate<CallControlEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> CallControlEventHandler::CallControlEventHandler(F* handler) :
        CallControlEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> CallControlEventHandler::CallControlEventHandler(O* object, M method) :
        CallControlEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> CallControlEventHandler::CallControlEventHandler(com_ptr<O>&& object, M method) :
        CallControlEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> CallControlEventHandler::CallControlEventHandler(weak_ref<O>&& object, M method) :
        CallControlEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto CallControlEventHandler::operator()(winrt::Windows::Media::Devices::CallControl const& sender) const
    {
        check_hresult((*(impl::abi_t<CallControlEventHandler>**)this)->Invoke(*(void**)(&sender)));
    }
    template <typename L> DialRequestedEventHandler::DialRequestedEventHandler(L handler) :
        DialRequestedEventHandler(impl::make_delegate<DialRequestedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> DialRequestedEventHandler::DialRequestedEventHandler(F* handler) :
        DialRequestedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> DialRequestedEventHandler::DialRequestedEventHandler(O* object, M method) :
        DialRequestedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> DialRequestedEventHandler::DialRequestedEventHandler(com_ptr<O>&& object, M method) :
        DialRequestedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> DialRequestedEventHandler::DialRequestedEventHandler(weak_ref<O>&& object, M method) :
        DialRequestedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto DialRequestedEventHandler::operator()(winrt::Windows::Media::Devices::CallControl const& sender, winrt::Windows::Media::Devices::DialRequestedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<DialRequestedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> KeypadPressedEventHandler::KeypadPressedEventHandler(L handler) :
        KeypadPressedEventHandler(impl::make_delegate<KeypadPressedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> KeypadPressedEventHandler::KeypadPressedEventHandler(F* handler) :
        KeypadPressedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> KeypadPressedEventHandler::KeypadPressedEventHandler(O* object, M method) :
        KeypadPressedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> KeypadPressedEventHandler::KeypadPressedEventHandler(com_ptr<O>&& object, M method) :
        KeypadPressedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> KeypadPressedEventHandler::KeypadPressedEventHandler(weak_ref<O>&& object, M method) :
        KeypadPressedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto KeypadPressedEventHandler::operator()(winrt::Windows::Media::Devices::CallControl const& sender, winrt::Windows::Media::Devices::KeypadPressedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<KeypadPressedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
    template <typename L> RedialRequestedEventHandler::RedialRequestedEventHandler(L handler) :
        RedialRequestedEventHandler(impl::make_delegate<RedialRequestedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> RedialRequestedEventHandler::RedialRequestedEventHandler(F* handler) :
        RedialRequestedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> RedialRequestedEventHandler::RedialRequestedEventHandler(O* object, M method) :
        RedialRequestedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> RedialRequestedEventHandler::RedialRequestedEventHandler(com_ptr<O>&& object, M method) :
        RedialRequestedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> RedialRequestedEventHandler::RedialRequestedEventHandler(weak_ref<O>&& object, M method) :
        RedialRequestedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto RedialRequestedEventHandler::operator()(winrt::Windows::Media::Devices::CallControl const& sender, winrt::Windows::Media::Devices::RedialRequestedEventArgs const& e) const
    {
        check_hresult((*(impl::abi_t<RedialRequestedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&e)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedPhotoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController10> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController11> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController7> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController8> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController9> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModule> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModulesManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ICallControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ICallControlStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ICameraOcclusionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ICameraOcclusionState> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ICameraOcclusionStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IDialRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IDigitalWindowBounds> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IDigitalWindowCapability> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IDigitalWindowControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IExposureCompensationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IExposureControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IExposurePriorityVideoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IFlashControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IFlashControl2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IFocusControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IFocusControl2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IFocusSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IHdrVideoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IInfraredTorchControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IIsoSpeedControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IIsoSpeedControl2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IKeypadPressedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ILowLagPhotoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IModuleCommandResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IOpticalImageStabilizationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IPanelBasedOptimizationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IPhotoConfirmationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IRedialRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IRegionOfInterest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IRegionOfInterest2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IRegionsOfInterestControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ISceneModeControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ITorchControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IVideoDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IVideoTemporalDenoisingControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IWhiteBalanceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IZoomControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IZoomControl2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IZoomSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AdvancedPhotoCaptureSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AdvancedPhotoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModule> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModulesManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::CallControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::CameraOcclusionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::CameraOcclusionState> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::CameraOcclusionStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DialRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DigitalWindowBounds> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DigitalWindowCapability> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::DigitalWindowControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ExposureCompensationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ExposureControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ExposurePriorityVideoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::FlashControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::FocusControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::FocusSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::HdrVideoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::InfraredTorchControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::IsoSpeedControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::KeypadPressedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::LowLagPhotoControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::LowLagPhotoSequenceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::MediaDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::MediaDeviceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::MediaDeviceControlCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ModuleCommandResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::OpticalImageStabilizationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::PanelBasedOptimizationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::PhotoConfirmationControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::RedialRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::RegionOfInterest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::RegionsOfInterestControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::SceneModeControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::TorchControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::VideoDeviceController> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::VideoTemporalDenoisingControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::WhiteBalanceControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ZoomControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::Devices::ZoomSettings> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
