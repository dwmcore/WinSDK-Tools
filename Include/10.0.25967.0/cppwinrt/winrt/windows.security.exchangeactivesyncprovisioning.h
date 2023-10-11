// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::Id() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_Id(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::OperatingSystem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_OperatingSystem(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::FriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_FriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemManufacturer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemManufacturer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemProductName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemProductName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation<D>::SystemSku() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation)->get_SystemSku(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemHardwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemHardwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2<D>::SystemFirmwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2)->get_SystemFirmwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::RequireEncryption() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_RequireEncryption(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::RequireEncryption(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_RequireEncryption(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MinPasswordLength() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_MinPasswordLength(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MinPasswordLength(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_MinPasswordLength(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::DisallowConvenienceLogon() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_DisallowConvenienceLogon(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::DisallowConvenienceLogon(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_DisallowConvenienceLogon(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MinPasswordComplexCharacters() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_MinPasswordComplexCharacters(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MinPasswordComplexCharacters(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_MinPasswordComplexCharacters(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::PasswordExpiration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_PasswordExpiration(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::PasswordExpiration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_PasswordExpiration(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::PasswordHistory() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_PasswordHistory(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::PasswordHistory(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_PasswordHistory(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MaxPasswordFailedAttempts() const
    {
        uint8_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_MaxPasswordFailedAttempts(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MaxPasswordFailedAttempts(uint8_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_MaxPasswordFailedAttempts(value));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MaxInactivityTimeLock() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->get_MaxInactivityTimeLock(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::MaxInactivityTimeLock(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->put_MaxInactivityTimeLock(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::CheckCompliance() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->CheckCompliance(&result));
        return winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy<D>::ApplyAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy)->ApplyAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::Compliant() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_Compliant(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::RequireEncryptionResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_RequireEncryptionResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::MinPasswordLengthResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_MinPasswordLengthResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::DisallowConvenienceLogonResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_DisallowConvenienceLogonResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::MinPasswordComplexCharactersResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_MinPasswordComplexCharactersResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::PasswordExpirationResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_PasswordExpirationResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::PasswordHistoryResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_PasswordHistoryResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::MaxPasswordFailedAttemptsResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_MaxPasswordFailedAttemptsResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults<D>::MaxInactivityTimeLockResult() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults)->get_MaxInactivityTimeLockResult(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2<D>::EncryptionProviderType() const
    {
        winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2)->get_EncryptionProviderType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : produce_base<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        int32_t __stdcall get_Id(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OperatingSystem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OperatingSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemManufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemManufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemProductName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemProductName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemSku(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemSku());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : produce_base<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2>
    {
        int32_t __stdcall get_SystemHardwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemHardwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemFirmwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SystemFirmwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy> : produce_base<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy>
    {
        int32_t __stdcall get_RequireEncryption(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequireEncryption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequireEncryption(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequireEncryption(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPasswordLength(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().MinPasswordLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinPasswordLength(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinPasswordLength(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisallowConvenienceLogon(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DisallowConvenienceLogon());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisallowConvenienceLogon(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisallowConvenienceLogon(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPasswordComplexCharacters(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().MinPasswordComplexCharacters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MinPasswordComplexCharacters(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinPasswordComplexCharacters(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PasswordExpiration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().PasswordExpiration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PasswordExpiration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PasswordExpiration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PasswordHistory(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PasswordHistory());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PasswordHistory(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PasswordHistory(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPasswordFailedAttempts(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().MaxPasswordFailedAttempts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxPasswordFailedAttempts(uint8_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPasswordFailedAttempts(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxInactivityTimeLock(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().MaxInactivityTimeLock());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxInactivityTimeLock(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxInactivityTimeLock(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CheckCompliance(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>(this->shim().CheckCompliance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ApplyAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>>(this->shim().ApplyAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults> : produce_base<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        int32_t __stdcall get_Compliant(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Compliant());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequireEncryptionResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>(this->shim().RequireEncryptionResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPasswordLengthResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>(this->shim().MinPasswordLengthResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisallowConvenienceLogonResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>(this->shim().DisallowConvenienceLogonResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinPasswordComplexCharactersResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>(this->shim().MinPasswordComplexCharactersResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PasswordExpirationResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>(this->shim().PasswordExpirationResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PasswordHistoryResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>(this->shim().PasswordHistoryResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxPasswordFailedAttemptsResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>(this->shim().MaxPasswordFailedAttemptsResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxInactivityTimeLockResult(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>(this->shim().MaxInactivityTimeLockResult());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2> : produce_base<D, winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2>
    {
        int32_t __stdcall get_EncryptionProviderType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>(this->shim().EncryptionProviderType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    inline EasClientDeviceInformation::EasClientDeviceInformation() :
        EasClientDeviceInformation(impl::call_factory_cast<EasClientDeviceInformation(*)(winrt::Windows::Foundation::IActivationFactory const&), EasClientDeviceInformation>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EasClientDeviceInformation>(); }))
    {
    }
    inline EasClientSecurityPolicy::EasClientSecurityPolicy() :
        EasClientSecurityPolicy(impl::call_factory_cast<EasClientSecurityPolicy(*)(winrt::Windows::Foundation::IActivationFactory const&), EasClientSecurityPolicy>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EasClientSecurityPolicy>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
