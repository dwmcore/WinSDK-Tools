// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Controls_2_H
#define WINRT_Windows_UI_Xaml_Controls_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Navigation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls
{
    struct BackClickEventHandler : winrt::Windows::Foundation::IUnknown
    {
        BackClickEventHandler(std::nullptr_t = nullptr) noexcept {}
        BackClickEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> BackClickEventHandler(L lambda);
        template <typename F> BackClickEventHandler(F* function);
        template <typename O, typename M> BackClickEventHandler(O* object, M method);
        template <typename O, typename M> BackClickEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> BackClickEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::BackClickEventArgs const& e) const;
    };
    struct CalendarViewDayItemChangingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        CalendarViewDayItemChangingEventHandler(std::nullptr_t = nullptr) noexcept {}
        CalendarViewDayItemChangingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CalendarViewDayItemChangingEventHandler(L lambda);
        template <typename F> CalendarViewDayItemChangingEventHandler(F* function);
        template <typename O, typename M> CalendarViewDayItemChangingEventHandler(O* object, M method);
        template <typename O, typename M> CalendarViewDayItemChangingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> CalendarViewDayItemChangingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::UI::Xaml::Controls::CalendarView const& sender, winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs const& e) const;
    };
    struct CleanUpVirtualizedItemEventHandler : winrt::Windows::Foundation::IUnknown
    {
        CleanUpVirtualizedItemEventHandler(std::nullptr_t = nullptr) noexcept {}
        CleanUpVirtualizedItemEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> CleanUpVirtualizedItemEventHandler(L lambda);
        template <typename F> CleanUpVirtualizedItemEventHandler(F* function);
        template <typename O, typename M> CleanUpVirtualizedItemEventHandler(O* object, M method);
        template <typename O, typename M> CleanUpVirtualizedItemEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> CleanUpVirtualizedItemEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs const& e) const;
    };
    struct ContextMenuOpeningEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ContextMenuOpeningEventHandler(std::nullptr_t = nullptr) noexcept {}
        ContextMenuOpeningEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ContextMenuOpeningEventHandler(L lambda);
        template <typename F> ContextMenuOpeningEventHandler(F* function);
        template <typename O, typename M> ContextMenuOpeningEventHandler(O* object, M method);
        template <typename O, typename M> ContextMenuOpeningEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ContextMenuOpeningEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs const& e) const;
    };
    struct DragItemsStartingEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DragItemsStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragItemsStartingEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragItemsStartingEventHandler(L lambda);
        template <typename F> DragItemsStartingEventHandler(F* function);
        template <typename O, typename M> DragItemsStartingEventHandler(O* object, M method);
        template <typename O, typename M> DragItemsStartingEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragItemsStartingEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs const& e) const;
    };
    struct HubSectionHeaderClickEventHandler : winrt::Windows::Foundation::IUnknown
    {
        HubSectionHeaderClickEventHandler(std::nullptr_t = nullptr) noexcept {}
        HubSectionHeaderClickEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> HubSectionHeaderClickEventHandler(L lambda);
        template <typename F> HubSectionHeaderClickEventHandler(F* function);
        template <typename O, typename M> HubSectionHeaderClickEventHandler(O* object, M method);
        template <typename O, typename M> HubSectionHeaderClickEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> HubSectionHeaderClickEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs const& e) const;
    };
    struct ItemClickEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ItemClickEventHandler(std::nullptr_t = nullptr) noexcept {}
        ItemClickEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ItemClickEventHandler(L lambda);
        template <typename F> ItemClickEventHandler(F* function);
        template <typename O, typename M> ItemClickEventHandler(O* object, M method);
        template <typename O, typename M> ItemClickEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ItemClickEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs const& e) const;
    };
    struct ListViewItemToKeyHandler : winrt::Windows::Foundation::IUnknown
    {
        ListViewItemToKeyHandler(std::nullptr_t = nullptr) noexcept {}
        ListViewItemToKeyHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ListViewItemToKeyHandler(L lambda);
        template <typename F> ListViewItemToKeyHandler(F* function);
        template <typename O, typename M> ListViewItemToKeyHandler(O* object, M method);
        template <typename O, typename M> ListViewItemToKeyHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ListViewItemToKeyHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& item) const;
    };
    struct ListViewKeyToItemHandler : winrt::Windows::Foundation::IUnknown
    {
        ListViewKeyToItemHandler(std::nullptr_t = nullptr) noexcept {}
        ListViewKeyToItemHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ListViewKeyToItemHandler(L lambda);
        template <typename F> ListViewKeyToItemHandler(F* function);
        template <typename O, typename M> ListViewKeyToItemHandler(O* object, M method);
        template <typename O, typename M> ListViewKeyToItemHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ListViewKeyToItemHandler(weak_ref<O>&& object, M method);
        auto operator()(param::hstring const& key) const;
    };
    struct NotifyEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NotifyEventHandler(std::nullptr_t = nullptr) noexcept {}
        NotifyEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NotifyEventHandler(L lambda);
        template <typename F> NotifyEventHandler(F* function);
        template <typename O, typename M> NotifyEventHandler(O* object, M method);
        template <typename O, typename M> NotifyEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NotifyEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::NotifyEventArgs const& e) const;
    };
    struct SectionsInViewChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        SectionsInViewChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SectionsInViewChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SectionsInViewChangedEventHandler(L lambda);
        template <typename F> SectionsInViewChangedEventHandler(F* function);
        template <typename O, typename M> SectionsInViewChangedEventHandler(O* object, M method);
        template <typename O, typename M> SectionsInViewChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SectionsInViewChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs const& e) const;
    };
    struct SelectionChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        SelectionChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SelectionChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SelectionChangedEventHandler(L lambda);
        template <typename F> SelectionChangedEventHandler(F* function);
        template <typename O, typename M> SelectionChangedEventHandler(O* object, M method);
        template <typename O, typename M> SelectionChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SelectionChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs const& e) const;
    };
    struct SemanticZoomViewChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        SemanticZoomViewChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SemanticZoomViewChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> SemanticZoomViewChangedEventHandler(L lambda);
        template <typename F> SemanticZoomViewChangedEventHandler(F* function);
        template <typename O, typename M> SemanticZoomViewChangedEventHandler(O* object, M method);
        template <typename O, typename M> SemanticZoomViewChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SemanticZoomViewChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs const& e) const;
    };
    struct TextChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        TextChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        TextChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TextChangedEventHandler(L lambda);
        template <typename F> TextChangedEventHandler(F* function);
        template <typename O, typename M> TextChangedEventHandler(O* object, M method);
        template <typename O, typename M> TextChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TextChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::TextChangedEventArgs const& e) const;
    };
    struct TextControlPasteEventHandler : winrt::Windows::Foundation::IUnknown
    {
        TextControlPasteEventHandler(std::nullptr_t = nullptr) noexcept {}
        TextControlPasteEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> TextControlPasteEventHandler(L lambda);
        template <typename F> TextControlPasteEventHandler(F* function);
        template <typename O, typename M> TextControlPasteEventHandler(O* object, M method);
        template <typename O, typename M> TextControlPasteEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TextControlPasteEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs const& e) const;
    };
    struct WebViewNavigationFailedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        WebViewNavigationFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
        WebViewNavigationFailedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> WebViewNavigationFailedEventHandler(L lambda);
        template <typename F> WebViewNavigationFailedEventHandler(F* function);
        template <typename O, typename M> WebViewNavigationFailedEventHandler(O* object, M method);
        template <typename O, typename M> WebViewNavigationFailedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> WebViewNavigationFailedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs const& e) const;
    };
    struct __declspec(empty_bases) AnchorRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::IAnchorRequestedEventArgs
    {
        AnchorRequestedEventArgs(std::nullptr_t) noexcept {}
        AnchorRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAnchorRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBar : winrt::Windows::UI::Xaml::Controls::IAppBar,
        impl::base<AppBar, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBar, winrt::Windows::UI::Xaml::Controls::IAppBar2, winrt::Windows::UI::Xaml::Controls::IAppBar3, winrt::Windows::UI::Xaml::Controls::IAppBar4, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides3, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBar(std::nullptr_t) noexcept {}
        AppBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAppBar(ptr, take_ownership_from_abi) {}
        AppBar();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto IsStickyProperty();
        [[nodiscard]] static auto ClosedDisplayModeProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
    };
    struct __declspec(empty_bases) AppBarButton : winrt::Windows::UI::Xaml::Controls::IAppBarButton,
        impl::base<AppBarButton, winrt::Windows::UI::Xaml::Controls::Button, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarButton, winrt::Windows::UI::Xaml::Controls::IAppBarButton3, winrt::Windows::UI::Xaml::Controls::IAppBarButton4, winrt::Windows::UI::Xaml::Controls::IAppBarButton5, winrt::Windows::UI::Xaml::Controls::ICommandBarElement, winrt::Windows::UI::Xaml::Controls::ICommandBarElement2, winrt::Windows::UI::Xaml::Controls::IButton, winrt::Windows::UI::Xaml::Controls::IButtonWithFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarButton(std::nullptr_t) noexcept {}
        AppBarButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAppBarButton(ptr, take_ownership_from_abi) {}
        AppBarButton();
        [[nodiscard]] static auto LabelProperty();
        [[nodiscard]] static auto IconProperty();
        [[nodiscard]] static auto IsCompactProperty();
        [[nodiscard]] static auto LabelPositionProperty();
        [[nodiscard]] static auto IsInOverflowProperty();
        [[nodiscard]] static auto DynamicOverflowOrderProperty();
        [[nodiscard]] static auto KeyboardAcceleratorTextOverrideProperty();
    };
    struct __declspec(empty_bases) AppBarElementContainer : winrt::Windows::UI::Xaml::Controls::IAppBarElementContainer,
        impl::base<AppBarElementContainer, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarElementContainer, winrt::Windows::UI::Xaml::Controls::ICommandBarElement, winrt::Windows::UI::Xaml::Controls::ICommandBarElement2, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarElementContainer(std::nullptr_t) noexcept {}
        AppBarElementContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAppBarElementContainer(ptr, take_ownership_from_abi) {}
        AppBarElementContainer();
        [[nodiscard]] static auto IsCompactProperty();
        [[nodiscard]] static auto IsInOverflowProperty();
        [[nodiscard]] static auto DynamicOverflowOrderProperty();
    };
    struct __declspec(empty_bases) AppBarSeparator : winrt::Windows::UI::Xaml::Controls::IAppBarSeparator,
        impl::base<AppBarSeparator, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarSeparator, winrt::Windows::UI::Xaml::Controls::ICommandBarElement, winrt::Windows::UI::Xaml::Controls::ICommandBarElement2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarSeparator(std::nullptr_t) noexcept {}
        AppBarSeparator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAppBarSeparator(ptr, take_ownership_from_abi) {}
        AppBarSeparator();
        [[nodiscard]] static auto IsCompactProperty();
        [[nodiscard]] static auto IsInOverflowProperty();
        [[nodiscard]] static auto DynamicOverflowOrderProperty();
    };
    struct __declspec(empty_bases) AppBarToggleButton : winrt::Windows::UI::Xaml::Controls::IAppBarToggleButton,
        impl::base<AppBarToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarToggleButton, winrt::Windows::UI::Xaml::Controls::IAppBarToggleButton3, winrt::Windows::UI::Xaml::Controls::IAppBarToggleButton4, winrt::Windows::UI::Xaml::Controls::IAppBarToggleButton5, winrt::Windows::UI::Xaml::Controls::ICommandBarElement, winrt::Windows::UI::Xaml::Controls::ICommandBarElement2, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarToggleButton(std::nullptr_t) noexcept {}
        AppBarToggleButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAppBarToggleButton(ptr, take_ownership_from_abi) {}
        AppBarToggleButton();
        [[nodiscard]] static auto LabelProperty();
        [[nodiscard]] static auto IconProperty();
        [[nodiscard]] static auto IsCompactProperty();
        [[nodiscard]] static auto LabelPositionProperty();
        [[nodiscard]] static auto IsInOverflowProperty();
        [[nodiscard]] static auto DynamicOverflowOrderProperty();
        [[nodiscard]] static auto KeyboardAcceleratorTextOverrideProperty();
    };
    struct __declspec(empty_bases) AutoSuggestBox : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBox,
        impl::base<AutoSuggestBox, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AutoSuggestBox, winrt::Windows::UI::Xaml::Controls::IAutoSuggestBox2, winrt::Windows::UI::Xaml::Controls::IAutoSuggestBox3, winrt::Windows::UI::Xaml::Controls::IAutoSuggestBox4, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AutoSuggestBox(std::nullptr_t) noexcept {}
        AutoSuggestBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBox(ptr, take_ownership_from_abi) {}
        AutoSuggestBox();
        [[nodiscard]] static auto MaxSuggestionListHeightProperty();
        [[nodiscard]] static auto IsSuggestionListOpenProperty();
        [[nodiscard]] static auto TextMemberPathProperty();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto UpdateTextOnSelectProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto AutoMaximizeSuggestionAreaProperty();
        [[nodiscard]] static auto TextBoxStyleProperty();
        [[nodiscard]] static auto QueryIconProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) AutoSuggestBoxQuerySubmittedEventArgs : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxQuerySubmittedEventArgs,
        impl::base<AutoSuggestBoxQuerySubmittedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AutoSuggestBoxQuerySubmittedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AutoSuggestBoxQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
        AutoSuggestBoxQuerySubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxQuerySubmittedEventArgs(ptr, take_ownership_from_abi) {}
        AutoSuggestBoxQuerySubmittedEventArgs();
    };
    struct __declspec(empty_bases) AutoSuggestBoxSuggestionChosenEventArgs : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxSuggestionChosenEventArgs,
        impl::base<AutoSuggestBoxSuggestionChosenEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AutoSuggestBoxSuggestionChosenEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AutoSuggestBoxSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
        AutoSuggestBoxSuggestionChosenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxSuggestionChosenEventArgs(ptr, take_ownership_from_abi) {}
        AutoSuggestBoxSuggestionChosenEventArgs();
    };
    struct __declspec(empty_bases) AutoSuggestBoxTextChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgs,
        impl::base<AutoSuggestBoxTextChangedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AutoSuggestBoxTextChangedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AutoSuggestBoxTextChangedEventArgs(std::nullptr_t) noexcept {}
        AutoSuggestBoxTextChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgs(ptr, take_ownership_from_abi) {}
        AutoSuggestBoxTextChangedEventArgs();
        [[nodiscard]] static auto ReasonProperty();
    };
    struct __declspec(empty_bases) BackClickEventArgs : winrt::Windows::UI::Xaml::Controls::IBackClickEventArgs
    {
        BackClickEventArgs(std::nullptr_t) noexcept {}
        BackClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IBackClickEventArgs(ptr, take_ownership_from_abi) {}
        BackClickEventArgs();
    };
    struct __declspec(empty_bases) BitmapIcon : winrt::Windows::UI::Xaml::Controls::IBitmapIcon,
        impl::base<BitmapIcon, winrt::Windows::UI::Xaml::Controls::IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<BitmapIcon, winrt::Windows::UI::Xaml::Controls::IBitmapIcon2, winrt::Windows::UI::Xaml::Controls::IIconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        BitmapIcon(std::nullptr_t) noexcept {}
        BitmapIcon(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IBitmapIcon(ptr, take_ownership_from_abi) {}
        BitmapIcon();
        [[nodiscard]] static auto UriSourceProperty();
        [[nodiscard]] static auto ShowAsMonochromeProperty();
    };
    struct __declspec(empty_bases) BitmapIconSource : winrt::Windows::UI::Xaml::Controls::IBitmapIconSource,
        impl::base<BitmapIconSource, winrt::Windows::UI::Xaml::Controls::IconSource, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<BitmapIconSource, winrt::Windows::UI::Xaml::Controls::IIconSource, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        BitmapIconSource(std::nullptr_t) noexcept {}
        BitmapIconSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IBitmapIconSource(ptr, take_ownership_from_abi) {}
        BitmapIconSource();
        [[nodiscard]] static auto UriSourceProperty();
        [[nodiscard]] static auto ShowAsMonochromeProperty();
    };
    struct __declspec(empty_bases) Border : winrt::Windows::UI::Xaml::Controls::IBorder,
        impl::base<Border, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Border, winrt::Windows::UI::Xaml::Controls::IBorder2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Border(std::nullptr_t) noexcept {}
        Border(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IBorder(ptr, take_ownership_from_abi) {}
        Border();
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto ChildTransitionsProperty();
        [[nodiscard]] static auto BackgroundSizingProperty();
    };
    struct __declspec(empty_bases) Button : winrt::Windows::UI::Xaml::Controls::IButton,
        impl::base<Button, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Button, winrt::Windows::UI::Xaml::Controls::IButtonWithFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Button(std::nullptr_t) noexcept {}
        Button(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IButton(ptr, take_ownership_from_abi) {}
        Button();
        [[nodiscard]] static auto FlyoutProperty();
    };
    struct __declspec(empty_bases) CalendarDatePicker : winrt::Windows::UI::Xaml::Controls::ICalendarDatePicker,
        impl::base<CalendarDatePicker, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarDatePicker, winrt::Windows::UI::Xaml::Controls::ICalendarDatePicker2, winrt::Windows::UI::Xaml::Controls::ICalendarDatePicker3, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarDatePicker(std::nullptr_t) noexcept {}
        CalendarDatePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarDatePicker(ptr, take_ownership_from_abi) {}
        CalendarDatePicker();
        [[nodiscard]] static auto DateProperty();
        [[nodiscard]] static auto IsCalendarOpenProperty();
        [[nodiscard]] static auto DateFormatProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto CalendarViewStyleProperty();
        [[nodiscard]] static auto MinDateProperty();
        [[nodiscard]] static auto MaxDateProperty();
        [[nodiscard]] static auto IsTodayHighlightedProperty();
        [[nodiscard]] static auto DisplayModeProperty();
        [[nodiscard]] static auto FirstDayOfWeekProperty();
        [[nodiscard]] static auto DayOfWeekFormatProperty();
        [[nodiscard]] static auto CalendarIdentifierProperty();
        [[nodiscard]] static auto IsOutOfScopeEnabledProperty();
        [[nodiscard]] static auto IsGroupLabelVisibleProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) CalendarDatePickerDateChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs
    {
        CalendarDatePickerDateChangedEventArgs(std::nullptr_t) noexcept {}
        CalendarDatePickerDateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CalendarView : winrt::Windows::UI::Xaml::Controls::ICalendarView,
        impl::base<CalendarView, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarView, winrt::Windows::UI::Xaml::Controls::ICalendarView2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarView(std::nullptr_t) noexcept {}
        CalendarView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarView(ptr, take_ownership_from_abi) {}
        CalendarView();
        [[nodiscard]] static auto CalendarIdentifierProperty();
        [[nodiscard]] static auto DayOfWeekFormatProperty();
        [[nodiscard]] static auto IsGroupLabelVisibleProperty();
        [[nodiscard]] static auto DisplayModeProperty();
        [[nodiscard]] static auto FirstDayOfWeekProperty();
        [[nodiscard]] static auto IsOutOfScopeEnabledProperty();
        [[nodiscard]] static auto IsTodayHighlightedProperty();
        [[nodiscard]] static auto MaxDateProperty();
        [[nodiscard]] static auto MinDateProperty();
        [[nodiscard]] static auto NumberOfWeeksInViewProperty();
        [[nodiscard]] static auto SelectedDatesProperty();
        [[nodiscard]] static auto SelectionModeProperty();
        [[nodiscard]] static auto TemplateSettingsProperty();
        [[nodiscard]] static auto FocusBorderBrushProperty();
        [[nodiscard]] static auto SelectedHoverBorderBrushProperty();
        [[nodiscard]] static auto SelectedPressedBorderBrushProperty();
        [[nodiscard]] static auto SelectedBorderBrushProperty();
        [[nodiscard]] static auto HoverBorderBrushProperty();
        [[nodiscard]] static auto PressedBorderBrushProperty();
        [[nodiscard]] static auto CalendarItemBorderBrushProperty();
        [[nodiscard]] static auto OutOfScopeBackgroundProperty();
        [[nodiscard]] static auto CalendarItemBackgroundProperty();
        [[nodiscard]] static auto PressedForegroundProperty();
        [[nodiscard]] static auto TodayForegroundProperty();
        [[nodiscard]] static auto BlackoutForegroundProperty();
        [[nodiscard]] static auto SelectedForegroundProperty();
        [[nodiscard]] static auto OutOfScopeForegroundProperty();
        [[nodiscard]] static auto CalendarItemForegroundProperty();
        [[nodiscard]] static auto DayItemFontFamilyProperty();
        [[nodiscard]] static auto DayItemFontSizeProperty();
        [[nodiscard]] static auto DayItemFontStyleProperty();
        [[nodiscard]] static auto DayItemFontWeightProperty();
        [[nodiscard]] static auto TodayFontWeightProperty();
        [[nodiscard]] static auto FirstOfMonthLabelFontFamilyProperty();
        [[nodiscard]] static auto FirstOfMonthLabelFontSizeProperty();
        [[nodiscard]] static auto FirstOfMonthLabelFontStyleProperty();
        [[nodiscard]] static auto FirstOfMonthLabelFontWeightProperty();
        [[nodiscard]] static auto MonthYearItemFontFamilyProperty();
        [[nodiscard]] static auto MonthYearItemFontSizeProperty();
        [[nodiscard]] static auto MonthYearItemFontStyleProperty();
        [[nodiscard]] static auto MonthYearItemFontWeightProperty();
        [[nodiscard]] static auto FirstOfYearDecadeLabelFontFamilyProperty();
        [[nodiscard]] static auto FirstOfYearDecadeLabelFontSizeProperty();
        [[nodiscard]] static auto FirstOfYearDecadeLabelFontStyleProperty();
        [[nodiscard]] static auto FirstOfYearDecadeLabelFontWeightProperty();
        [[nodiscard]] static auto HorizontalDayItemAlignmentProperty();
        [[nodiscard]] static auto VerticalDayItemAlignmentProperty();
        [[nodiscard]] static auto HorizontalFirstOfMonthLabelAlignmentProperty();
        [[nodiscard]] static auto VerticalFirstOfMonthLabelAlignmentProperty();
        [[nodiscard]] static auto CalendarItemBorderThicknessProperty();
        [[nodiscard]] static auto CalendarViewDayItemStyleProperty();
        [[nodiscard]] static auto SelectedDisabledBorderBrushProperty();
        [[nodiscard]] static auto TodaySelectedInnerBorderBrushProperty();
        [[nodiscard]] static auto BlackoutStrikethroughBrushProperty();
        [[nodiscard]] static auto BlackoutBackgroundProperty();
        [[nodiscard]] static auto CalendarItemHoverBackgroundProperty();
        [[nodiscard]] static auto CalendarItemPressedBackgroundProperty();
        [[nodiscard]] static auto CalendarItemDisabledBackgroundProperty();
        [[nodiscard]] static auto TodayBackgroundProperty();
        [[nodiscard]] static auto TodayBlackoutBackgroundProperty();
        [[nodiscard]] static auto TodayHoverBackgroundProperty();
        [[nodiscard]] static auto TodayPressedBackgroundProperty();
        [[nodiscard]] static auto TodayDisabledBackgroundProperty();
        [[nodiscard]] static auto TodayBlackoutForegroundProperty();
        [[nodiscard]] static auto SelectedHoverForegroundProperty();
        [[nodiscard]] static auto SelectedPressedForegroundProperty();
        [[nodiscard]] static auto SelectedDisabledForegroundProperty();
        [[nodiscard]] static auto OutOfScopeHoverForegroundProperty();
        [[nodiscard]] static auto OutOfScopePressedForegroundProperty();
        [[nodiscard]] static auto DisabledForegroundProperty();
        [[nodiscard]] static auto DayItemMarginProperty();
        [[nodiscard]] static auto MonthYearItemMarginProperty();
        [[nodiscard]] static auto FirstOfMonthLabelMarginProperty();
        [[nodiscard]] static auto FirstOfYearDecadeLabelMarginProperty();
        [[nodiscard]] static auto CalendarItemCornerRadiusProperty();
    };
    struct __declspec(empty_bases) CalendarViewDayItem : winrt::Windows::UI::Xaml::Controls::ICalendarViewDayItem,
        impl::base<CalendarViewDayItem, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarViewDayItem, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarViewDayItem(std::nullptr_t) noexcept {}
        CalendarViewDayItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarViewDayItem(ptr, take_ownership_from_abi) {}
        CalendarViewDayItem();
        [[nodiscard]] static auto IsBlackoutProperty();
        [[nodiscard]] static auto DateProperty();
    };
    struct __declspec(empty_bases) CalendarViewDayItemChangingEventArgs : winrt::Windows::UI::Xaml::Controls::ICalendarViewDayItemChangingEventArgs
    {
        CalendarViewDayItemChangingEventArgs(std::nullptr_t) noexcept {}
        CalendarViewDayItemChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarViewDayItemChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CalendarViewSelectedDatesChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ICalendarViewSelectedDatesChangedEventArgs
    {
        CalendarViewSelectedDatesChangedEventArgs(std::nullptr_t) noexcept {}
        CalendarViewSelectedDatesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICalendarViewSelectedDatesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CandidateWindowBoundsChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs
    {
        CandidateWindowBoundsChangedEventArgs(std::nullptr_t) noexcept {}
        CandidateWindowBoundsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Canvas : winrt::Windows::UI::Xaml::Controls::ICanvas,
        impl::base<Canvas, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Canvas, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Canvas(std::nullptr_t) noexcept {}
        Canvas(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICanvas(ptr, take_ownership_from_abi) {}
        Canvas();
        [[nodiscard]] static auto LeftProperty();
        static auto GetLeft(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetLeft(winrt::Windows::UI::Xaml::UIElement const& element, double length);
        [[nodiscard]] static auto TopProperty();
        static auto GetTop(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetTop(winrt::Windows::UI::Xaml::UIElement const& element, double length);
        [[nodiscard]] static auto ZIndexProperty();
        static auto GetZIndex(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetZIndex(winrt::Windows::UI::Xaml::UIElement const& element, int32_t value);
    };
    struct __declspec(empty_bases) CaptureElement : winrt::Windows::UI::Xaml::Controls::ICaptureElement,
        impl::base<CaptureElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CaptureElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CaptureElement(std::nullptr_t) noexcept {}
        CaptureElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICaptureElement(ptr, take_ownership_from_abi) {}
        CaptureElement();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto StretchProperty();
    };
    struct __declspec(empty_bases) CheckBox : winrt::Windows::UI::Xaml::Controls::ICheckBox,
        impl::base<CheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CheckBox(std::nullptr_t) noexcept {}
        CheckBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICheckBox(ptr, take_ownership_from_abi) {}
        CheckBox();
    };
    struct __declspec(empty_bases) ChoosingGroupHeaderContainerEventArgs : winrt::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs
    {
        ChoosingGroupHeaderContainerEventArgs(std::nullptr_t) noexcept {}
        ChoosingGroupHeaderContainerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs(ptr, take_ownership_from_abi) {}
        ChoosingGroupHeaderContainerEventArgs();
    };
    struct __declspec(empty_bases) ChoosingItemContainerEventArgs : winrt::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs
    {
        ChoosingItemContainerEventArgs(std::nullptr_t) noexcept {}
        ChoosingItemContainerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs(ptr, take_ownership_from_abi) {}
        ChoosingItemContainerEventArgs();
    };
    struct __declspec(empty_bases) CleanUpVirtualizedItemEventArgs : winrt::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs,
        impl::base<CleanUpVirtualizedItemEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<CleanUpVirtualizedItemEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        CleanUpVirtualizedItemEventArgs(std::nullptr_t) noexcept {}
        CleanUpVirtualizedItemEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ColorChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IColorChangedEventArgs
    {
        ColorChangedEventArgs(std::nullptr_t) noexcept {}
        ColorChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IColorChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ColorPicker : winrt::Windows::UI::Xaml::Controls::IColorPicker,
        impl::base<ColorPicker, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPicker, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPicker(std::nullptr_t) noexcept {}
        ColorPicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IColorPicker(ptr, take_ownership_from_abi) {}
        ColorPicker();
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto PreviousColorProperty();
        [[nodiscard]] static auto IsAlphaEnabledProperty();
        [[nodiscard]] static auto IsColorSpectrumVisibleProperty();
        [[nodiscard]] static auto IsColorPreviewVisibleProperty();
        [[nodiscard]] static auto IsColorSliderVisibleProperty();
        [[nodiscard]] static auto IsAlphaSliderVisibleProperty();
        [[nodiscard]] static auto IsMoreButtonVisibleProperty();
        [[nodiscard]] static auto IsColorChannelTextInputVisibleProperty();
        [[nodiscard]] static auto IsAlphaTextInputVisibleProperty();
        [[nodiscard]] static auto IsHexInputVisibleProperty();
        [[nodiscard]] static auto MinHueProperty();
        [[nodiscard]] static auto MaxHueProperty();
        [[nodiscard]] static auto MinSaturationProperty();
        [[nodiscard]] static auto MaxSaturationProperty();
        [[nodiscard]] static auto MinValueProperty();
        [[nodiscard]] static auto MaxValueProperty();
        [[nodiscard]] static auto ColorSpectrumShapeProperty();
        [[nodiscard]] static auto ColorSpectrumComponentsProperty();
    };
    struct __declspec(empty_bases) ColumnDefinition : winrt::Windows::UI::Xaml::Controls::IColumnDefinition,
        impl::base<ColumnDefinition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColumnDefinition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColumnDefinition(std::nullptr_t) noexcept {}
        ColumnDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IColumnDefinition(ptr, take_ownership_from_abi) {}
        ColumnDefinition();
        [[nodiscard]] static auto WidthProperty();
        [[nodiscard]] static auto MaxWidthProperty();
        [[nodiscard]] static auto MinWidthProperty();
    };
    struct __declspec(empty_bases) ColumnDefinitionCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::ColumnDefinition>
    {
        ColumnDefinitionCollection(std::nullptr_t) noexcept {}
        ColumnDefinitionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::ColumnDefinition>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ComboBox : winrt::Windows::UI::Xaml::Controls::IComboBox,
        impl::base<ComboBox, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ComboBox, winrt::Windows::UI::Xaml::Controls::IComboBox2, winrt::Windows::UI::Xaml::Controls::IComboBox3, winrt::Windows::UI::Xaml::Controls::IComboBox4, winrt::Windows::UI::Xaml::Controls::IComboBox5, winrt::Windows::UI::Xaml::Controls::IComboBox6, winrt::Windows::UI::Xaml::Controls::IComboBoxOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ComboBox(std::nullptr_t) noexcept {}
        ComboBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IComboBox(ptr, take_ownership_from_abi) {}
        ComboBox();
        using winrt::Windows::UI::Xaml::Controls::IComboBox::IsEditable;
        using impl::consume_t<ComboBox, winrt::Windows::UI::Xaml::Controls::IComboBox6>::IsEditable;
        [[nodiscard]] static auto IsDropDownOpenProperty();
        [[nodiscard]] static auto MaxDropDownHeightProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto IsTextSearchEnabledProperty();
        [[nodiscard]] static auto SelectionChangedTriggerProperty();
        [[nodiscard]] static auto PlaceholderForegroundProperty();
        [[nodiscard]] static auto IsEditableProperty();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto TextBoxStyleProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) ComboBoxItem : winrt::Windows::UI::Xaml::Controls::IComboBoxItem,
        impl::base<ComboBoxItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ComboBoxItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ComboBoxItem(std::nullptr_t) noexcept {}
        ComboBoxItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IComboBoxItem(ptr, take_ownership_from_abi) {}
        ComboBoxItem();
    };
    struct __declspec(empty_bases) ComboBoxTextSubmittedEventArgs : winrt::Windows::UI::Xaml::Controls::IComboBoxTextSubmittedEventArgs
    {
        ComboBoxTextSubmittedEventArgs(std::nullptr_t) noexcept {}
        ComboBoxTextSubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IComboBoxTextSubmittedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandBar : winrt::Windows::UI::Xaml::Controls::ICommandBar,
        impl::base<CommandBar, winrt::Windows::UI::Xaml::Controls::AppBar, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBar, winrt::Windows::UI::Xaml::Controls::ICommandBar2, winrt::Windows::UI::Xaml::Controls::ICommandBar3, winrt::Windows::UI::Xaml::Controls::IAppBar, winrt::Windows::UI::Xaml::Controls::IAppBar2, winrt::Windows::UI::Xaml::Controls::IAppBar3, winrt::Windows::UI::Xaml::Controls::IAppBar4, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides3, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBar(std::nullptr_t) noexcept {}
        CommandBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICommandBar(ptr, take_ownership_from_abi) {}
        CommandBar();
        [[nodiscard]] static auto PrimaryCommandsProperty();
        [[nodiscard]] static auto SecondaryCommandsProperty();
        [[nodiscard]] static auto CommandBarOverflowPresenterStyleProperty();
        [[nodiscard]] static auto DefaultLabelPositionProperty();
        [[nodiscard]] static auto OverflowButtonVisibilityProperty();
        [[nodiscard]] static auto IsDynamicOverflowEnabledProperty();
    };
    struct __declspec(empty_bases) CommandBarFlyout : winrt::Windows::UI::Xaml::Controls::ICommandBarFlyout,
        impl::base<CommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyout(std::nullptr_t) noexcept {}
        CommandBarFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICommandBarFlyout(ptr, take_ownership_from_abi) {}
        CommandBarFlyout();
        using impl::consume_t<CommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<CommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
    };
    struct __declspec(empty_bases) CommandBarOverflowPresenter : winrt::Windows::UI::Xaml::Controls::ICommandBarOverflowPresenter,
        impl::base<CommandBarOverflowPresenter, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarOverflowPresenter, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarOverflowPresenter(std::nullptr_t) noexcept {}
        CommandBarOverflowPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ICommandBarOverflowPresenter(ptr, take_ownership_from_abi) {}
        CommandBarOverflowPresenter();
    };
    struct __declspec(empty_bases) ContainerContentChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs
    {
        ContainerContentChangingEventArgs(std::nullptr_t) noexcept {}
        ContainerContentChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs(ptr, take_ownership_from_abi) {}
        ContainerContentChangingEventArgs();
    };
    struct __declspec(empty_bases) ContentControl : winrt::Windows::UI::Xaml::Controls::IContentControl,
        impl::base<ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentControl(std::nullptr_t) noexcept {}
        ContentControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentControl(ptr, take_ownership_from_abi) {}
        ContentControl();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto ContentTemplateProperty();
        [[nodiscard]] static auto ContentTemplateSelectorProperty();
        [[nodiscard]] static auto ContentTransitionsProperty();
    };
    struct __declspec(empty_bases) ContentDialog : winrt::Windows::UI::Xaml::Controls::IContentDialog,
        impl::base<ContentDialog, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentDialog, winrt::Windows::UI::Xaml::Controls::IContentDialog2, winrt::Windows::UI::Xaml::Controls::IContentDialog3, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentDialog(std::nullptr_t) noexcept {}
        ContentDialog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialog(ptr, take_ownership_from_abi) {}
        ContentDialog();
        using winrt::Windows::UI::Xaml::Controls::IContentDialog::ShowAsync;
        using impl::consume_t<ContentDialog, winrt::Windows::UI::Xaml::Controls::IContentDialog3>::ShowAsync;
        [[nodiscard]] static auto TitleProperty();
        [[nodiscard]] static auto TitleTemplateProperty();
        [[nodiscard]] static auto FullSizeDesiredProperty();
        [[nodiscard]] static auto PrimaryButtonTextProperty();
        [[nodiscard]] static auto SecondaryButtonTextProperty();
        [[nodiscard]] static auto PrimaryButtonCommandProperty();
        [[nodiscard]] static auto SecondaryButtonCommandProperty();
        [[nodiscard]] static auto PrimaryButtonCommandParameterProperty();
        [[nodiscard]] static auto SecondaryButtonCommandParameterProperty();
        [[nodiscard]] static auto IsPrimaryButtonEnabledProperty();
        [[nodiscard]] static auto IsSecondaryButtonEnabledProperty();
        [[nodiscard]] static auto CloseButtonTextProperty();
        [[nodiscard]] static auto CloseButtonCommandProperty();
        [[nodiscard]] static auto CloseButtonCommandParameterProperty();
        [[nodiscard]] static auto PrimaryButtonStyleProperty();
        [[nodiscard]] static auto SecondaryButtonStyleProperty();
        [[nodiscard]] static auto CloseButtonStyleProperty();
        [[nodiscard]] static auto DefaultButtonProperty();
    };
    struct __declspec(empty_bases) ContentDialogButtonClickDeferral : winrt::Windows::UI::Xaml::Controls::IContentDialogButtonClickDeferral
    {
        ContentDialogButtonClickDeferral(std::nullptr_t) noexcept {}
        ContentDialogButtonClickDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogButtonClickDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentDialogButtonClickEventArgs : winrt::Windows::UI::Xaml::Controls::IContentDialogButtonClickEventArgs
    {
        ContentDialogButtonClickEventArgs(std::nullptr_t) noexcept {}
        ContentDialogButtonClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogButtonClickEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentDialogClosedEventArgs : winrt::Windows::UI::Xaml::Controls::IContentDialogClosedEventArgs
    {
        ContentDialogClosedEventArgs(std::nullptr_t) noexcept {}
        ContentDialogClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentDialogClosingDeferral : winrt::Windows::UI::Xaml::Controls::IContentDialogClosingDeferral
    {
        ContentDialogClosingDeferral(std::nullptr_t) noexcept {}
        ContentDialogClosingDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogClosingDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentDialogClosingEventArgs : winrt::Windows::UI::Xaml::Controls::IContentDialogClosingEventArgs
    {
        ContentDialogClosingEventArgs(std::nullptr_t) noexcept {}
        ContentDialogClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentDialogOpenedEventArgs : winrt::Windows::UI::Xaml::Controls::IContentDialogOpenedEventArgs
    {
        ContentDialogOpenedEventArgs(std::nullptr_t) noexcept {}
        ContentDialogOpenedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentDialogOpenedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentLinkChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IContentLinkChangedEventArgs
    {
        ContentLinkChangedEventArgs(std::nullptr_t) noexcept {}
        ContentLinkChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentLinkChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentPresenter : winrt::Windows::UI::Xaml::Controls::IContentPresenter,
        impl::base<ContentPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentPresenter, winrt::Windows::UI::Xaml::Controls::IContentPresenter2, winrt::Windows::UI::Xaml::Controls::IContentPresenter3, winrt::Windows::UI::Xaml::Controls::IContentPresenter4, winrt::Windows::UI::Xaml::Controls::IContentPresenter5, winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentPresenter(std::nullptr_t) noexcept {}
        ContentPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContentPresenter(ptr, take_ownership_from_abi) {}
        ContentPresenter();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto ContentTemplateProperty();
        [[nodiscard]] static auto ContentTemplateSelectorProperty();
        [[nodiscard]] static auto ContentTransitionsProperty();
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto OpticalMarginAlignmentProperty();
        [[nodiscard]] static auto TextLineBoundsProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto TextWrappingProperty();
        [[nodiscard]] static auto MaxLinesProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto HorizontalContentAlignmentProperty();
        [[nodiscard]] static auto VerticalContentAlignmentProperty();
        [[nodiscard]] static auto BackgroundSizingProperty();
    };
    struct __declspec(empty_bases) ContextMenuEventArgs : winrt::Windows::UI::Xaml::Controls::IContextMenuEventArgs,
        impl::base<ContextMenuEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ContextMenuEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        ContextMenuEventArgs(std::nullptr_t) noexcept {}
        ContextMenuEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IContextMenuEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Control : winrt::Windows::UI::Xaml::Controls::IControl,
        impl::base<Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Control, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Control(std::nullptr_t) noexcept {}
        Control(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IControl(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto IsEnabledProperty();
        [[nodiscard]] static auto TabIndexProperty();
        [[nodiscard]] static auto TabNavigationProperty();
        [[nodiscard]] static auto TemplateProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto HorizontalContentAlignmentProperty();
        [[nodiscard]] static auto VerticalContentAlignmentProperty();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto DefaultStyleKeyProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto UseSystemFocusVisualsProperty();
        [[nodiscard]] static auto IsTemplateFocusTargetProperty();
        static auto GetIsTemplateFocusTarget(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetIsTemplateFocusTarget(winrt::Windows::UI::Xaml::FrameworkElement const& element, bool value);
        [[nodiscard]] static auto IsFocusEngagementEnabledProperty();
        [[nodiscard]] static auto IsFocusEngagedProperty();
        [[nodiscard]] static auto RequiresPointerProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto DefaultStyleResourceUriProperty();
        [[nodiscard]] static auto IsTemplateKeyTipTargetProperty();
        static auto GetIsTemplateKeyTipTarget(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsTemplateKeyTipTarget(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto BackgroundSizingProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
    };
    struct __declspec(empty_bases) ControlTemplate : winrt::Windows::UI::Xaml::Controls::IControlTemplate,
        impl::base<ControlTemplate, winrt::Windows::UI::Xaml::FrameworkTemplate, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ControlTemplate, winrt::Windows::UI::Xaml::IFrameworkTemplate, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ControlTemplate(std::nullptr_t) noexcept {}
        ControlTemplate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IControlTemplate(ptr, take_ownership_from_abi) {}
        ControlTemplate();
    };
    struct __declspec(empty_bases) DataTemplateSelector : winrt::Windows::UI::Xaml::Controls::IDataTemplateSelector,
        impl::require<DataTemplateSelector, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelector2, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2, winrt::Windows::UI::Xaml::IElementFactory>
    {
        DataTemplateSelector(std::nullptr_t) noexcept {}
        DataTemplateSelector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDataTemplateSelector(ptr, take_ownership_from_abi) {}
        DataTemplateSelector();
        using winrt::Windows::UI::Xaml::Controls::IDataTemplateSelector::SelectTemplate;
        using impl::consume_t<DataTemplateSelector, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelector2>::SelectTemplate;
        using impl::consume_t<DataTemplateSelector, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides>::SelectTemplateCore;
        using impl::consume_t<DataTemplateSelector, winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2>::SelectTemplateCore;
    };
    struct __declspec(empty_bases) DatePickedEventArgs : winrt::Windows::UI::Xaml::Controls::IDatePickedEventArgs,
        impl::base<DatePickedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DatePickedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DatePickedEventArgs(std::nullptr_t) noexcept {}
        DatePickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickedEventArgs(ptr, take_ownership_from_abi) {}
        DatePickedEventArgs();
    };
    struct __declspec(empty_bases) DatePicker : winrt::Windows::UI::Xaml::Controls::IDatePicker,
        impl::base<DatePicker, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DatePicker, winrt::Windows::UI::Xaml::Controls::IDatePicker2, winrt::Windows::UI::Xaml::Controls::IDatePicker3, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DatePicker(std::nullptr_t) noexcept {}
        DatePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePicker(ptr, take_ownership_from_abi) {}
        DatePicker();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto CalendarIdentifierProperty();
        [[nodiscard]] static auto DateProperty();
        [[nodiscard]] static auto DayVisibleProperty();
        [[nodiscard]] static auto MonthVisibleProperty();
        [[nodiscard]] static auto YearVisibleProperty();
        [[nodiscard]] static auto DayFormatProperty();
        [[nodiscard]] static auto MonthFormatProperty();
        [[nodiscard]] static auto YearFormatProperty();
        [[nodiscard]] static auto MinYearProperty();
        [[nodiscard]] static auto MaxYearProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto SelectedDateProperty();
    };
    struct __declspec(empty_bases) DatePickerFlyout : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyout,
        impl::base<DatePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DatePickerFlyout, winrt::Windows::UI::Xaml::Controls::IDatePickerFlyout2, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DatePickerFlyout(std::nullptr_t) noexcept {}
        DatePickerFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyout(ptr, take_ownership_from_abi) {}
        DatePickerFlyout();
        using impl::consume_t<DatePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<DatePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto CalendarIdentifierProperty();
        [[nodiscard]] static auto DateProperty();
        [[nodiscard]] static auto DayVisibleProperty();
        [[nodiscard]] static auto MonthVisibleProperty();
        [[nodiscard]] static auto YearVisibleProperty();
        [[nodiscard]] static auto MinYearProperty();
        [[nodiscard]] static auto MaxYearProperty();
        [[nodiscard]] static auto DayFormatProperty();
        [[nodiscard]] static auto MonthFormatProperty();
        [[nodiscard]] static auto YearFormatProperty();
    };
    struct __declspec(empty_bases) DatePickerFlyoutItem : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyoutItem,
        impl::base<DatePickerFlyoutItem, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DatePickerFlyoutItem, winrt::Windows::UI::Xaml::Data::ICustomPropertyProvider, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DatePickerFlyoutItem(std::nullptr_t) noexcept {}
        DatePickerFlyoutItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyoutItem(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto PrimaryTextProperty();
        [[nodiscard]] static auto SecondaryTextProperty();
    };
    struct __declspec(empty_bases) DatePickerFlyoutPresenter : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyoutPresenter,
        impl::base<DatePickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DatePickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::IDatePickerFlyoutPresenter2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DatePickerFlyoutPresenter(std::nullptr_t) noexcept {}
        DatePickerFlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickerFlyoutPresenter(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsDefaultShadowEnabledProperty();
    };
    struct __declspec(empty_bases) DatePickerSelectedValueChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IDatePickerSelectedValueChangedEventArgs
    {
        DatePickerSelectedValueChangedEventArgs(std::nullptr_t) noexcept {}
        DatePickerSelectedValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickerSelectedValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DatePickerValueChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IDatePickerValueChangedEventArgs
    {
        DatePickerValueChangedEventArgs(std::nullptr_t) noexcept {}
        DatePickerValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDatePickerValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragItemsCompletedEventArgs : winrt::Windows::UI::Xaml::Controls::IDragItemsCompletedEventArgs
    {
        DragItemsCompletedEventArgs(std::nullptr_t) noexcept {}
        DragItemsCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDragItemsCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragItemsStartingEventArgs : winrt::Windows::UI::Xaml::Controls::IDragItemsStartingEventArgs
    {
        DragItemsStartingEventArgs(std::nullptr_t) noexcept {}
        DragItemsStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDragItemsStartingEventArgs(ptr, take_ownership_from_abi) {}
        DragItemsStartingEventArgs();
    };
    struct __declspec(empty_bases) DropDownButton : winrt::Windows::UI::Xaml::Controls::IDropDownButton,
        impl::base<DropDownButton, winrt::Windows::UI::Xaml::Controls::Button, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DropDownButton, winrt::Windows::UI::Xaml::Controls::IButton, winrt::Windows::UI::Xaml::Controls::IButtonWithFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DropDownButton(std::nullptr_t) noexcept {}
        DropDownButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDropDownButton(ptr, take_ownership_from_abi) {}
        DropDownButton();
    };
    struct __declspec(empty_bases) DropDownButtonAutomationPeer : winrt::Windows::UI::Xaml::Controls::IDropDownButtonAutomationPeer,
        impl::base<DropDownButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<DropDownButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider, winrt::Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Provider::IInvokeProvider, winrt::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer7, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer9, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        DropDownButtonAutomationPeer(std::nullptr_t) noexcept {}
        DropDownButtonAutomationPeer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDropDownButtonAutomationPeer(ptr, take_ownership_from_abi) {}
        explicit DropDownButtonAutomationPeer(winrt::Windows::UI::Xaml::Controls::DropDownButton const& owner);
    };
    struct __declspec(empty_bases) DynamicOverflowItemsChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IDynamicOverflowItemsChangingEventArgs
    {
        DynamicOverflowItemsChangingEventArgs(std::nullptr_t) noexcept {}
        DynamicOverflowItemsChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IDynamicOverflowItemsChangingEventArgs(ptr, take_ownership_from_abi) {}
        DynamicOverflowItemsChangingEventArgs();
    };
    struct __declspec(empty_bases) FlipView : winrt::Windows::UI::Xaml::Controls::IFlipView,
        impl::base<FlipView, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FlipView, winrt::Windows::UI::Xaml::Controls::IFlipView2, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FlipView(std::nullptr_t) noexcept {}
        FlipView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFlipView(ptr, take_ownership_from_abi) {}
        FlipView();
        [[nodiscard]] static auto UseTouchAnimationsForAllNavigationProperty();
    };
    struct __declspec(empty_bases) FlipViewItem : winrt::Windows::UI::Xaml::Controls::IFlipViewItem,
        impl::base<FlipViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FlipViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FlipViewItem(std::nullptr_t) noexcept {}
        FlipViewItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFlipViewItem(ptr, take_ownership_from_abi) {}
        FlipViewItem();
    };
    struct __declspec(empty_bases) Flyout : winrt::Windows::UI::Xaml::Controls::IFlyout,
        impl::base<Flyout, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Flyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Flyout(std::nullptr_t) noexcept {}
        Flyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFlyout(ptr, take_ownership_from_abi) {}
        Flyout();
        using impl::consume_t<Flyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<Flyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto FlyoutPresenterStyleProperty();
    };
    struct __declspec(empty_bases) FlyoutPresenter : winrt::Windows::UI::Xaml::Controls::IFlyoutPresenter,
        impl::base<FlyoutPresenter, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FlyoutPresenter, winrt::Windows::UI::Xaml::Controls::IFlyoutPresenter2, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FlyoutPresenter(std::nullptr_t) noexcept {}
        FlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFlyoutPresenter(ptr, take_ownership_from_abi) {}
        FlyoutPresenter();
        [[nodiscard]] static auto IsDefaultShadowEnabledProperty();
    };
    struct __declspec(empty_bases) FocusDisengagedEventArgs : winrt::Windows::UI::Xaml::Controls::IFocusDisengagedEventArgs,
        impl::base<FocusDisengagedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<FocusDisengagedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        FocusDisengagedEventArgs(std::nullptr_t) noexcept {}
        FocusDisengagedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFocusDisengagedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusEngagedEventArgs : winrt::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs,
        impl::base<FocusEngagedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<FocusEngagedEventArgs, winrt::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs2, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        FocusEngagedEventArgs(std::nullptr_t) noexcept {}
        FocusEngagedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FontIcon : winrt::Windows::UI::Xaml::Controls::IFontIcon,
        impl::base<FontIcon, winrt::Windows::UI::Xaml::Controls::IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FontIcon, winrt::Windows::UI::Xaml::Controls::IFontIcon2, winrt::Windows::UI::Xaml::Controls::IFontIcon3, winrt::Windows::UI::Xaml::Controls::IIconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FontIcon(std::nullptr_t) noexcept {}
        FontIcon(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFontIcon(ptr, take_ownership_from_abi) {}
        FontIcon();
        [[nodiscard]] static auto GlyphProperty();
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto MirroredWhenRightToLeftProperty();
    };
    struct __declspec(empty_bases) FontIconSource : winrt::Windows::UI::Xaml::Controls::IFontIconSource,
        impl::base<FontIconSource, winrt::Windows::UI::Xaml::Controls::IconSource, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FontIconSource, winrt::Windows::UI::Xaml::Controls::IIconSource, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FontIconSource(std::nullptr_t) noexcept {}
        FontIconSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFontIconSource(ptr, take_ownership_from_abi) {}
        FontIconSource();
        [[nodiscard]] static auto GlyphProperty();
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto MirroredWhenRightToLeftProperty();
    };
    struct __declspec(empty_bases) Frame : winrt::Windows::UI::Xaml::Controls::IFrame,
        impl::base<Frame, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Frame, winrt::Windows::UI::Xaml::Controls::IFrame2, winrt::Windows::UI::Xaml::Controls::IFrame3, winrt::Windows::UI::Xaml::Controls::IFrame4, winrt::Windows::UI::Xaml::Controls::IFrame5, winrt::Windows::UI::Xaml::Controls::INavigate, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Frame(std::nullptr_t) noexcept {}
        Frame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IFrame(ptr, take_ownership_from_abi) {}
        Frame();
        using winrt::Windows::UI::Xaml::Controls::IFrame::GoBack;
        using impl::consume_t<Frame, winrt::Windows::UI::Xaml::Controls::IFrame3>::GoBack;
        using winrt::Windows::UI::Xaml::Controls::IFrame::Navigate;
        using impl::consume_t<Frame, winrt::Windows::UI::Xaml::Controls::IFrame2>::Navigate;
        using impl::consume_t<Frame, winrt::Windows::UI::Xaml::Controls::INavigate>::Navigate;
        using winrt::Windows::UI::Xaml::Controls::IFrame::SetNavigationState;
        using impl::consume_t<Frame, winrt::Windows::UI::Xaml::Controls::IFrame4>::SetNavigationState;
        [[nodiscard]] static auto CacheSizeProperty();
        [[nodiscard]] static auto CanGoBackProperty();
        [[nodiscard]] static auto CanGoForwardProperty();
        [[nodiscard]] static auto CurrentSourcePageTypeProperty();
        [[nodiscard]] static auto SourcePageTypeProperty();
        [[nodiscard]] static auto BackStackDepthProperty();
        [[nodiscard]] static auto BackStackProperty();
        [[nodiscard]] static auto ForwardStackProperty();
        [[nodiscard]] static auto IsNavigationStackEnabledProperty();
    };
    struct __declspec(empty_bases) Grid : winrt::Windows::UI::Xaml::Controls::IGrid,
        impl::base<Grid, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Grid, winrt::Windows::UI::Xaml::Controls::IGrid2, winrt::Windows::UI::Xaml::Controls::IGrid3, winrt::Windows::UI::Xaml::Controls::IGrid4, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Grid(std::nullptr_t) noexcept {}
        Grid(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGrid(ptr, take_ownership_from_abi) {}
        Grid();
        [[nodiscard]] static auto RowProperty();
        static auto GetRow(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetRow(winrt::Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
        [[nodiscard]] static auto ColumnProperty();
        static auto GetColumn(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetColumn(winrt::Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
        [[nodiscard]] static auto RowSpanProperty();
        static auto GetRowSpan(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetRowSpan(winrt::Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
        [[nodiscard]] static auto ColumnSpanProperty();
        static auto GetColumnSpan(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetColumnSpan(winrt::Windows::UI::Xaml::FrameworkElement const& element, int32_t value);
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto RowSpacingProperty();
        [[nodiscard]] static auto ColumnSpacingProperty();
        [[nodiscard]] static auto BackgroundSizingProperty();
    };
    struct __declspec(empty_bases) GridView : winrt::Windows::UI::Xaml::Controls::IGridView,
        impl::base<GridView, winrt::Windows::UI::Xaml::Controls::ListViewBase, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GridView, winrt::Windows::UI::Xaml::Controls::IListViewBase, winrt::Windows::UI::Xaml::Controls::IListViewBase2, winrt::Windows::UI::Xaml::Controls::IListViewBase3, winrt::Windows::UI::Xaml::Controls::IListViewBase4, winrt::Windows::UI::Xaml::Controls::IListViewBase5, winrt::Windows::UI::Xaml::Controls::IListViewBase6, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GridView(std::nullptr_t) noexcept {}
        GridView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGridView(ptr, take_ownership_from_abi) {}
        GridView();
    };
    struct __declspec(empty_bases) GridViewHeaderItem : winrt::Windows::UI::Xaml::Controls::IGridViewHeaderItem,
        impl::base<GridViewHeaderItem, winrt::Windows::UI::Xaml::Controls::ListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewHeaderItem, winrt::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewHeaderItem(std::nullptr_t) noexcept {}
        GridViewHeaderItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGridViewHeaderItem(ptr, take_ownership_from_abi) {}
        GridViewHeaderItem();
    };
    struct __declspec(empty_bases) GridViewItem : winrt::Windows::UI::Xaml::Controls::IGridViewItem,
        impl::base<GridViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewItem(std::nullptr_t) noexcept {}
        GridViewItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGridViewItem(ptr, take_ownership_from_abi) {}
        GridViewItem();
    };
    struct __declspec(empty_bases) GroupItem : winrt::Windows::UI::Xaml::Controls::IGroupItem,
        impl::base<GroupItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GroupItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GroupItem(std::nullptr_t) noexcept {}
        GroupItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGroupItem(ptr, take_ownership_from_abi) {}
        GroupItem();
    };
    struct __declspec(empty_bases) GroupStyle : winrt::Windows::UI::Xaml::Controls::IGroupStyle,
        impl::require<GroupStyle, winrt::Windows::UI::Xaml::Controls::IGroupStyle2, winrt::Windows::UI::Xaml::Data::INotifyPropertyChanged>
    {
        GroupStyle(std::nullptr_t) noexcept {}
        GroupStyle(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGroupStyle(ptr, take_ownership_from_abi) {}
        GroupStyle();
    };
    struct __declspec(empty_bases) GroupStyleSelector : winrt::Windows::UI::Xaml::Controls::IGroupStyleSelector,
        impl::require<GroupStyleSelector, winrt::Windows::UI::Xaml::Controls::IGroupStyleSelectorOverrides>
    {
        GroupStyleSelector(std::nullptr_t) noexcept {}
        GroupStyleSelector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IGroupStyleSelector(ptr, take_ownership_from_abi) {}
        GroupStyleSelector();
    };
    struct __declspec(empty_bases) HandwritingPanelClosedEventArgs : winrt::Windows::UI::Xaml::Controls::IHandwritingPanelClosedEventArgs
    {
        HandwritingPanelClosedEventArgs(std::nullptr_t) noexcept {}
        HandwritingPanelClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHandwritingPanelClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HandwritingPanelOpenedEventArgs : winrt::Windows::UI::Xaml::Controls::IHandwritingPanelOpenedEventArgs
    {
        HandwritingPanelOpenedEventArgs(std::nullptr_t) noexcept {}
        HandwritingPanelOpenedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHandwritingPanelOpenedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HandwritingView : winrt::Windows::UI::Xaml::Controls::IHandwritingView,
        impl::base<HandwritingView, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<HandwritingView, winrt::Windows::UI::Xaml::Controls::IHandwritingView2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        HandwritingView(std::nullptr_t) noexcept {}
        HandwritingView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHandwritingView(ptr, take_ownership_from_abi) {}
        HandwritingView();
        [[nodiscard]] static auto PlacementTargetProperty();
        [[nodiscard]] static auto PlacementAlignmentProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto AreCandidatesEnabledProperty();
        [[nodiscard]] static auto IsSwitchToKeyboardEnabledProperty();
        [[nodiscard]] static auto IsCommandBarOpenProperty();
    };
    struct __declspec(empty_bases) HandwritingViewCandidatesChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IHandwritingViewCandidatesChangedEventArgs
    {
        HandwritingViewCandidatesChangedEventArgs(std::nullptr_t) noexcept {}
        HandwritingViewCandidatesChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHandwritingViewCandidatesChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HandwritingViewTextSubmittedEventArgs : winrt::Windows::UI::Xaml::Controls::IHandwritingViewTextSubmittedEventArgs
    {
        HandwritingViewTextSubmittedEventArgs(std::nullptr_t) noexcept {}
        HandwritingViewTextSubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHandwritingViewTextSubmittedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Hub : winrt::Windows::UI::Xaml::Controls::IHub,
        impl::base<Hub, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Hub, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Hub(std::nullptr_t) noexcept {}
        Hub(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHub(ptr, take_ownership_from_abi) {}
        Hub();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto DefaultSectionIndexProperty();
        [[nodiscard]] static auto SemanticZoomOwnerProperty();
        [[nodiscard]] static auto IsActiveViewProperty();
        [[nodiscard]] static auto IsZoomedInViewProperty();
    };
    struct __declspec(empty_bases) HubSection : winrt::Windows::UI::Xaml::Controls::IHubSection,
        impl::base<HubSection, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<HubSection, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        HubSection(std::nullptr_t) noexcept {}
        HubSection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHubSection(ptr, take_ownership_from_abi) {}
        HubSection();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto ContentTemplateProperty();
        [[nodiscard]] static auto IsHeaderInteractiveProperty();
    };
    struct __declspec(empty_bases) HubSectionCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::HubSection>
    {
        HubSectionCollection(std::nullptr_t) noexcept {}
        HubSectionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::HubSection>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HubSectionHeaderClickEventArgs : winrt::Windows::UI::Xaml::Controls::IHubSectionHeaderClickEventArgs
    {
        HubSectionHeaderClickEventArgs(std::nullptr_t) noexcept {}
        HubSectionHeaderClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHubSectionHeaderClickEventArgs(ptr, take_ownership_from_abi) {}
        HubSectionHeaderClickEventArgs();
    };
    struct __declspec(empty_bases) HyperlinkButton : winrt::Windows::UI::Xaml::Controls::IHyperlinkButton,
        impl::base<HyperlinkButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<HyperlinkButton, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        HyperlinkButton(std::nullptr_t) noexcept {}
        HyperlinkButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IHyperlinkButton(ptr, take_ownership_from_abi) {}
        HyperlinkButton();
        [[nodiscard]] static auto NavigateUriProperty();
    };
    struct __declspec(empty_bases) IconElement : winrt::Windows::UI::Xaml::Controls::IIconElement,
        impl::base<IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<IconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        IconElement(std::nullptr_t) noexcept {}
        IconElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IIconElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ForegroundProperty();
    };
    struct __declspec(empty_bases) IconSource : winrt::Windows::UI::Xaml::Controls::IIconSource,
        impl::base<IconSource, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<IconSource, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        IconSource(std::nullptr_t) noexcept {}
        IconSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IIconSource(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ForegroundProperty();
    };
    struct __declspec(empty_bases) IconSourceElement : winrt::Windows::UI::Xaml::Controls::IIconSourceElement,
        impl::base<IconSourceElement, winrt::Windows::UI::Xaml::Controls::IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<IconSourceElement, winrt::Windows::UI::Xaml::Controls::IIconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        IconSourceElement(std::nullptr_t) noexcept {}
        IconSourceElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IIconSourceElement(ptr, take_ownership_from_abi) {}
        IconSourceElement();
        [[nodiscard]] static auto IconSourceProperty();
    };
    struct __declspec(empty_bases) Image : winrt::Windows::UI::Xaml::Controls::IImage,
        impl::base<Image, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Image, winrt::Windows::UI::Xaml::Controls::IImage2, winrt::Windows::UI::Xaml::Controls::IImage3, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Image(std::nullptr_t) noexcept {}
        Image(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IImage(ptr, take_ownership_from_abi) {}
        Image();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto StretchProperty();
        [[nodiscard]] static auto NineGridProperty();
        [[nodiscard]] static auto PlayToSourceProperty();
    };
    struct __declspec(empty_bases) InkCanvas : winrt::Windows::UI::Xaml::Controls::IInkCanvas,
        impl::base<InkCanvas, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkCanvas, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkCanvas(std::nullptr_t) noexcept {}
        InkCanvas(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkCanvas(ptr, take_ownership_from_abi) {}
        InkCanvas();
    };
    struct __declspec(empty_bases) InkToolbar : winrt::Windows::UI::Xaml::Controls::IInkToolbar,
        impl::base<InkToolbar, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbar, winrt::Windows::UI::Xaml::Controls::IInkToolbar2, winrt::Windows::UI::Xaml::Controls::IInkToolbar3, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbar(std::nullptr_t) noexcept {}
        InkToolbar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbar(ptr, take_ownership_from_abi) {}
        InkToolbar();
        [[nodiscard]] static auto InitialControlsProperty();
        [[nodiscard]] static auto ChildrenProperty();
        [[nodiscard]] static auto ActiveToolProperty();
        [[nodiscard]] static auto InkDrawingAttributesProperty();
        [[nodiscard]] static auto IsRulerButtonCheckedProperty();
        [[nodiscard]] static auto TargetInkCanvasProperty();
        [[nodiscard]] static auto IsStencilButtonCheckedProperty();
        [[nodiscard]] static auto ButtonFlyoutPlacementProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto TargetInkPresenterProperty();
    };
    struct __declspec(empty_bases) InkToolbarBallpointPenButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarBallpointPenButton,
        impl::base<InkToolbarBallpointPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarBallpointPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarBallpointPenButton(std::nullptr_t) noexcept {}
        InkToolbarBallpointPenButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarBallpointPenButton(ptr, take_ownership_from_abi) {}
        InkToolbarBallpointPenButton();
    };
    struct __declspec(empty_bases) InkToolbarCustomPen : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPen,
        impl::base<InkToolbarCustomPen, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarCustomPen, winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPenOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarCustomPen(std::nullptr_t) noexcept {}
        InkToolbarCustomPen(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPen(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InkToolbarCustomPenButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPenButton,
        impl::base<InkToolbarCustomPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarCustomPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarCustomPenButton(std::nullptr_t) noexcept {}
        InkToolbarCustomPenButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPenButton(ptr, take_ownership_from_abi) {}
        InkToolbarCustomPenButton();
        [[nodiscard]] static auto CustomPenProperty();
        [[nodiscard]] static auto ConfigurationContentProperty();
    };
    struct __declspec(empty_bases) InkToolbarCustomToggleButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomToggleButton,
        impl::base<InkToolbarCustomToggleButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::CheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarCustomToggleButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::ICheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarCustomToggleButton(std::nullptr_t) noexcept {}
        InkToolbarCustomToggleButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomToggleButton(ptr, take_ownership_from_abi) {}
        InkToolbarCustomToggleButton();
    };
    struct __declspec(empty_bases) InkToolbarCustomToolButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomToolButton,
        impl::base<InkToolbarCustomToolButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarCustomToolButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarCustomToolButton(std::nullptr_t) noexcept {}
        InkToolbarCustomToolButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomToolButton(ptr, take_ownership_from_abi) {}
        InkToolbarCustomToolButton();
        [[nodiscard]] static auto ConfigurationContentProperty();
    };
    struct __declspec(empty_bases) InkToolbarEraserButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarEraserButton,
        impl::base<InkToolbarEraserButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarEraserButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarEraserButton2, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarEraserButton(std::nullptr_t) noexcept {}
        InkToolbarEraserButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarEraserButton(ptr, take_ownership_from_abi) {}
        InkToolbarEraserButton();
        [[nodiscard]] static auto IsClearAllVisibleProperty();
    };
    struct __declspec(empty_bases) InkToolbarFlyoutItem : winrt::Windows::UI::Xaml::Controls::IInkToolbarFlyoutItem,
        impl::base<InkToolbarFlyoutItem, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarFlyoutItem, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarFlyoutItem(std::nullptr_t) noexcept {}
        InkToolbarFlyoutItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarFlyoutItem(ptr, take_ownership_from_abi) {}
        InkToolbarFlyoutItem();
        [[nodiscard]] static auto KindProperty();
        [[nodiscard]] static auto IsCheckedProperty();
    };
    struct __declspec(empty_bases) InkToolbarHighlighterButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarHighlighterButton,
        impl::base<InkToolbarHighlighterButton, winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarHighlighterButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarHighlighterButton(std::nullptr_t) noexcept {}
        InkToolbarHighlighterButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarHighlighterButton(ptr, take_ownership_from_abi) {}
        InkToolbarHighlighterButton();
    };
    struct __declspec(empty_bases) InkToolbarIsStencilButtonCheckedChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IInkToolbarIsStencilButtonCheckedChangedEventArgs
    {
        InkToolbarIsStencilButtonCheckedChangedEventArgs(std::nullptr_t) noexcept {}
        InkToolbarIsStencilButtonCheckedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarIsStencilButtonCheckedChangedEventArgs(ptr, take_ownership_from_abi) {}
        InkToolbarIsStencilButtonCheckedChangedEventArgs();
    };
    struct __declspec(empty_bases) InkToolbarMenuButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarMenuButton,
        impl::base<InkToolbarMenuButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarMenuButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarMenuButton(std::nullptr_t) noexcept {}
        InkToolbarMenuButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarMenuButton(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsExtensionGlyphShownProperty();
    };
    struct __declspec(empty_bases) InkToolbarPenButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton,
        impl::base<InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarPenButton(std::nullptr_t) noexcept {}
        InkToolbarPenButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto PaletteProperty();
        [[nodiscard]] static auto MinStrokeWidthProperty();
        [[nodiscard]] static auto MaxStrokeWidthProperty();
        [[nodiscard]] static auto SelectedBrushProperty();
        [[nodiscard]] static auto SelectedBrushIndexProperty();
        [[nodiscard]] static auto SelectedStrokeWidthProperty();
    };
    struct __declspec(empty_bases) InkToolbarPenConfigurationControl : winrt::Windows::UI::Xaml::Controls::IInkToolbarPenConfigurationControl,
        impl::base<InkToolbarPenConfigurationControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarPenConfigurationControl, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarPenConfigurationControl(std::nullptr_t) noexcept {}
        InkToolbarPenConfigurationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarPenConfigurationControl(ptr, take_ownership_from_abi) {}
        InkToolbarPenConfigurationControl();
        [[nodiscard]] static auto PenButtonProperty();
    };
    struct __declspec(empty_bases) InkToolbarPencilButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarPencilButton,
        impl::base<InkToolbarPencilButton, winrt::Windows::UI::Xaml::Controls::InkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarPencilButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarPenButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarPencilButton(std::nullptr_t) noexcept {}
        InkToolbarPencilButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarPencilButton(ptr, take_ownership_from_abi) {}
        InkToolbarPencilButton();
    };
    struct __declspec(empty_bases) InkToolbarRulerButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarRulerButton,
        impl::base<InkToolbarRulerButton, winrt::Windows::UI::Xaml::Controls::InkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::CheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarRulerButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::ICheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarRulerButton(std::nullptr_t) noexcept {}
        InkToolbarRulerButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarRulerButton(ptr, take_ownership_from_abi) {}
        InkToolbarRulerButton();
        [[nodiscard]] static auto RulerProperty();
    };
    struct __declspec(empty_bases) InkToolbarStencilButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarStencilButton,
        impl::base<InkToolbarStencilButton, winrt::Windows::UI::Xaml::Controls::InkToolbarMenuButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarStencilButton, winrt::Windows::UI::Xaml::Controls::IInkToolbarMenuButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarStencilButton(std::nullptr_t) noexcept {}
        InkToolbarStencilButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarStencilButton(ptr, take_ownership_from_abi) {}
        InkToolbarStencilButton();
        [[nodiscard]] static auto RulerProperty();
        [[nodiscard]] static auto ProtractorProperty();
        [[nodiscard]] static auto SelectedStencilProperty();
        [[nodiscard]] static auto IsRulerItemVisibleProperty();
        [[nodiscard]] static auto IsProtractorItemVisibleProperty();
    };
    struct __declspec(empty_bases) InkToolbarToggleButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarToggleButton,
        impl::base<InkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::CheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarToggleButton, winrt::Windows::UI::Xaml::Controls::ICheckBox, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarToggleButton(std::nullptr_t) noexcept {}
        InkToolbarToggleButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarToggleButton(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InkToolbarToolButton : winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton,
        impl::base<InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InkToolbarToolButton, winrt::Windows::UI::Xaml::Controls::IRadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InkToolbarToolButton(std::nullptr_t) noexcept {}
        InkToolbarToolButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IInkToolbarToolButton(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsExtensionGlyphShownProperty();
    };
    struct __declspec(empty_bases) IsTextTrimmedChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IIsTextTrimmedChangedEventArgs
    {
        IsTextTrimmedChangedEventArgs(std::nullptr_t) noexcept {}
        IsTextTrimmedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IIsTextTrimmedChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemClickEventArgs : winrt::Windows::UI::Xaml::Controls::IItemClickEventArgs,
        impl::base<ItemClickEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ItemClickEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        ItemClickEventArgs(std::nullptr_t) noexcept {}
        ItemClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemClickEventArgs(ptr, take_ownership_from_abi) {}
        ItemClickEventArgs();
    };
    struct __declspec(empty_bases) ItemCollection : winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::Foundation::IInspectable>
    {
        ItemCollection(std::nullptr_t) noexcept {}
        ItemCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IObservableVector<winrt::Windows::Foundation::IInspectable>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemContainerGenerator : winrt::Windows::UI::Xaml::Controls::IItemContainerGenerator
    {
        ItemContainerGenerator(std::nullptr_t) noexcept {}
        ItemContainerGenerator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemContainerGenerator(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemsControl : winrt::Windows::UI::Xaml::Controls::IItemsControl,
        impl::base<ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsControl(std::nullptr_t) noexcept {}
        ItemsControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsControl(ptr, take_ownership_from_abi) {}
        ItemsControl();
        [[nodiscard]] static auto ItemsSourceProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
        [[nodiscard]] static auto ItemTemplateSelectorProperty();
        [[nodiscard]] static auto ItemsPanelProperty();
        [[nodiscard]] static auto DisplayMemberPathProperty();
        [[nodiscard]] static auto ItemContainerStyleProperty();
        [[nodiscard]] static auto ItemContainerStyleSelectorProperty();
        [[nodiscard]] static auto ItemContainerTransitionsProperty();
        [[nodiscard]] static auto GroupStyleSelectorProperty();
        [[nodiscard]] static auto IsGroupingProperty();
        static auto GetItemsOwner(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto ItemsControlFromItemContainer(winrt::Windows::UI::Xaml::DependencyObject const& container);
    };
    struct __declspec(empty_bases) ItemsPanelTemplate : winrt::Windows::UI::Xaml::Controls::IItemsPanelTemplate,
        impl::base<ItemsPanelTemplate, winrt::Windows::UI::Xaml::FrameworkTemplate, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsPanelTemplate, winrt::Windows::UI::Xaml::IFrameworkTemplate, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsPanelTemplate(std::nullptr_t) noexcept {}
        ItemsPanelTemplate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsPanelTemplate(ptr, take_ownership_from_abi) {}
        ItemsPanelTemplate();
    };
    struct __declspec(empty_bases) ItemsPickedEventArgs : winrt::Windows::UI::Xaml::Controls::IItemsPickedEventArgs,
        impl::base<ItemsPickedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsPickedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsPickedEventArgs(std::nullptr_t) noexcept {}
        ItemsPickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsPickedEventArgs(ptr, take_ownership_from_abi) {}
        ItemsPickedEventArgs();
    };
    struct __declspec(empty_bases) ItemsPresenter : winrt::Windows::UI::Xaml::Controls::IItemsPresenter,
        impl::base<ItemsPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsPresenter, winrt::Windows::UI::Xaml::Controls::IItemsPresenter2, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsPresenter(std::nullptr_t) noexcept {}
        ItemsPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsPresenter(ptr, take_ownership_from_abi) {}
        ItemsPresenter();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto HeaderTransitionsProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto FooterProperty();
        [[nodiscard]] static auto FooterTemplateProperty();
        [[nodiscard]] static auto FooterTransitionsProperty();
    };
    struct __declspec(empty_bases) ItemsStackPanel : winrt::Windows::UI::Xaml::Controls::IItemsStackPanel,
        impl::base<ItemsStackPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsStackPanel, winrt::Windows::UI::Xaml::Controls::IItemsStackPanel2, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsStackPanel(std::nullptr_t) noexcept {}
        ItemsStackPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsStackPanel(ptr, take_ownership_from_abi) {}
        ItemsStackPanel();
        [[nodiscard]] static auto GroupPaddingProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto GroupHeaderPlacementProperty();
        [[nodiscard]] static auto CacheLengthProperty();
        [[nodiscard]] static auto AreStickyGroupHeadersEnabledProperty();
    };
    struct __declspec(empty_bases) ItemsWrapGrid : winrt::Windows::UI::Xaml::Controls::IItemsWrapGrid,
        impl::base<ItemsWrapGrid, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ItemsWrapGrid, winrt::Windows::UI::Xaml::Controls::IItemsWrapGrid2, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ItemsWrapGrid(std::nullptr_t) noexcept {}
        ItemsWrapGrid(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IItemsWrapGrid(ptr, take_ownership_from_abi) {}
        ItemsWrapGrid();
        [[nodiscard]] static auto GroupPaddingProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto MaximumRowsOrColumnsProperty();
        [[nodiscard]] static auto ItemWidthProperty();
        [[nodiscard]] static auto ItemHeightProperty();
        [[nodiscard]] static auto GroupHeaderPlacementProperty();
        [[nodiscard]] static auto CacheLengthProperty();
        [[nodiscard]] static auto AreStickyGroupHeadersEnabledProperty();
    };
    struct __declspec(empty_bases) ListBox : winrt::Windows::UI::Xaml::Controls::IListBox,
        impl::base<ListBox, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListBox, winrt::Windows::UI::Xaml::Controls::IListBox2, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListBox(std::nullptr_t) noexcept {}
        ListBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListBox(ptr, take_ownership_from_abi) {}
        ListBox();
        [[nodiscard]] static auto SelectionModeProperty();
        [[nodiscard]] static auto SingleSelectionFollowsFocusProperty();
    };
    struct __declspec(empty_bases) ListBoxItem : winrt::Windows::UI::Xaml::Controls::IListBoxItem,
        impl::base<ListBoxItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListBoxItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListBoxItem(std::nullptr_t) noexcept {}
        ListBoxItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListBoxItem(ptr, take_ownership_from_abi) {}
        ListBoxItem();
    };
    struct __declspec(empty_bases) ListPickerFlyout : winrt::Windows::UI::Xaml::Controls::IListPickerFlyout,
        impl::base<ListPickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListPickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListPickerFlyout(std::nullptr_t) noexcept {}
        ListPickerFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListPickerFlyout(ptr, take_ownership_from_abi) {}
        ListPickerFlyout();
        using impl::consume_t<ListPickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<ListPickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto ItemsSourceProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
        [[nodiscard]] static auto DisplayMemberPathProperty();
        [[nodiscard]] static auto SelectionModeProperty();
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto SelectedValueProperty();
        [[nodiscard]] static auto SelectedValuePathProperty();
    };
    struct __declspec(empty_bases) ListPickerFlyoutPresenter : winrt::Windows::UI::Xaml::Controls::IListPickerFlyoutPresenter,
        impl::base<ListPickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListPickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListPickerFlyoutPresenter(std::nullptr_t) noexcept {}
        ListPickerFlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListPickerFlyoutPresenter(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ListView : winrt::Windows::UI::Xaml::Controls::IListView,
        impl::base<ListView, winrt::Windows::UI::Xaml::Controls::ListViewBase, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListView, winrt::Windows::UI::Xaml::Controls::IListViewBase, winrt::Windows::UI::Xaml::Controls::IListViewBase2, winrt::Windows::UI::Xaml::Controls::IListViewBase3, winrt::Windows::UI::Xaml::Controls::IListViewBase4, winrt::Windows::UI::Xaml::Controls::IListViewBase5, winrt::Windows::UI::Xaml::Controls::IListViewBase6, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListView(std::nullptr_t) noexcept {}
        ListView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListView(ptr, take_ownership_from_abi) {}
        ListView();
    };
    struct __declspec(empty_bases) ListViewBase : winrt::Windows::UI::Xaml::Controls::IListViewBase,
        impl::base<ListViewBase, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewBase, winrt::Windows::UI::Xaml::Controls::IListViewBase2, winrt::Windows::UI::Xaml::Controls::IListViewBase3, winrt::Windows::UI::Xaml::Controls::IListViewBase4, winrt::Windows::UI::Xaml::Controls::IListViewBase5, winrt::Windows::UI::Xaml::Controls::IListViewBase6, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewBase(std::nullptr_t) noexcept {}
        ListViewBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListViewBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto SelectionModeProperty();
        [[nodiscard]] static auto IsSwipeEnabledProperty();
        [[nodiscard]] static auto CanDragItemsProperty();
        [[nodiscard]] static auto CanReorderItemsProperty();
        [[nodiscard]] static auto IsItemClickEnabledProperty();
        [[nodiscard]] static auto DataFetchSizeProperty();
        [[nodiscard]] static auto IncrementalLoadingThresholdProperty();
        [[nodiscard]] static auto IncrementalLoadingTriggerProperty();
        [[nodiscard]] static auto SemanticZoomOwnerProperty();
        [[nodiscard]] static auto IsActiveViewProperty();
        [[nodiscard]] static auto IsZoomedInViewProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto HeaderTransitionsProperty();
        [[nodiscard]] static auto ShowsScrollingPlaceholdersProperty();
        [[nodiscard]] static auto FooterProperty();
        [[nodiscard]] static auto FooterTemplateProperty();
        [[nodiscard]] static auto FooterTransitionsProperty();
        [[nodiscard]] static auto ReorderModeProperty();
        [[nodiscard]] static auto IsMultiSelectCheckBoxEnabledProperty();
        [[nodiscard]] static auto SingleSelectionFollowsFocusProperty();
    };
    struct __declspec(empty_bases) ListViewBaseHeaderItem : winrt::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem,
        impl::base<ListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewBaseHeaderItem(std::nullptr_t) noexcept {}
        ListViewBaseHeaderItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ListViewHeaderItem : winrt::Windows::UI::Xaml::Controls::IListViewHeaderItem,
        impl::base<ListViewHeaderItem, winrt::Windows::UI::Xaml::Controls::ListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewHeaderItem, winrt::Windows::UI::Xaml::Controls::IListViewBaseHeaderItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewHeaderItem(std::nullptr_t) noexcept {}
        ListViewHeaderItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListViewHeaderItem(ptr, take_ownership_from_abi) {}
        ListViewHeaderItem();
    };
    struct __declspec(empty_bases) ListViewItem : winrt::Windows::UI::Xaml::Controls::IListViewItem,
        impl::base<ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewItem(std::nullptr_t) noexcept {}
        ListViewItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListViewItem(ptr, take_ownership_from_abi) {}
        ListViewItem();
    };
    struct __declspec(empty_bases) ListViewPersistenceHelper : winrt::Windows::UI::Xaml::Controls::IListViewPersistenceHelper
    {
        ListViewPersistenceHelper(std::nullptr_t) noexcept {}
        ListViewPersistenceHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IListViewPersistenceHelper(ptr, take_ownership_from_abi) {}
        static auto GetRelativeScrollPosition(winrt::Windows::UI::Xaml::Controls::ListViewBase const& listViewBase, winrt::Windows::UI::Xaml::Controls::ListViewItemToKeyHandler const& itemToKeyHandler);
        static auto SetRelativeScrollPositionAsync(winrt::Windows::UI::Xaml::Controls::ListViewBase const& listViewBase, param::hstring const& relativeScrollPosition, winrt::Windows::UI::Xaml::Controls::ListViewKeyToItemHandler const& keyToItemHandler);
    };
    struct __declspec(empty_bases) MediaElement : winrt::Windows::UI::Xaml::Controls::IMediaElement,
        impl::base<MediaElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MediaElement, winrt::Windows::UI::Xaml::Controls::IMediaElement2, winrt::Windows::UI::Xaml::Controls::IMediaElement3, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MediaElement(std::nullptr_t) noexcept {}
        MediaElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMediaElement(ptr, take_ownership_from_abi) {}
        MediaElement();
        [[nodiscard]] static auto PosterSourceProperty();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto IsMutedProperty();
        [[nodiscard]] static auto IsAudioOnlyProperty();
        [[nodiscard]] static auto AutoPlayProperty();
        [[nodiscard]] static auto VolumeProperty();
        [[nodiscard]] static auto BalanceProperty();
        [[nodiscard]] static auto NaturalVideoHeightProperty();
        [[nodiscard]] static auto NaturalVideoWidthProperty();
        [[nodiscard]] static auto NaturalDurationProperty();
        [[nodiscard]] static auto PositionProperty();
        [[nodiscard]] static auto DownloadProgressProperty();
        [[nodiscard]] static auto BufferingProgressProperty();
        [[nodiscard]] static auto DownloadProgressOffsetProperty();
        [[nodiscard]] static auto CurrentStateProperty();
        [[nodiscard]] static auto CanSeekProperty();
        [[nodiscard]] static auto CanPauseProperty();
        [[nodiscard]] static auto AudioStreamCountProperty();
        [[nodiscard]] static auto AudioStreamIndexProperty();
        [[nodiscard]] static auto PlaybackRateProperty();
        [[nodiscard]] static auto IsLoopingProperty();
        [[nodiscard]] static auto PlayToSourceProperty();
        [[nodiscard]] static auto DefaultPlaybackRateProperty();
        [[nodiscard]] static auto AspectRatioWidthProperty();
        [[nodiscard]] static auto AspectRatioHeightProperty();
        [[nodiscard]] static auto RealTimePlaybackProperty();
        [[nodiscard]] static auto AudioCategoryProperty();
        [[nodiscard]] static auto AudioDeviceTypeProperty();
        [[nodiscard]] static auto ProtectionManagerProperty();
        [[nodiscard]] static auto Stereo3DVideoPackingModeProperty();
        [[nodiscard]] static auto Stereo3DVideoRenderModeProperty();
        [[nodiscard]] static auto IsStereo3DVideoProperty();
        [[nodiscard]] static auto ActualStereo3DVideoPackingModeProperty();
        [[nodiscard]] static auto AreTransportControlsEnabledProperty();
        [[nodiscard]] static auto StretchProperty();
        [[nodiscard]] static auto IsFullWindowProperty();
        [[nodiscard]] static auto PlayToPreferredSourceUriProperty();
    };
    struct __declspec(empty_bases) MediaPlayerElement : winrt::Windows::UI::Xaml::Controls::IMediaPlayerElement,
        impl::base<MediaPlayerElement, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MediaPlayerElement, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MediaPlayerElement(std::nullptr_t) noexcept {}
        MediaPlayerElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMediaPlayerElement(ptr, take_ownership_from_abi) {}
        MediaPlayerElement();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto AreTransportControlsEnabledProperty();
        [[nodiscard]] static auto PosterSourceProperty();
        [[nodiscard]] static auto StretchProperty();
        [[nodiscard]] static auto AutoPlayProperty();
        [[nodiscard]] static auto IsFullWindowProperty();
        [[nodiscard]] static auto MediaPlayerProperty();
    };
    struct __declspec(empty_bases) MediaPlayerPresenter : winrt::Windows::UI::Xaml::Controls::IMediaPlayerPresenter,
        impl::base<MediaPlayerPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MediaPlayerPresenter, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MediaPlayerPresenter(std::nullptr_t) noexcept {}
        MediaPlayerPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMediaPlayerPresenter(ptr, take_ownership_from_abi) {}
        MediaPlayerPresenter();
        [[nodiscard]] static auto MediaPlayerProperty();
        [[nodiscard]] static auto StretchProperty();
        [[nodiscard]] static auto IsFullWindowProperty();
    };
    struct __declspec(empty_bases) MediaTransportControls : winrt::Windows::UI::Xaml::Controls::IMediaTransportControls,
        impl::base<MediaTransportControls, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MediaTransportControls, winrt::Windows::UI::Xaml::Controls::IMediaTransportControls2, winrt::Windows::UI::Xaml::Controls::IMediaTransportControls3, winrt::Windows::UI::Xaml::Controls::IMediaTransportControls4, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MediaTransportControls(std::nullptr_t) noexcept {}
        MediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMediaTransportControls(ptr, take_ownership_from_abi) {}
        MediaTransportControls();
        [[nodiscard]] static auto IsFullWindowButtonVisibleProperty();
        [[nodiscard]] static auto IsFullWindowEnabledProperty();
        [[nodiscard]] static auto IsZoomButtonVisibleProperty();
        [[nodiscard]] static auto IsZoomEnabledProperty();
        [[nodiscard]] static auto IsFastForwardButtonVisibleProperty();
        [[nodiscard]] static auto IsFastForwardEnabledProperty();
        [[nodiscard]] static auto IsFastRewindButtonVisibleProperty();
        [[nodiscard]] static auto IsFastRewindEnabledProperty();
        [[nodiscard]] static auto IsStopButtonVisibleProperty();
        [[nodiscard]] static auto IsStopEnabledProperty();
        [[nodiscard]] static auto IsVolumeButtonVisibleProperty();
        [[nodiscard]] static auto IsVolumeEnabledProperty();
        [[nodiscard]] static auto IsPlaybackRateButtonVisibleProperty();
        [[nodiscard]] static auto IsPlaybackRateEnabledProperty();
        [[nodiscard]] static auto IsSeekBarVisibleProperty();
        [[nodiscard]] static auto IsSeekEnabledProperty();
        [[nodiscard]] static auto IsCompactProperty();
        [[nodiscard]] static auto IsSkipForwardButtonVisibleProperty();
        [[nodiscard]] static auto IsSkipForwardEnabledProperty();
        [[nodiscard]] static auto IsSkipBackwardButtonVisibleProperty();
        [[nodiscard]] static auto IsSkipBackwardEnabledProperty();
        [[nodiscard]] static auto IsNextTrackButtonVisibleProperty();
        [[nodiscard]] static auto IsPreviousTrackButtonVisibleProperty();
        [[nodiscard]] static auto FastPlayFallbackBehaviourProperty();
        [[nodiscard]] static auto ShowAndHideAutomaticallyProperty();
        [[nodiscard]] static auto IsRepeatEnabledProperty();
        [[nodiscard]] static auto IsRepeatButtonVisibleProperty();
        [[nodiscard]] static auto IsCompactOverlayButtonVisibleProperty();
        [[nodiscard]] static auto IsCompactOverlayEnabledProperty();
    };
    struct __declspec(empty_bases) MediaTransportControlsHelper : winrt::Windows::UI::Xaml::Controls::IMediaTransportControlsHelper
    {
        MediaTransportControlsHelper(std::nullptr_t) noexcept {}
        MediaTransportControlsHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMediaTransportControlsHelper(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DropoutOrderProperty();
        static auto GetDropoutOrder(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetDropoutOrder(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IReference<int32_t> const& value);
    };
    struct __declspec(empty_bases) MenuBar : winrt::Windows::UI::Xaml::Controls::IMenuBar,
        impl::base<MenuBar, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuBar, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuBar(std::nullptr_t) noexcept {}
        MenuBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuBar(ptr, take_ownership_from_abi) {}
        MenuBar();
        [[nodiscard]] static auto ItemsProperty();
    };
    struct __declspec(empty_bases) MenuBarItem : winrt::Windows::UI::Xaml::Controls::IMenuBarItem,
        impl::base<MenuBarItem, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuBarItem, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuBarItem(std::nullptr_t) noexcept {}
        MenuBarItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuBarItem(ptr, take_ownership_from_abi) {}
        MenuBarItem();
        [[nodiscard]] static auto TitleProperty();
        [[nodiscard]] static auto ItemsProperty();
    };
    struct __declspec(empty_bases) MenuBarItemFlyout : winrt::Windows::UI::Xaml::Controls::IMenuBarItemFlyout,
        impl::base<MenuBarItemFlyout, winrt::Windows::UI::Xaml::Controls::MenuFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuBarItemFlyout, winrt::Windows::UI::Xaml::Controls::IMenuFlyout, winrt::Windows::UI::Xaml::Controls::IMenuFlyout2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuBarItemFlyout(std::nullptr_t) noexcept {}
        MenuBarItemFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuBarItemFlyout(ptr, take_ownership_from_abi) {}
        MenuBarItemFlyout();
        using impl::consume_t<MenuBarItemFlyout, winrt::Windows::UI::Xaml::Controls::IMenuFlyout2>::ShowAt;
        using impl::consume_t<MenuBarItemFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<MenuBarItemFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
    };
    struct __declspec(empty_bases) MenuFlyout : winrt::Windows::UI::Xaml::Controls::IMenuFlyout,
        impl::base<MenuFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyout, winrt::Windows::UI::Xaml::Controls::IMenuFlyout2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyout(std::nullptr_t) noexcept {}
        MenuFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyout(ptr, take_ownership_from_abi) {}
        MenuFlyout();
        using impl::consume_t<MenuFlyout, winrt::Windows::UI::Xaml::Controls::IMenuFlyout2>::ShowAt;
        using impl::consume_t<MenuFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<MenuFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto MenuFlyoutPresenterStyleProperty();
    };
    struct __declspec(empty_bases) MenuFlyoutItem : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem,
        impl::base<MenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem2, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem3, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutItem(std::nullptr_t) noexcept {}
        MenuFlyoutItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem(ptr, take_ownership_from_abi) {}
        MenuFlyoutItem();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto CommandProperty();
        [[nodiscard]] static auto CommandParameterProperty();
        [[nodiscard]] static auto IconProperty();
        [[nodiscard]] static auto KeyboardAcceleratorTextOverrideProperty();
    };
    struct __declspec(empty_bases) MenuFlyoutItemBase : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase,
        impl::base<MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutItemBase(std::nullptr_t) noexcept {}
        MenuFlyoutItemBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MenuFlyoutPresenter : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutPresenter,
        impl::base<MenuFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutPresenter2, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutPresenter3, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutPresenter(std::nullptr_t) noexcept {}
        MenuFlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutPresenter(ptr, take_ownership_from_abi) {}
        MenuFlyoutPresenter();
        [[nodiscard]] static auto IsDefaultShadowEnabledProperty();
    };
    struct __declspec(empty_bases) MenuFlyoutSeparator : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutSeparator,
        impl::base<MenuFlyoutSeparator, winrt::Windows::UI::Xaml::Controls::MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutSeparator, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutSeparator(std::nullptr_t) noexcept {}
        MenuFlyoutSeparator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutSeparator(ptr, take_ownership_from_abi) {}
        MenuFlyoutSeparator();
    };
    struct __declspec(empty_bases) MenuFlyoutSubItem : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutSubItem,
        impl::base<MenuFlyoutSubItem, winrt::Windows::UI::Xaml::Controls::MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutSubItem, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutSubItem2, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutSubItem(std::nullptr_t) noexcept {}
        MenuFlyoutSubItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IMenuFlyoutSubItem(ptr, take_ownership_from_abi) {}
        MenuFlyoutSubItem();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto IconProperty();
    };
    struct __declspec(empty_bases) NavigationView : winrt::Windows::UI::Xaml::Controls::INavigationView,
        impl::base<NavigationView, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationView, winrt::Windows::UI::Xaml::Controls::INavigationView2, winrt::Windows::UI::Xaml::Controls::INavigationView3, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationView(std::nullptr_t) noexcept {}
        NavigationView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationView(ptr, take_ownership_from_abi) {}
        NavigationView();
        [[nodiscard]] static auto IsPaneOpenProperty();
        [[nodiscard]] static auto CompactModeThresholdWidthProperty();
        [[nodiscard]] static auto ExpandedModeThresholdWidthProperty();
        [[nodiscard]] static auto PaneFooterProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto DisplayModeProperty();
        [[nodiscard]] static auto IsSettingsVisibleProperty();
        [[nodiscard]] static auto IsPaneToggleButtonVisibleProperty();
        [[nodiscard]] static auto AlwaysShowHeaderProperty();
        [[nodiscard]] static auto CompactPaneLengthProperty();
        [[nodiscard]] static auto OpenPaneLengthProperty();
        [[nodiscard]] static auto PaneToggleButtonStyleProperty();
        [[nodiscard]] static auto MenuItemsProperty();
        [[nodiscard]] static auto MenuItemsSourceProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto SettingsItemProperty();
        [[nodiscard]] static auto AutoSuggestBoxProperty();
        [[nodiscard]] static auto MenuItemTemplateProperty();
        [[nodiscard]] static auto MenuItemTemplateSelectorProperty();
        [[nodiscard]] static auto MenuItemContainerStyleProperty();
        [[nodiscard]] static auto MenuItemContainerStyleSelectorProperty();
        [[nodiscard]] static auto IsBackButtonVisibleProperty();
        [[nodiscard]] static auto IsBackEnabledProperty();
        [[nodiscard]] static auto PaneTitleProperty();
        [[nodiscard]] static auto PaneDisplayModeProperty();
        [[nodiscard]] static auto PaneHeaderProperty();
        [[nodiscard]] static auto PaneCustomContentProperty();
        [[nodiscard]] static auto ContentOverlayProperty();
        [[nodiscard]] static auto IsPaneVisibleProperty();
        [[nodiscard]] static auto SelectionFollowsFocusProperty();
        [[nodiscard]] static auto TemplateSettingsProperty();
        [[nodiscard]] static auto ShoulderNavigationEnabledProperty();
        [[nodiscard]] static auto OverflowLabelModeProperty();
    };
    struct __declspec(empty_bases) NavigationViewBackRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::INavigationViewBackRequestedEventArgs
    {
        NavigationViewBackRequestedEventArgs(std::nullptr_t) noexcept {}
        NavigationViewBackRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewBackRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewDisplayModeChangedEventArgs : winrt::Windows::UI::Xaml::Controls::INavigationViewDisplayModeChangedEventArgs
    {
        NavigationViewDisplayModeChangedEventArgs(std::nullptr_t) noexcept {}
        NavigationViewDisplayModeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewDisplayModeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewItem : winrt::Windows::UI::Xaml::Controls::INavigationViewItem,
        impl::base<NavigationViewItem, winrt::Windows::UI::Xaml::Controls::NavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItem, winrt::Windows::UI::Xaml::Controls::INavigationViewItem2, winrt::Windows::UI::Xaml::Controls::INavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::IListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItem(std::nullptr_t) noexcept {}
        NavigationViewItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewItem(ptr, take_ownership_from_abi) {}
        NavigationViewItem();
        [[nodiscard]] static auto IconProperty();
        [[nodiscard]] static auto CompactPaneLengthProperty();
        [[nodiscard]] static auto SelectsOnInvokedProperty();
    };
    struct __declspec(empty_bases) NavigationViewItemBase : winrt::Windows::UI::Xaml::Controls::INavigationViewItemBase,
        impl::base<NavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::IListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemBase(std::nullptr_t) noexcept {}
        NavigationViewItemBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewItemBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewItemHeader : winrt::Windows::UI::Xaml::Controls::INavigationViewItemHeader,
        impl::base<NavigationViewItemHeader, winrt::Windows::UI::Xaml::Controls::NavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemHeader, winrt::Windows::UI::Xaml::Controls::INavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::IListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemHeader(std::nullptr_t) noexcept {}
        NavigationViewItemHeader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewItemHeader(ptr, take_ownership_from_abi) {}
        NavigationViewItemHeader();
    };
    struct __declspec(empty_bases) NavigationViewItemInvokedEventArgs : winrt::Windows::UI::Xaml::Controls::INavigationViewItemInvokedEventArgs,
        impl::require<NavigationViewItemInvokedEventArgs, winrt::Windows::UI::Xaml::Controls::INavigationViewItemInvokedEventArgs2>
    {
        NavigationViewItemInvokedEventArgs(std::nullptr_t) noexcept {}
        NavigationViewItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewItemInvokedEventArgs(ptr, take_ownership_from_abi) {}
        NavigationViewItemInvokedEventArgs();
    };
    struct __declspec(empty_bases) NavigationViewItemSeparator : winrt::Windows::UI::Xaml::Controls::INavigationViewItemSeparator,
        impl::base<NavigationViewItemSeparator, winrt::Windows::UI::Xaml::Controls::NavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemSeparator, winrt::Windows::UI::Xaml::Controls::INavigationViewItemBase, winrt::Windows::UI::Xaml::Controls::IListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemSeparator(std::nullptr_t) noexcept {}
        NavigationViewItemSeparator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewItemSeparator(ptr, take_ownership_from_abi) {}
        NavigationViewItemSeparator();
    };
    struct __declspec(empty_bases) NavigationViewList : winrt::Windows::UI::Xaml::Controls::INavigationViewList,
        impl::base<NavigationViewList, winrt::Windows::UI::Xaml::Controls::ListView, winrt::Windows::UI::Xaml::Controls::ListViewBase, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewList, winrt::Windows::UI::Xaml::Controls::IListView, winrt::Windows::UI::Xaml::Controls::IListViewBase, winrt::Windows::UI::Xaml::Controls::IListViewBase2, winrt::Windows::UI::Xaml::Controls::IListViewBase3, winrt::Windows::UI::Xaml::Controls::IListViewBase4, winrt::Windows::UI::Xaml::Controls::IListViewBase5, winrt::Windows::UI::Xaml::Controls::IListViewBase6, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewList(std::nullptr_t) noexcept {}
        NavigationViewList(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewList(ptr, take_ownership_from_abi) {}
        NavigationViewList();
    };
    struct __declspec(empty_bases) NavigationViewPaneClosingEventArgs : winrt::Windows::UI::Xaml::Controls::INavigationViewPaneClosingEventArgs
    {
        NavigationViewPaneClosingEventArgs(std::nullptr_t) noexcept {}
        NavigationViewPaneClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewPaneClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewSelectionChangedEventArgs : winrt::Windows::UI::Xaml::Controls::INavigationViewSelectionChangedEventArgs,
        impl::require<NavigationViewSelectionChangedEventArgs, winrt::Windows::UI::Xaml::Controls::INavigationViewSelectionChangedEventArgs2>
    {
        NavigationViewSelectionChangedEventArgs(std::nullptr_t) noexcept {}
        NavigationViewSelectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewSelectionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewTemplateSettings : winrt::Windows::UI::Xaml::Controls::INavigationViewTemplateSettings,
        impl::base<NavigationViewTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewTemplateSettings(std::nullptr_t) noexcept {}
        NavigationViewTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INavigationViewTemplateSettings(ptr, take_ownership_from_abi) {}
        NavigationViewTemplateSettings();
        [[nodiscard]] static auto TopPaddingProperty();
        [[nodiscard]] static auto OverflowButtonVisibilityProperty();
        [[nodiscard]] static auto PaneToggleButtonVisibilityProperty();
        [[nodiscard]] static auto BackButtonVisibilityProperty();
        [[nodiscard]] static auto TopPaneVisibilityProperty();
        [[nodiscard]] static auto LeftPaneVisibilityProperty();
        [[nodiscard]] static auto SingleSelectionFollowsFocusProperty();
    };
    struct __declspec(empty_bases) NotifyEventArgs : winrt::Windows::UI::Xaml::Controls::INotifyEventArgs,
        impl::require<NotifyEventArgs, winrt::Windows::UI::Xaml::Controls::INotifyEventArgs2>
    {
        NotifyEventArgs(std::nullptr_t) noexcept {}
        NotifyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::INotifyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Page : winrt::Windows::UI::Xaml::Controls::IPage,
        impl::base<Page, winrt::Windows::UI::Xaml::Controls::UserControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Page, winrt::Windows::UI::Xaml::Controls::IPageOverrides, winrt::Windows::UI::Xaml::Controls::IUserControl, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Page(std::nullptr_t) noexcept {}
        Page(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPage(ptr, take_ownership_from_abi) {}
        Page();
        [[nodiscard]] static auto FrameProperty();
        [[nodiscard]] static auto TopAppBarProperty();
        [[nodiscard]] static auto BottomAppBarProperty();
    };
    struct __declspec(empty_bases) Panel : winrt::Windows::UI::Xaml::Controls::IPanel,
        impl::base<Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Panel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Panel(std::nullptr_t) noexcept {}
        Panel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPanel(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto IsItemsHostProperty();
        [[nodiscard]] static auto ChildrenTransitionsProperty();
    };
    struct __declspec(empty_bases) ParallaxView : winrt::Windows::UI::Xaml::Controls::IParallaxView,
        impl::base<ParallaxView, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ParallaxView, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ParallaxView(std::nullptr_t) noexcept {}
        ParallaxView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IParallaxView(ptr, take_ownership_from_abi) {}
        ParallaxView();
        [[nodiscard]] static auto ChildProperty();
        [[nodiscard]] static auto HorizontalSourceEndOffsetProperty();
        [[nodiscard]] static auto HorizontalSourceOffsetKindProperty();
        [[nodiscard]] static auto HorizontalSourceStartOffsetProperty();
        [[nodiscard]] static auto MaxHorizontalShiftRatioProperty();
        [[nodiscard]] static auto HorizontalShiftProperty();
        [[nodiscard]] static auto IsHorizontalShiftClampedProperty();
        [[nodiscard]] static auto IsVerticalShiftClampedProperty();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto VerticalSourceEndOffsetProperty();
        [[nodiscard]] static auto VerticalSourceOffsetKindProperty();
        [[nodiscard]] static auto VerticalSourceStartOffsetProperty();
        [[nodiscard]] static auto MaxVerticalShiftRatioProperty();
        [[nodiscard]] static auto VerticalShiftProperty();
    };
    struct __declspec(empty_bases) PasswordBox : winrt::Windows::UI::Xaml::Controls::IPasswordBox,
        impl::base<PasswordBox, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PasswordBox, winrt::Windows::UI::Xaml::Controls::IPasswordBox2, winrt::Windows::UI::Xaml::Controls::IPasswordBox3, winrt::Windows::UI::Xaml::Controls::IPasswordBox4, winrt::Windows::UI::Xaml::Controls::IPasswordBox5, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PasswordBox(std::nullptr_t) noexcept {}
        PasswordBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPasswordBox(ptr, take_ownership_from_abi) {}
        PasswordBox();
        [[nodiscard]] static auto PasswordProperty();
        [[nodiscard]] static auto PasswordCharProperty();
        [[nodiscard]] static auto IsPasswordRevealButtonEnabledProperty();
        [[nodiscard]] static auto MaxLengthProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto SelectionHighlightColorProperty();
        [[nodiscard]] static auto PreventKeyboardDisplayOnProgrammaticFocusProperty();
        [[nodiscard]] static auto PasswordRevealModeProperty();
        [[nodiscard]] static auto TextReadingOrderProperty();
        [[nodiscard]] static auto InputScopeProperty();
        [[nodiscard]] static auto CanPasteClipboardContentProperty();
        [[nodiscard]] static auto SelectionFlyoutProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) PasswordBoxPasswordChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IPasswordBoxPasswordChangingEventArgs
    {
        PasswordBoxPasswordChangingEventArgs(std::nullptr_t) noexcept {}
        PasswordBoxPasswordChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPasswordBoxPasswordChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PathIcon : winrt::Windows::UI::Xaml::Controls::IPathIcon,
        impl::base<PathIcon, winrt::Windows::UI::Xaml::Controls::IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PathIcon, winrt::Windows::UI::Xaml::Controls::IIconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PathIcon(std::nullptr_t) noexcept {}
        PathIcon(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPathIcon(ptr, take_ownership_from_abi) {}
        PathIcon();
        [[nodiscard]] static auto DataProperty();
    };
    struct __declspec(empty_bases) PathIconSource : winrt::Windows::UI::Xaml::Controls::IPathIconSource,
        impl::base<PathIconSource, winrt::Windows::UI::Xaml::Controls::IconSource, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PathIconSource, winrt::Windows::UI::Xaml::Controls::IIconSource, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PathIconSource(std::nullptr_t) noexcept {}
        PathIconSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPathIconSource(ptr, take_ownership_from_abi) {}
        PathIconSource();
        [[nodiscard]] static auto DataProperty();
    };
    struct __declspec(empty_bases) PersonPicture : winrt::Windows::UI::Xaml::Controls::IPersonPicture,
        impl::base<PersonPicture, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PersonPicture, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PersonPicture(std::nullptr_t) noexcept {}
        PersonPicture(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPersonPicture(ptr, take_ownership_from_abi) {}
        PersonPicture();
        [[nodiscard]] static auto BadgeNumberProperty();
        [[nodiscard]] static auto BadgeGlyphProperty();
        [[nodiscard]] static auto BadgeImageSourceProperty();
        [[nodiscard]] static auto BadgeTextProperty();
        [[nodiscard]] static auto IsGroupProperty();
        [[nodiscard]] static auto ContactProperty();
        [[nodiscard]] static auto DisplayNameProperty();
        [[nodiscard]] static auto InitialsProperty();
        [[nodiscard]] static auto PreferSmallImageProperty();
        [[nodiscard]] static auto ProfilePictureProperty();
    };
    struct __declspec(empty_bases) PickerConfirmedEventArgs : winrt::Windows::UI::Xaml::Controls::IPickerConfirmedEventArgs,
        impl::base<PickerConfirmedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PickerConfirmedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PickerConfirmedEventArgs(std::nullptr_t) noexcept {}
        PickerConfirmedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPickerConfirmedEventArgs(ptr, take_ownership_from_abi) {}
        PickerConfirmedEventArgs();
    };
    struct __declspec(empty_bases) PickerFlyout : winrt::Windows::UI::Xaml::Controls::IPickerFlyout,
        impl::base<PickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PickerFlyout(std::nullptr_t) noexcept {}
        PickerFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPickerFlyout(ptr, take_ownership_from_abi) {}
        PickerFlyout();
        using impl::consume_t<PickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<PickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto ConfirmationButtonsVisibleProperty();
    };
    struct __declspec(empty_bases) PickerFlyoutPresenter : winrt::Windows::UI::Xaml::Controls::IPickerFlyoutPresenter,
        impl::base<PickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PickerFlyoutPresenter(std::nullptr_t) noexcept {}
        PickerFlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPickerFlyoutPresenter(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Pivot : winrt::Windows::UI::Xaml::Controls::IPivot,
        impl::base<Pivot, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Pivot, winrt::Windows::UI::Xaml::Controls::IPivot2, winrt::Windows::UI::Xaml::Controls::IPivot3, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Pivot(std::nullptr_t) noexcept {}
        Pivot(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPivot(ptr, take_ownership_from_abi) {}
        Pivot();
        [[nodiscard]] static auto TitleProperty();
        [[nodiscard]] static auto TitleTemplateProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto IsLockedProperty();
        [[nodiscard]] static auto SlideInAnimationGroupProperty();
        static auto GetSlideInAnimationGroup(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetSlideInAnimationGroup(winrt::Windows::UI::Xaml::FrameworkElement const& element, winrt::Windows::UI::Xaml::Controls::PivotSlideInAnimationGroup const& value);
        [[nodiscard]] static auto LeftHeaderProperty();
        [[nodiscard]] static auto LeftHeaderTemplateProperty();
        [[nodiscard]] static auto RightHeaderProperty();
        [[nodiscard]] static auto RightHeaderTemplateProperty();
        [[nodiscard]] static auto HeaderFocusVisualPlacementProperty();
        [[nodiscard]] static auto IsHeaderItemsCarouselEnabledProperty();
    };
    struct __declspec(empty_bases) PivotItem : winrt::Windows::UI::Xaml::Controls::IPivotItem,
        impl::base<PivotItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PivotItem(std::nullptr_t) noexcept {}
        PivotItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPivotItem(ptr, take_ownership_from_abi) {}
        PivotItem();
        [[nodiscard]] static auto HeaderProperty();
    };
    struct __declspec(empty_bases) PivotItemEventArgs : winrt::Windows::UI::Xaml::Controls::IPivotItemEventArgs
    {
        PivotItemEventArgs(std::nullptr_t) noexcept {}
        PivotItemEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IPivotItemEventArgs(ptr, take_ownership_from_abi) {}
        PivotItemEventArgs();
    };
    struct __declspec(empty_bases) ProgressBar : winrt::Windows::UI::Xaml::Controls::IProgressBar,
        impl::base<ProgressBar, winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressBar, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressBar(std::nullptr_t) noexcept {}
        ProgressBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IProgressBar(ptr, take_ownership_from_abi) {}
        ProgressBar();
        [[nodiscard]] static auto IsIndeterminateProperty();
        [[nodiscard]] static auto ShowErrorProperty();
        [[nodiscard]] static auto ShowPausedProperty();
    };
    struct __declspec(empty_bases) ProgressRing : winrt::Windows::UI::Xaml::Controls::IProgressRing,
        impl::base<ProgressRing, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressRing, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressRing(std::nullptr_t) noexcept {}
        ProgressRing(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IProgressRing(ptr, take_ownership_from_abi) {}
        ProgressRing();
        [[nodiscard]] static auto IsActiveProperty();
    };
    struct __declspec(empty_bases) RadioButton : winrt::Windows::UI::Xaml::Controls::IRadioButton,
        impl::base<RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RadioButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RadioButton(std::nullptr_t) noexcept {}
        RadioButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRadioButton(ptr, take_ownership_from_abi) {}
        RadioButton();
        [[nodiscard]] static auto GroupNameProperty();
    };
    struct __declspec(empty_bases) RatingControl : winrt::Windows::UI::Xaml::Controls::IRatingControl,
        impl::base<RatingControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RatingControl, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RatingControl(std::nullptr_t) noexcept {}
        RatingControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRatingControl(ptr, take_ownership_from_abi) {}
        RatingControl();
        [[nodiscard]] static auto CaptionProperty();
        [[nodiscard]] static auto InitialSetValueProperty();
        [[nodiscard]] static auto IsClearEnabledProperty();
        [[nodiscard]] static auto IsReadOnlyProperty();
        [[nodiscard]] static auto MaxRatingProperty();
        [[nodiscard]] static auto PlaceholderValueProperty();
        [[nodiscard]] static auto ItemInfoProperty();
        [[nodiscard]] static auto ValueProperty();
    };
    struct __declspec(empty_bases) RatingItemFontInfo : winrt::Windows::UI::Xaml::Controls::IRatingItemFontInfo,
        impl::base<RatingItemFontInfo, winrt::Windows::UI::Xaml::Controls::RatingItemInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RatingItemFontInfo, winrt::Windows::UI::Xaml::Controls::IRatingItemInfo, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RatingItemFontInfo(std::nullptr_t) noexcept {}
        RatingItemFontInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRatingItemFontInfo(ptr, take_ownership_from_abi) {}
        RatingItemFontInfo();
        [[nodiscard]] static auto DisabledGlyphProperty();
        [[nodiscard]] static auto GlyphProperty();
        [[nodiscard]] static auto PlaceholderGlyphProperty();
        [[nodiscard]] static auto PointerOverGlyphProperty();
        [[nodiscard]] static auto PointerOverPlaceholderGlyphProperty();
        [[nodiscard]] static auto UnsetGlyphProperty();
    };
    struct __declspec(empty_bases) RatingItemImageInfo : winrt::Windows::UI::Xaml::Controls::IRatingItemImageInfo,
        impl::base<RatingItemImageInfo, winrt::Windows::UI::Xaml::Controls::RatingItemInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RatingItemImageInfo, winrt::Windows::UI::Xaml::Controls::IRatingItemInfo, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RatingItemImageInfo(std::nullptr_t) noexcept {}
        RatingItemImageInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRatingItemImageInfo(ptr, take_ownership_from_abi) {}
        RatingItemImageInfo();
        [[nodiscard]] static auto DisabledImageProperty();
        [[nodiscard]] static auto ImageProperty();
        [[nodiscard]] static auto PlaceholderImageProperty();
        [[nodiscard]] static auto PointerOverImageProperty();
        [[nodiscard]] static auto PointerOverPlaceholderImageProperty();
        [[nodiscard]] static auto UnsetImageProperty();
    };
    struct __declspec(empty_bases) RatingItemInfo : winrt::Windows::UI::Xaml::Controls::IRatingItemInfo,
        impl::base<RatingItemInfo, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RatingItemInfo, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RatingItemInfo(std::nullptr_t) noexcept {}
        RatingItemInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRatingItemInfo(ptr, take_ownership_from_abi) {}
        RatingItemInfo();
    };
    struct __declspec(empty_bases) RefreshContainer : winrt::Windows::UI::Xaml::Controls::IRefreshContainer,
        impl::base<RefreshContainer, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RefreshContainer, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RefreshContainer(std::nullptr_t) noexcept {}
        RefreshContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRefreshContainer(ptr, take_ownership_from_abi) {}
        RefreshContainer();
        [[nodiscard]] static auto VisualizerProperty();
        [[nodiscard]] static auto PullDirectionProperty();
    };
    struct __declspec(empty_bases) RefreshInteractionRatioChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs
    {
        RefreshInteractionRatioChangedEventArgs(std::nullptr_t) noexcept {}
        RefreshInteractionRatioChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRefreshInteractionRatioChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RefreshRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::IRefreshRequestedEventArgs
    {
        RefreshRequestedEventArgs(std::nullptr_t) noexcept {}
        RefreshRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRefreshRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RefreshStateChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IRefreshStateChangedEventArgs
    {
        RefreshStateChangedEventArgs(std::nullptr_t) noexcept {}
        RefreshStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRefreshStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RefreshVisualizer : winrt::Windows::UI::Xaml::Controls::IRefreshVisualizer,
        impl::base<RefreshVisualizer, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RefreshVisualizer, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RefreshVisualizer(std::nullptr_t) noexcept {}
        RefreshVisualizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRefreshVisualizer(ptr, take_ownership_from_abi) {}
        RefreshVisualizer();
        [[nodiscard]] static auto InfoProviderProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto StateProperty();
    };
    struct __declspec(empty_bases) RelativePanel : winrt::Windows::UI::Xaml::Controls::IRelativePanel,
        impl::base<RelativePanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RelativePanel, winrt::Windows::UI::Xaml::Controls::IRelativePanel2, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RelativePanel(std::nullptr_t) noexcept {}
        RelativePanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRelativePanel(ptr, take_ownership_from_abi) {}
        RelativePanel();
        [[nodiscard]] static auto LeftOfProperty();
        static auto GetLeftOf(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetLeftOf(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AboveProperty();
        static auto GetAbove(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAbove(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto RightOfProperty();
        static auto GetRightOf(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetRightOf(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto BelowProperty();
        static auto GetBelow(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetBelow(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignHorizontalCenterWithProperty();
        static auto GetAlignHorizontalCenterWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignHorizontalCenterWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignVerticalCenterWithProperty();
        static auto GetAlignVerticalCenterWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignVerticalCenterWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignLeftWithProperty();
        static auto GetAlignLeftWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignLeftWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignTopWithProperty();
        static auto GetAlignTopWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignTopWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignRightWithProperty();
        static auto GetAlignRightWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignRightWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignBottomWithProperty();
        static auto GetAlignBottomWith(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignBottomWith(winrt::Windows::UI::Xaml::UIElement const& element, winrt::Windows::Foundation::IInspectable const& value);
        [[nodiscard]] static auto AlignLeftWithPanelProperty();
        static auto GetAlignLeftWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignLeftWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto AlignTopWithPanelProperty();
        static auto GetAlignTopWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignTopWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto AlignRightWithPanelProperty();
        static auto GetAlignRightWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignRightWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto AlignBottomWithPanelProperty();
        static auto GetAlignBottomWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignBottomWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto AlignHorizontalCenterWithPanelProperty();
        static auto GetAlignHorizontalCenterWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignHorizontalCenterWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto AlignVerticalCenterWithPanelProperty();
        static auto GetAlignVerticalCenterWithPanel(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetAlignVerticalCenterWithPanel(winrt::Windows::UI::Xaml::UIElement const& element, bool value);
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto BackgroundSizingProperty();
    };
    struct __declspec(empty_bases) RichEditBox : winrt::Windows::UI::Xaml::Controls::IRichEditBox,
        impl::base<RichEditBox, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RichEditBox, winrt::Windows::UI::Xaml::Controls::IRichEditBox2, winrt::Windows::UI::Xaml::Controls::IRichEditBox3, winrt::Windows::UI::Xaml::Controls::IRichEditBox4, winrt::Windows::UI::Xaml::Controls::IRichEditBox5, winrt::Windows::UI::Xaml::Controls::IRichEditBox6, winrt::Windows::UI::Xaml::Controls::IRichEditBox7, winrt::Windows::UI::Xaml::Controls::IRichEditBox8, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RichEditBox(std::nullptr_t) noexcept {}
        RichEditBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRichEditBox(ptr, take_ownership_from_abi) {}
        RichEditBox();
        [[nodiscard]] static auto IsReadOnlyProperty();
        [[nodiscard]] static auto AcceptsReturnProperty();
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto TextWrappingProperty();
        [[nodiscard]] static auto IsSpellCheckEnabledProperty();
        [[nodiscard]] static auto IsTextPredictionEnabledProperty();
        [[nodiscard]] static auto InputScopeProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto SelectionHighlightColorProperty();
        [[nodiscard]] static auto PreventKeyboardDisplayOnProgrammaticFocusProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto DesiredCandidateWindowAlignmentProperty();
        [[nodiscard]] static auto TextReadingOrderProperty();
        [[nodiscard]] static auto ClipboardCopyFormatProperty();
        [[nodiscard]] static auto SelectionHighlightColorWhenNotFocusedProperty();
        [[nodiscard]] static auto MaxLengthProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
        [[nodiscard]] static auto CharacterCasingProperty();
        [[nodiscard]] static auto DisabledFormattingAcceleratorsProperty();
        [[nodiscard]] static auto ContentLinkForegroundColorProperty();
        [[nodiscard]] static auto ContentLinkBackgroundColorProperty();
        [[nodiscard]] static auto ContentLinkProvidersProperty();
        [[nodiscard]] static auto HandwritingViewProperty();
        [[nodiscard]] static auto IsHandwritingViewEnabledProperty();
        [[nodiscard]] static auto SelectionFlyoutProperty();
        [[nodiscard]] static auto ProofingMenuFlyoutProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) RichEditBoxSelectionChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IRichEditBoxSelectionChangingEventArgs
    {
        RichEditBoxSelectionChangingEventArgs(std::nullptr_t) noexcept {}
        RichEditBoxSelectionChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRichEditBoxSelectionChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RichEditBoxTextChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs,
        impl::require<RichEditBoxTextChangingEventArgs, winrt::Windows::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs2>
    {
        RichEditBoxTextChangingEventArgs(std::nullptr_t) noexcept {}
        RichEditBoxTextChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RichTextBlock : winrt::Windows::UI::Xaml::Controls::IRichTextBlock,
        impl::base<RichTextBlock, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RichTextBlock, winrt::Windows::UI::Xaml::Controls::IRichTextBlock2, winrt::Windows::UI::Xaml::Controls::IRichTextBlock3, winrt::Windows::UI::Xaml::Controls::IRichTextBlock4, winrt::Windows::UI::Xaml::Controls::IRichTextBlock5, winrt::Windows::UI::Xaml::Controls::IRichTextBlock6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RichTextBlock(std::nullptr_t) noexcept {}
        RichTextBlock(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRichTextBlock(ptr, take_ownership_from_abi) {}
        RichTextBlock();
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto TextWrappingProperty();
        [[nodiscard]] static auto TextTrimmingProperty();
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto OverflowContentTargetProperty();
        [[nodiscard]] static auto IsTextSelectionEnabledProperty();
        [[nodiscard]] static auto HasOverflowContentProperty();
        [[nodiscard]] static auto SelectedTextProperty();
        [[nodiscard]] static auto TextIndentProperty();
        [[nodiscard]] static auto MaxLinesProperty();
        [[nodiscard]] static auto TextLineBoundsProperty();
        [[nodiscard]] static auto SelectionHighlightColorProperty();
        [[nodiscard]] static auto OpticalMarginAlignmentProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto TextReadingOrderProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto TextDecorationsProperty();
        [[nodiscard]] static auto IsTextTrimmedProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
        [[nodiscard]] static auto SelectionFlyoutProperty();
    };
    struct __declspec(empty_bases) RichTextBlockOverflow : winrt::Windows::UI::Xaml::Controls::IRichTextBlockOverflow,
        impl::base<RichTextBlockOverflow, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RichTextBlockOverflow, winrt::Windows::UI::Xaml::Controls::IRichTextBlockOverflow2, winrt::Windows::UI::Xaml::Controls::IRichTextBlockOverflow3, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RichTextBlockOverflow(std::nullptr_t) noexcept {}
        RichTextBlockOverflow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRichTextBlockOverflow(ptr, take_ownership_from_abi) {}
        RichTextBlockOverflow();
        [[nodiscard]] static auto OverflowContentTargetProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto HasOverflowContentProperty();
        [[nodiscard]] static auto MaxLinesProperty();
        [[nodiscard]] static auto IsTextTrimmedProperty();
    };
    struct __declspec(empty_bases) RowDefinition : winrt::Windows::UI::Xaml::Controls::IRowDefinition,
        impl::base<RowDefinition, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RowDefinition, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RowDefinition(std::nullptr_t) noexcept {}
        RowDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IRowDefinition(ptr, take_ownership_from_abi) {}
        RowDefinition();
        [[nodiscard]] static auto HeightProperty();
        [[nodiscard]] static auto MaxHeightProperty();
        [[nodiscard]] static auto MinHeightProperty();
    };
    struct __declspec(empty_bases) RowDefinitionCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::RowDefinition>
    {
        RowDefinitionCollection(std::nullptr_t) noexcept {}
        RowDefinitionCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::RowDefinition>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScrollContentPresenter : winrt::Windows::UI::Xaml::Controls::IScrollContentPresenter,
        impl::base<ScrollContentPresenter, winrt::Windows::UI::Xaml::Controls::ContentPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollContentPresenter, winrt::Windows::UI::Xaml::Controls::IScrollContentPresenter2, winrt::Windows::UI::Xaml::Controls::IContentPresenter, winrt::Windows::UI::Xaml::Controls::IContentPresenter2, winrt::Windows::UI::Xaml::Controls::IContentPresenter3, winrt::Windows::UI::Xaml::Controls::IContentPresenter4, winrt::Windows::UI::Xaml::Controls::IContentPresenter5, winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollContentPresenter(std::nullptr_t) noexcept {}
        ScrollContentPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IScrollContentPresenter(ptr, take_ownership_from_abi) {}
        ScrollContentPresenter();
        [[nodiscard]] static auto CanContentRenderOutsideBoundsProperty();
        [[nodiscard]] static auto SizesContentToTemplatedParentProperty();
    };
    struct __declspec(empty_bases) ScrollViewer : winrt::Windows::UI::Xaml::Controls::IScrollViewer,
        impl::base<ScrollViewer, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollViewer, winrt::Windows::UI::Xaml::Controls::IScrollViewer2, winrt::Windows::UI::Xaml::Controls::IScrollViewer3, winrt::Windows::UI::Xaml::Controls::IScrollViewer4, winrt::Windows::UI::Xaml::Controls::IScrollAnchorProvider, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollViewer(std::nullptr_t) noexcept {}
        ScrollViewer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IScrollViewer(ptr, take_ownership_from_abi) {}
        ScrollViewer();
        [[nodiscard]] static auto HorizontalSnapPointsAlignmentProperty();
        [[nodiscard]] static auto VerticalSnapPointsAlignmentProperty();
        [[nodiscard]] static auto HorizontalSnapPointsTypeProperty();
        [[nodiscard]] static auto VerticalSnapPointsTypeProperty();
        [[nodiscard]] static auto ZoomSnapPointsTypeProperty();
        [[nodiscard]] static auto HorizontalOffsetProperty();
        [[nodiscard]] static auto ViewportWidthProperty();
        [[nodiscard]] static auto ScrollableWidthProperty();
        [[nodiscard]] static auto ComputedHorizontalScrollBarVisibilityProperty();
        [[nodiscard]] static auto ExtentWidthProperty();
        [[nodiscard]] static auto VerticalOffsetProperty();
        [[nodiscard]] static auto ViewportHeightProperty();
        [[nodiscard]] static auto ScrollableHeightProperty();
        [[nodiscard]] static auto ComputedVerticalScrollBarVisibilityProperty();
        [[nodiscard]] static auto ExtentHeightProperty();
        [[nodiscard]] static auto MinZoomFactorProperty();
        [[nodiscard]] static auto MaxZoomFactorProperty();
        [[nodiscard]] static auto ZoomFactorProperty();
        [[nodiscard]] static auto ZoomSnapPointsProperty();
        [[nodiscard]] static auto HorizontalScrollBarVisibilityProperty();
        static auto GetHorizontalScrollBarVisibility(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHorizontalScrollBarVisibility(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility const& horizontalScrollBarVisibility);
        [[nodiscard]] static auto VerticalScrollBarVisibilityProperty();
        static auto GetVerticalScrollBarVisibility(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetVerticalScrollBarVisibility(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::ScrollBarVisibility const& verticalScrollBarVisibility);
        [[nodiscard]] static auto IsHorizontalRailEnabledProperty();
        static auto GetIsHorizontalRailEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsHorizontalRailEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isHorizontalRailEnabled);
        [[nodiscard]] static auto IsVerticalRailEnabledProperty();
        static auto GetIsVerticalRailEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsVerticalRailEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isVerticalRailEnabled);
        [[nodiscard]] static auto IsHorizontalScrollChainingEnabledProperty();
        static auto GetIsHorizontalScrollChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsHorizontalScrollChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isHorizontalScrollChainingEnabled);
        [[nodiscard]] static auto IsVerticalScrollChainingEnabledProperty();
        static auto GetIsVerticalScrollChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsVerticalScrollChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isVerticalScrollChainingEnabled);
        [[nodiscard]] static auto IsZoomChainingEnabledProperty();
        static auto GetIsZoomChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsZoomChainingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isZoomChainingEnabled);
        [[nodiscard]] static auto IsScrollInertiaEnabledProperty();
        static auto GetIsScrollInertiaEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsScrollInertiaEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isScrollInertiaEnabled);
        [[nodiscard]] static auto IsZoomInertiaEnabledProperty();
        static auto GetIsZoomInertiaEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsZoomInertiaEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isZoomInertiaEnabled);
        [[nodiscard]] static auto HorizontalScrollModeProperty();
        static auto GetHorizontalScrollMode(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHorizontalScrollMode(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::ScrollMode const& horizontalScrollMode);
        [[nodiscard]] static auto VerticalScrollModeProperty();
        static auto GetVerticalScrollMode(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetVerticalScrollMode(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::ScrollMode const& verticalScrollMode);
        [[nodiscard]] static auto ZoomModeProperty();
        static auto GetZoomMode(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetZoomMode(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::ZoomMode const& zoomMode);
        [[nodiscard]] static auto IsDeferredScrollingEnabledProperty();
        static auto GetIsDeferredScrollingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetIsDeferredScrollingEnabled(winrt::Windows::UI::Xaml::DependencyObject const& element, bool isDeferredScrollingEnabled);
        [[nodiscard]] static auto BringIntoViewOnFocusChangeProperty();
        static auto GetBringIntoViewOnFocusChange(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetBringIntoViewOnFocusChange(winrt::Windows::UI::Xaml::DependencyObject const& element, bool bringIntoViewOnFocusChange);
        [[nodiscard]] static auto TopLeftHeaderProperty();
        [[nodiscard]] static auto LeftHeaderProperty();
        [[nodiscard]] static auto TopHeaderProperty();
        [[nodiscard]] static auto ReduceViewportForCoreInputViewOcclusionsProperty();
        [[nodiscard]] static auto HorizontalAnchorRatioProperty();
        [[nodiscard]] static auto VerticalAnchorRatioProperty();
        [[nodiscard]] static auto CanContentRenderOutsideBoundsProperty();
        static auto GetCanContentRenderOutsideBounds(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCanContentRenderOutsideBounds(winrt::Windows::UI::Xaml::DependencyObject const& element, bool canContentRenderOutsideBounds);
    };
    struct __declspec(empty_bases) ScrollViewerView : winrt::Windows::UI::Xaml::Controls::IScrollViewerView
    {
        ScrollViewerView(std::nullptr_t) noexcept {}
        ScrollViewerView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IScrollViewerView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ScrollViewerViewChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs
    {
        ScrollViewerViewChangedEventArgs(std::nullptr_t) noexcept {}
        ScrollViewerViewChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs(ptr, take_ownership_from_abi) {}
        ScrollViewerViewChangedEventArgs();
    };
    struct __declspec(empty_bases) ScrollViewerViewChangingEventArgs : winrt::Windows::UI::Xaml::Controls::IScrollViewerViewChangingEventArgs
    {
        ScrollViewerViewChangingEventArgs(std::nullptr_t) noexcept {}
        ScrollViewerViewChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IScrollViewerViewChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchBox : winrt::Windows::UI::Xaml::Controls::ISearchBox,
        impl::base<SearchBox, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SearchBox, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SearchBox(std::nullptr_t) noexcept {}
        SearchBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISearchBox(ptr, take_ownership_from_abi) {}
        SearchBox();
        [[nodiscard]] static auto SearchHistoryEnabledProperty();
        [[nodiscard]] static auto SearchHistoryContextProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto QueryTextProperty();
        [[nodiscard]] static auto FocusOnKeyboardInputProperty();
        [[nodiscard]] static auto ChooseSuggestionOnEnterProperty();
    };
    struct __declspec(empty_bases) SearchBoxQueryChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ISearchBoxQueryChangedEventArgs
    {
        SearchBoxQueryChangedEventArgs(std::nullptr_t) noexcept {}
        SearchBoxQueryChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISearchBoxQueryChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchBoxQuerySubmittedEventArgs : winrt::Windows::UI::Xaml::Controls::ISearchBoxQuerySubmittedEventArgs
    {
        SearchBoxQuerySubmittedEventArgs(std::nullptr_t) noexcept {}
        SearchBoxQuerySubmittedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISearchBoxQuerySubmittedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SearchBoxResultSuggestionChosenEventArgs : winrt::Windows::UI::Xaml::Controls::ISearchBoxResultSuggestionChosenEventArgs
    {
        SearchBoxResultSuggestionChosenEventArgs(std::nullptr_t) noexcept {}
        SearchBoxResultSuggestionChosenEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISearchBoxResultSuggestionChosenEventArgs(ptr, take_ownership_from_abi) {}
        SearchBoxResultSuggestionChosenEventArgs();
    };
    struct __declspec(empty_bases) SearchBoxSuggestionsRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::ISearchBoxSuggestionsRequestedEventArgs
    {
        SearchBoxSuggestionsRequestedEventArgs(std::nullptr_t) noexcept {}
        SearchBoxSuggestionsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISearchBoxSuggestionsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SectionsInViewChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ISectionsInViewChangedEventArgs
    {
        SectionsInViewChangedEventArgs(std::nullptr_t) noexcept {}
        SectionsInViewChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISectionsInViewChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SelectionChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs,
        impl::base<SelectionChangedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<SelectionChangedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        SelectionChangedEventArgs(std::nullptr_t) noexcept {}
        SelectionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs(ptr, take_ownership_from_abi) {}
        SelectionChangedEventArgs(param::vector<winrt::Windows::Foundation::IInspectable> const& removedItems, param::vector<winrt::Windows::Foundation::IInspectable> const& addedItems);
    };
    struct __declspec(empty_bases) SemanticZoom : winrt::Windows::UI::Xaml::Controls::ISemanticZoom,
        impl::base<SemanticZoom, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SemanticZoom, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SemanticZoom(std::nullptr_t) noexcept {}
        SemanticZoom(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISemanticZoom(ptr, take_ownership_from_abi) {}
        SemanticZoom();
        [[nodiscard]] static auto ZoomedInViewProperty();
        [[nodiscard]] static auto ZoomedOutViewProperty();
        [[nodiscard]] static auto IsZoomedInViewActiveProperty();
        [[nodiscard]] static auto CanChangeViewsProperty();
        [[nodiscard]] static auto IsZoomOutButtonEnabledProperty();
    };
    struct __declspec(empty_bases) SemanticZoomLocation : winrt::Windows::UI::Xaml::Controls::ISemanticZoomLocation
    {
        SemanticZoomLocation(std::nullptr_t) noexcept {}
        SemanticZoomLocation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISemanticZoomLocation(ptr, take_ownership_from_abi) {}
        SemanticZoomLocation();
    };
    struct __declspec(empty_bases) SemanticZoomViewChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs
    {
        SemanticZoomViewChangedEventArgs(std::nullptr_t) noexcept {}
        SemanticZoomViewChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs(ptr, take_ownership_from_abi) {}
        SemanticZoomViewChangedEventArgs();
    };
    struct __declspec(empty_bases) SettingsFlyout : winrt::Windows::UI::Xaml::Controls::ISettingsFlyout,
        impl::base<SettingsFlyout, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SettingsFlyout, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SettingsFlyout(std::nullptr_t) noexcept {}
        SettingsFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISettingsFlyout(ptr, take_ownership_from_abi) {}
        SettingsFlyout();
        [[nodiscard]] static auto TitleProperty();
        [[nodiscard]] static auto HeaderBackgroundProperty();
        [[nodiscard]] static auto HeaderForegroundProperty();
        [[nodiscard]] static auto IconSourceProperty();
    };
    struct __declspec(empty_bases) Slider : winrt::Windows::UI::Xaml::Controls::ISlider,
        impl::base<Slider, winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Slider, winrt::Windows::UI::Xaml::Controls::ISlider2, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Slider(std::nullptr_t) noexcept {}
        Slider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISlider(ptr, take_ownership_from_abi) {}
        Slider();
        [[nodiscard]] static auto IntermediateValueProperty();
        [[nodiscard]] static auto StepFrequencyProperty();
        [[nodiscard]] static auto SnapsToProperty();
        [[nodiscard]] static auto TickFrequencyProperty();
        [[nodiscard]] static auto TickPlacementProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto IsDirectionReversedProperty();
        [[nodiscard]] static auto IsThumbToolTipEnabledProperty();
        [[nodiscard]] static auto ThumbToolTipValueConverterProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
    };
    struct __declspec(empty_bases) SplitButton : winrt::Windows::UI::Xaml::Controls::ISplitButton,
        impl::base<SplitButton, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitButton, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitButton(std::nullptr_t) noexcept {}
        SplitButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISplitButton(ptr, take_ownership_from_abi) {}
        SplitButton();
        [[nodiscard]] static auto FlyoutProperty();
        [[nodiscard]] static auto CommandProperty();
        [[nodiscard]] static auto CommandParameterProperty();
    };
    struct __declspec(empty_bases) SplitButtonAutomationPeer : winrt::Windows::UI::Xaml::Controls::ISplitButtonAutomationPeer,
        impl::base<SplitButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider, winrt::Windows::UI::Xaml::Automation::Provider::IInvokeProvider, winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer7, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer9, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitButtonAutomationPeer(std::nullptr_t) noexcept {}
        SplitButtonAutomationPeer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISplitButtonAutomationPeer(ptr, take_ownership_from_abi) {}
        explicit SplitButtonAutomationPeer(winrt::Windows::UI::Xaml::Controls::SplitButton const& owner);
    };
    struct __declspec(empty_bases) SplitButtonClickEventArgs : winrt::Windows::UI::Xaml::Controls::ISplitButtonClickEventArgs
    {
        SplitButtonClickEventArgs(std::nullptr_t) noexcept {}
        SplitButtonClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISplitButtonClickEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SplitView : winrt::Windows::UI::Xaml::Controls::ISplitView,
        impl::base<SplitView, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitView, winrt::Windows::UI::Xaml::Controls::ISplitView2, winrt::Windows::UI::Xaml::Controls::ISplitView3, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitView(std::nullptr_t) noexcept {}
        SplitView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISplitView(ptr, take_ownership_from_abi) {}
        SplitView();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto PaneProperty();
        [[nodiscard]] static auto IsPaneOpenProperty();
        [[nodiscard]] static auto OpenPaneLengthProperty();
        [[nodiscard]] static auto CompactPaneLengthProperty();
        [[nodiscard]] static auto PanePlacementProperty();
        [[nodiscard]] static auto DisplayModeProperty();
        [[nodiscard]] static auto TemplateSettingsProperty();
        [[nodiscard]] static auto PaneBackgroundProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
    };
    struct __declspec(empty_bases) SplitViewPaneClosingEventArgs : winrt::Windows::UI::Xaml::Controls::ISplitViewPaneClosingEventArgs
    {
        SplitViewPaneClosingEventArgs(std::nullptr_t) noexcept {}
        SplitViewPaneClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISplitViewPaneClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StackPanel : winrt::Windows::UI::Xaml::Controls::IStackPanel,
        impl::base<StackPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<StackPanel, winrt::Windows::UI::Xaml::Controls::IStackPanel2, winrt::Windows::UI::Xaml::Controls::IStackPanel4, winrt::Windows::UI::Xaml::Controls::IStackPanel5, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IInsertionPanel, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        StackPanel(std::nullptr_t) noexcept {}
        StackPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IStackPanel(ptr, take_ownership_from_abi) {}
        StackPanel();
        [[nodiscard]] static auto AreScrollSnapPointsRegularProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto BorderBrushProperty();
        [[nodiscard]] static auto BorderThicknessProperty();
        [[nodiscard]] static auto CornerRadiusProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto SpacingProperty();
        [[nodiscard]] static auto BackgroundSizingProperty();
    };
    struct __declspec(empty_bases) StyleSelector : winrt::Windows::UI::Xaml::Controls::IStyleSelector,
        impl::require<StyleSelector, winrt::Windows::UI::Xaml::Controls::IStyleSelectorOverrides>
    {
        StyleSelector(std::nullptr_t) noexcept {}
        StyleSelector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IStyleSelector(ptr, take_ownership_from_abi) {}
        StyleSelector();
    };
    struct __declspec(empty_bases) SwapChainBackgroundPanel : winrt::Windows::UI::Xaml::Controls::ISwapChainBackgroundPanel,
        impl::base<SwapChainBackgroundPanel, winrt::Windows::UI::Xaml::Controls::Grid, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwapChainBackgroundPanel, winrt::Windows::UI::Xaml::Controls::ISwapChainBackgroundPanel2, winrt::Windows::UI::Xaml::Controls::IGrid, winrt::Windows::UI::Xaml::Controls::IGrid2, winrt::Windows::UI::Xaml::Controls::IGrid3, winrt::Windows::UI::Xaml::Controls::IGrid4, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwapChainBackgroundPanel(std::nullptr_t) noexcept {}
        SwapChainBackgroundPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwapChainBackgroundPanel(ptr, take_ownership_from_abi) {}
        SwapChainBackgroundPanel();
    };
    struct __declspec(empty_bases) SwapChainPanel : winrt::Windows::UI::Xaml::Controls::ISwapChainPanel,
        impl::base<SwapChainPanel, winrt::Windows::UI::Xaml::Controls::Grid, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwapChainPanel, winrt::Windows::UI::Xaml::Controls::IGrid, winrt::Windows::UI::Xaml::Controls::IGrid2, winrt::Windows::UI::Xaml::Controls::IGrid3, winrt::Windows::UI::Xaml::Controls::IGrid4, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwapChainPanel(std::nullptr_t) noexcept {}
        SwapChainPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwapChainPanel(ptr, take_ownership_from_abi) {}
        SwapChainPanel();
        [[nodiscard]] static auto CompositionScaleXProperty();
        [[nodiscard]] static auto CompositionScaleYProperty();
    };
    struct __declspec(empty_bases) SwipeControl : winrt::Windows::UI::Xaml::Controls::ISwipeControl,
        impl::base<SwipeControl, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwipeControl, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwipeControl(std::nullptr_t) noexcept {}
        SwipeControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwipeControl(ptr, take_ownership_from_abi) {}
        SwipeControl();
        [[nodiscard]] static auto LeftItemsProperty();
        [[nodiscard]] static auto RightItemsProperty();
        [[nodiscard]] static auto TopItemsProperty();
        [[nodiscard]] static auto BottomItemsProperty();
    };
    struct __declspec(empty_bases) SwipeItem : winrt::Windows::UI::Xaml::Controls::ISwipeItem,
        impl::base<SwipeItem, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwipeItem, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwipeItem(std::nullptr_t) noexcept {}
        SwipeItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwipeItem(ptr, take_ownership_from_abi) {}
        SwipeItem();
        [[nodiscard]] static auto IconSourceProperty();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto CommandProperty();
        [[nodiscard]] static auto CommandParameterProperty();
        [[nodiscard]] static auto BehaviorOnInvokedProperty();
    };
    struct __declspec(empty_bases) SwipeItemInvokedEventArgs : winrt::Windows::UI::Xaml::Controls::ISwipeItemInvokedEventArgs
    {
        SwipeItemInvokedEventArgs(std::nullptr_t) noexcept {}
        SwipeItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwipeItemInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SwipeItems : winrt::Windows::UI::Xaml::Controls::ISwipeItems,
        impl::base<SwipeItems, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SwipeItems, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::Controls::SwipeItem>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Controls::SwipeItem>, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SwipeItems(std::nullptr_t) noexcept {}
        SwipeItems(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISwipeItems(ptr, take_ownership_from_abi) {}
        SwipeItems();
        [[nodiscard]] static auto ModeProperty();
    };
    struct __declspec(empty_bases) SymbolIcon : winrt::Windows::UI::Xaml::Controls::ISymbolIcon,
        impl::base<SymbolIcon, winrt::Windows::UI::Xaml::Controls::IconElement, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SymbolIcon, winrt::Windows::UI::Xaml::Controls::IIconElement, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SymbolIcon(std::nullptr_t) noexcept {}
        SymbolIcon(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISymbolIcon(ptr, take_ownership_from_abi) {}
        SymbolIcon();
        explicit SymbolIcon(winrt::Windows::UI::Xaml::Controls::Symbol const& symbol);
        [[nodiscard]] static auto SymbolProperty();
    };
    struct __declspec(empty_bases) SymbolIconSource : winrt::Windows::UI::Xaml::Controls::ISymbolIconSource,
        impl::base<SymbolIconSource, winrt::Windows::UI::Xaml::Controls::IconSource, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SymbolIconSource, winrt::Windows::UI::Xaml::Controls::IIconSource, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SymbolIconSource(std::nullptr_t) noexcept {}
        SymbolIconSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ISymbolIconSource(ptr, take_ownership_from_abi) {}
        SymbolIconSource();
        [[nodiscard]] static auto SymbolProperty();
    };
    struct __declspec(empty_bases) TextBlock : winrt::Windows::UI::Xaml::Controls::ITextBlock,
        impl::base<TextBlock, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TextBlock, winrt::Windows::UI::Xaml::Controls::ITextBlock2, winrt::Windows::UI::Xaml::Controls::ITextBlock3, winrt::Windows::UI::Xaml::Controls::ITextBlock4, winrt::Windows::UI::Xaml::Controls::ITextBlock5, winrt::Windows::UI::Xaml::Controls::ITextBlock6, winrt::Windows::UI::Xaml::Controls::ITextBlock7, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TextBlock(std::nullptr_t) noexcept {}
        TextBlock(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextBlock(ptr, take_ownership_from_abi) {}
        TextBlock();
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto TextWrappingProperty();
        [[nodiscard]] static auto TextTrimmingProperty();
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto PaddingProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto IsTextSelectionEnabledProperty();
        [[nodiscard]] static auto SelectedTextProperty();
        [[nodiscard]] static auto SelectionHighlightColorProperty();
        [[nodiscard]] static auto MaxLinesProperty();
        [[nodiscard]] static auto TextLineBoundsProperty();
        [[nodiscard]] static auto OpticalMarginAlignmentProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto TextReadingOrderProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto TextDecorationsProperty();
        [[nodiscard]] static auto IsTextTrimmedProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
        [[nodiscard]] static auto SelectionFlyoutProperty();
    };
    struct __declspec(empty_bases) TextBox : winrt::Windows::UI::Xaml::Controls::ITextBox,
        impl::base<TextBox, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TextBox, winrt::Windows::UI::Xaml::Controls::ITextBox2, winrt::Windows::UI::Xaml::Controls::ITextBox3, winrt::Windows::UI::Xaml::Controls::ITextBox4, winrt::Windows::UI::Xaml::Controls::ITextBox5, winrt::Windows::UI::Xaml::Controls::ITextBox6, winrt::Windows::UI::Xaml::Controls::ITextBox7, winrt::Windows::UI::Xaml::Controls::ITextBox8, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TextBox(std::nullptr_t) noexcept {}
        TextBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextBox(ptr, take_ownership_from_abi) {}
        TextBox();
        [[nodiscard]] static auto TextProperty();
        [[nodiscard]] static auto MaxLengthProperty();
        [[nodiscard]] static auto IsReadOnlyProperty();
        [[nodiscard]] static auto AcceptsReturnProperty();
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto TextWrappingProperty();
        [[nodiscard]] static auto IsSpellCheckEnabledProperty();
        [[nodiscard]] static auto IsTextPredictionEnabledProperty();
        [[nodiscard]] static auto InputScopeProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto PlaceholderTextProperty();
        [[nodiscard]] static auto SelectionHighlightColorProperty();
        [[nodiscard]] static auto PreventKeyboardDisplayOnProgrammaticFocusProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto DesiredCandidateWindowAlignmentProperty();
        [[nodiscard]] static auto TextReadingOrderProperty();
        [[nodiscard]] static auto SelectionHighlightColorWhenNotFocusedProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
        [[nodiscard]] static auto CharacterCasingProperty();
        [[nodiscard]] static auto PlaceholderForegroundProperty();
        [[nodiscard]] static auto HandwritingViewProperty();
        [[nodiscard]] static auto IsHandwritingViewEnabledProperty();
        [[nodiscard]] static auto CanPasteClipboardContentProperty();
        [[nodiscard]] static auto CanUndoProperty();
        [[nodiscard]] static auto CanRedoProperty();
        [[nodiscard]] static auto SelectionFlyoutProperty();
        [[nodiscard]] static auto ProofingMenuFlyoutProperty();
        [[nodiscard]] static auto DescriptionProperty();
    };
    struct __declspec(empty_bases) TextBoxBeforeTextChangingEventArgs : winrt::Windows::UI::Xaml::Controls::ITextBoxBeforeTextChangingEventArgs
    {
        TextBoxBeforeTextChangingEventArgs(std::nullptr_t) noexcept {}
        TextBoxBeforeTextChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextBoxBeforeTextChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextBoxSelectionChangingEventArgs : winrt::Windows::UI::Xaml::Controls::ITextBoxSelectionChangingEventArgs
    {
        TextBoxSelectionChangingEventArgs(std::nullptr_t) noexcept {}
        TextBoxSelectionChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextBoxSelectionChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextBoxTextChangingEventArgs : winrt::Windows::UI::Xaml::Controls::ITextBoxTextChangingEventArgs,
        impl::require<TextBoxTextChangingEventArgs, winrt::Windows::UI::Xaml::Controls::ITextBoxTextChangingEventArgs2>
    {
        TextBoxTextChangingEventArgs(std::nullptr_t) noexcept {}
        TextBoxTextChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextBoxTextChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ITextChangedEventArgs,
        impl::base<TextChangedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<TextChangedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        TextChangedEventArgs(std::nullptr_t) noexcept {}
        TextChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextCommandBarFlyout : winrt::Windows::UI::Xaml::Controls::ITextCommandBarFlyout,
        impl::base<TextCommandBarFlyout, winrt::Windows::UI::Xaml::Controls::CommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TextCommandBarFlyout, winrt::Windows::UI::Xaml::Controls::ICommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TextCommandBarFlyout(std::nullptr_t) noexcept {}
        TextCommandBarFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextCommandBarFlyout(ptr, take_ownership_from_abi) {}
        TextCommandBarFlyout();
        using impl::consume_t<TextCommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<TextCommandBarFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
    };
    struct __declspec(empty_bases) TextCompositionChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ITextCompositionChangedEventArgs
    {
        TextCompositionChangedEventArgs(std::nullptr_t) noexcept {}
        TextCompositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextCompositionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextCompositionEndedEventArgs : winrt::Windows::UI::Xaml::Controls::ITextCompositionEndedEventArgs
    {
        TextCompositionEndedEventArgs(std::nullptr_t) noexcept {}
        TextCompositionEndedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextCompositionEndedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextCompositionStartedEventArgs : winrt::Windows::UI::Xaml::Controls::ITextCompositionStartedEventArgs
    {
        TextCompositionStartedEventArgs(std::nullptr_t) noexcept {}
        TextCompositionStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextCompositionStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextControlCopyingToClipboardEventArgs : winrt::Windows::UI::Xaml::Controls::ITextControlCopyingToClipboardEventArgs
    {
        TextControlCopyingToClipboardEventArgs(std::nullptr_t) noexcept {}
        TextControlCopyingToClipboardEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextControlCopyingToClipboardEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextControlCuttingToClipboardEventArgs : winrt::Windows::UI::Xaml::Controls::ITextControlCuttingToClipboardEventArgs
    {
        TextControlCuttingToClipboardEventArgs(std::nullptr_t) noexcept {}
        TextControlCuttingToClipboardEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextControlCuttingToClipboardEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextControlPasteEventArgs : winrt::Windows::UI::Xaml::Controls::ITextControlPasteEventArgs
    {
        TextControlPasteEventArgs(std::nullptr_t) noexcept {}
        TextControlPasteEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITextControlPasteEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TimePickedEventArgs : winrt::Windows::UI::Xaml::Controls::ITimePickedEventArgs,
        impl::base<TimePickedEventArgs, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TimePickedEventArgs, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TimePickedEventArgs(std::nullptr_t) noexcept {}
        TimePickedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePickedEventArgs(ptr, take_ownership_from_abi) {}
        TimePickedEventArgs();
    };
    struct __declspec(empty_bases) TimePicker : winrt::Windows::UI::Xaml::Controls::ITimePicker,
        impl::base<TimePicker, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TimePicker, winrt::Windows::UI::Xaml::Controls::ITimePicker2, winrt::Windows::UI::Xaml::Controls::ITimePicker3, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TimePicker(std::nullptr_t) noexcept {}
        TimePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePicker(ptr, take_ownership_from_abi) {}
        TimePicker();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto ClockIdentifierProperty();
        [[nodiscard]] static auto MinuteIncrementProperty();
        [[nodiscard]] static auto TimeProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto SelectedTimeProperty();
    };
    struct __declspec(empty_bases) TimePickerFlyout : winrt::Windows::UI::Xaml::Controls::ITimePickerFlyout,
        impl::base<TimePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TimePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TimePickerFlyout(std::nullptr_t) noexcept {}
        TimePickerFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePickerFlyout(ptr, take_ownership_from_abi) {}
        TimePickerFlyout();
        using impl::consume_t<TimePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<TimePickerFlyout, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto ClockIdentifierProperty();
        [[nodiscard]] static auto TimeProperty();
        [[nodiscard]] static auto MinuteIncrementProperty();
    };
    struct __declspec(empty_bases) TimePickerFlyoutPresenter : winrt::Windows::UI::Xaml::Controls::ITimePickerFlyoutPresenter,
        impl::base<TimePickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TimePickerFlyoutPresenter, winrt::Windows::UI::Xaml::Controls::ITimePickerFlyoutPresenter2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TimePickerFlyoutPresenter(std::nullptr_t) noexcept {}
        TimePickerFlyoutPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePickerFlyoutPresenter(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsDefaultShadowEnabledProperty();
    };
    struct __declspec(empty_bases) TimePickerSelectedValueChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ITimePickerSelectedValueChangedEventArgs
    {
        TimePickerSelectedValueChangedEventArgs(std::nullptr_t) noexcept {}
        TimePickerSelectedValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePickerSelectedValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TimePickerValueChangedEventArgs : winrt::Windows::UI::Xaml::Controls::ITimePickerValueChangedEventArgs
    {
        TimePickerValueChangedEventArgs(std::nullptr_t) noexcept {}
        TimePickerValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITimePickerValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ToggleMenuFlyoutItem : winrt::Windows::UI::Xaml::Controls::IToggleMenuFlyoutItem,
        impl::base<ToggleMenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::MenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::MenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleMenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem2, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItem3, winrt::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleMenuFlyoutItem(std::nullptr_t) noexcept {}
        ToggleMenuFlyoutItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToggleMenuFlyoutItem(ptr, take_ownership_from_abi) {}
        ToggleMenuFlyoutItem();
        [[nodiscard]] static auto IsCheckedProperty();
    };
    struct __declspec(empty_bases) ToggleSplitButton : winrt::Windows::UI::Xaml::Controls::IToggleSplitButton,
        impl::base<ToggleSplitButton, winrt::Windows::UI::Xaml::Controls::SplitButton, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleSplitButton, winrt::Windows::UI::Xaml::Controls::ISplitButton, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleSplitButton(std::nullptr_t) noexcept {}
        ToggleSplitButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToggleSplitButton(ptr, take_ownership_from_abi) {}
        ToggleSplitButton();
    };
    struct __declspec(empty_bases) ToggleSplitButtonAutomationPeer : winrt::Windows::UI::Xaml::Controls::IToggleSplitButtonAutomationPeer,
        impl::base<ToggleSplitButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleSplitButtonAutomationPeer, winrt::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider, winrt::Windows::UI::Xaml::Automation::Provider::IToggleProvider, winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer7, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer9, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8, winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleSplitButtonAutomationPeer(std::nullptr_t) noexcept {}
        ToggleSplitButtonAutomationPeer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToggleSplitButtonAutomationPeer(ptr, take_ownership_from_abi) {}
        explicit ToggleSplitButtonAutomationPeer(winrt::Windows::UI::Xaml::Controls::ToggleSplitButton const& owner);
    };
    struct __declspec(empty_bases) ToggleSplitButtonIsCheckedChangedEventArgs : winrt::Windows::UI::Xaml::Controls::IToggleSplitButtonIsCheckedChangedEventArgs
    {
        ToggleSplitButtonIsCheckedChangedEventArgs(std::nullptr_t) noexcept {}
        ToggleSplitButtonIsCheckedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToggleSplitButtonIsCheckedChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ToggleSwitch : winrt::Windows::UI::Xaml::Controls::IToggleSwitch,
        impl::base<ToggleSwitch, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleSwitch, winrt::Windows::UI::Xaml::Controls::IToggleSwitchOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleSwitch(std::nullptr_t) noexcept {}
        ToggleSwitch(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToggleSwitch(ptr, take_ownership_from_abi) {}
        ToggleSwitch();
        [[nodiscard]] static auto IsOnProperty();
        [[nodiscard]] static auto HeaderProperty();
        [[nodiscard]] static auto HeaderTemplateProperty();
        [[nodiscard]] static auto OnContentProperty();
        [[nodiscard]] static auto OnContentTemplateProperty();
        [[nodiscard]] static auto OffContentProperty();
        [[nodiscard]] static auto OffContentTemplateProperty();
    };
    struct __declspec(empty_bases) ToolTip : winrt::Windows::UI::Xaml::Controls::IToolTip,
        impl::base<ToolTip, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToolTip, winrt::Windows::UI::Xaml::Controls::IToolTip2, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToolTip(std::nullptr_t) noexcept {}
        ToolTip(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToolTip(ptr, take_ownership_from_abi) {}
        ToolTip();
        [[nodiscard]] static auto HorizontalOffsetProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto PlacementProperty();
        [[nodiscard]] static auto PlacementTargetProperty();
        [[nodiscard]] static auto VerticalOffsetProperty();
        [[nodiscard]] static auto PlacementRectProperty();
    };
    struct __declspec(empty_bases) ToolTipService : winrt::Windows::UI::Xaml::Controls::IToolTipService
    {
        ToolTipService(std::nullptr_t) noexcept {}
        ToolTipService(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IToolTipService(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto PlacementProperty();
        static auto GetPlacement(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetPlacement(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::Primitives::PlacementMode const& value);
        [[nodiscard]] static auto PlacementTargetProperty();
        static auto GetPlacementTarget(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetPlacementTarget(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::UIElement const& value);
        [[nodiscard]] static auto ToolTipProperty();
        static auto GetToolTip(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetToolTip(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::Foundation::IInspectable const& value);
    };
    struct __declspec(empty_bases) TreeView : winrt::Windows::UI::Xaml::Controls::ITreeView,
        impl::base<TreeView, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TreeView, winrt::Windows::UI::Xaml::Controls::ITreeView2, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TreeView(std::nullptr_t) noexcept {}
        TreeView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeView(ptr, take_ownership_from_abi) {}
        TreeView();
        [[nodiscard]] static auto SelectionModeProperty();
        [[nodiscard]] static auto CanDragItemsProperty();
        [[nodiscard]] static auto CanReorderItemsProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
        [[nodiscard]] static auto ItemTemplateSelectorProperty();
        [[nodiscard]] static auto ItemContainerStyleProperty();
        [[nodiscard]] static auto ItemContainerStyleSelectorProperty();
        [[nodiscard]] static auto ItemContainerTransitionsProperty();
        [[nodiscard]] static auto ItemsSourceProperty();
    };
    struct __declspec(empty_bases) TreeViewCollapsedEventArgs : winrt::Windows::UI::Xaml::Controls::ITreeViewCollapsedEventArgs,
        impl::require<TreeViewCollapsedEventArgs, winrt::Windows::UI::Xaml::Controls::ITreeViewCollapsedEventArgs2>
    {
        TreeViewCollapsedEventArgs(std::nullptr_t) noexcept {}
        TreeViewCollapsedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewCollapsedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TreeViewDragItemsCompletedEventArgs : winrt::Windows::UI::Xaml::Controls::ITreeViewDragItemsCompletedEventArgs
    {
        TreeViewDragItemsCompletedEventArgs(std::nullptr_t) noexcept {}
        TreeViewDragItemsCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewDragItemsCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TreeViewDragItemsStartingEventArgs : winrt::Windows::UI::Xaml::Controls::ITreeViewDragItemsStartingEventArgs
    {
        TreeViewDragItemsStartingEventArgs(std::nullptr_t) noexcept {}
        TreeViewDragItemsStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewDragItemsStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TreeViewExpandingEventArgs : winrt::Windows::UI::Xaml::Controls::ITreeViewExpandingEventArgs,
        impl::require<TreeViewExpandingEventArgs, winrt::Windows::UI::Xaml::Controls::ITreeViewExpandingEventArgs2>
    {
        TreeViewExpandingEventArgs(std::nullptr_t) noexcept {}
        TreeViewExpandingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewExpandingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TreeViewItem : winrt::Windows::UI::Xaml::Controls::ITreeViewItem,
        impl::base<TreeViewItem, winrt::Windows::UI::Xaml::Controls::ListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TreeViewItem, winrt::Windows::UI::Xaml::Controls::ITreeViewItem2, winrt::Windows::UI::Xaml::Controls::IListViewItem, winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TreeViewItem(std::nullptr_t) noexcept {}
        TreeViewItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewItem(ptr, take_ownership_from_abi) {}
        TreeViewItem();
        [[nodiscard]] static auto GlyphOpacityProperty();
        [[nodiscard]] static auto GlyphBrushProperty();
        [[nodiscard]] static auto ExpandedGlyphProperty();
        [[nodiscard]] static auto CollapsedGlyphProperty();
        [[nodiscard]] static auto GlyphSizeProperty();
        [[nodiscard]] static auto IsExpandedProperty();
        [[nodiscard]] static auto TreeViewItemTemplateSettingsProperty();
        [[nodiscard]] static auto HasUnrealizedChildrenProperty();
        [[nodiscard]] static auto ItemsSourceProperty();
    };
    struct __declspec(empty_bases) TreeViewItemInvokedEventArgs : winrt::Windows::UI::Xaml::Controls::ITreeViewItemInvokedEventArgs
    {
        TreeViewItemInvokedEventArgs(std::nullptr_t) noexcept {}
        TreeViewItemInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewItemInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TreeViewItemTemplateSettings : winrt::Windows::UI::Xaml::Controls::ITreeViewItemTemplateSettings,
        impl::base<TreeViewItemTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TreeViewItemTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TreeViewItemTemplateSettings(std::nullptr_t) noexcept {}
        TreeViewItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewItemTemplateSettings(ptr, take_ownership_from_abi) {}
        TreeViewItemTemplateSettings();
        [[nodiscard]] static auto ExpandedGlyphVisibilityProperty();
        [[nodiscard]] static auto CollapsedGlyphVisibilityProperty();
        [[nodiscard]] static auto IndentationProperty();
        [[nodiscard]] static auto DragItemsCountProperty();
    };
    struct __declspec(empty_bases) TreeViewList : winrt::Windows::UI::Xaml::Controls::ITreeViewList,
        impl::base<TreeViewList, winrt::Windows::UI::Xaml::Controls::ListView, winrt::Windows::UI::Xaml::Controls::ListViewBase, winrt::Windows::UI::Xaml::Controls::Primitives::Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TreeViewList, winrt::Windows::UI::Xaml::Controls::IListView, winrt::Windows::UI::Xaml::Controls::IListViewBase, winrt::Windows::UI::Xaml::Controls::IListViewBase2, winrt::Windows::UI::Xaml::Controls::IListViewBase3, winrt::Windows::UI::Xaml::Controls::IListViewBase4, winrt::Windows::UI::Xaml::Controls::IListViewBase5, winrt::Windows::UI::Xaml::Controls::IListViewBase6, winrt::Windows::UI::Xaml::Controls::ISemanticZoomInformation, winrt::Windows::UI::Xaml::Controls::Primitives::ISelector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TreeViewList(std::nullptr_t) noexcept {}
        TreeViewList(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewList(ptr, take_ownership_from_abi) {}
        TreeViewList();
    };
    struct __declspec(empty_bases) TreeViewNode : winrt::Windows::UI::Xaml::Controls::ITreeViewNode,
        impl::base<TreeViewNode, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TreeViewNode, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TreeViewNode(std::nullptr_t) noexcept {}
        TreeViewNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITreeViewNode(ptr, take_ownership_from_abi) {}
        TreeViewNode();
        [[nodiscard]] static auto ContentProperty();
        [[nodiscard]] static auto DepthProperty();
        [[nodiscard]] static auto IsExpandedProperty();
        [[nodiscard]] static auto HasChildrenProperty();
    };
    struct __declspec(empty_bases) TwoPaneView : winrt::Windows::UI::Xaml::Controls::ITwoPaneView,
        impl::base<TwoPaneView, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TwoPaneView, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TwoPaneView(std::nullptr_t) noexcept {}
        TwoPaneView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::ITwoPaneView(ptr, take_ownership_from_abi) {}
        TwoPaneView();
        [[nodiscard]] static auto Pane1Property();
        [[nodiscard]] static auto Pane2Property();
        [[nodiscard]] static auto Pane1LengthProperty();
        [[nodiscard]] static auto Pane2LengthProperty();
        [[nodiscard]] static auto PanePriorityProperty();
        [[nodiscard]] static auto ModeProperty();
        [[nodiscard]] static auto WideModeConfigurationProperty();
        [[nodiscard]] static auto TallModeConfigurationProperty();
        [[nodiscard]] static auto MinWideModeWidthProperty();
        [[nodiscard]] static auto MinTallModeHeightProperty();
    };
    struct __declspec(empty_bases) UIElementCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::UIElement>,
        impl::require<UIElementCollection, winrt::Windows::UI::Xaml::Controls::IUIElementCollection>
    {
        UIElementCollection(std::nullptr_t) noexcept {}
        UIElementCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::UIElement>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UserControl : winrt::Windows::UI::Xaml::Controls::IUserControl,
        impl::base<UserControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<UserControl, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        UserControl(std::nullptr_t) noexcept {}
        UserControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IUserControl(ptr, take_ownership_from_abi) {}
        UserControl();
        [[nodiscard]] static auto ContentProperty();
    };
    struct __declspec(empty_bases) VariableSizedWrapGrid : winrt::Windows::UI::Xaml::Controls::IVariableSizedWrapGrid,
        impl::base<VariableSizedWrapGrid, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VariableSizedWrapGrid, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VariableSizedWrapGrid(std::nullptr_t) noexcept {}
        VariableSizedWrapGrid(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IVariableSizedWrapGrid(ptr, take_ownership_from_abi) {}
        VariableSizedWrapGrid();
        [[nodiscard]] static auto ItemHeightProperty();
        [[nodiscard]] static auto ItemWidthProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto HorizontalChildrenAlignmentProperty();
        [[nodiscard]] static auto VerticalChildrenAlignmentProperty();
        [[nodiscard]] static auto MaximumRowsOrColumnsProperty();
        [[nodiscard]] static auto RowSpanProperty();
        static auto GetRowSpan(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetRowSpan(winrt::Windows::UI::Xaml::UIElement const& element, int32_t value);
        [[nodiscard]] static auto ColumnSpanProperty();
        static auto GetColumnSpan(winrt::Windows::UI::Xaml::UIElement const& element);
        static auto SetColumnSpan(winrt::Windows::UI::Xaml::UIElement const& element, int32_t value);
    };
    struct __declspec(empty_bases) Viewbox : winrt::Windows::UI::Xaml::Controls::IViewbox,
        impl::base<Viewbox, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Viewbox, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Viewbox(std::nullptr_t) noexcept {}
        Viewbox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IViewbox(ptr, take_ownership_from_abi) {}
        Viewbox();
        [[nodiscard]] static auto StretchProperty();
        [[nodiscard]] static auto StretchDirectionProperty();
    };
    struct __declspec(empty_bases) VirtualizingPanel : winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel,
        impl::base<VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VirtualizingPanel(std::nullptr_t) noexcept {}
        VirtualizingPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VirtualizingStackPanel : winrt::Windows::UI::Xaml::Controls::IVirtualizingStackPanel,
        impl::base<VirtualizingStackPanel, winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<VirtualizingStackPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingStackPanelOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IInsertionPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        VirtualizingStackPanel(std::nullptr_t) noexcept {}
        VirtualizingStackPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IVirtualizingStackPanel(ptr, take_ownership_from_abi) {}
        VirtualizingStackPanel();
        [[nodiscard]] static auto AreScrollSnapPointsRegularProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto VirtualizationModeProperty();
        static auto GetVirtualizationMode(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetVirtualizationMode(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::Controls::VirtualizationMode const& value);
        [[nodiscard]] static auto IsVirtualizingProperty();
        static auto GetIsVirtualizing(winrt::Windows::UI::Xaml::DependencyObject const& o);
    };
    struct __declspec(empty_bases) WebView : winrt::Windows::UI::Xaml::Controls::IWebView,
        impl::base<WebView, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<WebView, winrt::Windows::UI::Xaml::Controls::IWebView2, winrt::Windows::UI::Xaml::Controls::IWebView3, winrt::Windows::UI::Xaml::Controls::IWebView4, winrt::Windows::UI::Xaml::Controls::IWebView5, winrt::Windows::UI::Xaml::Controls::IWebView6, winrt::Windows::UI::Xaml::Controls::IWebView7, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        WebView(std::nullptr_t) noexcept {}
        WebView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebView(ptr, take_ownership_from_abi) {}
        WebView();
        explicit WebView(winrt::Windows::UI::Xaml::Controls::WebViewExecutionMode const& executionMode);
        [[nodiscard]] static auto AnyScriptNotifyUri();
        [[nodiscard]] static auto SourceProperty();
        [[nodiscard]] static auto AllowedScriptNotifyUrisProperty();
        [[nodiscard]] static auto DataTransferPackageProperty();
        [[nodiscard]] static auto CanGoBackProperty();
        [[nodiscard]] static auto CanGoForwardProperty();
        [[nodiscard]] static auto DocumentTitleProperty();
        [[nodiscard]] static auto DefaultBackgroundColorProperty();
        [[nodiscard]] static auto ContainsFullScreenElementProperty();
        [[nodiscard]] static auto DefaultExecutionMode();
        static auto ClearTemporaryWebDataAsync();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
    };
    struct __declspec(empty_bases) WebViewBrush : winrt::Windows::UI::Xaml::Controls::IWebViewBrush,
        impl::base<WebViewBrush, winrt::Windows::UI::Xaml::Media::TileBrush, winrt::Windows::UI::Xaml::Media::Brush, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<WebViewBrush, winrt::Windows::UI::Xaml::Media::ITileBrush, winrt::Windows::UI::Xaml::Media::IBrush, winrt::Windows::UI::Xaml::Media::IBrushOverrides2, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        WebViewBrush(std::nullptr_t) noexcept {}
        WebViewBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewBrush(ptr, take_ownership_from_abi) {}
        WebViewBrush();
        [[nodiscard]] static auto SourceNameProperty();
    };
    struct __declspec(empty_bases) WebViewContentLoadingEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewContentLoadingEventArgs
    {
        WebViewContentLoadingEventArgs(std::nullptr_t) noexcept {}
        WebViewContentLoadingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewContentLoadingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewDOMContentLoadedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewDOMContentLoadedEventArgs
    {
        WebViewDOMContentLoadedEventArgs(std::nullptr_t) noexcept {}
        WebViewDOMContentLoadedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewDOMContentLoadedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewDeferredPermissionRequest : winrt::Windows::UI::Xaml::Controls::IWebViewDeferredPermissionRequest
    {
        WebViewDeferredPermissionRequest(std::nullptr_t) noexcept {}
        WebViewDeferredPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewDeferredPermissionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewLongRunningScriptDetectedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewLongRunningScriptDetectedEventArgs
    {
        WebViewLongRunningScriptDetectedEventArgs(std::nullptr_t) noexcept {}
        WebViewLongRunningScriptDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewLongRunningScriptDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewNavigationCompletedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationCompletedEventArgs
    {
        WebViewNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
        WebViewNavigationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewNavigationFailedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationFailedEventArgs
    {
        WebViewNavigationFailedEventArgs(std::nullptr_t) noexcept {}
        WebViewNavigationFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewNavigationStartingEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationStartingEventArgs
    {
        WebViewNavigationStartingEventArgs(std::nullptr_t) noexcept {}
        WebViewNavigationStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewNavigationStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewNewWindowRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewNewWindowRequestedEventArgs
    {
        WebViewNewWindowRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewNewWindowRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewNewWindowRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewPermissionRequest : winrt::Windows::UI::Xaml::Controls::IWebViewPermissionRequest
    {
        WebViewPermissionRequest(std::nullptr_t) noexcept {}
        WebViewPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewPermissionRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewPermissionRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewPermissionRequestedEventArgs
    {
        WebViewPermissionRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewPermissionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewPermissionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewSeparateProcessLostEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewSeparateProcessLostEventArgs
    {
        WebViewSeparateProcessLostEventArgs(std::nullptr_t) noexcept {}
        WebViewSeparateProcessLostEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewSeparateProcessLostEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewSettings : winrt::Windows::UI::Xaml::Controls::IWebViewSettings
    {
        WebViewSettings(std::nullptr_t) noexcept {}
        WebViewSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewUnsupportedUriSchemeIdentifiedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewUnsupportedUriSchemeIdentifiedEventArgs
    {
        WebViewUnsupportedUriSchemeIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewUnsupportedUriSchemeIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewUnsupportedUriSchemeIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewUnviewableContentIdentifiedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewUnviewableContentIdentifiedEventArgs,
        impl::require<WebViewUnviewableContentIdentifiedEventArgs, winrt::Windows::UI::Xaml::Controls::IWebViewUnviewableContentIdentifiedEventArgs2>
    {
        WebViewUnviewableContentIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewUnviewableContentIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewUnviewableContentIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebViewWebResourceRequestedEventArgs : winrt::Windows::UI::Xaml::Controls::IWebViewWebResourceRequestedEventArgs
    {
        WebViewWebResourceRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewWebResourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWebViewWebResourceRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WrapGrid : winrt::Windows::UI::Xaml::Controls::IWrapGrid,
        impl::base<WrapGrid, winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<WrapGrid, winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IInsertionPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        WrapGrid(std::nullptr_t) noexcept {}
        WrapGrid(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::IWrapGrid(ptr, take_ownership_from_abi) {}
        WrapGrid();
        [[nodiscard]] static auto ItemWidthProperty();
        [[nodiscard]] static auto ItemHeightProperty();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto HorizontalChildrenAlignmentProperty();
        [[nodiscard]] static auto VerticalChildrenAlignmentProperty();
        [[nodiscard]] static auto MaximumRowsOrColumnsProperty();
    };
    template <typename D>
    class IAppBarOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IAppBarOverrides = winrt::Windows::UI::Xaml::Controls::IAppBarOverrides;
        auto OnClosed(winrt::Windows::Foundation::IInspectable const& e) const;
        auto OnOpened(winrt::Windows::Foundation::IInspectable const& e) const;
    };
    template <typename D>
    class IAppBarOverrides3T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IAppBarOverrides3 = winrt::Windows::UI::Xaml::Controls::IAppBarOverrides3;
        auto OnClosing(winrt::Windows::Foundation::IInspectable const& e) const;
        auto OnOpening(winrt::Windows::Foundation::IInspectable const& e) const;
    };
    template <typename D>
    class IComboBoxOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IComboBoxOverrides = winrt::Windows::UI::Xaml::Controls::IComboBoxOverrides;
        auto OnDropDownClosed(winrt::Windows::Foundation::IInspectable const& e) const;
        auto OnDropDownOpened(winrt::Windows::Foundation::IInspectable const& e) const;
    };
    template <typename D>
    class IContentControlOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IContentControlOverrides = winrt::Windows::UI::Xaml::Controls::IContentControlOverrides;
        auto OnContentChanged(winrt::Windows::Foundation::IInspectable const& oldContent, winrt::Windows::Foundation::IInspectable const& newContent) const;
        auto OnContentTemplateChanged(winrt::Windows::UI::Xaml::DataTemplate const& oldContentTemplate, winrt::Windows::UI::Xaml::DataTemplate const& newContentTemplate) const;
        auto OnContentTemplateSelectorChanged(winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& oldContentTemplateSelector, winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& newContentTemplateSelector) const;
    };
    template <typename D>
    class IContentPresenterOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IContentPresenterOverrides = winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides;
        auto OnContentTemplateChanged(winrt::Windows::UI::Xaml::DataTemplate const& oldContentTemplate, winrt::Windows::UI::Xaml::DataTemplate const& newContentTemplate) const;
        auto OnContentTemplateSelectorChanged(winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& oldContentTemplateSelector, winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& newContentTemplateSelector) const;
    };
    template <typename D>
    class IControlOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IControlOverrides = winrt::Windows::UI::Xaml::Controls::IControlOverrides;
        auto OnPointerEntered(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerPressed(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerMoved(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerReleased(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerExited(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerCaptureLost(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerCanceled(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnPointerWheelChanged(winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs const& e) const;
        auto OnTapped(winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs const& e) const;
        auto OnDoubleTapped(winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs const& e) const;
        auto OnHolding(winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs const& e) const;
        auto OnRightTapped(winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs const& e) const;
        auto OnManipulationStarting(winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs const& e) const;
        auto OnManipulationInertiaStarting(winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs const& e) const;
        auto OnManipulationStarted(winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs const& e) const;
        auto OnManipulationDelta(winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs const& e) const;
        auto OnManipulationCompleted(winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs const& e) const;
        auto OnKeyUp(winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
        auto OnKeyDown(winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
        auto OnGotFocus(winrt::Windows::UI::Xaml::RoutedEventArgs const& e) const;
        auto OnLostFocus(winrt::Windows::UI::Xaml::RoutedEventArgs const& e) const;
        auto OnDragEnter(winrt::Windows::UI::Xaml::DragEventArgs const& e) const;
        auto OnDragLeave(winrt::Windows::UI::Xaml::DragEventArgs const& e) const;
        auto OnDragOver(winrt::Windows::UI::Xaml::DragEventArgs const& e) const;
        auto OnDrop(winrt::Windows::UI::Xaml::DragEventArgs const& e) const;
    };
    template <typename D>
    class IControlOverrides6T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IControlOverrides6 = winrt::Windows::UI::Xaml::Controls::IControlOverrides6;
        auto OnPreviewKeyDown(winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
        auto OnPreviewKeyUp(winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs const& e) const;
        auto OnCharacterReceived(winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs const& e) const;
    };
    template <typename D>
    class IDataTemplateSelectorOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IDataTemplateSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides;
        auto SelectTemplateCore(winrt::Windows::Foundation::IInspectable const& item, winrt::Windows::UI::Xaml::DependencyObject const& container) const;
    };
    template <typename D>
    class IDataTemplateSelectorOverrides2T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IDataTemplateSelectorOverrides2 = winrt::Windows::UI::Xaml::Controls::IDataTemplateSelectorOverrides2;
        auto SelectTemplateCore(winrt::Windows::Foundation::IInspectable const& item) const;
    };
    template <typename D>
    class IGroupStyleSelectorOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IGroupStyleSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IGroupStyleSelectorOverrides;
        auto SelectGroupStyleCore(winrt::Windows::Foundation::IInspectable const& group, uint32_t level) const;
    };
    template <typename D>
    class IInkToolbarCustomPenOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IInkToolbarCustomPenOverrides = winrt::Windows::UI::Xaml::Controls::IInkToolbarCustomPenOverrides;
        auto CreateInkDrawingAttributesCore(winrt::Windows::UI::Xaml::Media::Brush const& brush, double strokeWidth) const;
    };
    template <typename D>
    class IItemsControlOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IItemsControlOverrides = winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides;
        auto IsItemItsOwnContainerOverride(winrt::Windows::Foundation::IInspectable const& item) const;
        auto GetContainerForItemOverride() const;
        auto ClearContainerForItemOverride(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::Foundation::IInspectable const& item) const;
        auto PrepareContainerForItemOverride(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::Foundation::IInspectable const& item) const;
        auto OnItemsChanged(winrt::Windows::Foundation::IInspectable const& e) const;
        auto OnItemContainerStyleChanged(winrt::Windows::UI::Xaml::Style const& oldItemContainerStyle, winrt::Windows::UI::Xaml::Style const& newItemContainerStyle) const;
        auto OnItemContainerStyleSelectorChanged(winrt::Windows::UI::Xaml::Controls::StyleSelector const& oldItemContainerStyleSelector, winrt::Windows::UI::Xaml::Controls::StyleSelector const& newItemContainerStyleSelector) const;
        auto OnItemTemplateChanged(winrt::Windows::UI::Xaml::DataTemplate const& oldItemTemplate, winrt::Windows::UI::Xaml::DataTemplate const& newItemTemplate) const;
        auto OnItemTemplateSelectorChanged(winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& oldItemTemplateSelector, winrt::Windows::UI::Xaml::Controls::DataTemplateSelector const& newItemTemplateSelector) const;
        auto OnGroupStyleSelectorChanged(winrt::Windows::UI::Xaml::Controls::GroupStyleSelector const& oldGroupStyleSelector, winrt::Windows::UI::Xaml::Controls::GroupStyleSelector const& newGroupStyleSelector) const;
    };
    template <typename D>
    class IPageOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IPageOverrides = winrt::Windows::UI::Xaml::Controls::IPageOverrides;
        auto OnNavigatedFrom(winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
        auto OnNavigatedTo(winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs const& e) const;
        auto OnNavigatingFrom(winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs const& e) const;
    };
    template <typename D>
    class IStyleSelectorOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IStyleSelectorOverrides = winrt::Windows::UI::Xaml::Controls::IStyleSelectorOverrides;
        auto SelectStyleCore(winrt::Windows::Foundation::IInspectable const& item, winrt::Windows::UI::Xaml::DependencyObject const& container) const;
    };
    template <typename D>
    class IToggleSwitchOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IToggleSwitchOverrides = winrt::Windows::UI::Xaml::Controls::IToggleSwitchOverrides;
        auto OnToggled() const;
        auto OnOnContentChanged(winrt::Windows::Foundation::IInspectable const& oldContent, winrt::Windows::Foundation::IInspectable const& newContent) const;
        auto OnOffContentChanged(winrt::Windows::Foundation::IInspectable const& oldContent, winrt::Windows::Foundation::IInspectable const& newContent) const;
        auto OnHeaderChanged(winrt::Windows::Foundation::IInspectable const& oldContent, winrt::Windows::Foundation::IInspectable const& newContent) const;
    };
    template <typename D>
    class IVirtualizingPanelOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IVirtualizingPanelOverrides = winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides;
        auto OnItemsChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& args) const;
        auto OnClearChildren() const;
        auto BringIndexIntoView(int32_t index) const;
    };
    template <typename D>
    class IVirtualizingStackPanelOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IVirtualizingStackPanelOverrides = winrt::Windows::UI::Xaml::Controls::IVirtualizingStackPanelOverrides;
        auto OnCleanUpVirtualizedItem(winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs const& e) const;
    };
}
#endif
