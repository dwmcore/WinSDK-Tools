// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Navigation_2_H
#define WINRT_Windows_UI_Xaml_Navigation_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Navigation
{
    struct LoadCompletedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        LoadCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
        LoadCompletedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> LoadCompletedEventHandler(L lambda);
        template <typename F> LoadCompletedEventHandler(F* function);
        template <typename O, typename M> LoadCompletedEventHandler(O* object, M method);
        template <typename O, typename M> LoadCompletedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> LoadCompletedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct NavigatedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigatedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NavigatedEventHandler(L lambda);
        template <typename F> NavigatedEventHandler(F* function);
        template <typename O, typename M> NavigatedEventHandler(O* object, M method);
        template <typename O, typename M> NavigatedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigatedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct NavigatingCancelEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NavigatingCancelEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigatingCancelEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NavigatingCancelEventHandler(L lambda);
        template <typename F> NavigatingCancelEventHandler(F* function);
        template <typename O, typename M> NavigatingCancelEventHandler(O* object, M method);
        template <typename O, typename M> NavigatingCancelEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigatingCancelEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const;
    };
    struct NavigationFailedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NavigationFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigationFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NavigationFailedEventHandler(L lambda);
        template <typename F> NavigationFailedEventHandler(F* function);
        template <typename O, typename M> NavigationFailedEventHandler(O* object, M method);
        template <typename O, typename M> NavigationFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigationFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const& e) const;
    };
    struct NavigationStoppedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NavigationStoppedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NavigationStoppedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NavigationStoppedEventHandler(L lambda);
        template <typename F> NavigationStoppedEventHandler(F* function);
        template <typename O, typename M> NavigationStoppedEventHandler(O* object, M method);
        template <typename O, typename M> NavigationStoppedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NavigationStoppedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
    };
    struct __declspec(empty_bases) FrameNavigationOptions : winrt::Windows::UI::Xaml::Navigation::IFrameNavigationOptions
    {
        FrameNavigationOptions(std::nullptr_t) noexcept {}
        FrameNavigationOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Navigation::IFrameNavigationOptions(ptr, take_ownership_from_abi) {}
        FrameNavigationOptions();
    };
    struct __declspec(empty_bases) NavigatingCancelEventArgs : winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs,
        impl::require<NavigatingCancelEventArgs, winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        NavigatingCancelEventArgs(std::nullptr_t) noexcept {}
        NavigatingCancelEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationEventArgs : winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs,
        impl::require<NavigationEventArgs, winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        NavigationEventArgs(std::nullptr_t) noexcept {}
        NavigationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Navigation::INavigationEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationFailedEventArgs : winrt::Windows::UI::Xaml::Navigation::INavigationFailedEventArgs
    {
        NavigationFailedEventArgs(std::nullptr_t) noexcept {}
        NavigationFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Navigation::INavigationFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PageStackEntry : winrt::Windows::UI::Xaml::Navigation::IPageStackEntry,
        impl::base<PageStackEntry, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PageStackEntry, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PageStackEntry(std::nullptr_t) noexcept {}
        PageStackEntry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Navigation::IPageStackEntry(ptr, take_ownership_from_abi) {}
        PageStackEntry(winrt::Windows::UI::Xaml::Interop::TypeName const& sourcePageType, winrt::Windows::Foundation::IInspectable const& parameter, winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo);
        [[nodiscard]] static auto SourcePageTypeProperty();
    };
}
#endif
