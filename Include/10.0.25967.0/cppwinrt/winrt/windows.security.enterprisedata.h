// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Security_EnterpriseData_H
#define WINRT_Windows_Security_EnterpriseData_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.EnterpriseData.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>::Buffer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult)->get_Buffer(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult<D>::ProtectionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult)->get_ProtectionInfo(&value));
        return winrt::Windows::Security::EnterpriseData::DataProtectionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>::Status() const
    {
        winrt::Windows::Security::EnterpriseData::DataProtectionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionInfo)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionInfo<D>::Identity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionInfo)->get_Identity(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::ProtectAsync(winrt::Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->ProtectAsync(*(void**)(&data), *(void**)(&identity), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::UnprotectAsync(winrt::Windows::Storage::Streams::IBuffer const& data) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->UnprotectAsync(*(void**)(&data), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::ProtectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, winrt::Windows::Storage::Streams::IOutputStream const& protectedStream) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->ProtectStreamAsync(*(void**)(&unprotectedStream), *(void**)(&identity), *(void**)(&protectedStream), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::UnprotectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream, winrt::Windows::Storage::Streams::IOutputStream const& unprotectedStream) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->UnprotectStreamAsync(*(void**)(&protectedStream), *(void**)(&unprotectedStream), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::GetProtectionInfoAsync(winrt::Windows::Storage::Streams::IBuffer const& protectedData) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->GetProtectionInfoAsync(*(void**)(&protectedData), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IDataProtectionManagerStatics<D>::GetStreamProtectionInfoAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics)->GetStreamProtectionInfoAsync(*(void**)(&protectedStream), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::Status() const
    {
        winrt::Windows::Security::EnterpriseData::FileProtectionStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionInfo)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::IsRoamable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionInfo)->get_IsRoamable(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionInfo<D>::Identity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionInfo)->get_Identity(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionInfo2<D>::IsProtectWhileOpenSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionInfo2)->get_IsProtectWhileOpenSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::ProtectAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->ProtectAsync(*(void**)(&target), *(void**)(&identity), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& source, winrt::Windows::Storage::IStorageItem const& target) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->CopyProtectionAsync(*(void**)(&source), *(void**)(&target), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::GetProtectionInfoAsync(winrt::Windows::Storage::IStorageItem const& source) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->GetProtectionInfoAsync(*(void**)(&source), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->SaveFileAsContainerAsync(*(void**)(&protectedFile), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->LoadFileFromContainerAsync(*(void**)(&containerFile), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->LoadFileFromContainerWithTargetAsync(*(void**)(&containerFile), *(void**)(&target), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics<D>::CreateProtectedAndOpenAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, winrt::Windows::Storage::CreationCollisionOption const& collisionOption) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics)->CreateProtectedAndOpenAsync(*(void**)(&parentFolder), *(void**)(&desiredName), *(void**)(&identity), static_cast<int32_t>(collisionOption), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::IsContainerAsync(winrt::Windows::Storage::IStorageFile const& file) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->IsContainerAsync(*(void**)(&file), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Storage::NameCollisionOption const& collisionOption) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(*(void**)(&containerFile), *(void**)(&target), static_cast<int32_t>(collisionOption), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2<D>::SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2)->SaveFileAsContainerWithSharingAsync(*(void**)(&protectedFile), *(void**)(&sharedWithIdentities), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>::UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3)->UnprotectAsync(*(void**)(&target), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3<D>::UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Security::EnterpriseData::FileUnprotectOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3)->UnprotectWithOptionsAsync(*(void**)(&target), *(void**)(&options), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::ProtectAsync(winrt::Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->ProtectAsync(*(void**)(&storageItem), *(void**)(&enterpriseIdentity), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& sourceStorageItem, winrt::Windows::Storage::IStorageItem const& targetStorageItem) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->CopyProtectionAsync(*(void**)(&sourceStorageItem), *(void**)(&targetStorageItem), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::Revoke(param::hstring const& enterpriseIdentity) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->Revoke(*(void**)(&enterpriseIdentity)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileRevocationManagerStatics<D>::GetStatusAsync(winrt::Windows::Storage::IStorageItem const& storageItem) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics)->GetStatusAsync(*(void**)(&storageItem), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>::Audit(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions)->put_Audit(value));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileUnprotectOptions<D>::Audit() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions)->get_Audit(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory<D>::Create(bool audit) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory)->Create(audit, &result));
        return winrt::Windows::Security::EnterpriseData::FileUnprotectOptions{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs<D>::Identities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs)->get_Identities(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::Identities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->get_Identities(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::Deadline() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->get_Deadline(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs)->GetDeferral(&result));
        return winrt::Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>::Status() const
    {
        winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedContainerExportResult<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult)->get_File(&value));
        return winrt::Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>::Status() const
    {
        winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedContainerImportResult<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult)->get_File(&value));
        return winrt::Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs<D>::Identities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs)->get_Identities(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_File(&value));
        return winrt::Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::Stream() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_Stream(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStream{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectedFileCreateResult<D>::ProtectionInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult)->get_ProtectionInfo(&value));
        return winrt::Windows::Security::EnterpriseData::FileProtectionInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::Action(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_Action(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::Action() const
    {
        winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_Action(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::DataDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_DataDescription(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::DataDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_DataDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::SourceDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_SourceDescription(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::SourceDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_SourceDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::TargetDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->put_TargetDescription(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo<D>::TargetDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo)->get_TargetDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>::Create(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory)->Create(static_cast<int32_t>(action), *(void**)(&dataDescription), *(void**)(&sourceDescription), *(void**)(&targetDescription), &result));
        return winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory<D>::CreateWithActionAndDataDescription(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory)->CreateWithActionAndDataDescription(static_cast<int32_t>(action), *(void**)(&dataDescription), &result));
        return winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>::Identity(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager)->put_Identity(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManager<D>::Identity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager)->get_Identity(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2)->put_ShowEnterpriseIndicator(value));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2)->get_ShowEnterpriseIndicator(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::IsIdentityManaged(param::hstring const& identity) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->IsIdentityManaged(*(void**)(&identity), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::TryApplyProcessUIPolicy(param::hstring const& identity) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->TryApplyProcessUIPolicy(*(void**)(&identity), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ClearProcessUIPolicy() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->ClearProcessUIPolicy());
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::CreateCurrentThreadNetworkContext(param::hstring const& identity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->CreateCurrentThreadNetworkContext(*(void**)(&identity), &result));
        return winrt::Windows::Security::EnterpriseData::ThreadNetworkContext{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::GetPrimaryManagedIdentityForNetworkEndpointAsync(winrt::Windows::Networking::HostName const& endpointHost) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->GetPrimaryManagedIdentityForNetworkEndpointAsync(*(void**)(&endpointHost), &result));
        return winrt::Windows::Foundation::IAsyncOperation<hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::RevokeContent(param::hstring const& identity) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->RevokeContent(*(void**)(&identity)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::GetForCurrentView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->GetForCurrentView(&result));
        return winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedAccessSuspending(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending_revoker consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ProtectedAccessSuspending_revoker>(this, ProtectedAccessSuspending(handler));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedAccessSuspending(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedAccessResumed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed_revoker consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ProtectedAccessResumed_revoker>(this, ProtectedAccessResumed(handler));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedAccessResumed(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->add_ProtectedContentRevoked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked_revoker consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ProtectedContentRevoked_revoker>(this, ProtectedContentRevoked(handler));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->remove_ProtectedContentRevoked(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const
    {
        winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->CheckAccess(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics)->RequestAccessAsync(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::HasContentBeenRevokedSince(param::hstring const& identity, winrt::Windows::Foundation::DateTime const& since) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->HasContentBeenRevokedSince(*(void**)(&identity), impl::bind_in(since), &result));
        return result;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const
    {
        winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->CheckAccessForApp(*(void**)(&sourceIdentity), *(void**)(&appPackageFamilyName), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->RequestAccessForAppAsync(*(void**)(&sourceIdentity), *(void**)(&appPackageFamilyName), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::GetEnforcementLevel(param::hstring const& identity) const
    {
        winrt::Windows::Security::EnterpriseData::EnforcementLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->GetEnforcementLevel(*(void**)(&identity), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsUserDecryptionAllowed(param::hstring const& identity) const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->IsUserDecryptionAllowed(*(void**)(&identity), &value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsProtectionUnderLockRequired(param::hstring const& identity) const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->IsProtectionUnderLockRequired(*(void**)(&identity), &value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->add_PolicyChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged_revoker consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, PolicyChanged_revoker>(this, PolicyChanged(handler));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::PolicyChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->remove_PolicyChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2<D>::IsProtectionEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2)->get_IsProtectionEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessWithAuditingInfoAsync(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), *(void**)(&auditInfo), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessWithMessageAsync(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), *(void**)(&auditInfo), *(void**)(&messageFromApp), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessForAppWithAuditingInfoAsync(*(void**)(&sourceIdentity), *(void**)(&appPackageFamilyName), *(void**)(&auditInfo), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->RequestAccessForAppWithMessageAsync(*(void**)(&sourceIdentity), *(void**)(&appPackageFamilyName), *(void**)(&auditInfo), *(void**)(&messageFromApp), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3<D>::LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3)->LogAuditEvent(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), *(void**)(&auditInfo)));
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsRoamableProtectionEnabled(param::hstring const& identity) const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsRoamableProtectionEnabled(*(void**)(&identity), &value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessWithBehaviorAsync(*(void**)(&sourceIdentity), *(void**)(&targetIdentity), *(void**)(&auditInfo), *(void**)(&messageFromApp), static_cast<int32_t>(behavior), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessForAppWithBehaviorAsync(*(void**)(&sourceIdentity), *(void**)(&appPackageFamilyName), *(void**)(&auditInfo), *(void**)(&messageFromApp), static_cast<int32_t>(behavior), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForAppAsync(*(void**)(&sourceItemList), *(void**)(&appPackageFamilyName), *(void**)(&auditInfo), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForAppWithMessageAndBehaviorAsync(*(void**)(&sourceItemList), *(void**)(&appPackageFamilyName), *(void**)(&auditInfo), *(void**)(&messageFromApp), static_cast<int32_t>(behavior), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForProcessAsync(*(void**)(&sourceItemList), processId, *(void**)(&auditInfo), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(*(void**)(&sourceItemList), processId, *(void**)(&auditInfo), *(void**)(&messageFromApp), static_cast<int32_t>(behavior), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsFileProtectionRequiredAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsFileProtectionRequiredAsync(*(void**)(&target), *(void**)(&identity), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::IsFileProtectionRequiredForNewFileAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->IsFileProtectionRequiredForNewFileAsync(*(void**)(&parentFolder), *(void**)(&identity), *(void**)(&desiredName), &result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::PrimaryManagedIdentity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->get_PrimaryManagedIdentity(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4<D>::GetPrimaryManagedIdentityForIdentity(param::hstring const& identity) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4)->GetPrimaryManagedIdentityForIdentity(*(void**)(&identity), &value));
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> : produce_base<D, winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
    {
        int32_t __stdcall get_Buffer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().Buffer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>(this->shim().ProtectionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IDataProtectionInfo> : produce_base<D, winrt::Windows::Security::EnterpriseData::IDataProtectionInfo>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::DataProtectionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Identity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Identity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics> : produce_base<D, winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
    {
        int32_t __stdcall ProtectAsync(void* data, void* identity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>>(this->shim().ProtectAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprotectAsync(void* data, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult>>(this->shim().UnprotectAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ProtectStreamAsync(void* unprotectedStream, void* identity, void* protectedStream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>>(this->shim().ProtectStreamAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&unprotectedStream), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<winrt::Windows::Storage::Streams::IOutputStream const*>(&protectedStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprotectStreamAsync(void* protectedStream, void* unprotectedStream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>>(this->shim().UnprotectStreamAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&protectedStream), *reinterpret_cast<winrt::Windows::Storage::Streams::IOutputStream const*>(&unprotectedStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProtectionInfoAsync(void* protectedData, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>>(this->shim().GetProtectionInfoAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IBuffer const*>(&protectedData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStreamProtectionInfoAsync(void* protectedStream, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::DataProtectionInfo>>(this->shim().GetStreamProtectionInfoAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&protectedStream)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileProtectionInfo> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileProtectionInfo>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRoamable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRoamable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Identity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Identity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileProtectionInfo2> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        int32_t __stdcall get_IsProtectWhileOpenSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsProtectWhileOpenSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
    {
        int32_t __stdcall ProtectAsync(void* target, void* identity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>>(this->shim().ProtectAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyProtectionAsync(void* source, void* target, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().CopyProtectionAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&source), *reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProtectionInfoAsync(void* source, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>>(this->shim().GetProtectionInfoAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&source)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveFileAsContainerAsync(void* protectedFile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>>(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&protectedFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFileFromContainerAsync(void* containerFile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>>(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&containerFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFileFromContainerWithTargetAsync(void* containerFile, void* target, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>>(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&containerFile), *reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateProtectedAndOpenAsync(void* parentFolder, void* desiredName, void* identity, int32_t collisionOption, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult>>(this->shim().CreateProtectedAndOpenAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFolder const*>(&parentFolder), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<winrt::Windows::Storage::CreationCollisionOption const*>(&collisionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
    {
        int32_t __stdcall IsContainerAsync(void* file, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&file)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(void* containerFile, void* target, int32_t collisionOption, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult>>(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&containerFile), *reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<winrt::Windows::Storage::NameCollisionOption const*>(&collisionOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveFileAsContainerWithSharingAsync(void* protectedFile, void* sharedWithIdentities, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult>>(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&protectedFile), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&sharedWithIdentities)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3>
    {
        int32_t __stdcall UnprotectAsync(void* target, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>>(this->shim().UnprotectAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnprotectWithOptionsAsync(void* target, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>>(this->shim().UnprotectAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
    {
        int32_t __stdcall ProtectAsync(void* storageItem, void* enterpriseIdentity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>>(this->shim().ProtectAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&storageItem), *reinterpret_cast<hstring const*>(&enterpriseIdentity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CopyProtectionAsync(void* sourceStorageItem, void* targetStorageItem, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().CopyProtectionAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&sourceStorageItem), *reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&targetStorageItem)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Revoke(void* enterpriseIdentity) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Revoke(*reinterpret_cast<hstring const*>(&enterpriseIdentity));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStatusAsync(void* storageItem, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>>(this->shim().GetStatusAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&storageItem)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions>
    {
        int32_t __stdcall put_Audit(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Audit(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Audit(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Audit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> : produce_base<D, winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory>
    {
        int32_t __stdcall Create(bool audit, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions>(this->shim().Create(audit));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
    {
        int32_t __stdcall get_Identities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Identities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
    {
        int32_t __stdcall get_Identities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Identities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().Deadline());
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
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::ProtectedImportExportStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
    {
        int32_t __stdcall get_Identities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Identities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult>
    {
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Stream(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStream>(this->shim().Stream());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectionInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::FileProtectionInfo>(this->shim().ProtectionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
    {
        int32_t __stdcall put_Action(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Action(*reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Action(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction>(this->shim().Action());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DataDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DataDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DataDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SourceDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourceDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TargetDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
    {
        int32_t __stdcall Create(int32_t action, void* dataDescription, void* sourceDescription, void* targetDescription, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>(this->shim().Create(*reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&action), *reinterpret_cast<hstring const*>(&dataDescription), *reinterpret_cast<hstring const*>(&sourceDescription), *reinterpret_cast<hstring const*>(&targetDescription)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithActionAndDataDescription(int32_t action, void* dataDescription, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo>(this->shim().CreateWithActionAndDataDescription(*reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const*>(&action), *reinterpret_cast<hstring const*>(&dataDescription)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager>
    {
        int32_t __stdcall put_Identity(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Identity(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Identity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Identity());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        int32_t __stdcall put_ShowEnterpriseIndicator(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowEnterpriseIndicator(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShowEnterpriseIndicator(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowEnterpriseIndicator());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
    {
        int32_t __stdcall IsIdentityManaged(void* identity, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsIdentityManaged(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryApplyProcessUIPolicy(void* identity, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryApplyProcessUIPolicy(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearProcessUIPolicy() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearProcessUIPolicy();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateCurrentThreadNetworkContext(void* identity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext>(this->shim().CreateCurrentThreadNetworkContext(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPrimaryManagedIdentityForNetworkEndpointAsync(void* endpointHost, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetPrimaryManagedIdentityForNetworkEndpointAsync(*reinterpret_cast<winrt::Windows::Networking::HostName const*>(&endpointHost)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RevokeContent(void* identity) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevokeContent(*reinterpret_cast<hstring const*>(&identity));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForCurrentView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ProtectedAccessSuspending(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ProtectedAccessSuspending(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ProtectedAccessSuspending(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedAccessSuspending(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ProtectedAccessResumed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ProtectedAccessResumed(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ProtectedAccessResumed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedAccessResumed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ProtectedContentRevoked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ProtectedContentRevoked(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ProtectedContentRevoked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedContentRevoked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall CheckAccess(void* sourceIdentity, void* targetIdentity, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>(this->shim().CheckAccess(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void* sourceIdentity, void* targetIdentity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
    {
        int32_t __stdcall HasContentBeenRevokedSince(void* identity, int64_t since, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().HasContentBeenRevokedSince(*reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&since)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CheckAccessForApp(void* sourceIdentity, void* appPackageFamilyName, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>(this->shim().CheckAccessForApp(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessForAppAsync(void* sourceIdentity, void* appPackageFamilyName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetEnforcementLevel(void* identity, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::EnterpriseData::EnforcementLevel>(this->shim().GetEnforcementLevel(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsUserDecryptionAllowed(void* identity, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUserDecryptionAllowed(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsProtectionUnderLockRequired(void* identity, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsProtectionUnderLockRequired(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PolicyChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PolicyChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PolicyChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PolicyChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_IsProtectionEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsProtectionEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
    {
        int32_t __stdcall RequestAccessWithAuditingInfoAsync(void* sourceIdentity, void* targetIdentity, void* auditInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessWithMessageAsync(void* sourceIdentity, void* targetIdentity, void* auditInfo, void* messageFromApp, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessForAppWithAuditingInfoAsync(void* sourceIdentity, void* appPackageFamilyName, void* auditInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessForAppWithMessageAsync(void* sourceIdentity, void* appPackageFamilyName, void* auditInfo, void* messageFromApp, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LogAuditEvent(void* sourceIdentity, void* targetIdentity, void* auditInfo) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogAuditEvent(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> : produce_base<D, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4>
    {
        int32_t __stdcall IsRoamableProtectionEnabled(void* identity, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRoamableProtectionEnabled(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessWithBehaviorAsync(void* sourceIdentity, void* targetIdentity, void* auditInfo, void* messageFromApp, int32_t behavior, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&targetIdentity), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessForAppWithBehaviorAsync(void* sourceIdentity, void* appPackageFamilyName, void* auditInfo, void* messageFromApp, int32_t behavior, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessForAppAsync(*reinterpret_cast<hstring const*>(&sourceIdentity), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessToFilesForAppAsync(void* sourceItemList, void* appPackageFamilyName, void* auditInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessToFilesForAppAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Storage::IStorageItem> const*>(&sourceItemList), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessToFilesForAppWithMessageAndBehaviorAsync(void* sourceItemList, void* appPackageFamilyName, void* auditInfo, void* messageFromApp, int32_t behavior, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessToFilesForAppAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Storage::IStorageItem> const*>(&sourceItemList), *reinterpret_cast<hstring const*>(&appPackageFamilyName), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessToFilesForProcessAsync(void* sourceItemList, uint32_t processId, void* auditInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessToFilesForProcessAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Storage::IStorageItem> const*>(&sourceItemList), processId, *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(void* sourceItemList, uint32_t processId, void* auditInfo, void* messageFromApp, int32_t behavior, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessToFilesForProcessAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Storage::IStorageItem> const*>(&sourceItemList), processId, *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const*>(&auditInfo), *reinterpret_cast<hstring const*>(&messageFromApp), *reinterpret_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const*>(&behavior)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsFileProtectionRequiredAsync(void* target, void* identity, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsFileProtectionRequiredAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageItem const*>(&target), *reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsFileProtectionRequiredForNewFileAsync(void* parentFolder, void* identity, void* desiredName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsFileProtectionRequiredForNewFileAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFolder const*>(&parentFolder), *reinterpret_cast<hstring const*>(&identity), *reinterpret_cast<hstring const*>(&desiredName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrimaryManagedIdentity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrimaryManagedIdentity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPrimaryManagedIdentityForIdentity(void* identity, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetPrimaryManagedIdentityForIdentity(*reinterpret_cast<hstring const*>(&identity)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::EnterpriseData::IThreadNetworkContext> : produce_base<D, winrt::Windows::Security::EnterpriseData::IThreadNetworkContext>
    {
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData
{
    inline auto DataProtectionManager::ProtectAsync(winrt::Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.ProtectAsync(data, identity); });
    }
    inline auto DataProtectionManager::UnprotectAsync(winrt::Windows::Storage::Streams::IBuffer const& data)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.UnprotectAsync(data); });
    }
    inline auto DataProtectionManager::ProtectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, winrt::Windows::Storage::Streams::IOutputStream const& protectedStream)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.ProtectStreamAsync(unprotectedStream, identity, protectedStream); });
    }
    inline auto DataProtectionManager::UnprotectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream, winrt::Windows::Storage::Streams::IOutputStream const& unprotectedStream)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.UnprotectStreamAsync(protectedStream, unprotectedStream); });
    }
    inline auto DataProtectionManager::GetProtectionInfoAsync(winrt::Windows::Storage::Streams::IBuffer const& protectedData)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.GetProtectionInfoAsync(protectedData); });
    }
    inline auto DataProtectionManager::GetStreamProtectionInfoAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream)
    {
        return impl::call_factory<DataProtectionManager, IDataProtectionManagerStatics>([&](IDataProtectionManagerStatics const& f) { return f.GetStreamProtectionInfoAsync(protectedStream); });
    }
    inline auto FileProtectionManager::ProtectAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.ProtectAsync(target, identity); });
    }
    inline auto FileProtectionManager::CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& source, winrt::Windows::Storage::IStorageItem const& target)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.CopyProtectionAsync(source, target); });
    }
    inline auto FileProtectionManager::GetProtectionInfoAsync(winrt::Windows::Storage::IStorageItem const& source)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.GetProtectionInfoAsync(source); });
    }
    inline auto FileProtectionManager::SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.SaveFileAsContainerAsync(protectedFile); });
    }
    inline auto FileProtectionManager::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.LoadFileFromContainerAsync(containerFile); });
    }
    inline auto FileProtectionManager::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.LoadFileFromContainerAsync(containerFile, target); });
    }
    inline auto FileProtectionManager::CreateProtectedAndOpenAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, winrt::Windows::Storage::CreationCollisionOption const& collisionOption)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics>([&](IFileProtectionManagerStatics const& f) { return f.CreateProtectedAndOpenAsync(parentFolder, desiredName, identity, collisionOption); });
    }
    inline auto FileProtectionManager::IsContainerAsync(winrt::Windows::Storage::IStorageFile const& file)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics2>([&](IFileProtectionManagerStatics2 const& f) { return f.IsContainerAsync(file); });
    }
    inline auto FileProtectionManager::LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Storage::NameCollisionOption const& collisionOption)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics2>([&](IFileProtectionManagerStatics2 const& f) { return f.LoadFileFromContainerAsync(containerFile, target, collisionOption); });
    }
    inline auto FileProtectionManager::SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics2>([&](IFileProtectionManagerStatics2 const& f) { return f.SaveFileAsContainerAsync(protectedFile, sharedWithIdentities); });
    }
    inline auto FileProtectionManager::UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics3>([&](IFileProtectionManagerStatics3 const& f) { return f.UnprotectAsync(target); });
    }
    inline auto FileProtectionManager::UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Security::EnterpriseData::FileUnprotectOptions const& options)
    {
        return impl::call_factory<FileProtectionManager, IFileProtectionManagerStatics3>([&](IFileProtectionManagerStatics3 const& f) { return f.UnprotectAsync(target, options); });
    }
    inline auto FileRevocationManager::ProtectAsync(winrt::Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity)
    {
        return impl::call_factory<FileRevocationManager, IFileRevocationManagerStatics>([&](IFileRevocationManagerStatics const& f) { return f.ProtectAsync(storageItem, enterpriseIdentity); });
    }
    inline auto FileRevocationManager::CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& sourceStorageItem, winrt::Windows::Storage::IStorageItem const& targetStorageItem)
    {
        return impl::call_factory<FileRevocationManager, IFileRevocationManagerStatics>([&](IFileRevocationManagerStatics const& f) { return f.CopyProtectionAsync(sourceStorageItem, targetStorageItem); });
    }
    inline auto FileRevocationManager::Revoke(param::hstring const& enterpriseIdentity)
    {
        impl::call_factory<FileRevocationManager, IFileRevocationManagerStatics>([&](IFileRevocationManagerStatics const& f) { return f.Revoke(enterpriseIdentity); });
    }
    inline auto FileRevocationManager::GetStatusAsync(winrt::Windows::Storage::IStorageItem const& storageItem)
    {
        return impl::call_factory<FileRevocationManager, IFileRevocationManagerStatics>([&](IFileRevocationManagerStatics const& f) { return f.GetStatusAsync(storageItem); });
    }
    inline FileUnprotectOptions::FileUnprotectOptions(bool audit) :
        FileUnprotectOptions(impl::call_factory<FileUnprotectOptions, IFileUnprotectOptionsFactory>([&](IFileUnprotectOptionsFactory const& f) { return f.Create(audit); }))
    {
    }
    inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription) :
        ProtectionPolicyAuditInfo(impl::call_factory<ProtectionPolicyAuditInfo, IProtectionPolicyAuditInfoFactory>([&](IProtectionPolicyAuditInfoFactory const& f) { return f.Create(action, dataDescription, sourceDescription, targetDescription); }))
    {
    }
    inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription) :
        ProtectionPolicyAuditInfo(impl::call_factory<ProtectionPolicyAuditInfo, IProtectionPolicyAuditInfoFactory>([&](IProtectionPolicyAuditInfoFactory const& f) { return f.CreateWithActionAndDataDescription(action, dataDescription); }))
    {
    }
    inline auto ProtectionPolicyManager::IsIdentityManaged(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.IsIdentityManaged(identity); });
    }
    inline auto ProtectionPolicyManager::TryApplyProcessUIPolicy(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.TryApplyProcessUIPolicy(identity); });
    }
    inline auto ProtectionPolicyManager::ClearProcessUIPolicy()
    {
        impl::call_factory_cast<void(*)(IProtectionPolicyManagerStatics const&), ProtectionPolicyManager, IProtectionPolicyManagerStatics>([](IProtectionPolicyManagerStatics const& f) { return f.ClearProcessUIPolicy(); });
    }
    inline auto ProtectionPolicyManager::CreateCurrentThreadNetworkContext(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.CreateCurrentThreadNetworkContext(identity); });
    }
    inline auto ProtectionPolicyManager::GetPrimaryManagedIdentityForNetworkEndpointAsync(winrt::Windows::Networking::HostName const& endpointHost)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.GetPrimaryManagedIdentityForNetworkEndpointAsync(endpointHost); });
    }
    inline auto ProtectionPolicyManager::RevokeContent(param::hstring const& identity)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.RevokeContent(identity); });
    }
    inline auto ProtectionPolicyManager::GetForCurrentView()
    {
        return impl::call_factory_cast<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager(*)(IProtectionPolicyManagerStatics const&), ProtectionPolicyManager, IProtectionPolicyManagerStatics>([](IProtectionPolicyManagerStatics const& f) { return f.GetForCurrentView(); });
    }
    inline auto ProtectionPolicyManager::ProtectedAccessSuspending(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedAccessSuspending(handler); });
    }
    inline ProtectionPolicyManager::ProtectedAccessSuspending_revoker ProtectionPolicyManager::ProtectedAccessSuspending(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler)
    {
        auto f = get_activation_factory<ProtectionPolicyManager, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
        return { f, f.ProtectedAccessSuspending(handler) };
    }
    inline auto ProtectionPolicyManager::ProtectedAccessSuspending(winrt::event_token const& token)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedAccessSuspending(token); });
    }
    inline auto ProtectionPolicyManager::ProtectedAccessResumed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedAccessResumed(handler); });
    }
    inline ProtectionPolicyManager::ProtectedAccessResumed_revoker ProtectionPolicyManager::ProtectedAccessResumed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler)
    {
        auto f = get_activation_factory<ProtectionPolicyManager, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
        return { f, f.ProtectedAccessResumed(handler) };
    }
    inline auto ProtectionPolicyManager::ProtectedAccessResumed(winrt::event_token const& token)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedAccessResumed(token); });
    }
    inline auto ProtectionPolicyManager::ProtectedContentRevoked(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedContentRevoked(handler); });
    }
    inline ProtectionPolicyManager::ProtectedContentRevoked_revoker ProtectionPolicyManager::ProtectedContentRevoked(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler)
    {
        auto f = get_activation_factory<ProtectionPolicyManager, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>();
        return { f, f.ProtectedContentRevoked(handler) };
    }
    inline auto ProtectionPolicyManager::ProtectedContentRevoked(winrt::event_token const& token)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.ProtectedContentRevoked(token); });
    }
    inline auto ProtectionPolicyManager::CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.CheckAccess(sourceIdentity, targetIdentity); });
    }
    inline auto ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>([&](IProtectionPolicyManagerStatics const& f) { return f.RequestAccessAsync(sourceIdentity, targetIdentity); });
    }
    inline auto ProtectionPolicyManager::HasContentBeenRevokedSince(param::hstring const& identity, winrt::Windows::Foundation::DateTime const& since)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.HasContentBeenRevokedSince(identity, since); });
    }
    inline auto ProtectionPolicyManager::CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.CheckAccessForApp(sourceIdentity, appPackageFamilyName); });
    }
    inline auto ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName); });
    }
    inline auto ProtectionPolicyManager::GetEnforcementLevel(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.GetEnforcementLevel(identity); });
    }
    inline auto ProtectionPolicyManager::IsUserDecryptionAllowed(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.IsUserDecryptionAllowed(identity); });
    }
    inline auto ProtectionPolicyManager::IsProtectionUnderLockRequired(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.IsProtectionUnderLockRequired(identity); });
    }
    inline auto ProtectionPolicyManager::PolicyChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.PolicyChanged(handler); });
    }
    inline ProtectionPolicyManager::PolicyChanged_revoker ProtectionPolicyManager::PolicyChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        auto f = get_activation_factory<ProtectionPolicyManager, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>();
        return { f, f.PolicyChanged(handler) };
    }
    inline auto ProtectionPolicyManager::PolicyChanged(winrt::event_token const& token)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([&](IProtectionPolicyManagerStatics2 const& f) { return f.PolicyChanged(token); });
    }
    inline auto ProtectionPolicyManager::IsProtectionEnabled()
    {
        return impl::call_factory_cast<bool(*)(IProtectionPolicyManagerStatics2 const&), ProtectionPolicyManager, IProtectionPolicyManagerStatics2>([](IProtectionPolicyManagerStatics2 const& f) { return f.IsProtectionEnabled(); });
    }
    inline auto ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>([&](IProtectionPolicyManagerStatics3 const& f) { return f.RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo); });
    }
    inline auto ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>([&](IProtectionPolicyManagerStatics3 const& f) { return f.RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo, messageFromApp); });
    }
    inline auto ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>([&](IProtectionPolicyManagerStatics3 const& f) { return f.RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo); });
    }
    inline auto ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>([&](IProtectionPolicyManagerStatics3 const& f) { return f.RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo, messageFromApp); });
    }
    inline auto ProtectionPolicyManager::LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
    {
        impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>([&](IProtectionPolicyManagerStatics3 const& f) { return f.LogAuditEvent(sourceIdentity, targetIdentity, auditInfo); });
    }
    inline auto ProtectionPolicyManager::IsRoamableProtectionEnabled(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.IsRoamableProtectionEnabled(identity); });
    }
    inline auto ProtectionPolicyManager::RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo, messageFromApp, behavior); });
    }
    inline auto ProtectionPolicyManager::RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo, messageFromApp, behavior); });
    }
    inline auto ProtectionPolicyManager::RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessToFilesForAppAsync(sourceItemList, appPackageFamilyName, auditInfo); });
    }
    inline auto ProtectionPolicyManager::RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessToFilesForAppAsync(sourceItemList, appPackageFamilyName, auditInfo, messageFromApp, behavior); });
    }
    inline auto ProtectionPolicyManager::RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessToFilesForProcessAsync(sourceItemList, processId, auditInfo); });
    }
    inline auto ProtectionPolicyManager::RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.RequestAccessToFilesForProcessAsync(sourceItemList, processId, auditInfo, messageFromApp, behavior); });
    }
    inline auto ProtectionPolicyManager::IsFileProtectionRequiredAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.IsFileProtectionRequiredAsync(target, identity); });
    }
    inline auto ProtectionPolicyManager::IsFileProtectionRequiredForNewFileAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.IsFileProtectionRequiredForNewFileAsync(parentFolder, identity, desiredName); });
    }
    inline auto ProtectionPolicyManager::PrimaryManagedIdentity()
    {
        return impl::call_factory_cast<hstring(*)(IProtectionPolicyManagerStatics4 const&), ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([](IProtectionPolicyManagerStatics4 const& f) { return f.PrimaryManagedIdentity(); });
    }
    inline auto ProtectionPolicyManager::GetPrimaryManagedIdentityForIdentity(param::hstring const& identity)
    {
        return impl::call_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics4>([&](IProtectionPolicyManagerStatics4 const& f) { return f.GetPrimaryManagedIdentityForIdentity(identity); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IDataProtectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IDataProtectionManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileRevocationManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::IThreadNetworkContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::BufferProtectUnprotectResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::DataProtectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::DataProtectionManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::FileProtectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::FileProtectionManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::FileRevocationManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::FileUnprotectOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContainerExportResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContainerImportResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectedFileCreateResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ProtectionPolicyManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::EnterpriseData::ThreadNetworkContext> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
