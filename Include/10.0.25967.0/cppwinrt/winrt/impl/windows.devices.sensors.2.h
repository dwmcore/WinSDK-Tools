// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Sensors_2_H
#define WINRT_Windows_Devices_Sensors_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Sensors.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors
{
    struct __declspec(empty_bases) Accelerometer : winrt::Windows::Devices::Sensors::IAccelerometer,
        impl::require<Accelerometer, winrt::Windows::Devices::Sensors::IAccelerometerDeviceId, winrt::Windows::Devices::Sensors::IAccelerometer2, winrt::Windows::Devices::Sensors::IAccelerometer3, winrt::Windows::Devices::Sensors::IAccelerometer4, winrt::Windows::Devices::Sensors::IAccelerometer5>
    {
        Accelerometer(std::nullptr_t) noexcept {}
        Accelerometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAccelerometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefault(winrt::Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector(winrt::Windows::Devices::Sensors::AccelerometerReadingType const& readingType);
    };
    struct __declspec(empty_bases) AccelerometerDataThreshold : winrt::Windows::Devices::Sensors::IAccelerometerDataThreshold
    {
        AccelerometerDataThreshold(std::nullptr_t) noexcept {}
        AccelerometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAccelerometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerReading : winrt::Windows::Devices::Sensors::IAccelerometerReading,
        impl::require<AccelerometerReading, winrt::Windows::Devices::Sensors::IAccelerometerReading2>
    {
        AccelerometerReading(std::nullptr_t) noexcept {}
        AccelerometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAccelerometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs
    {
        AccelerometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        AccelerometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAccelerometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AccelerometerShakenEventArgs : winrt::Windows::Devices::Sensors::IAccelerometerShakenEventArgs
    {
        AccelerometerShakenEventArgs(std::nullptr_t) noexcept {}
        AccelerometerShakenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAccelerometerShakenEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensor : winrt::Windows::Devices::Sensors::IActivitySensor
    {
        ActivitySensor(std::nullptr_t) noexcept {}
        ActivitySensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IActivitySensor(ptr, take_ownership_from_abi) {}
        static auto GetDefaultAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetSystemHistoryAsync(winrt::Windows::Foundation::DateTime const& fromTime);
        static auto GetSystemHistoryAsync(winrt::Windows::Foundation::DateTime const& fromTime, winrt::Windows::Foundation::TimeSpan const& duration);
    };
    struct __declspec(empty_bases) ActivitySensorReading : winrt::Windows::Devices::Sensors::IActivitySensorReading
    {
        ActivitySensorReading(std::nullptr_t) noexcept {}
        ActivitySensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IActivitySensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorReadingChangeReport : winrt::Windows::Devices::Sensors::IActivitySensorReadingChangeReport
    {
        ActivitySensorReadingChangeReport(std::nullptr_t) noexcept {}
        ActivitySensorReadingChangeReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IActivitySensorReadingChangeReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs
    {
        ActivitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        ActivitySensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IActivitySensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ActivitySensorTriggerDetails : winrt::Windows::Devices::Sensors::IActivitySensorTriggerDetails
    {
        ActivitySensorTriggerDetails(std::nullptr_t) noexcept {}
        ActivitySensorTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IActivitySensorTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveDimmingOptions : winrt::Windows::Devices::Sensors::IAdaptiveDimmingOptions
    {
        AdaptiveDimmingOptions(std::nullptr_t) noexcept {}
        AdaptiveDimmingOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAdaptiveDimmingOptions(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Altimeter : winrt::Windows::Devices::Sensors::IAltimeter,
        impl::require<Altimeter, winrt::Windows::Devices::Sensors::IAltimeter2>
    {
        Altimeter(std::nullptr_t) noexcept {}
        Altimeter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAltimeter(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) AltimeterReading : winrt::Windows::Devices::Sensors::IAltimeterReading,
        impl::require<AltimeterReading, winrt::Windows::Devices::Sensors::IAltimeterReading2>
    {
        AltimeterReading(std::nullptr_t) noexcept {}
        AltimeterReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAltimeterReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AltimeterReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs
    {
        AltimeterReadingChangedEventArgs(std::nullptr_t) noexcept {}
        AltimeterReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IAltimeterReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Barometer : winrt::Windows::Devices::Sensors::IBarometer,
        impl::require<Barometer, winrt::Windows::Devices::Sensors::IBarometer2, winrt::Windows::Devices::Sensors::IBarometer3>
    {
        Barometer(std::nullptr_t) noexcept {}
        Barometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IBarometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) BarometerDataThreshold : winrt::Windows::Devices::Sensors::IBarometerDataThreshold
    {
        BarometerDataThreshold(std::nullptr_t) noexcept {}
        BarometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IBarometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarometerReading : winrt::Windows::Devices::Sensors::IBarometerReading,
        impl::require<BarometerReading, winrt::Windows::Devices::Sensors::IBarometerReading2>
    {
        BarometerReading(std::nullptr_t) noexcept {}
        BarometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IBarometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IBarometerReadingChangedEventArgs
    {
        BarometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        BarometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IBarometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Compass : winrt::Windows::Devices::Sensors::ICompass,
        impl::require<Compass, winrt::Windows::Devices::Sensors::ICompassDeviceId, winrt::Windows::Devices::Sensors::ICompass2, winrt::Windows::Devices::Sensors::ICompass3, winrt::Windows::Devices::Sensors::ICompass4>
    {
        Compass(std::nullptr_t) noexcept {}
        Compass(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ICompass(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) CompassDataThreshold : winrt::Windows::Devices::Sensors::ICompassDataThreshold
    {
        CompassDataThreshold(std::nullptr_t) noexcept {}
        CompassDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ICompassDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompassReading : winrt::Windows::Devices::Sensors::ICompassReading,
        impl::require<CompassReading, winrt::Windows::Devices::Sensors::ICompassReadingHeadingAccuracy, winrt::Windows::Devices::Sensors::ICompassReading2>
    {
        CompassReading(std::nullptr_t) noexcept {}
        CompassReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ICompassReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CompassReadingChangedEventArgs : winrt::Windows::Devices::Sensors::ICompassReadingChangedEventArgs
    {
        CompassReadingChangedEventArgs(std::nullptr_t) noexcept {}
        CompassReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ICompassReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Gyrometer : winrt::Windows::Devices::Sensors::IGyrometer,
        impl::require<Gyrometer, winrt::Windows::Devices::Sensors::IGyrometerDeviceId, winrt::Windows::Devices::Sensors::IGyrometer2, winrt::Windows::Devices::Sensors::IGyrometer3, winrt::Windows::Devices::Sensors::IGyrometer4>
    {
        Gyrometer(std::nullptr_t) noexcept {}
        Gyrometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IGyrometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) GyrometerDataThreshold : winrt::Windows::Devices::Sensors::IGyrometerDataThreshold
    {
        GyrometerDataThreshold(std::nullptr_t) noexcept {}
        GyrometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IGyrometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GyrometerReading : winrt::Windows::Devices::Sensors::IGyrometerReading,
        impl::require<GyrometerReading, winrt::Windows::Devices::Sensors::IGyrometerReading2>
    {
        GyrometerReading(std::nullptr_t) noexcept {}
        GyrometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IGyrometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) GyrometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs
    {
        GyrometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        GyrometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IGyrometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HingeAngleReading : winrt::Windows::Devices::Sensors::IHingeAngleReading
    {
        HingeAngleReading(std::nullptr_t) noexcept {}
        HingeAngleReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHingeAngleReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HingeAngleSensor : winrt::Windows::Devices::Sensors::IHingeAngleSensor
    {
        HingeAngleSensor(std::nullptr_t) noexcept {}
        HingeAngleSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHingeAngleSensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto GetDefaultAsync();
        static auto GetRelatedToAdjacentPanelsAsync(param::hstring const& firstPanelId, param::hstring const& secondPanelId);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) HingeAngleSensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs
    {
        HingeAngleSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        HingeAngleSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHingeAngleSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HumanPresenceFeatures : winrt::Windows::Devices::Sensors::IHumanPresenceFeatures,
        impl::require<HumanPresenceFeatures, winrt::Windows::Devices::Sensors::IHumanPresenceFeatures2>
    {
        HumanPresenceFeatures(std::nullptr_t) noexcept {}
        HumanPresenceFeatures(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceFeatures(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HumanPresenceSensor : winrt::Windows::Devices::Sensors::IHumanPresenceSensor,
        impl::require<HumanPresenceSensor, winrt::Windows::Devices::Sensors::IHumanPresenceSensor2>
    {
        HumanPresenceSensor(std::nullptr_t) noexcept {}
        HumanPresenceSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceSensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& sensorId);
        static auto GetDefaultAsync();
        static auto FromId(param::hstring const& sensorId);
        static auto GetDefault();
    };
    struct __declspec(empty_bases) HumanPresenceSensorReading : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReading,
        impl::require<HumanPresenceSensorReading, winrt::Windows::Devices::Sensors::IHumanPresenceSensorReading2>
    {
        HumanPresenceSensorReading(std::nullptr_t) noexcept {}
        HumanPresenceSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HumanPresenceSensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReadingChangedEventArgs
    {
        HumanPresenceSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        HumanPresenceSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HumanPresenceSensorReadingUpdate : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReadingUpdate
    {
        HumanPresenceSensorReadingUpdate(std::nullptr_t) noexcept {}
        HumanPresenceSensorReadingUpdate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceSensorReadingUpdate(ptr, take_ownership_from_abi) {}
        HumanPresenceSensorReadingUpdate();
    };
    struct __declspec(empty_bases) HumanPresenceSettings : winrt::Windows::Devices::Sensors::IHumanPresenceSettings,
        impl::require<HumanPresenceSettings, winrt::Windows::Devices::Sensors::IHumanPresenceSettings2>
    {
        HumanPresenceSettings(std::nullptr_t) noexcept {}
        HumanPresenceSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IHumanPresenceSettings(ptr, take_ownership_from_abi) {}
        static auto GetCurrentSettingsAsync();
        static auto GetCurrentSettings();
        static auto UpdateSettingsAsync(winrt::Windows::Devices::Sensors::HumanPresenceSettings const& settings);
        static auto UpdateSettings(winrt::Windows::Devices::Sensors::HumanPresenceSettings const& settings);
        static auto GetSupportedFeaturesForSensorIdAsync(param::hstring const& sensorId);
        static auto GetSupportedFeaturesForSensorId(param::hstring const& sensorId);
        static auto GetSupportedLockOnLeaveTimeouts();
        static auto SettingsChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using SettingsChanged_revoker = impl::factory_event_revoker<winrt::Windows::Devices::Sensors::IHumanPresenceSettingsStatics, &impl::abi_t<winrt::Windows::Devices::Sensors::IHumanPresenceSettingsStatics>::remove_SettingsChanged>;
        [[nodiscard]] static SettingsChanged_revoker SettingsChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto SettingsChanged(winrt::event_token const& token);
    };
    struct __declspec(empty_bases) Inclinometer : winrt::Windows::Devices::Sensors::IInclinometer,
        impl::require<Inclinometer, winrt::Windows::Devices::Sensors::IInclinometerDeviceId, winrt::Windows::Devices::Sensors::IInclinometer2, winrt::Windows::Devices::Sensors::IInclinometer3, winrt::Windows::Devices::Sensors::IInclinometer4>
    {
        Inclinometer(std::nullptr_t) noexcept {}
        Inclinometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IInclinometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefaultForRelativeReadings();
        static auto GetDefault(winrt::Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
        static auto GetDeviceSelector(winrt::Windows::Devices::Sensors::SensorReadingType const& readingType);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) InclinometerDataThreshold : winrt::Windows::Devices::Sensors::IInclinometerDataThreshold
    {
        InclinometerDataThreshold(std::nullptr_t) noexcept {}
        InclinometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IInclinometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InclinometerReading : winrt::Windows::Devices::Sensors::IInclinometerReading,
        impl::require<InclinometerReading, winrt::Windows::Devices::Sensors::IInclinometerReadingYawAccuracy, winrt::Windows::Devices::Sensors::IInclinometerReading2>
    {
        InclinometerReading(std::nullptr_t) noexcept {}
        InclinometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IInclinometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InclinometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs
    {
        InclinometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        InclinometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IInclinometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensor : winrt::Windows::Devices::Sensors::ILightSensor,
        impl::require<LightSensor, winrt::Windows::Devices::Sensors::ILightSensorDeviceId, winrt::Windows::Devices::Sensors::ILightSensor2, winrt::Windows::Devices::Sensors::ILightSensor3>
    {
        LightSensor(std::nullptr_t) noexcept {}
        LightSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ILightSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) LightSensorDataThreshold : winrt::Windows::Devices::Sensors::ILightSensorDataThreshold
    {
        LightSensorDataThreshold(std::nullptr_t) noexcept {}
        LightSensorDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ILightSensorDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensorReading : winrt::Windows::Devices::Sensors::ILightSensorReading,
        impl::require<LightSensorReading, winrt::Windows::Devices::Sensors::ILightSensorReading2>
    {
        LightSensorReading(std::nullptr_t) noexcept {}
        LightSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ILightSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LightSensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs
    {
        LightSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        LightSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ILightSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LockOnLeaveOptions : winrt::Windows::Devices::Sensors::ILockOnLeaveOptions
    {
        LockOnLeaveOptions(std::nullptr_t) noexcept {}
        LockOnLeaveOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ILockOnLeaveOptions(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Magnetometer : winrt::Windows::Devices::Sensors::IMagnetometer,
        impl::require<Magnetometer, winrt::Windows::Devices::Sensors::IMagnetometerDeviceId, winrt::Windows::Devices::Sensors::IMagnetometer2, winrt::Windows::Devices::Sensors::IMagnetometer3, winrt::Windows::Devices::Sensors::IMagnetometer4>
    {
        Magnetometer(std::nullptr_t) noexcept {}
        Magnetometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IMagnetometer(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) MagnetometerDataThreshold : winrt::Windows::Devices::Sensors::IMagnetometerDataThreshold
    {
        MagnetometerDataThreshold(std::nullptr_t) noexcept {}
        MagnetometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IMagnetometerDataThreshold(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MagnetometerReading : winrt::Windows::Devices::Sensors::IMagnetometerReading,
        impl::require<MagnetometerReading, winrt::Windows::Devices::Sensors::IMagnetometerReading2>
    {
        MagnetometerReading(std::nullptr_t) noexcept {}
        MagnetometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IMagnetometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MagnetometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs
    {
        MagnetometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        MagnetometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IMagnetometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OrientationSensor : winrt::Windows::Devices::Sensors::IOrientationSensor,
        impl::require<OrientationSensor, winrt::Windows::Devices::Sensors::IOrientationSensorDeviceId, winrt::Windows::Devices::Sensors::IOrientationSensor2, winrt::Windows::Devices::Sensors::IOrientationSensor3>
    {
        OrientationSensor(std::nullptr_t) noexcept {}
        OrientationSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IOrientationSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDefaultForRelativeReadings();
        static auto GetDefault(winrt::Windows::Devices::Sensors::SensorReadingType const& sensorReadingtype);
        static auto GetDefault(winrt::Windows::Devices::Sensors::SensorReadingType const& sensorReadingType, winrt::Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
        static auto GetDeviceSelector(winrt::Windows::Devices::Sensors::SensorReadingType const& readingType);
        static auto GetDeviceSelector(winrt::Windows::Devices::Sensors::SensorReadingType const& readingType, winrt::Windows::Devices::Sensors::SensorOptimizationGoal const& optimizationGoal);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) OrientationSensorReading : winrt::Windows::Devices::Sensors::IOrientationSensorReading,
        impl::require<OrientationSensorReading, winrt::Windows::Devices::Sensors::IOrientationSensorReadingYawAccuracy, winrt::Windows::Devices::Sensors::IOrientationSensorReading2>
    {
        OrientationSensorReading(std::nullptr_t) noexcept {}
        OrientationSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IOrientationSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) OrientationSensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs
    {
        OrientationSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        OrientationSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IOrientationSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Pedometer : winrt::Windows::Devices::Sensors::IPedometer,
        impl::require<Pedometer, winrt::Windows::Devices::Sensors::IPedometer2>
    {
        Pedometer(std::nullptr_t) noexcept {}
        Pedometer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IPedometer(ptr, take_ownership_from_abi) {}
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
        static auto GetDeviceSelector();
        static auto GetSystemHistoryAsync(winrt::Windows::Foundation::DateTime const& fromTime);
        static auto GetSystemHistoryAsync(winrt::Windows::Foundation::DateTime const& fromTime, winrt::Windows::Foundation::TimeSpan const& duration);
        static auto GetReadingsFromTriggerDetails(winrt::Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
    };
    struct __declspec(empty_bases) PedometerDataThreshold : winrt::Windows::Devices::Sensors::ISensorDataThreshold
    {
        PedometerDataThreshold(std::nullptr_t) noexcept {}
        PedometerDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISensorDataThreshold(ptr, take_ownership_from_abi) {}
        PedometerDataThreshold(winrt::Windows::Devices::Sensors::Pedometer const& sensor, int32_t stepGoal);
    };
    struct __declspec(empty_bases) PedometerReading : winrt::Windows::Devices::Sensors::IPedometerReading
    {
        PedometerReading(std::nullptr_t) noexcept {}
        PedometerReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IPedometerReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PedometerReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IPedometerReadingChangedEventArgs
    {
        PedometerReadingChangedEventArgs(std::nullptr_t) noexcept {}
        PedometerReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IPedometerReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensor : winrt::Windows::Devices::Sensors::IProximitySensor
    {
        ProximitySensor(std::nullptr_t) noexcept {}
        ProximitySensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IProximitySensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromId(param::hstring const& sensorId);
        static auto GetReadingsFromTriggerDetails(winrt::Windows::Devices::Sensors::SensorDataThresholdTriggerDetails const& triggerDetails);
    };
    struct __declspec(empty_bases) ProximitySensorDataThreshold : winrt::Windows::Devices::Sensors::ISensorDataThreshold
    {
        ProximitySensorDataThreshold(std::nullptr_t) noexcept {}
        ProximitySensorDataThreshold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISensorDataThreshold(ptr, take_ownership_from_abi) {}
        explicit ProximitySensorDataThreshold(winrt::Windows::Devices::Sensors::ProximitySensor const& sensor);
    };
    struct __declspec(empty_bases) ProximitySensorDisplayOnOffController : winrt::Windows::Foundation::IClosable
    {
        ProximitySensorDisplayOnOffController(std::nullptr_t) noexcept {}
        ProximitySensorDisplayOnOffController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IClosable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensorReading : winrt::Windows::Devices::Sensors::IProximitySensorReading
    {
        ProximitySensorReading(std::nullptr_t) noexcept {}
        ProximitySensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IProximitySensorReading(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProximitySensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs
    {
        ProximitySensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        ProximitySensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IProximitySensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorDataThresholdTriggerDetails : winrt::Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails
    {
        SensorDataThresholdTriggerDetails(std::nullptr_t) noexcept {}
        SensorDataThresholdTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISensorDataThresholdTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorQuaternion : winrt::Windows::Devices::Sensors::ISensorQuaternion
    {
        SensorQuaternion(std::nullptr_t) noexcept {}
        SensorQuaternion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISensorQuaternion(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SensorRotationMatrix : winrt::Windows::Devices::Sensors::ISensorRotationMatrix
    {
        SensorRotationMatrix(std::nullptr_t) noexcept {}
        SensorRotationMatrix(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISensorRotationMatrix(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SimpleOrientationSensor : winrt::Windows::Devices::Sensors::ISimpleOrientationSensor,
        impl::require<SimpleOrientationSensor, winrt::Windows::Devices::Sensors::ISimpleOrientationSensorDeviceId, winrt::Windows::Devices::Sensors::ISimpleOrientationSensor2>
    {
        SimpleOrientationSensor(std::nullptr_t) noexcept {}
        SimpleOrientationSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISimpleOrientationSensor(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) SimpleOrientationSensorOrientationChangedEventArgs : winrt::Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs
    {
        SimpleOrientationSensorOrientationChangedEventArgs(std::nullptr_t) noexcept {}
        SimpleOrientationSensorOrientationChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::ISimpleOrientationSensorOrientationChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WakeOnApproachOptions : winrt::Windows::Devices::Sensors::IWakeOnApproachOptions
    {
        WakeOnApproachOptions(std::nullptr_t) noexcept {}
        WakeOnApproachOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::IWakeOnApproachOptions(ptr, take_ownership_from_abi) {}
    };
}
#endif
