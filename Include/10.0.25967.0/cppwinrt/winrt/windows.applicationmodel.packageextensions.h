// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_PackageExtensions_H
#define WINRT_Windows_ApplicationModel_PackageExtensions_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.ApplicationModel.PackageExtensions.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::GetExtensionProperties() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->GetExtensionProperties(&result));
        return winrt::Windows::Foundation::Collections::IPropertySet{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::GetExtensionPropertiesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->GetExtensionPropertiesAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IPropertySet>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::GetPublicPath() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->GetPublicPath(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::GetPublicFolder() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->GetPublicFolder(&result));
        return winrt::Windows::Storage::StorageFolder{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtension<D>::GetPublicFolderAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension)->GetPublicFolderAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::FindAll() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->FindAll(&result));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::FindAllAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->FindAllAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::RequestRemovePackageAsync(param::hstring const& packageFullName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->RequestRemovePackageAsync(*(void**)(&packageFullName), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageInstalled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->add_PackageInstalled(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageInstalled_revoker consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageInstalled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageInstalled_revoker>(this, PackageInstalled(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageInstalled(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->remove_PackageInstalled(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdating(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->add_PackageUpdating(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdating_revoker consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdating(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageUpdating_revoker>(this, PackageUpdating(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdating(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->remove_PackageUpdating(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->add_PackageUpdated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdated_revoker consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageUpdated_revoker>(this, PackageUpdated(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUpdated(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->remove_PackageUpdated(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUninstalling(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->add_PackageUninstalling(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUninstalling_revoker consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUninstalling(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageUninstalling_revoker>(this, PackageUninstalling(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageUninstalling(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->remove_PackageUninstalling(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->add_PackageStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageStatusChanged_revoker consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageStatusChanged_revoker>(this, PackageStatusChanged(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalog<D>::PackageStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog)->remove_PackageStatusChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionCatalogStatics<D>::Open(param::hstring const& packageExtensionName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics)->Open(*(void**)(&packageExtensionName), &result));
        return winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageInstalledEventArgs<D>::PackageExtensionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs)->get_PackageExtensionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageInstalledEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageInstalledEventArgs<D>::Extensions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs)->get_Extensions(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageStatusChangedEventArgs<D>::PackageExtensionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs)->get_PackageExtensionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageStatusChangedEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUninstallingEventArgs<D>::PackageExtensionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs)->get_PackageExtensionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUninstallingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatedEventArgs<D>::PackageExtensionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs)->get_PackageExtensionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatedEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatedEventArgs<D>::Extensions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs)->get_Extensions(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatingEventArgs<D>::PackageExtensionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs)->get_PackageExtensionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_PackageExtensions_IPackageExtensionPackageUpdatingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs)->get_Package(&value));
        return winrt::Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
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
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetExtensionProperties(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IPropertySet>(this->shim().GetExtensionProperties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetExtensionPropertiesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IPropertySet>>(this->shim().GetExtensionPropertiesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPublicPath(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetPublicPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPublicFolder(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Storage::StorageFolder>(this->shim().GetPublicFolder());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPublicFolderAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>>(this->shim().GetPublicFolderAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog>
    {
        int32_t __stdcall FindAll(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>>(this->shim().FindAll());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestRemovePackageAsync(void* packageFullName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestRemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_PackageInstalled(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageInstalled(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageInstalled(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageInstalled(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageUpdating(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageUpdating(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageUpdating(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUpdating(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageUpdated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageUpdated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageUpdated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUpdated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageUninstalling(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageUninstalling(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageUninstalling(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUninstalling(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageStatusChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog, winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics>
    {
        int32_t __stdcall Open(void* packageExtensionName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog>(this->shim().Open(*reinterpret_cast<hstring const*>(&packageExtensionName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs>
    {
        int32_t __stdcall get_PackageExtensionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageExtensionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Extensions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>>(this->shim().Extensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs>
    {
        int32_t __stdcall get_PackageExtensionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageExtensionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs>
    {
        int32_t __stdcall get_PackageExtensionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageExtensionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs>
    {
        int32_t __stdcall get_PackageExtensionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageExtensionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Extensions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension>>(this->shim().Extensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs>
    {
        int32_t __stdcall get_PackageExtensionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageExtensionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::PackageExtensions
{
    inline auto PackageExtensionCatalog::Open(param::hstring const& packageExtensionName)
    {
        return impl::call_factory<PackageExtensionCatalog, IPackageExtensionCatalogStatics>([&](IPackageExtensionCatalogStatics const& f) { return f.Open(packageExtensionName); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtension> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionCatalogStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageInstalledEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUninstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::IPackageExtensionPackageUpdatingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtension> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionCatalog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageInstalledEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUninstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageExtensions::PackageExtensionPackageUpdatingEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
