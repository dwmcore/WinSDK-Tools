// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Usb_H
#define WINRT_Windows_Devices_Usb_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Usb.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::MaxPacketSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_MaxPacketSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::EndpointNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_EndpointNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::Pipe() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_Pipe(&value));
        return winrt::Windows::Devices::Usb::UsbBulkInPipe{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::MaxTransferSizeBytes() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->get_MaxTransferSizeBytes(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::EndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->get_EndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ClearStallAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->ClearStallAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ReadOptions(winrt::Windows::Devices::Usb::UsbReadOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->put_ReadOptions(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ReadOptions() const
    {
        winrt::Windows::Devices::Usb::UsbReadOptions value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->get_ReadOptions(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::FlushBuffer() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->FlushBuffer());
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::InputStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkInPipe)->get_InputStream(&value));
        return winrt::Windows::Storage::Streams::IInputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::MaxPacketSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_MaxPacketSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::EndpointNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_EndpointNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::Pipe() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_Pipe(&value));
        return winrt::Windows::Devices::Usb::UsbBulkOutPipe{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::EndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutPipe)->get_EndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::ClearStallAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutPipe)->ClearStallAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutPipe)->put_WriteOptions(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::WriteOptions() const
    {
        winrt::Windows::Devices::Usb::UsbWriteOptions value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutPipe)->get_WriteOptions(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::OutputStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbBulkOutPipe)->get_OutputStream(&value));
        return winrt::Windows::Storage::Streams::IOutputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfiguration<D>::UsbInterfaces() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfiguration)->get_UsbInterfaces(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterface>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfiguration<D>::ConfigurationDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfiguration)->get_ConfigurationDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbConfigurationDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfiguration<D>::Descriptors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfiguration)->get_Descriptors(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::ConfigurationValue() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_ConfigurationValue(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::MaxPowerMilliamps() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_MaxPowerMilliamps(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::SelfPowered() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_SelfPowered(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::RemoteWakeup() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_RemoteWakeup(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbConfigurationDescriptor& parsed) const
    {
        bool success{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics)->TryParse(*(void**)(&descriptor), impl::bind_out(parsed), &success));
        return success;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const
    {
        void* parsed{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics)->Parse(*(void**)(&descriptor), &parsed));
        return winrt::Windows::Devices::Usb::UsbConfigurationDescriptor{ parsed, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Direction() const
    {
        winrt::Windows::Devices::Usb::UsbTransferDirection value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->get_Direction(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Direction(winrt::Windows::Devices::Usb::UsbTransferDirection const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->put_Direction(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::ControlTransferType() const
    {
        winrt::Windows::Devices::Usb::UsbControlTransferType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->get_ControlTransferType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::ControlTransferType(winrt::Windows::Devices::Usb::UsbControlTransferType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->put_ControlTransferType(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Recipient() const
    {
        winrt::Windows::Devices::Usb::UsbControlRecipient value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->get_Recipient(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Recipient(winrt::Windows::Devices::Usb::UsbControlRecipient const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->put_Recipient(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::AsByte() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->get_AsByte(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbControlRequestType<D>::AsByte(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbControlRequestType)->put_AsByte(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDescriptor<D>::Length() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDescriptor)->get_Length(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDescriptor<D>::DescriptorType() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDescriptor)->get_DescriptorType(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDescriptor<D>::ReadDescriptorBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDescriptor)->ReadDescriptorBuffer(*(void**)(&buffer)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlOutTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket, winrt::Windows::Storage::Streams::IBuffer const& buffer) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->SendControlOutTransferAsync(*(void**)(&setupPacket), *(void**)(&buffer), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<uint32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlOutTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->SendControlOutTransferAsyncNoBuffer(*(void**)(&setupPacket), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<uint32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlInTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket, winrt::Windows::Storage::Streams::IBuffer const& buffer) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->SendControlInTransferAsync(*(void**)(&setupPacket), *(void**)(&buffer), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlInTransferAsync(winrt::Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->SendControlInTransferAsyncNoBuffer(*(void**)(&setupPacket), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::DefaultInterface() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->get_DefaultInterface(&value));
        return winrt::Windows::Devices::Usb::UsbInterface{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::DeviceDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->get_DeviceDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDevice<D>::Configuration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDevice)->get_Configuration(&value));
        return winrt::Windows::Devices::Usb::UsbConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ClassCode() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->get_ClassCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ClassCode(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->put_ClassCode(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::SubclassCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->get_SubclassCode(&value));
        return winrt::Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::SubclassCode(winrt::Windows::Foundation::IReference<uint8_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->put_SubclassCode(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ProtocolCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->get_ProtocolCode(&value));
        return winrt::Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ProtocolCode(winrt::Windows::Foundation::IReference<uint8_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClass)->put_ProtocolCode(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::CdcControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_CdcControl(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Physical() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Physical(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::PersonalHealthcare() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_PersonalHealthcare(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::ActiveSync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_ActiveSync(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::PalmSync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_PalmSync(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::DeviceFirmwareUpdate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_DeviceFirmwareUpdate(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Irda() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Irda(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Measurement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Measurement(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::VendorSpecific() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_VendorSpecific(&value));
        return winrt::Windows::Devices::Usb::UsbDeviceClass{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::BcdUsb() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_BcdUsb(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::MaxPacketSize0() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_MaxPacketSize0(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::VendorId() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_VendorId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::ProductId() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_ProductId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::BcdDeviceRevision() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_BcdDeviceRevision(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::NumberOfConfigurations() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceDescriptor)->get_NumberOfConfigurations(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelector(vendorId, productId, impl::bind_in(winUsbInterfaceClass), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(winrt::guid const& winUsbInterfaceClass) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelectorGuidOnly(impl::bind_in(winUsbInterfaceClass), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelectorVidPidOnly(vendorId, productId, &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceClassSelector(winrt::Windows::Devices::Usb::UsbDeviceClass const& usbClass) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceClassSelector(*(void**)(&usbClass), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbDeviceStatics)->FromIdAsync(*(void**)(&deviceId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Usb::UsbDevice>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::EndpointNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_EndpointNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::Direction() const
    {
        winrt::Windows::Devices::Usb::UsbTransferDirection value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_Direction(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::EndpointType() const
    {
        winrt::Windows::Devices::Usb::UsbEndpointType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_EndpointType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsBulkInEndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsBulkInEndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsInterruptInEndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsInterruptInEndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsBulkOutEndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsBulkOutEndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsInterruptOutEndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsInterruptOutEndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbEndpointDescriptor& parsed) const
    {
        bool success{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics)->TryParse(*(void**)(&descriptor), impl::bind_out(parsed), &success));
        return success;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const
    {
        void* parsed{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics)->Parse(*(void**)(&descriptor), &parsed));
        return winrt::Windows::Devices::Usb::UsbEndpointDescriptor{ parsed, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::BulkInPipes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_BulkInPipes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInPipe>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::InterruptInPipes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_InterruptInPipes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInPipe>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::BulkOutPipes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_BulkOutPipes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutPipe>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::InterruptOutPipes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_InterruptOutPipes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::InterfaceSettings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_InterfaceSettings(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterfaceSetting>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::InterfaceNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_InterfaceNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterface<D>::Descriptors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterface)->get_Descriptors(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::ClassCode() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_ClassCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::SubclassCode() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_SubclassCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::ProtocolCode() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_ProtocolCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::AlternateSettingNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_AlternateSettingNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::InterfaceNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_InterfaceNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbInterfaceDescriptor& parsed) const
    {
        bool success{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics)->TryParse(*(void**)(&descriptor), impl::bind_out(parsed), &success));
        return success;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor) const
    {
        void* parsed{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics)->Parse(*(void**)(&descriptor), &parsed));
        return winrt::Windows::Devices::Usb::UsbInterfaceDescriptor{ parsed, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::BulkInEndpoints() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_BulkInEndpoints(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterruptInEndpoints() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterruptInEndpoints(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::BulkOutEndpoints() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_BulkOutEndpoints(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterruptOutEndpoints() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterruptOutEndpoints(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::Selected() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_Selected(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::SelectSettingAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->SelectSettingAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterfaceDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterfaceDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbInterfaceDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::Descriptors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterfaceSetting)->get_Descriptors(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::MaxPacketSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_MaxPacketSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::EndpointNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_EndpointNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::Interval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_Interval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::Pipe() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_Pipe(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptInPipe{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInEventArgs<D>::InterruptData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs)->get_InterruptData(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::EndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInPipe)->get_EndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::ClearStallAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInPipe)->ClearStallAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Usb::UsbInterruptInPipe, winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInPipe)->add_DataReceived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived_revoker consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Usb::UsbInterruptInPipe, winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, DataReceived_revoker>(this, DataReceived(handler));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptInPipe)->remove_DataReceived(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::MaxPacketSize() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_MaxPacketSize(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::EndpointNumber() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_EndpointNumber(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::Interval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_Interval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::Pipe() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_Pipe(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptOutPipe{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::EndpointDescriptor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutPipe)->get_EndpointDescriptor(&value));
        return winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::ClearStallAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutPipe)->ClearStallAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutPipe)->put_WriteOptions(static_cast<uint32_t>(value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::WriteOptions() const
    {
        winrt::Windows::Devices::Usb::UsbWriteOptions value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutPipe)->get_WriteOptions(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::OutputStream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbInterruptOutPipe)->get_OutputStream(&value));
        return winrt::Windows::Storage::Streams::IOutputStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::RequestType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->get_RequestType(&value));
        return winrt::Windows::Devices::Usb::UsbControlRequestType{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::RequestType(winrt::Windows::Devices::Usb::UsbControlRequestType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->put_RequestType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Request() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->get_Request(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Request(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->put_Request(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Value() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->get_Value(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Value(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->put_Value(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Index() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->get_Index(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Index(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->put_Index(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Length() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->get_Length(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Length(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacket)->put_Length(value));
    }
    template <typename D> auto consume_Windows_Devices_Usb_IUsbSetupPacketFactory<D>::CreateWithEightByteBuffer(winrt::Windows::Storage::Streams::IBuffer const& eightByteBuffer) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Usb::IUsbSetupPacketFactory)->CreateWithEightByteBuffer(*(void**)(&eightByteBuffer), &value));
        return winrt::Windows::Devices::Usb::UsbSetupPacket{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
    {
        int32_t __stdcall get_MaxPacketSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPacketSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EndpointNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pipe(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkInPipe>(this->shim().Pipe());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbBulkInPipe> : produce_base<D, winrt::Windows::Devices::Usb::IUsbBulkInPipe>
    {
        int32_t __stdcall get_MaxTransferSizeBytes(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxTransferSizeBytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>(this->shim().EndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearStallAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ClearStallAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReadOptions(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadOptions(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbReadOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReadOptions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbReadOptions>(this->shim().ReadOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FlushBuffer() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlushBuffer();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IInputStream>(this->shim().InputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
    {
        int32_t __stdcall get_MaxPacketSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPacketSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EndpointNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pipe(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkOutPipe>(this->shim().Pipe());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbBulkOutPipe> : produce_base<D, winrt::Windows::Devices::Usb::IUsbBulkOutPipe>
    {
        int32_t __stdcall get_EndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>(this->shim().EndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearStallAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ClearStallAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WriteOptions(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteOptions(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbWriteOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteOptions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbWriteOptions>(this->shim().WriteOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutputStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbConfiguration> : produce_base<D, winrt::Windows::Devices::Usb::IUsbConfiguration>
    {
        int32_t __stdcall get_UsbInterfaces(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterface>>(this->shim().UsbInterfaces());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConfigurationDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>(this->shim().ConfigurationDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>>(this->shim().Descriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor>
    {
        int32_t __stdcall get_ConfigurationValue(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ConfigurationValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPowerMilliamps(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPowerMilliamps());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelfPowered(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SelfPowered());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteWakeup(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RemoteWakeup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> : produce_base<D, winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
    {
        int32_t __stdcall TryParse(void* descriptor, void** parsed, bool* success) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *success = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor*>(parsed)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Parse(void* descriptor, void** parsed) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *parsed = detach_from<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor>(this->shim().Parse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbControlRequestType> : produce_base<D, winrt::Windows::Devices::Usb::IUsbControlRequestType>
    {
        int32_t __stdcall get_Direction(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbTransferDirection>(this->shim().Direction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Direction(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbTransferDirection const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ControlTransferType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbControlTransferType>(this->shim().ControlTransferType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ControlTransferType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlTransferType(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbControlTransferType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Recipient(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbControlRecipient>(this->shim().Recipient());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Recipient(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbControlRecipient const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AsByte(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().AsByte());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AsByte(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AsByte(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDescriptor>
    {
        int32_t __stdcall get_Length(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DescriptorType(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().DescriptorType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReadDescriptorBuffer(void* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadDescriptorBuffer(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&buffer));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDevice> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDevice>
    {
        int32_t __stdcall SendControlOutTransferAsync(void* setupPacket, void* buffer, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().SendControlOutTransferAsync(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket), *reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendControlOutTransferAsyncNoBuffer(void* setupPacket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().SendControlOutTransferAsync(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendControlInTransferAsync(void* setupPacket, void* buffer, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>>(this->shim().SendControlInTransferAsync(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket), *reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendControlInTransferAsyncNoBuffer(void* setupPacket, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IBuffer>>(this->shim().SendControlInTransferAsync(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultInterface(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterface>(this->shim().DefaultInterface());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceDescriptor>(this->shim().DeviceDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Configuration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbConfiguration>(this->shim().Configuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDeviceClass> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDeviceClass>
    {
        int32_t __stdcall get_ClassCode(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ClassCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ClassCode(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClassCode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubclassCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint8_t>>(this->shim().SubclassCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SubclassCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubclassCode(*reinterpret_cast<winrt::Windows::Foundation::IReference<uint8_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint8_t>>(this->shim().ProtocolCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtocolCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtocolCode(*reinterpret_cast<winrt::Windows::Foundation::IReference<uint8_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDeviceClasses> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDeviceClasses>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics>
    {
        int32_t __stdcall get_CdcControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().CdcControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Physical(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().Physical());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PersonalHealthcare(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().PersonalHealthcare());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActiveSync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().ActiveSync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PalmSync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().PalmSync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceFirmwareUpdate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().DeviceFirmwareUpdate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Irda(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().Irda());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Measurement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().Measurement());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VendorSpecific(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbDeviceClass>(this->shim().VendorSpecific());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDeviceDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDeviceDescriptor>
    {
        int32_t __stdcall get_BcdUsb(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BcdUsb());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPacketSize0(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().MaxPacketSize0());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VendorId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VendorId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProductId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ProductId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BcdDeviceRevision(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BcdDeviceRevision());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NumberOfConfigurations(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().NumberOfConfigurations());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbDeviceStatics> : produce_base<D, winrt::Windows::Devices::Usb::IUsbDeviceStatics>
    {
        int32_t __stdcall GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid winUsbInterfaceClass, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector(vendorId, productId, *reinterpret_cast<winrt::guid const*>(&winUsbInterfaceClass)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorGuidOnly(winrt::guid winUsbInterfaceClass, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<winrt::guid const*>(&winUsbInterfaceClass)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelectorVidPidOnly(uint32_t vendorId, uint32_t productId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector(vendorId, productId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceClassSelector(void* usbClass, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceClassSelector(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDeviceClass const*>(&usbClass)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Usb::UsbDevice>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbEndpointDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbEndpointDescriptor>
    {
        int32_t __stdcall get_EndpointNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EndpointNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Direction(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbTransferDirection>(this->shim().Direction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbEndpointType>(this->shim().EndpointType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AsBulkInEndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>(this->shim().AsBulkInEndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AsInterruptInEndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>(this->shim().AsInterruptInEndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AsBulkOutEndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>(this->shim().AsBulkOutEndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AsInterruptOutEndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>(this->shim().AsInterruptOutEndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics> : produce_base<D, winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
    {
        int32_t __stdcall TryParse(void* descriptor, void** parsed, bool* success) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *success = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<winrt::Windows::Devices::Usb::UsbEndpointDescriptor*>(parsed)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Parse(void* descriptor, void** parsed) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *parsed = detach_from<winrt::Windows::Devices::Usb::UsbEndpointDescriptor>(this->shim().Parse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterface> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterface>
    {
        int32_t __stdcall get_BulkInPipes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInPipe>>(this->shim().BulkInPipes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterruptInPipes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInPipe>>(this->shim().InterruptInPipes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BulkOutPipes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutPipe>>(this->shim().BulkOutPipes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterruptOutPipes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>>(this->shim().InterruptOutPipes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterfaceSettings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterfaceSetting>>(this->shim().InterfaceSettings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterfaceNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InterfaceNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>>(this->shim().Descriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor>
    {
        int32_t __stdcall get_ClassCode(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ClassCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SubclassCode(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SubclassCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtocolCode(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ProtocolCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlternateSettingNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().AlternateSettingNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterfaceNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().InterfaceNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
    {
        int32_t __stdcall TryParse(void* descriptor, void** parsed, bool* success) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *success = detach_from<bool>(this->shim().TryParse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor*>(parsed)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Parse(void* descriptor, void** parsed) noexcept final try
        {
            clear_abi(parsed);
            typename D::abi_guard guard(this->shim());
            *parsed = detach_from<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>(this->shim().Parse(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterfaceSetting> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterfaceSetting>
    {
        int32_t __stdcall get_BulkInEndpoints(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor>>(this->shim().BulkInEndpoints());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterruptInEndpoints(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>>(this->shim().InterruptInEndpoints());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BulkOutEndpoints(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>>(this->shim().BulkOutEndpoints());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterruptOutEndpoints(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>>(this->shim().InterruptOutEndpoints());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Selected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Selected());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectSettingAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SelectSettingAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InterfaceDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor>(this->shim().InterfaceDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Usb::UsbDescriptor>>(this->shim().Descriptors());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
    {
        int32_t __stdcall get_MaxPacketSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPacketSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EndpointNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Interval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Interval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pipe(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptInPipe>(this->shim().Pipe());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs>
    {
        int32_t __stdcall get_InterruptData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().InterruptData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterruptInPipe> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterruptInPipe>
    {
        int32_t __stdcall get_EndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>(this->shim().EndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearStallAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ClearStallAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_DataReceived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().DataReceived(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Usb::UsbInterruptInPipe, winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DataReceived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataReceived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
    {
        int32_t __stdcall get_MaxPacketSize(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPacketSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndpointNumber(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EndpointNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Interval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Interval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pipe(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptOutPipe>(this->shim().Pipe());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbInterruptOutPipe> : produce_base<D, winrt::Windows::Devices::Usb::IUsbInterruptOutPipe>
    {
        int32_t __stdcall get_EndpointDescriptor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>(this->shim().EndpointDescriptor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearStallAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().ClearStallAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WriteOptions(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteOptions(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbWriteOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteOptions(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbWriteOptions>(this->shim().WriteOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutputStream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbSetupPacket> : produce_base<D, winrt::Windows::Devices::Usb::IUsbSetupPacket>
    {
        int32_t __stdcall get_RequestType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbControlRequestType>(this->shim().RequestType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestType(*reinterpret_cast<winrt::Windows::Devices::Usb::UsbControlRequestType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Request(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Request(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Request(value);
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
        int32_t __stdcall put_Value(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Index(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Index());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Index(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Index(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Length(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Length());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Length(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Length(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Usb::IUsbSetupPacketFactory> : produce_base<D, winrt::Windows::Devices::Usb::IUsbSetupPacketFactory>
    {
        int32_t __stdcall CreateWithEightByteBuffer(void* eightByteBuffer, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Usb::UsbSetupPacket>(this->shim().CreateWithEightByteBuffer(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&eightByteBuffer)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Devices::Usb
{
    constexpr auto operator|(UsbReadOptions const left, UsbReadOptions const right) noexcept
    {
        return static_cast<UsbReadOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(UsbReadOptions& left, UsbReadOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(UsbReadOptions const left, UsbReadOptions const right) noexcept
    {
        return static_cast<UsbReadOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(UsbReadOptions& left, UsbReadOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(UsbReadOptions const value) noexcept
    {
        return static_cast<UsbReadOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(UsbReadOptions const left, UsbReadOptions const right) noexcept
    {
        return static_cast<UsbReadOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(UsbReadOptions& left, UsbReadOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(UsbWriteOptions const left, UsbWriteOptions const right) noexcept
    {
        return static_cast<UsbWriteOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(UsbWriteOptions& left, UsbWriteOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(UsbWriteOptions const left, UsbWriteOptions const right) noexcept
    {
        return static_cast<UsbWriteOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(UsbWriteOptions& left, UsbWriteOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(UsbWriteOptions const value) noexcept
    {
        return static_cast<UsbWriteOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(UsbWriteOptions const left, UsbWriteOptions const right) noexcept
    {
        return static_cast<UsbWriteOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(UsbWriteOptions& left, UsbWriteOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto UsbConfigurationDescriptor::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbConfigurationDescriptor& parsed)
    {
        return impl::call_factory<UsbConfigurationDescriptor, IUsbConfigurationDescriptorStatics>([&](IUsbConfigurationDescriptorStatics const& f) { return f.TryParse(descriptor, parsed); });
    }
    inline auto UsbConfigurationDescriptor::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor)
    {
        return impl::call_factory<UsbConfigurationDescriptor, IUsbConfigurationDescriptorStatics>([&](IUsbConfigurationDescriptorStatics const& f) { return f.Parse(descriptor); });
    }
    inline UsbControlRequestType::UsbControlRequestType() :
        UsbControlRequestType(impl::call_factory_cast<UsbControlRequestType(*)(winrt::Windows::Foundation::IActivationFactory const&), UsbControlRequestType>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UsbControlRequestType>(); }))
    {
    }
    inline auto UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass)
    {
        return impl::call_factory<UsbDevice, IUsbDeviceStatics>([&](IUsbDeviceStatics const& f) { return f.GetDeviceSelector(vendorId, productId, winUsbInterfaceClass); });
    }
    inline auto UsbDevice::GetDeviceSelector(winrt::guid const& winUsbInterfaceClass)
    {
        return impl::call_factory<UsbDevice, IUsbDeviceStatics>([&](IUsbDeviceStatics const& f) { return f.GetDeviceSelector(winUsbInterfaceClass); });
    }
    inline auto UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId)
    {
        return impl::call_factory<UsbDevice, IUsbDeviceStatics>([&](IUsbDeviceStatics const& f) { return f.GetDeviceSelector(vendorId, productId); });
    }
    inline auto UsbDevice::GetDeviceClassSelector(winrt::Windows::Devices::Usb::UsbDeviceClass const& usbClass)
    {
        return impl::call_factory<UsbDevice, IUsbDeviceStatics>([&](IUsbDeviceStatics const& f) { return f.GetDeviceClassSelector(usbClass); });
    }
    inline auto UsbDevice::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<UsbDevice, IUsbDeviceStatics>([&](IUsbDeviceStatics const& f) { return f.FromIdAsync(deviceId); });
    }
    inline UsbDeviceClass::UsbDeviceClass() :
        UsbDeviceClass(impl::call_factory_cast<UsbDeviceClass(*)(winrt::Windows::Foundation::IActivationFactory const&), UsbDeviceClass>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UsbDeviceClass>(); }))
    {
    }
    inline auto UsbDeviceClasses::CdcControl()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.CdcControl(); });
    }
    inline auto UsbDeviceClasses::Physical()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.Physical(); });
    }
    inline auto UsbDeviceClasses::PersonalHealthcare()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.PersonalHealthcare(); });
    }
    inline auto UsbDeviceClasses::ActiveSync()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.ActiveSync(); });
    }
    inline auto UsbDeviceClasses::PalmSync()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.PalmSync(); });
    }
    inline auto UsbDeviceClasses::DeviceFirmwareUpdate()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.DeviceFirmwareUpdate(); });
    }
    inline auto UsbDeviceClasses::Irda()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.Irda(); });
    }
    inline auto UsbDeviceClasses::Measurement()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.Measurement(); });
    }
    inline auto UsbDeviceClasses::VendorSpecific()
    {
        return impl::call_factory_cast<winrt::Windows::Devices::Usb::UsbDeviceClass(*)(IUsbDeviceClassesStatics const&), UsbDeviceClasses, IUsbDeviceClassesStatics>([](IUsbDeviceClassesStatics const& f) { return f.VendorSpecific(); });
    }
    inline auto UsbEndpointDescriptor::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbEndpointDescriptor& parsed)
    {
        return impl::call_factory<UsbEndpointDescriptor, IUsbEndpointDescriptorStatics>([&](IUsbEndpointDescriptorStatics const& f) { return f.TryParse(descriptor, parsed); });
    }
    inline auto UsbEndpointDescriptor::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor)
    {
        return impl::call_factory<UsbEndpointDescriptor, IUsbEndpointDescriptorStatics>([&](IUsbEndpointDescriptorStatics const& f) { return f.Parse(descriptor); });
    }
    inline auto UsbInterfaceDescriptor::TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbInterfaceDescriptor& parsed)
    {
        return impl::call_factory<UsbInterfaceDescriptor, IUsbInterfaceDescriptorStatics>([&](IUsbInterfaceDescriptorStatics const& f) { return f.TryParse(descriptor, parsed); });
    }
    inline auto UsbInterfaceDescriptor::Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor)
    {
        return impl::call_factory<UsbInterfaceDescriptor, IUsbInterfaceDescriptorStatics>([&](IUsbInterfaceDescriptorStatics const& f) { return f.Parse(descriptor); });
    }
    inline UsbSetupPacket::UsbSetupPacket() :
        UsbSetupPacket(impl::call_factory_cast<UsbSetupPacket(*)(winrt::Windows::Foundation::IActivationFactory const&), UsbSetupPacket>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UsbSetupPacket>(); }))
    {
    }
    inline UsbSetupPacket::UsbSetupPacket(winrt::Windows::Storage::Streams::IBuffer const& eightByteBuffer) :
        UsbSetupPacket(impl::call_factory<UsbSetupPacket, IUsbSetupPacketFactory>([&](IUsbSetupPacketFactory const& f) { return f.CreateWithEightByteBuffer(eightByteBuffer); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkInPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkOutPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbControlRequestType> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClass> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClasses> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterface> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceSetting> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbSetupPacket> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkInPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkOutPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbControlRequestType> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceClass> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceClasses> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterface> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterfaceSetting> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptOutPipe> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Usb::UsbSetupPacket> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
