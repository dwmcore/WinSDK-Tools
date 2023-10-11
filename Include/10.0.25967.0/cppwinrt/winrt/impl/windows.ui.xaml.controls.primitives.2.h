// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Controls_Primitives_2_H
#define WINRT_Windows_UI_Xaml_Controls_Primitives_2_H
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    struct DragCompletedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DragCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragCompletedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragCompletedEventHandler(L lambda);
        template <typename F> DragCompletedEventHandler(F* function);
        template <typename O, typename M> DragCompletedEventHandler(O* object, M method);
        template <typename O, typename M> DragCompletedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragCompletedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const& e) const;
    };
    struct DragDeltaEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DragDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragDeltaEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragDeltaEventHandler(L lambda);
        template <typename F> DragDeltaEventHandler(F* function);
        template <typename O, typename M> DragDeltaEventHandler(O* object, M method);
        template <typename O, typename M> DragDeltaEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragDeltaEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const& e) const;
    };
    struct DragStartedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        DragStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
        DragStartedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DragStartedEventHandler(L lambda);
        template <typename F> DragStartedEventHandler(F* function);
        template <typename O, typename M> DragStartedEventHandler(O* object, M method);
        template <typename O, typename M> DragStartedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DragStartedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const& e) const;
    };
    struct ItemsChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ItemsChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        ItemsChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ItemsChangedEventHandler(L lambda);
        template <typename F> ItemsChangedEventHandler(F* function);
        template <typename O, typename M> ItemsChangedEventHandler(O* object, M method);
        template <typename O, typename M> ItemsChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ItemsChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& e) const;
    };
    struct RangeBaseValueChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        RangeBaseValueChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        RangeBaseValueChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RangeBaseValueChangedEventHandler(L lambda);
        template <typename F> RangeBaseValueChangedEventHandler(F* function);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(O* object, M method);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RangeBaseValueChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e) const;
    };
    struct ScrollEventHandler : winrt::Windows::Foundation::IUnknown
    {
        ScrollEventHandler(std::nullptr_t = nullptr) noexcept {}
        ScrollEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> ScrollEventHandler(L lambda);
        template <typename F> ScrollEventHandler(F* function);
        template <typename O, typename M> ScrollEventHandler(O* object, M method);
        template <typename O, typename M> ScrollEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> ScrollEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs const& e) const;
    };
    struct GeneratorPosition
    {
        int32_t Index;
        int32_t Offset;
    };
    inline bool operator==(GeneratorPosition const& left, GeneratorPosition const& right) noexcept
    {
        return left.Index == right.Index && left.Offset == right.Offset;
    }
    inline bool operator!=(GeneratorPosition const& left, GeneratorPosition const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AppBarButtonTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings,
        impl::base<AppBarButtonTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarButtonTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarButtonTemplateSettings(std::nullptr_t) noexcept {}
        AppBarButtonTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBarTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings,
        impl::base<AppBarTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarTemplateSettings, winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarTemplateSettings(std::nullptr_t) noexcept {}
        AppBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppBarToggleButtonTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings,
        impl::base<AppBarToggleButtonTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<AppBarToggleButtonTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        AppBarToggleButtonTemplateSettings(std::nullptr_t) noexcept {}
        AppBarToggleButtonTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ButtonBase : winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase,
        impl::base<ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ButtonBase(std::nullptr_t) noexcept {}
        ButtonBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ClickModeProperty();
        [[nodiscard]] static auto IsPointerOverProperty();
        [[nodiscard]] static auto IsPressedProperty();
        [[nodiscard]] static auto CommandProperty();
        [[nodiscard]] static auto CommandParameterProperty();
    };
    struct __declspec(empty_bases) CalendarPanel : winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel,
        impl::base<CalendarPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarPanel, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarPanel(std::nullptr_t) noexcept {}
        CalendarPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel(ptr, take_ownership_from_abi) {}
        CalendarPanel();
    };
    struct __declspec(empty_bases) CalendarViewTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings,
        impl::base<CalendarViewTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CalendarViewTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CalendarViewTemplateSettings(std::nullptr_t) noexcept {}
        CalendarViewTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CarouselPanel : winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanel,
        impl::base<CarouselPanel, winrt::Windows::UI::Xaml::Controls::VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CarouselPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CarouselPanel(std::nullptr_t) noexcept {}
        CarouselPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanel(ptr, take_ownership_from_abi) {}
        CarouselPanel();
    };
    struct __declspec(empty_bases) ColorPickerSlider : winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider,
        impl::base<ColorPickerSlider, winrt::Windows::UI::Xaml::Controls::Slider, winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorPickerSlider, winrt::Windows::UI::Xaml::Controls::ISlider, winrt::Windows::UI::Xaml::Controls::ISlider2, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorPickerSlider(std::nullptr_t) noexcept {}
        ColorPickerSlider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider(ptr, take_ownership_from_abi) {}
        ColorPickerSlider();
        [[nodiscard]] static auto ColorChannelProperty();
    };
    struct __declspec(empty_bases) ColorSpectrum : winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrum,
        impl::base<ColorSpectrum, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ColorSpectrum, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ColorSpectrum(std::nullptr_t) noexcept {}
        ColorSpectrum(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrum(ptr, take_ownership_from_abi) {}
        ColorSpectrum();
        [[nodiscard]] static auto ColorProperty();
        [[nodiscard]] static auto HsvColorProperty();
        [[nodiscard]] static auto MinHueProperty();
        [[nodiscard]] static auto MaxHueProperty();
        [[nodiscard]] static auto MinSaturationProperty();
        [[nodiscard]] static auto MaxSaturationProperty();
        [[nodiscard]] static auto MinValueProperty();
        [[nodiscard]] static auto MaxValueProperty();
        [[nodiscard]] static auto ShapeProperty();
        [[nodiscard]] static auto ComponentsProperty();
    };
    struct __declspec(empty_bases) ComboBoxTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings,
        impl::base<ComboBoxTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ComboBoxTemplateSettings, winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ComboBoxTemplateSettings(std::nullptr_t) noexcept {}
        ComboBoxTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBar : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar,
        impl::base<CommandBarFlyoutCommandBar, winrt::Windows::UI::Xaml::Controls::CommandBar, winrt::Windows::UI::Xaml::Controls::AppBar, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBar, winrt::Windows::UI::Xaml::Controls::ICommandBar, winrt::Windows::UI::Xaml::Controls::ICommandBar2, winrt::Windows::UI::Xaml::Controls::ICommandBar3, winrt::Windows::UI::Xaml::Controls::IAppBar, winrt::Windows::UI::Xaml::Controls::IAppBar2, winrt::Windows::UI::Xaml::Controls::IAppBar3, winrt::Windows::UI::Xaml::Controls::IAppBar4, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides, winrt::Windows::UI::Xaml::Controls::IAppBarOverrides3, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBar(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar(ptr, take_ownership_from_abi) {}
        CommandBarFlyoutCommandBar();
    };
    struct __declspec(empty_bases) CommandBarFlyoutCommandBarTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings,
        impl::base<CommandBarFlyoutCommandBarTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarFlyoutCommandBarTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarFlyoutCommandBarTemplateSettings(std::nullptr_t) noexcept {}
        CommandBarFlyoutCommandBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CommandBarTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings,
        impl::base<CommandBarTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CommandBarTemplateSettings, winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2, winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3, winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CommandBarTemplateSettings(std::nullptr_t) noexcept {}
        CommandBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DragCompletedEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs,
        impl::base<DragCompletedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragCompletedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragCompletedEventArgs(std::nullptr_t) noexcept {}
        DragCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs(ptr, take_ownership_from_abi) {}
        DragCompletedEventArgs(double horizontalChange, double verticalChange, bool canceled);
    };
    struct __declspec(empty_bases) DragDeltaEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs,
        impl::base<DragDeltaEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragDeltaEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragDeltaEventArgs(std::nullptr_t) noexcept {}
        DragDeltaEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs(ptr, take_ownership_from_abi) {}
        DragDeltaEventArgs(double horizontalChange, double verticalChange);
    };
    struct __declspec(empty_bases) DragStartedEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs,
        impl::base<DragStartedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<DragStartedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        DragStartedEventArgs(std::nullptr_t) noexcept {}
        DragStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs(ptr, take_ownership_from_abi) {}
        DragStartedEventArgs(double horizontalOffset, double verticalOffset);
    };
    struct __declspec(empty_bases) FlyoutBase : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase,
        impl::base<FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<FlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        FlyoutBase(std::nullptr_t) noexcept {}
        FlyoutBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase(ptr, take_ownership_from_abi) {}
        using winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase::ShowAt;
        using impl::consume_t<FlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto PlacementProperty();
        [[nodiscard]] static auto AttachedFlyoutProperty();
        static auto GetAttachedFlyout(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto SetAttachedFlyout(winrt::Windows::UI::Xaml::FrameworkElement const& element, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value);
        static auto ShowAttachedFlyout(winrt::Windows::UI::Xaml::FrameworkElement const& flyoutOwner);
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto AllowFocusWhenDisabledProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto OverlayInputPassThroughElementProperty();
        [[nodiscard]] static auto TargetProperty();
        [[nodiscard]] static auto ShowModeProperty();
        [[nodiscard]] static auto InputDevicePrefersPrimaryCommandsProperty();
        [[nodiscard]] static auto AreOpenCloseAnimationsEnabledProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto ShouldConstrainToRootBoundsProperty();
    };
    struct __declspec(empty_bases) FlyoutBaseClosingEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs
    {
        FlyoutBaseClosingEventArgs(std::nullptr_t) noexcept {}
        FlyoutBaseClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FlyoutShowOptions : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions
    {
        FlyoutShowOptions(std::nullptr_t) noexcept {}
        FlyoutShowOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions(ptr, take_ownership_from_abi) {}
        FlyoutShowOptions();
    };
    struct __declspec(empty_bases) GeneratorPositionHelper : winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper
    {
        GeneratorPositionHelper(std::nullptr_t) noexcept {}
        GeneratorPositionHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper(ptr, take_ownership_from_abi) {}
        static auto FromIndexAndOffset(int32_t index, int32_t offset);
    };
    struct __declspec(empty_bases) GridViewItemPresenter : winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter,
        impl::base<GridViewItemPresenter, winrt::Windows::UI::Xaml::Controls::ContentPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewItemPresenter, winrt::Windows::UI::Xaml::Controls::IContentPresenter, winrt::Windows::UI::Xaml::Controls::IContentPresenter2, winrt::Windows::UI::Xaml::Controls::IContentPresenter3, winrt::Windows::UI::Xaml::Controls::IContentPresenter4, winrt::Windows::UI::Xaml::Controls::IContentPresenter5, winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewItemPresenter(std::nullptr_t) noexcept {}
        GridViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter(ptr, take_ownership_from_abi) {}
        GridViewItemPresenter();
        [[nodiscard]] static auto SelectionCheckMarkVisualEnabledProperty();
        [[nodiscard]] static auto CheckHintBrushProperty();
        [[nodiscard]] static auto CheckSelectingBrushProperty();
        [[nodiscard]] static auto CheckBrushProperty();
        [[nodiscard]] static auto DragBackgroundProperty();
        [[nodiscard]] static auto DragForegroundProperty();
        [[nodiscard]] static auto FocusBorderBrushProperty();
        [[nodiscard]] static auto PlaceholderBackgroundProperty();
        [[nodiscard]] static auto PointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedBackgroundProperty();
        [[nodiscard]] static auto SelectedForegroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBorderBrushProperty();
        [[nodiscard]] static auto SelectedBorderThicknessProperty();
        [[nodiscard]] static auto DisabledOpacityProperty();
        [[nodiscard]] static auto DragOpacityProperty();
        [[nodiscard]] static auto ReorderHintOffsetProperty();
        [[nodiscard]] static auto GridViewItemPresenterHorizontalContentAlignmentProperty();
        [[nodiscard]] static auto GridViewItemPresenterVerticalContentAlignmentProperty();
        [[nodiscard]] static auto GridViewItemPresenterPaddingProperty();
        [[nodiscard]] static auto PointerOverBackgroundMarginProperty();
        [[nodiscard]] static auto ContentMarginProperty();
    };
    struct __declspec(empty_bases) GridViewItemTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings,
        impl::base<GridViewItemTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<GridViewItemTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        GridViewItemTemplateSettings(std::nullptr_t) noexcept {}
        GridViewItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ItemsChangedEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs
    {
        ItemsChangedEventArgs(std::nullptr_t) noexcept {}
        ItemsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) JumpListItemBackgroundConverter : winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter,
        impl::base<JumpListItemBackgroundConverter, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<JumpListItemBackgroundConverter, winrt::Windows::UI::Xaml::Data::IValueConverter, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        JumpListItemBackgroundConverter(std::nullptr_t) noexcept {}
        JumpListItemBackgroundConverter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter(ptr, take_ownership_from_abi) {}
        JumpListItemBackgroundConverter();
        [[nodiscard]] static auto EnabledProperty();
        [[nodiscard]] static auto DisabledProperty();
    };
    struct __declspec(empty_bases) JumpListItemForegroundConverter : winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter,
        impl::base<JumpListItemForegroundConverter, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<JumpListItemForegroundConverter, winrt::Windows::UI::Xaml::Data::IValueConverter, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        JumpListItemForegroundConverter(std::nullptr_t) noexcept {}
        JumpListItemForegroundConverter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter(ptr, take_ownership_from_abi) {}
        JumpListItemForegroundConverter();
        [[nodiscard]] static auto EnabledProperty();
        [[nodiscard]] static auto DisabledProperty();
    };
    struct __declspec(empty_bases) LayoutInformation : winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformation
    {
        LayoutInformation(std::nullptr_t) noexcept {}
        LayoutInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformation(ptr, take_ownership_from_abi) {}
        static auto GetLayoutExceptionElement(winrt::Windows::Foundation::IInspectable const& dispatcher);
        static auto GetLayoutSlot(winrt::Windows::UI::Xaml::FrameworkElement const& element);
        static auto GetAvailableSize(winrt::Windows::UI::Xaml::UIElement const& element);
    };
    struct __declspec(empty_bases) ListViewItemPresenter : winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter,
        impl::base<ListViewItemPresenter, winrt::Windows::UI::Xaml::Controls::ContentPresenter, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewItemPresenter, winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2, winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3, winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4, winrt::Windows::UI::Xaml::Controls::IContentPresenter, winrt::Windows::UI::Xaml::Controls::IContentPresenter2, winrt::Windows::UI::Xaml::Controls::IContentPresenter3, winrt::Windows::UI::Xaml::Controls::IContentPresenter4, winrt::Windows::UI::Xaml::Controls::IContentPresenter5, winrt::Windows::UI::Xaml::Controls::IContentPresenterOverrides, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewItemPresenter(std::nullptr_t) noexcept {}
        ListViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter(ptr, take_ownership_from_abi) {}
        ListViewItemPresenter();
        [[nodiscard]] static auto SelectionCheckMarkVisualEnabledProperty();
        [[nodiscard]] static auto CheckHintBrushProperty();
        [[nodiscard]] static auto CheckSelectingBrushProperty();
        [[nodiscard]] static auto CheckBrushProperty();
        [[nodiscard]] static auto DragBackgroundProperty();
        [[nodiscard]] static auto DragForegroundProperty();
        [[nodiscard]] static auto FocusBorderBrushProperty();
        [[nodiscard]] static auto PlaceholderBackgroundProperty();
        [[nodiscard]] static auto PointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedBackgroundProperty();
        [[nodiscard]] static auto SelectedForegroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBackgroundProperty();
        [[nodiscard]] static auto SelectedPointerOverBorderBrushProperty();
        [[nodiscard]] static auto SelectedBorderThicknessProperty();
        [[nodiscard]] static auto DisabledOpacityProperty();
        [[nodiscard]] static auto DragOpacityProperty();
        [[nodiscard]] static auto ReorderHintOffsetProperty();
        [[nodiscard]] static auto ListViewItemPresenterHorizontalContentAlignmentProperty();
        [[nodiscard]] static auto ListViewItemPresenterVerticalContentAlignmentProperty();
        [[nodiscard]] static auto ListViewItemPresenterPaddingProperty();
        [[nodiscard]] static auto PointerOverBackgroundMarginProperty();
        [[nodiscard]] static auto ContentMarginProperty();
        [[nodiscard]] static auto SelectedPressedBackgroundProperty();
        [[nodiscard]] static auto PressedBackgroundProperty();
        [[nodiscard]] static auto CheckBoxBrushProperty();
        [[nodiscard]] static auto FocusSecondaryBorderBrushProperty();
        [[nodiscard]] static auto CheckModeProperty();
        [[nodiscard]] static auto PointerOverForegroundProperty();
        [[nodiscard]] static auto RevealBackgroundProperty();
        [[nodiscard]] static auto RevealBorderBrushProperty();
        [[nodiscard]] static auto RevealBorderThicknessProperty();
        [[nodiscard]] static auto RevealBackgroundShowsAboveContentProperty();
        [[nodiscard]] static auto SelectedDisabledBackgroundProperty();
        [[nodiscard]] static auto CheckPressedBrushProperty();
        [[nodiscard]] static auto CheckDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxPointerOverBrushProperty();
        [[nodiscard]] static auto CheckBoxPressedBrushProperty();
        [[nodiscard]] static auto CheckBoxDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedPointerOverBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedPressedBrushProperty();
        [[nodiscard]] static auto CheckBoxSelectedDisabledBrushProperty();
        [[nodiscard]] static auto CheckBoxBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxPointerOverBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxPressedBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxDisabledBorderBrushProperty();
        [[nodiscard]] static auto CheckBoxCornerRadiusProperty();
        [[nodiscard]] static auto SelectionIndicatorCornerRadiusProperty();
        [[nodiscard]] static auto SelectionIndicatorVisualEnabledProperty();
        [[nodiscard]] static auto SelectionIndicatorModeProperty();
        [[nodiscard]] static auto SelectionIndicatorBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorPointerOverBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorPressedBrushProperty();
        [[nodiscard]] static auto SelectionIndicatorDisabledBrushProperty();
        [[nodiscard]] static auto SelectedBorderBrushProperty();
        [[nodiscard]] static auto SelectedPressedBorderBrushProperty();
        [[nodiscard]] static auto SelectedDisabledBorderBrushProperty();
        [[nodiscard]] static auto SelectedInnerBorderBrushProperty();
        [[nodiscard]] static auto PointerOverBorderBrushProperty();
    };
    struct __declspec(empty_bases) ListViewItemTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings,
        impl::base<ListViewItemTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ListViewItemTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ListViewItemTemplateSettings(std::nullptr_t) noexcept {}
        ListViewItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoopingSelector : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector,
        impl::base<LoopingSelector, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelector, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelector(std::nullptr_t) noexcept {}
        LoopingSelector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto ShouldLoopProperty();
        [[nodiscard]] static auto ItemsProperty();
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto ItemWidthProperty();
        [[nodiscard]] static auto ItemHeightProperty();
        [[nodiscard]] static auto ItemTemplateProperty();
    };
    struct __declspec(empty_bases) LoopingSelectorItem : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem,
        impl::base<LoopingSelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelectorItem(std::nullptr_t) noexcept {}
        LoopingSelectorItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LoopingSelectorPanel : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel,
        impl::base<LoopingSelectorPanel, winrt::Windows::UI::Xaml::Controls::Canvas, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LoopingSelectorPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::ICanvas, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LoopingSelectorPanel(std::nullptr_t) noexcept {}
        LoopingSelectorPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MenuFlyoutItemTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings,
        impl::base<MenuFlyoutItemTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutItemTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutItemTemplateSettings(std::nullptr_t) noexcept {}
        MenuFlyoutItemTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MenuFlyoutPresenterTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings,
        impl::base<MenuFlyoutPresenterTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<MenuFlyoutPresenterTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        MenuFlyoutPresenterTemplateSettings(std::nullptr_t) noexcept {}
        MenuFlyoutPresenterTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NavigationViewItemPresenter : winrt::Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter,
        impl::base<NavigationViewItemPresenter, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<NavigationViewItemPresenter, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        NavigationViewItemPresenter(std::nullptr_t) noexcept {}
        NavigationViewItemPresenter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter(ptr, take_ownership_from_abi) {}
        NavigationViewItemPresenter();
        [[nodiscard]] static auto IconProperty();
    };
    struct __declspec(empty_bases) OrientedVirtualizingPanel : winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel,
        impl::base<OrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::VirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<OrientedVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IInsertionPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanel, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, winrt::Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        OrientedVirtualizingPanel(std::nullptr_t) noexcept {}
        OrientedVirtualizingPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerFlyoutBase : winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase,
        impl::base<PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PickerFlyoutBase(std::nullptr_t) noexcept {}
        PickerFlyoutBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::ShowAt;
        using impl::consume_t<PickerFlyoutBase, winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>::ShowAt;
        [[nodiscard]] static auto TitleProperty();
        static auto GetTitle(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetTitle(winrt::Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value);
    };
    struct __declspec(empty_bases) PivotHeaderItem : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem,
        impl::base<PivotHeaderItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotHeaderItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PivotHeaderItem(std::nullptr_t) noexcept {}
        PivotHeaderItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem(ptr, take_ownership_from_abi) {}
        PivotHeaderItem();
    };
    struct __declspec(empty_bases) PivotHeaderPanel : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel,
        impl::base<PivotHeaderPanel, winrt::Windows::UI::Xaml::Controls::Canvas, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotHeaderPanel, winrt::Windows::UI::Xaml::Controls::ICanvas, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PivotHeaderPanel(std::nullptr_t) noexcept {}
        PivotHeaderPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel(ptr, take_ownership_from_abi) {}
        PivotHeaderPanel();
    };
    struct __declspec(empty_bases) PivotPanel : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotPanel,
        impl::base<PivotPanel, winrt::Windows::UI::Xaml::Controls::Panel, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PivotPanel, winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, winrt::Windows::UI::Xaml::Controls::IPanel, winrt::Windows::UI::Xaml::Controls::IPanel2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PivotPanel(std::nullptr_t) noexcept {}
        PivotPanel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IPivotPanel(ptr, take_ownership_from_abi) {}
        PivotPanel();
    };
    struct __declspec(empty_bases) Popup : winrt::Windows::UI::Xaml::Controls::Primitives::IPopup,
        impl::base<Popup, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Popup, winrt::Windows::UI::Xaml::Controls::Primitives::IPopup2, winrt::Windows::UI::Xaml::Controls::Primitives::IPopup3, winrt::Windows::UI::Xaml::Controls::Primitives::IPopup4, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Popup(std::nullptr_t) noexcept {}
        Popup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IPopup(ptr, take_ownership_from_abi) {}
        Popup();
        [[nodiscard]] static auto ChildProperty();
        [[nodiscard]] static auto IsOpenProperty();
        [[nodiscard]] static auto HorizontalOffsetProperty();
        [[nodiscard]] static auto VerticalOffsetProperty();
        [[nodiscard]] static auto ChildTransitionsProperty();
        [[nodiscard]] static auto IsLightDismissEnabledProperty();
        [[nodiscard]] static auto LightDismissOverlayModeProperty();
        [[nodiscard]] static auto ShouldConstrainToRootBoundsProperty();
        [[nodiscard]] static auto PlacementTargetProperty();
        [[nodiscard]] static auto DesiredPlacementProperty();
    };
    struct __declspec(empty_bases) ProgressBarTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings,
        impl::base<ProgressBarTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressBarTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressBarTemplateSettings(std::nullptr_t) noexcept {}
        ProgressBarTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProgressRingTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings,
        impl::base<ProgressRingTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ProgressRingTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ProgressRingTemplateSettings(std::nullptr_t) noexcept {}
        ProgressRingTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RangeBase : winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase,
        impl::base<RangeBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RangeBase, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RangeBase(std::nullptr_t) noexcept {}
        RangeBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MinimumProperty();
        [[nodiscard]] static auto MaximumProperty();
        [[nodiscard]] static auto SmallChangeProperty();
        [[nodiscard]] static auto LargeChangeProperty();
        [[nodiscard]] static auto ValueProperty();
    };
    struct __declspec(empty_bases) RangeBaseValueChangedEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs,
        impl::base<RangeBaseValueChangedEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<RangeBaseValueChangedEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        RangeBaseValueChangedEventArgs(std::nullptr_t) noexcept {}
        RangeBaseValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) RepeatButton : winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButton,
        impl::base<RepeatButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<RepeatButton, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        RepeatButton(std::nullptr_t) noexcept {}
        RepeatButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButton(ptr, take_ownership_from_abi) {}
        RepeatButton();
        [[nodiscard]] static auto DelayProperty();
        [[nodiscard]] static auto IntervalProperty();
    };
    struct __declspec(empty_bases) ScrollBar : winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBar,
        impl::base<ScrollBar, winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ScrollBar, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase, winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ScrollBar(std::nullptr_t) noexcept {}
        ScrollBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBar(ptr, take_ownership_from_abi) {}
        ScrollBar();
        [[nodiscard]] static auto OrientationProperty();
        [[nodiscard]] static auto ViewportSizeProperty();
        [[nodiscard]] static auto IndicatorModeProperty();
    };
    struct __declspec(empty_bases) ScrollEventArgs : winrt::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs,
        impl::base<ScrollEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<ScrollEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        ScrollEventArgs(std::nullptr_t) noexcept {}
        ScrollEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs(ptr, take_ownership_from_abi) {}
        ScrollEventArgs();
    };
    struct __declspec(empty_bases) Selector : winrt::Windows::UI::Xaml::Controls::Primitives::ISelector,
        impl::base<Selector, winrt::Windows::UI::Xaml::Controls::ItemsControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Selector, winrt::Windows::UI::Xaml::Controls::IItemsControl, winrt::Windows::UI::Xaml::Controls::IItemsControl2, winrt::Windows::UI::Xaml::Controls::IItemsControl3, winrt::Windows::UI::Xaml::Controls::IItemsControlOverrides, winrt::Windows::UI::Xaml::Controls::IItemContainerMapping, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Selector(std::nullptr_t) noexcept {}
        Selector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ISelector(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto SelectedIndexProperty();
        [[nodiscard]] static auto SelectedItemProperty();
        [[nodiscard]] static auto SelectedValueProperty();
        [[nodiscard]] static auto SelectedValuePathProperty();
        [[nodiscard]] static auto IsSynchronizedWithCurrentItemProperty();
        static auto GetIsSelectionActive(winrt::Windows::UI::Xaml::DependencyObject const& element);
    };
    struct __declspec(empty_bases) SelectorItem : winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem,
        impl::base<SelectorItem, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SelectorItem, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SelectorItem(std::nullptr_t) noexcept {}
        SelectorItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto IsSelectedProperty();
    };
    struct __declspec(empty_bases) SettingsFlyoutTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings,
        impl::base<SettingsFlyoutTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SettingsFlyoutTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SettingsFlyoutTemplateSettings(std::nullptr_t) noexcept {}
        SettingsFlyoutTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SplitViewTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings,
        impl::base<SplitViewTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<SplitViewTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        SplitViewTemplateSettings(std::nullptr_t) noexcept {}
        SplitViewTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Thumb : winrt::Windows::UI::Xaml::Controls::Primitives::IThumb,
        impl::base<Thumb, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Thumb, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Thumb(std::nullptr_t) noexcept {}
        Thumb(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IThumb(ptr, take_ownership_from_abi) {}
        Thumb();
        [[nodiscard]] static auto IsDraggingProperty();
    };
    struct __declspec(empty_bases) TickBar : winrt::Windows::UI::Xaml::Controls::Primitives::ITickBar,
        impl::base<TickBar, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TickBar, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TickBar(std::nullptr_t) noexcept {}
        TickBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::ITickBar(ptr, take_ownership_from_abi) {}
        TickBar();
        [[nodiscard]] static auto FillProperty();
    };
    struct __declspec(empty_bases) ToggleButton : winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton,
        impl::base<ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase, winrt::Windows::UI::Xaml::Controls::ContentControl, winrt::Windows::UI::Xaml::Controls::Control, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleButton, winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase, winrt::Windows::UI::Xaml::Controls::IContentControl, winrt::Windows::UI::Xaml::Controls::IContentControl2, winrt::Windows::UI::Xaml::Controls::IContentControlOverrides, winrt::Windows::UI::Xaml::Controls::IControl, winrt::Windows::UI::Xaml::Controls::IControl2, winrt::Windows::UI::Xaml::Controls::IControl3, winrt::Windows::UI::Xaml::Controls::IControl4, winrt::Windows::UI::Xaml::Controls::IControl5, winrt::Windows::UI::Xaml::Controls::IControl7, winrt::Windows::UI::Xaml::Controls::IControlProtected, winrt::Windows::UI::Xaml::Controls::IControlOverrides, winrt::Windows::UI::Xaml::Controls::IControlOverrides6, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleButton(std::nullptr_t) noexcept {}
        ToggleButton(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton(ptr, take_ownership_from_abi) {}
        ToggleButton();
        [[nodiscard]] static auto IsCheckedProperty();
        [[nodiscard]] static auto IsThreeStateProperty();
    };
    struct __declspec(empty_bases) ToggleSwitchTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings,
        impl::base<ToggleSwitchTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToggleSwitchTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToggleSwitchTemplateSettings(std::nullptr_t) noexcept {}
        ToggleSwitchTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ToolTipTemplateSettings : winrt::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings,
        impl::base<ToolTipTemplateSettings, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ToolTipTemplateSettings, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ToolTipTemplateSettings(std::nullptr_t) noexcept {}
        ToolTipTemplateSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings(ptr, take_ownership_from_abi) {}
    };
    template <typename D>
    class IFlyoutBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides;
        auto CreatePresenter() const;
    };
    template <typename D>
    class IFlyoutBaseOverrides4T
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IFlyoutBaseOverrides4 = winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4;
        auto OnProcessKeyboardAccelerators(winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <typename D>
    class IPickerFlyoutBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IPickerFlyoutBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides;
        auto OnConfirmed() const;
        auto ShouldShowConfirmationButtons() const;
    };
    template <typename D>
    class IRangeBaseOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IRangeBaseOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides;
        auto OnMinimumChanged(double oldMinimum, double newMinimum) const;
        auto OnMaximumChanged(double oldMaximum, double newMaximum) const;
        auto OnValueChanged(double oldValue, double newValue) const;
    };
    template <typename D>
    class IToggleButtonOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using IToggleButtonOverrides = winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides;
        auto OnToggle() const;
    };
}
#endif