// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Input_H
#define WINRT_Windows_System_RemoteDesktop_Input_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.System.RemoteDesktop.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.RemoteDesktop.Input.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection<D>::IsEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection<D>::IsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection)->put_IsEnabled(value));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection<D>::RegisterThread(uint32_t threadId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection)->RegisterThread(threadId));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection<D>::UnregisterThread(uint32_t threadId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection)->UnregisterThread(threadId));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection<D>::ReportDataReceived(array_view<uint8_t const> pduData) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection)->ReportDataReceived(pduData.size(), get_abi(pduData)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnection2<D>::ReportPredictedKeyEvent(uint16_t scanCode, winrt::Windows::System::RemoteDesktop::Input::RemoteKeyEventAttributes const& attributes) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection2)->ReportPredictedKeyEvent(scanCode, static_cast<uint32_t>(attributes)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnectionFactory<D>::CreateInstance(winrt::guid const& connectionId, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const& pduForwarder) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory)->CreateInstance(impl::bind_in(connectionId), *(void**)(&pduForwarder), &value));
        return winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Input_IRemoteTextConnectionFactory2<D>::CreateInstance(winrt::guid const& connectionId, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const& pduForwarder, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionOptions const& options) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory2)->CreateInstance(impl::bind_in(connectionId), *(void**)(&pduForwarder), static_cast<uint32_t>(options), &value));
        return winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler, H> final : implements_delegate<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(uint32_t __pduDataSize, uint8_t* pduData, bool* result) noexcept final try
        {
            *result = detach_from<bool>((*this)(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(pduData), reinterpret_cast<uint8_t const *>(pduData) + __pduDataSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection> : produce_base<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterThread(uint32_t threadId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterThread(threadId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnregisterThread(uint32_t threadId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterThread(threadId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportDataReceived(uint32_t __pduDataSize, uint8_t* pduData) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportDataReceived(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(pduData), reinterpret_cast<uint8_t const *>(pduData) + __pduDataSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection2> : produce_base<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection2>
    {
        int32_t __stdcall ReportPredictedKeyEvent(uint16_t scanCode, uint32_t attributes) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportPredictedKeyEvent(scanCode, *reinterpret_cast<winrt::Windows::System::RemoteDesktop::Input::RemoteKeyEventAttributes const*>(&attributes));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory> : produce_base<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory>
    {
        int32_t __stdcall CreateInstance(winrt::guid connectionId, void* pduForwarder, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection>(this->shim().CreateInstance(*reinterpret_cast<winrt::guid const*>(&connectionId), *reinterpret_cast<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const*>(&pduForwarder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory2> : produce_base<D, winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory2>
    {
        int32_t __stdcall CreateInstance(winrt::guid connectionId, void* pduForwarder, uint32_t options, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection>(this->shim().CreateInstance(*reinterpret_cast<winrt::guid const*>(&connectionId), *reinterpret_cast<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const*>(&pduForwarder), *reinterpret_cast<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Input
{
    constexpr auto operator|(RemoteKeyEventAttributes const left, RemoteKeyEventAttributes const right) noexcept
    {
        return static_cast<RemoteKeyEventAttributes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RemoteKeyEventAttributes& left, RemoteKeyEventAttributes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RemoteKeyEventAttributes const left, RemoteKeyEventAttributes const right) noexcept
    {
        return static_cast<RemoteKeyEventAttributes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RemoteKeyEventAttributes& left, RemoteKeyEventAttributes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RemoteKeyEventAttributes const value) noexcept
    {
        return static_cast<RemoteKeyEventAttributes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RemoteKeyEventAttributes const left, RemoteKeyEventAttributes const right) noexcept
    {
        return static_cast<RemoteKeyEventAttributes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RemoteKeyEventAttributes& left, RemoteKeyEventAttributes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(RemoteTextConnectionOptions const left, RemoteTextConnectionOptions const right) noexcept
    {
        return static_cast<RemoteTextConnectionOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RemoteTextConnectionOptions& left, RemoteTextConnectionOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RemoteTextConnectionOptions const left, RemoteTextConnectionOptions const right) noexcept
    {
        return static_cast<RemoteTextConnectionOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RemoteTextConnectionOptions& left, RemoteTextConnectionOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RemoteTextConnectionOptions const value) noexcept
    {
        return static_cast<RemoteTextConnectionOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RemoteTextConnectionOptions const left, RemoteTextConnectionOptions const right) noexcept
    {
        return static_cast<RemoteTextConnectionOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RemoteTextConnectionOptions& left, RemoteTextConnectionOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline RemoteTextConnection::RemoteTextConnection(winrt::guid const& connectionId, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const& pduForwarder) :
        RemoteTextConnection(impl::call_factory<RemoteTextConnection, IRemoteTextConnectionFactory>([&](IRemoteTextConnectionFactory const& f) { return f.CreateInstance(connectionId, pduForwarder); }))
    {
    }
    inline RemoteTextConnection::RemoteTextConnection(winrt::guid const& connectionId, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const& pduForwarder, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionOptions const& options) :
        RemoteTextConnection(impl::call_factory<RemoteTextConnection, IRemoteTextConnectionFactory2>([&](IRemoteTextConnectionFactory2 const& f) { return f.CreateInstance(connectionId, pduForwarder, options); }))
    {
    }
    template <typename L> RemoteTextConnectionDataHandler::RemoteTextConnectionDataHandler(L handler) :
        RemoteTextConnectionDataHandler(impl::make_delegate<RemoteTextConnectionDataHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> RemoteTextConnectionDataHandler::RemoteTextConnectionDataHandler(F* handler) :
        RemoteTextConnectionDataHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> RemoteTextConnectionDataHandler::RemoteTextConnectionDataHandler(O* object, M method) :
        RemoteTextConnectionDataHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> RemoteTextConnectionDataHandler::RemoteTextConnectionDataHandler(com_ptr<O>&& object, M method) :
        RemoteTextConnectionDataHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> RemoteTextConnectionDataHandler::RemoteTextConnectionDataHandler(weak_ref<O>&& object, M method) :
        RemoteTextConnectionDataHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto RemoteTextConnectionDataHandler::operator()(array_view<uint8_t const> pduData) const
    {
        bool result{};
        check_hresult((*(impl::abi_t<RemoteTextConnectionDataHandler>**)this)->Invoke(pduData.size(), get_abi(pduData), &result));
        return result;
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnectionFactory2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnection> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
