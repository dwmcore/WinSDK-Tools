// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Input_Inking_0_H
#define WINRT_Windows_UI_Input_Inking_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    enum class CoreInputDeviceTypes : uint32_t;
    struct PointerEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking
{
    enum class HandwritingLineHeight : int32_t
    {
        Small = 0,
        Medium = 1,
        Large = 2,
    };
    enum class InkDrawingAttributesKind : int32_t
    {
        Default = 0,
        Pencil = 1,
    };
    enum class InkHighContrastAdjustment : int32_t
    {
        UseSystemColorsWhenNecessary = 0,
        UseSystemColors = 1,
        UseOriginalColors = 2,
    };
    enum class InkInputProcessingMode : int32_t
    {
        None = 0,
        Inking = 1,
        Erasing = 2,
    };
    enum class InkInputRightDragAction : int32_t
    {
        LeaveUnprocessed = 0,
        AllowProcessing = 1,
    };
    enum class InkManipulationMode : int32_t
    {
        Inking = 0,
        Erasing = 1,
        Selecting = 2,
    };
    enum class InkPersistenceFormat : int32_t
    {
        GifWithEmbeddedIsf = 0,
        Isf = 1,
    };
    enum class InkPresenterPredefinedConfiguration : int32_t
    {
        SimpleSinglePointer = 0,
        SimpleMultiplePointer = 1,
    };
    enum class InkPresenterStencilKind : int32_t
    {
        Other = 0,
        Ruler = 1,
        Protractor = 2,
    };
    enum class InkRecognitionTarget : int32_t
    {
        All = 0,
        Selected = 1,
        Recent = 2,
    };
    enum class PenHandedness : int32_t
    {
        Right = 0,
        Left = 1,
    };
    enum class PenTipShape : int32_t
    {
        Circle = 0,
        Rectangle = 1,
    };
    struct IInkDrawingAttributes;
    struct IInkDrawingAttributes2;
    struct IInkDrawingAttributes3;
    struct IInkDrawingAttributes4;
    struct IInkDrawingAttributes5;
    struct IInkDrawingAttributesPencilProperties;
    struct IInkDrawingAttributesStatics;
    struct IInkInputConfiguration;
    struct IInkInputConfiguration2;
    struct IInkInputProcessingConfiguration;
    struct IInkManager;
    struct IInkModelerAttributes;
    struct IInkModelerAttributes2;
    struct IInkPoint;
    struct IInkPoint2;
    struct IInkPointFactory;
    struct IInkPointFactory2;
    struct IInkPresenter;
    struct IInkPresenter2;
    struct IInkPresenter3;
    struct IInkPresenterProtractor;
    struct IInkPresenterProtractorFactory;
    struct IInkPresenterRuler;
    struct IInkPresenterRuler2;
    struct IInkPresenterRulerFactory;
    struct IInkPresenterStencil;
    struct IInkRecognitionResult;
    struct IInkRecognizer;
    struct IInkRecognizerContainer;
    struct IInkStroke;
    struct IInkStroke2;
    struct IInkStroke3;
    struct IInkStroke4;
    struct IInkStrokeBuilder;
    struct IInkStrokeBuilder2;
    struct IInkStrokeBuilder3;
    struct IInkStrokeContainer;
    struct IInkStrokeContainer2;
    struct IInkStrokeContainer3;
    struct IInkStrokeInput;
    struct IInkStrokeRenderingSegment;
    struct IInkStrokesCollectedEventArgs;
    struct IInkStrokesErasedEventArgs;
    struct IInkSynchronizer;
    struct IInkUnprocessedInput;
    struct IPenAndInkSettings;
    struct IPenAndInkSettings2;
    struct IPenAndInkSettingsStatics;
    struct InkDrawingAttributes;
    struct InkDrawingAttributesPencilProperties;
    struct InkInputConfiguration;
    struct InkInputProcessingConfiguration;
    struct InkManager;
    struct InkModelerAttributes;
    struct InkPoint;
    struct InkPresenter;
    struct InkPresenterProtractor;
    struct InkPresenterRuler;
    struct InkRecognitionResult;
    struct InkRecognizer;
    struct InkRecognizerContainer;
    struct InkStroke;
    struct InkStrokeBuilder;
    struct InkStrokeContainer;
    struct InkStrokeInput;
    struct InkStrokeRenderingSegment;
    struct InkStrokesCollectedEventArgs;
    struct InkStrokesErasedEventArgs;
    struct InkSynchronizer;
    struct InkUnprocessedInput;
    struct PenAndInkSettings;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkInputConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkInputConfiguration2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkModelerAttributes>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkModelerAttributes2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPoint>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPoint2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPointFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPointFactory2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenter2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenter3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterRuler>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkRecognitionResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkRecognizer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStroke>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStroke2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStroke3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStroke4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeInput>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkSynchronizer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IPenAndInkSettings>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IPenAndInkSettings2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::IPenAndInkSettingsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkInputConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkModelerAttributes>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPoint>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPresenter>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPresenterRuler>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkRecognitionResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkRecognizer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStroke>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokeContainer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokeInput>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkSynchronizer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::PenAndInkSettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::HandwritingLineHeight>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkDrawingAttributesKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkHighContrastAdjustment>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkInputProcessingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkInputRightDragAction>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkManipulationMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPersistenceFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkPresenterStencilKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::InkRecognitionTarget>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::PenHandedness>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Input::Inking::PenTipShape>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkDrawingAttributes> = L"Windows.UI.Input.Inking.InkDrawingAttributes";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties> = L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkInputConfiguration> = L"Windows.UI.Input.Inking.InkInputConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration> = L"Windows.UI.Input.Inking.InkInputProcessingConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkManager> = L"Windows.UI.Input.Inking.InkManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkModelerAttributes> = L"Windows.UI.Input.Inking.InkModelerAttributes";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPoint> = L"Windows.UI.Input.Inking.InkPoint";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPresenter> = L"Windows.UI.Input.Inking.InkPresenter";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPresenterProtractor> = L"Windows.UI.Input.Inking.InkPresenterProtractor";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPresenterRuler> = L"Windows.UI.Input.Inking.InkPresenterRuler";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkRecognitionResult> = L"Windows.UI.Input.Inking.InkRecognitionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkRecognizer> = L"Windows.UI.Input.Inking.InkRecognizer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkRecognizerContainer> = L"Windows.UI.Input.Inking.InkRecognizerContainer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStroke> = L"Windows.UI.Input.Inking.InkStroke";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokeBuilder> = L"Windows.UI.Input.Inking.InkStrokeBuilder";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokeContainer> = L"Windows.UI.Input.Inking.InkStrokeContainer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokeInput> = L"Windows.UI.Input.Inking.InkStrokeInput";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment> = L"Windows.UI.Input.Inking.InkStrokeRenderingSegment";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> = L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs> = L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkSynchronizer> = L"Windows.UI.Input.Inking.InkSynchronizer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkUnprocessedInput> = L"Windows.UI.Input.Inking.InkUnprocessedInput";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::PenAndInkSettings> = L"Windows.UI.Input.Inking.PenAndInkSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::HandwritingLineHeight> = L"Windows.UI.Input.Inking.HandwritingLineHeight";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkDrawingAttributesKind> = L"Windows.UI.Input.Inking.InkDrawingAttributesKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkHighContrastAdjustment> = L"Windows.UI.Input.Inking.InkHighContrastAdjustment";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkInputProcessingMode> = L"Windows.UI.Input.Inking.InkInputProcessingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkInputRightDragAction> = L"Windows.UI.Input.Inking.InkInputRightDragAction";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkManipulationMode> = L"Windows.UI.Input.Inking.InkManipulationMode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPersistenceFormat> = L"Windows.UI.Input.Inking.InkPersistenceFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration> = L"Windows.UI.Input.Inking.InkPresenterPredefinedConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkPresenterStencilKind> = L"Windows.UI.Input.Inking.InkPresenterStencilKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::InkRecognitionTarget> = L"Windows.UI.Input.Inking.InkRecognitionTarget";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::PenHandedness> = L"Windows.UI.Input.Inking.PenHandedness";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::PenTipShape> = L"Windows.UI.Input.Inking.PenTipShape";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes> = L"Windows.UI.Input.Inking.IInkDrawingAttributes";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2> = L"Windows.UI.Input.Inking.IInkDrawingAttributes2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3> = L"Windows.UI.Input.Inking.IInkDrawingAttributes3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4> = L"Windows.UI.Input.Inking.IInkDrawingAttributes4";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5> = L"Windows.UI.Input.Inking.IInkDrawingAttributes5";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> = L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics> = L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkInputConfiguration> = L"Windows.UI.Input.Inking.IInkInputConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkInputConfiguration2> = L"Windows.UI.Input.Inking.IInkInputConfiguration2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration> = L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkManager> = L"Windows.UI.Input.Inking.IInkManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkModelerAttributes> = L"Windows.UI.Input.Inking.IInkModelerAttributes";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkModelerAttributes2> = L"Windows.UI.Input.Inking.IInkModelerAttributes2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPoint> = L"Windows.UI.Input.Inking.IInkPoint";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPoint2> = L"Windows.UI.Input.Inking.IInkPoint2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPointFactory> = L"Windows.UI.Input.Inking.IInkPointFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPointFactory2> = L"Windows.UI.Input.Inking.IInkPointFactory2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenter> = L"Windows.UI.Input.Inking.IInkPresenter";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenter2> = L"Windows.UI.Input.Inking.IInkPresenter2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenter3> = L"Windows.UI.Input.Inking.IInkPresenter3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor> = L"Windows.UI.Input.Inking.IInkPresenterProtractor";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory> = L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterRuler> = L"Windows.UI.Input.Inking.IInkPresenterRuler";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2> = L"Windows.UI.Input.Inking.IInkPresenterRuler2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory> = L"Windows.UI.Input.Inking.IInkPresenterRulerFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkPresenterStencil> = L"Windows.UI.Input.Inking.IInkPresenterStencil";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkRecognitionResult> = L"Windows.UI.Input.Inking.IInkRecognitionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkRecognizer> = L"Windows.UI.Input.Inking.IInkRecognizer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer> = L"Windows.UI.Input.Inking.IInkRecognizerContainer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStroke> = L"Windows.UI.Input.Inking.IInkStroke";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStroke2> = L"Windows.UI.Input.Inking.IInkStroke2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStroke3> = L"Windows.UI.Input.Inking.IInkStroke3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStroke4> = L"Windows.UI.Input.Inking.IInkStroke4";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder> = L"Windows.UI.Input.Inking.IInkStrokeBuilder";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2> = L"Windows.UI.Input.Inking.IInkStrokeBuilder2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3> = L"Windows.UI.Input.Inking.IInkStrokeBuilder3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer> = L"Windows.UI.Input.Inking.IInkStrokeContainer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2> = L"Windows.UI.Input.Inking.IInkStrokeContainer2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3> = L"Windows.UI.Input.Inking.IInkStrokeContainer3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeInput> = L"Windows.UI.Input.Inking.IInkStrokeInput";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment> = L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> = L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> = L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkSynchronizer> = L"Windows.UI.Input.Inking.IInkSynchronizer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput> = L"Windows.UI.Input.Inking.IInkUnprocessedInput";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettings> = L"Windows.UI.Input.Inking.IPenAndInkSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettings2> = L"Windows.UI.Input.Inking.IPenAndInkSettings2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettingsStatics> = L"Windows.UI.Input.Inking.IPenAndInkSettingsStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes>{ 0x97A2176C,0x6774,0x48AD,{ 0x84,0xF0,0x48,0xF5,0xA9,0xBE,0x74,0xF9 } }; // 97A2176C-6774-48AD-84F0-48F5A9BE74F9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2>{ 0x7CAB6508,0x8EC4,0x42FD,{ 0xA5,0xA5,0xE4,0xB7,0xD1,0xD5,0x31,0x6D } }; // 7CAB6508-8EC4-42FD-A5A5-E4B7D1D5316D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3>{ 0x72020002,0x7D5B,0x4690,{ 0x8A,0xF4,0xE6,0x64,0xCB,0xE2,0xB7,0x4F } }; // 72020002-7D5B-4690-8AF4-E664CBE2B74F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4>{ 0xEF65DC25,0x9F19,0x456D,{ 0x91,0xA3,0xBC,0x3A,0x3D,0x91,0xC5,0xFB } }; // EF65DC25-9F19-456D-91A3-BC3A3D91C5FB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5>{ 0xD11AA0BB,0x0775,0x4852,{ 0xAE,0x64,0x41,0x14,0x3A,0x7A,0xE6,0xC9 } }; // D11AA0BB-0775-4852-AE64-41143A7AE6C9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ 0x4F2534CB,0x2D86,0x41BB,{ 0xB0,0xE8,0xE4,0xC2,0xA0,0x25,0x3C,0x52 } }; // 4F2534CB-2D86-41BB-B0E8-E4C2A0253C52
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ 0xF731E03F,0x1A65,0x4862,{ 0x96,0xCB,0x6E,0x16,0x65,0xE1,0x7F,0x6D } }; // F731E03F-1A65-4862-96CB-6E1665E17F6D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkInputConfiguration>{ 0x93A68DC4,0x0B7B,0x49D7,{ 0xB3,0x4F,0x99,0x01,0xE5,0x24,0xDC,0xF2 } }; // 93A68DC4-0B7B-49D7-B34F-9901E524DCF2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkInputConfiguration2>{ 0x6AC2272E,0x81B4,0x5CC4,{ 0xA3,0x6D,0xD0,0x57,0xC3,0x87,0xDF,0xDA } }; // 6AC2272E-81B4-5CC4-A36D-D057C387DFDA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ 0x2778D85E,0x33CA,0x4B06,{ 0xA6,0xD3,0xAC,0x39,0x45,0x11,0x6D,0x37 } }; // 2778D85E-33CA-4B06-A6D3-AC3945116D37
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkManager>{ 0x4744737D,0x671B,0x4163,{ 0x9C,0x95,0x4E,0x8D,0x7A,0x03,0x5F,0xE1 } }; // 4744737D-671B-4163-9C95-4E8D7A035FE1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkModelerAttributes>{ 0xBAD31F27,0x0CD9,0x4BFD,{ 0xB6,0xF3,0x9E,0x03,0xBA,0x8D,0x74,0x54 } }; // BAD31F27-0CD9-4BFD-B6F3-9E03BA8D7454
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkModelerAttributes2>{ 0x86D1D09A,0x4EF8,0x5E25,{ 0xB7,0xBC,0xB6,0x54,0x24,0xF1,0x6B,0xB3 } }; // 86D1D09A-4EF8-5E25-B7BC-B65424F16BB3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPoint>{ 0x9F87272B,0x858C,0x46A5,{ 0x9B,0x41,0xD1,0x95,0x97,0x04,0x59,0xFD } }; // 9F87272B-858C-46A5-9B41-D195970459FD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPoint2>{ 0xFBA9C3F7,0xAE56,0x4D5C,{ 0xBD,0x2F,0x0A,0xC4,0x5F,0x5E,0x4A,0xF9 } }; // FBA9C3F7-AE56-4D5C-BD2F-0AC45F5E4AF9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPointFactory>{ 0x29E5D51C,0xC98F,0x405D,{ 0x9F,0x3B,0xE5,0x3E,0x31,0x06,0x8D,0x4D } }; // 29E5D51C-C98F-405D-9F3B-E53E31068D4D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPointFactory2>{ 0xE0145E85,0xDAFF,0x45F2,{ 0xAD,0x69,0x05,0x0D,0x82,0x56,0xA2,0x09 } }; // E0145E85-DAFF-45F2-AD69-050D8256A209
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenter>{ 0xA69B70E2,0x887B,0x458F,{ 0xB1,0x73,0x4F,0xE4,0x43,0x89,0x30,0xA3 } }; // A69B70E2-887B-458F-B173-4FE4438930A3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenter2>{ 0xCF53E612,0x9A34,0x11E6,{ 0x9F,0x33,0xA2,0x4F,0xC0,0xD9,0x64,0x9C } }; // CF53E612-9A34-11E6-9F33-A24FC0D9649C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenter3>{ 0x51E1CE89,0xD37D,0x4A90,{ 0x83,0xFC,0x7F,0x5E,0x9D,0xFB,0xF2,0x17 } }; // 51E1CE89-D37D-4A90-83FC-7F5E9DFBF217
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor>{ 0x7DE3F2AA,0xEF6C,0x4E91,{ 0xA7,0x3B,0x5B,0x70,0xD5,0x6F,0xBD,0x17 } }; // 7DE3F2AA-EF6C-4E91-A73B-5B70D56FBD17
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ 0x320103C9,0x68FA,0x47E9,{ 0x81,0x27,0x83,0x70,0x71,0x1F,0xC4,0x6C } }; // 320103C9-68FA-47E9-8127-8370711FC46C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterRuler>{ 0x6CDA7D5A,0xDEC7,0x4DD7,{ 0x87,0x7A,0x21,0x33,0xF1,0x83,0xD4,0x8A } }; // 6CDA7D5A-DEC7-4DD7-877A-2133F183D48A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2>{ 0x45130DC1,0xBC61,0x44D4,{ 0xA4,0x23,0x54,0x71,0x2A,0xE6,0x71,0xC4 } }; // 45130DC1-BC61-44D4-A423-54712AE671C4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ 0x34361BEB,0x9001,0x4A4B,{ 0xA6,0x90,0x69,0xDB,0xAF,0x63,0xE5,0x01 } }; // 34361BEB-9001-4A4B-A690-69DBAF63E501
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>{ 0x30D12D6D,0x3E06,0x4D02,{ 0xB1,0x16,0x27,0x7F,0xB5,0xD8,0xAD,0xDC } }; // 30D12D6D-3E06-4D02-B116-277FB5D8ADDC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkRecognitionResult>{ 0x36461A94,0x5068,0x40EF,{ 0x8A,0x05,0x2C,0x2F,0xB6,0x09,0x08,0xA2 } }; // 36461A94-5068-40EF-8A05-2C2FB60908A2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkRecognizer>{ 0x077CCEA3,0x904D,0x442A,{ 0xB1,0x51,0xAA,0xCA,0x36,0x31,0xC4,0x3B } }; // 077CCEA3-904D-442A-B151-AACA3631C43B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>{ 0xA74D9A31,0x8047,0x4698,{ 0xA9,0x12,0xF8,0x2A,0x50,0x85,0x01,0x2F } }; // A74D9A31-8047-4698-A912-F82A5085012F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStroke>{ 0x15144D60,0xCCE3,0x4FCF,{ 0x9D,0x52,0x11,0x51,0x8A,0xB6,0xAF,0xD4 } }; // 15144D60-CCE3-4FCF-9D52-11518AB6AFD4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStroke2>{ 0x5DB9E4F4,0xBAFA,0x4DE1,{ 0x89,0xD3,0x20,0x1B,0x1E,0xD7,0xD8,0x9B } }; // 5DB9E4F4-BAFA-4DE1-89D3-201B1ED7D89B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStroke3>{ 0x4A807374,0x9499,0x411D,{ 0xA1,0xC4,0x68,0x85,0x5D,0x03,0xD6,0x5F } }; // 4A807374-9499-411D-A1C4-68855D03D65F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStroke4>{ 0xCD5B62E5,0xB6E9,0x5B91,{ 0xA5,0x77,0x19,0x21,0xD2,0x34,0x86,0x90 } }; // CD5B62E5-B6E9-5B91-A577-1921D2348690
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder>{ 0x82BBD1DC,0x1C63,0x41DC,{ 0x9E,0x07,0x4B,0x4A,0x70,0xCE,0xD8,0x01 } }; // 82BBD1DC-1C63-41DC-9E07-4B4A70CED801
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2>{ 0xBD82BC27,0x731F,0x4CBC,{ 0xBB,0xBF,0x6D,0x46,0x80,0x44,0xF1,0xE5 } }; // BD82BC27-731F-4CBC-BBBF-6D468044F1E5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3>{ 0xB2C71FCD,0x5472,0x46B1,{ 0xA8,0x1D,0xC3,0x7A,0x3D,0x16,0x94,0x41 } }; // B2C71FCD-5472-46B1-A81D-C37A3D169441
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>{ 0x22ACCBC6,0xFAA9,0x4F14,{ 0xB6,0x8C,0xF6,0xCE,0xE6,0x70,0xAE,0x16 } }; // 22ACCBC6-FAA9-4F14-B68C-F6CEE670AE16
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2>{ 0x8901D364,0xDA36,0x4BCF,{ 0x9E,0x5C,0xD1,0x95,0x82,0x59,0x95,0xB4 } }; // 8901D364-DA36-4BCF-9E5C-D195825995B4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3>{ 0x3D07BEA5,0xBAEA,0x4C82,{ 0xA7,0x19,0x7B,0x83,0xDA,0x10,0x67,0xD2 } }; // 3D07BEA5-BAEA-4C82-A719-7B83DA1067D2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeInput>{ 0xCF2FFE7B,0x5E10,0x43C6,{ 0xA0,0x80,0x88,0xF2,0x6E,0x1D,0xC6,0x7D } }; // CF2FFE7B-5E10-43C6-A080-88F26E1DC67D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ 0x68510F1F,0x88E3,0x477A,{ 0xA2,0xFA,0x56,0x9F,0x5F,0x1F,0x9B,0xD5 } }; // 68510F1F-88E3-477A-A2FA-569F5F1F9BD5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ 0xC4F3F229,0x1938,0x495C,{ 0xB4,0xD9,0x6D,0xE4,0xB0,0x8D,0x48,0x11 } }; // C4F3F229-1938-495C-B4D9-6DE4B08D4811
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ 0xA4216A22,0x1503,0x4EBF,{ 0x8F,0xF5,0x2D,0xE8,0x45,0x84,0xA8,0xAA } }; // A4216A22-1503-4EBF-8FF5-2DE84584A8AA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkSynchronizer>{ 0x9B9EA160,0xAE9B,0x45F9,{ 0x84,0x07,0x4B,0x49,0x3B,0x16,0x36,0x61 } }; // 9B9EA160-AE9B-45F9-8407-4B493B163661
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>{ 0xDB4445E0,0x8398,0x4921,{ 0xAC,0x3B,0xAB,0x97,0x8C,0x5B,0xA2,0x56 } }; // DB4445E0-8398-4921-AC3B-AB978C5BA256
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettings>{ 0xBC2CEB8F,0x0066,0x44A8,{ 0xBB,0x7A,0xB8,0x39,0xB3,0xDE,0xB8,0xF5 } }; // BC2CEB8F-0066-44A8-BB7A-B839B3DEB8F5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettings2>{ 0x3262DA53,0x1F44,0x55E2,{ 0x99,0x29,0xEB,0xF7,0x7E,0x54,0x81,0xB8 } }; // 3262DA53-1F44-55E2-9929-EBF77E5481B8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Input::Inking::IPenAndInkSettingsStatics>{ 0xED6DD036,0x5708,0x5C3C,{ 0x96,0xDB,0xF2,0xF5,0x52,0xEA,0xB6,0x41 } }; // ED6DD036-5708-5C3C-96DB-F2F552EAB641
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = winrt::Windows::UI::Input::Inking::IInkDrawingAttributes; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkInputConfiguration>{ using type = winrt::Windows::UI::Input::Inking::IInkInputConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkManager>{ using type = winrt::Windows::UI::Input::Inking::IInkManager; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkModelerAttributes>{ using type = winrt::Windows::UI::Input::Inking::IInkModelerAttributes; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkPoint>{ using type = winrt::Windows::UI::Input::Inking::IInkPoint; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkPresenter>{ using type = winrt::Windows::UI::Input::Inking::IInkPresenter; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = winrt::Windows::UI::Input::Inking::IInkPresenterProtractor; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkPresenterRuler>{ using type = winrt::Windows::UI::Input::Inking::IInkPresenterRuler; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkRecognitionResult>{ using type = winrt::Windows::UI::Input::Inking::IInkRecognitionResult; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkRecognizer>{ using type = winrt::Windows::UI::Input::Inking::IInkRecognizer; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = winrt::Windows::UI::Input::Inking::IInkRecognizerContainer; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStroke>{ using type = winrt::Windows::UI::Input::Inking::IInkStroke; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokeBuilder; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokeContainer>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokeContainer; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokeInput>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokeInput; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkSynchronizer>{ using type = winrt::Windows::UI::Input::Inking::IInkSynchronizer; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = winrt::Windows::UI::Input::Inking::IInkUnprocessedInput; };
    template <> struct default_interface<winrt::Windows::UI::Input::Inking::PenAndInkSettings>{ using type = winrt::Windows::UI::Input::Inking::IPenAndInkSettings; };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_PenTip(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PenTip(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Size(winrt::Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_Size(winrt::Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_IgnorePressure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnorePressure(bool) noexcept = 0;
            virtual int32_t __stdcall get_FitToCurve(bool*) noexcept = 0;
            virtual int32_t __stdcall put_FitToCurve(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PenTipTransform(winrt::Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_PenTipTransform(winrt::Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall get_DrawAsHighlighter(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DrawAsHighlighter(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PencilProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IgnoreTilt(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IgnoreTilt(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ModelerAttributes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForPencil(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkInputConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPrimaryBarrelButtonInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrimaryBarrelButtonInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsEraserInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEraserInputEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkInputConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPenHapticFeedbackEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPenHapticFeedbackEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RightDragAction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RightDragAction(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(int32_t) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerDown(void*) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerUpdate(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ProcessPointerUp(void*, winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SetDefaultDrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall RecognizeAsync2(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkModelerAttributes>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PredictionTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_PredictionTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_ScalingFactor(float*) noexcept = 0;
            virtual int32_t __stdcall put_ScalingFactor(float) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkModelerAttributes2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UseVelocityBasedPressure(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseVelocityBasedPressure(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPoint>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(float*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPoint2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TiltX(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(float*) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPointFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInkPoint(winrt::Windows::Foundation::Point, float, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPointFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInkPointWithTiltAndTimestamp(winrt::Windows::Foundation::Point, float, float, float, uint64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsInputEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsInputEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputDeviceTypes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InputDeviceTypes(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_UnprocessedInput(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeInput(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputProcessingConfiguration(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeContainer(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeContainer(void*) noexcept = 0;
            virtual int32_t __stdcall CopyDefaultDrawingAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall UpdateDefaultDrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall ActivateCustomDrying(void**) noexcept = 0;
            virtual int32_t __stdcall SetPredefinedConfiguration(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_StrokesCollected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokesCollected(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokesErased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokesErased(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HighContrastAdjustment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_HighContrastAdjustment(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InputConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreTickMarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreTickMarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_AreRaysVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreRaysVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCenterMarkerVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCenterMarkerVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsAngleReadoutVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAngleReadoutVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsResizable(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsResizable(bool) noexcept = 0;
            virtual int32_t __stdcall get_Radius(double*) noexcept = 0;
            virtual int32_t __stdcall put_Radius(double) noexcept = 0;
            virtual int32_t __stdcall get_AccentColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_AccentColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterRuler>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Length(double*) noexcept = 0;
            virtual int32_t __stdcall put_Length(double) noexcept = 0;
            virtual int32_t __stdcall get_Width(double*) noexcept = 0;
            virtual int32_t __stdcall put_Width(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreTickMarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreTickMarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsCompassVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCompassVisible(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_ForegroundColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_ForegroundColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Transform(winrt::Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_Transform(winrt::Windows::Foundation::Numerics::float3x2) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkRecognitionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetTextCandidates(void**) noexcept = 0;
            virtual int32_t __stdcall GetStrokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkRecognizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetDefaultRecognizer(void*) noexcept = 0;
            virtual int32_t __stdcall RecognizeAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRecognizers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStroke>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DrawingAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall put_DrawingAttributes(void*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Selected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Selected(bool) noexcept = 0;
            virtual int32_t __stdcall get_Recognized(bool*) noexcept = 0;
            virtual int32_t __stdcall GetRenderingSegments(void**) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStroke2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointTransform(winrt::Windows::Foundation::Numerics::float3x2*) noexcept = 0;
            virtual int32_t __stdcall put_PointTransform(winrt::Windows::Foundation::Numerics::float3x2) noexcept = 0;
            virtual int32_t __stdcall GetInkPoints(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStroke3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeStartedTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeStartedTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDuration(void**) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDuration(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStroke4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BeginStroke(void*) noexcept = 0;
            virtual int32_t __stdcall AppendToStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EndStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStroke(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetDefaultDrawingAttributes(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateStrokeFromInkPoints(void*, winrt::Windows::Foundation::Numerics::float3x2, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateStrokeFromInkPoints(void*, winrt::Windows::Foundation::Numerics::float3x2, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BoundingRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall AddStroke(void*) noexcept = 0;
            virtual int32_t __stdcall DeleteSelected(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall MoveSelected(winrt::Windows::Foundation::Point, winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SelectWithPolyLine(void*, winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall SelectWithLine(winrt::Windows::Foundation::Point, winrt::Windows::Foundation::Point, winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CopySelectedToClipboard() noexcept = 0;
            virtual int32_t __stdcall PasteFromClipboard(winrt::Windows::Foundation::Point, winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall CanPasteFromClipboard(bool*) noexcept = 0;
            virtual int32_t __stdcall LoadAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall UpdateRecognitionResults(void*) noexcept = 0;
            virtual int32_t __stdcall GetStrokes(void**) noexcept = 0;
            virtual int32_t __stdcall GetRecognitionResults(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddStrokes(void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SaveWithFormatAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStrokeById(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StrokeStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeContinued(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeContinued(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeEnded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeEnded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_StrokeCanceled(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StrokeCanceled(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BezierControlPoint1(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BezierControlPoint2(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltX(float*) noexcept = 0;
            virtual int32_t __stdcall get_TiltY(float*) noexcept = 0;
            virtual int32_t __stdcall get_Twist(float*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Strokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Strokes(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkSynchronizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BeginDry(void**) noexcept = 0;
            virtual int32_t __stdcall EndDry() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerHovered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerHovered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerPressed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerPressed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerMoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerMoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerReleased(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerReleased(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PointerLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PointerLost(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_InkPresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IPenAndInkSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsHandwritingDirectlyIntoTextFieldEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PenHandedness(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HandwritingLineHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FontFamilyName(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserConsentsToHandwritingTelemetryCollection(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTouchHandwritingEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IPenAndInkSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetPenHandedness(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Input::Inking::IPenAndInkSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes
    {
        [[nodiscard]] auto Color() const;
        auto Color(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto PenTip() const;
        auto PenTip(winrt::Windows::UI::Input::Inking::PenTipShape const& value) const;
        [[nodiscard]] auto Size() const;
        auto Size(winrt::Windows::Foundation::Size const& value) const;
        [[nodiscard]] auto IgnorePressure() const;
        auto IgnorePressure(bool value) const;
        [[nodiscard]] auto FitToCurve() const;
        auto FitToCurve(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes2
    {
        [[nodiscard]] auto PenTipTransform() const;
        auto PenTipTransform(winrt::Windows::Foundation::Numerics::float3x2 const& value) const;
        [[nodiscard]] auto DrawAsHighlighter() const;
        auto DrawAsHighlighter(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes3
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto PencilProperties() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes4
    {
        [[nodiscard]] auto IgnoreTilt() const;
        auto IgnoreTilt(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes5
    {
        [[nodiscard]] auto ModelerAttributes() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties
    {
        [[nodiscard]] auto Opacity() const;
        auto Opacity(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics
    {
        auto CreateForPencil() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkInputConfiguration
    {
        [[nodiscard]] auto IsPrimaryBarrelButtonInputEnabled() const;
        auto IsPrimaryBarrelButtonInputEnabled(bool value) const;
        [[nodiscard]] auto IsEraserInputEnabled() const;
        auto IsEraserInputEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkInputConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkInputConfiguration2
    {
        [[nodiscard]] auto IsPenHapticFeedbackEnabled() const;
        auto IsPenHapticFeedbackEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkInputConfiguration2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(winrt::Windows::UI::Input::Inking::InkInputProcessingMode const& value) const;
        [[nodiscard]] auto RightDragAction() const;
        auto RightDragAction(winrt::Windows::UI::Input::Inking::InkInputRightDragAction const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkManager
    {
        [[nodiscard]] auto Mode() const;
        auto Mode(winrt::Windows::UI::Input::Inking::InkManipulationMode const& value) const;
        auto ProcessPointerDown(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto ProcessPointerUpdate(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto ProcessPointerUp(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto SetDefaultDrawingAttributes(winrt::Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
        auto RecognizeAsync(winrt::Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkManager>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkModelerAttributes
    {
        [[nodiscard]] auto PredictionTime() const;
        auto PredictionTime(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] auto ScalingFactor() const;
        auto ScalingFactor(float value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkModelerAttributes>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkModelerAttributes2
    {
        [[nodiscard]] auto UseVelocityBasedPressure() const;
        auto UseVelocityBasedPressure(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkModelerAttributes2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkModelerAttributes2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPoint
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto Pressure() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPoint>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPoint2
    {
        [[nodiscard]] auto TiltX() const;
        [[nodiscard]] auto TiltY() const;
        [[nodiscard]] auto Timestamp() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPoint2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPointFactory
    {
        auto CreateInkPoint(winrt::Windows::Foundation::Point const& position, float pressure) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPointFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPointFactory2
    {
        auto CreateInkPointWithTiltAndTimestamp(winrt::Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPointFactory2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter
    {
        [[nodiscard]] auto IsInputEnabled() const;
        auto IsInputEnabled(bool value) const;
        [[nodiscard]] auto InputDeviceTypes() const;
        auto InputDeviceTypes(winrt::Windows::UI::Core::CoreInputDeviceTypes const& value) const;
        [[nodiscard]] auto UnprocessedInput() const;
        [[nodiscard]] auto StrokeInput() const;
        [[nodiscard]] auto InputProcessingConfiguration() const;
        [[nodiscard]] auto StrokeContainer() const;
        auto StrokeContainer(winrt::Windows::UI::Input::Inking::InkStrokeContainer const& value) const;
        auto CopyDefaultDrawingAttributes() const;
        auto UpdateDefaultDrawingAttributes(winrt::Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
        auto ActivateCustomDrying() const;
        auto SetPredefinedConfiguration(winrt::Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration const& value) const;
        auto StrokesCollected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkPresenter, winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
        using StrokesCollected_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkPresenter, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesCollected>;
        [[nodiscard]] StrokesCollected_revoker StrokesCollected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkPresenter, winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
        auto StrokesCollected(winrt::event_token const& cookie) const noexcept;
        auto StrokesErased(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkPresenter, winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
        using StrokesErased_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkPresenter, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesErased>;
        [[nodiscard]] StrokesErased_revoker StrokesErased(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkPresenter, winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
        auto StrokesErased(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter2
    {
        [[nodiscard]] auto HighContrastAdjustment() const;
        auto HighContrastAdjustment(winrt::Windows::UI::Input::Inking::InkHighContrastAdjustment const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenter2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenter3
    {
        [[nodiscard]] auto InputConfiguration() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenter3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterProtractor
    {
        [[nodiscard]] auto AreTickMarksVisible() const;
        auto AreTickMarksVisible(bool value) const;
        [[nodiscard]] auto AreRaysVisible() const;
        auto AreRaysVisible(bool value) const;
        [[nodiscard]] auto IsCenterMarkerVisible() const;
        auto IsCenterMarkerVisible(bool value) const;
        [[nodiscard]] auto IsAngleReadoutVisible() const;
        auto IsAngleReadoutVisible(bool value) const;
        [[nodiscard]] auto IsResizable() const;
        auto IsResizable(bool value) const;
        [[nodiscard]] auto Radius() const;
        auto Radius(double value) const;
        [[nodiscard]] auto AccentColor() const;
        auto AccentColor(winrt::Windows::UI::Color const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory
    {
        auto Create(winrt::Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRuler
    {
        [[nodiscard]] auto Length() const;
        auto Length(double value) const;
        [[nodiscard]] auto Width() const;
        auto Width(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterRuler>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRuler2
    {
        [[nodiscard]] auto AreTickMarksVisible() const;
        auto AreTickMarksVisible(bool value) const;
        [[nodiscard]] auto IsCompassVisible() const;
        auto IsCompassVisible(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory
    {
        auto Create(winrt::Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkPresenterStencil
    {
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto IsVisible() const;
        auto IsVisible(bool value) const;
        [[nodiscard]] auto BackgroundColor() const;
        auto BackgroundColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto ForegroundColor() const;
        auto ForegroundColor(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] auto Transform() const;
        auto Transform(winrt::Windows::Foundation::Numerics::float3x2 const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognitionResult
    {
        [[nodiscard]] auto BoundingRect() const;
        auto GetTextCandidates() const;
        auto GetStrokes() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkRecognitionResult>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognizer
    {
        [[nodiscard]] auto Name() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkRecognizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkRecognizerContainer
    {
        auto SetDefaultRecognizer(winrt::Windows::UI::Input::Inking::InkRecognizer const& recognizer) const;
        auto RecognizeAsync(winrt::Windows::UI::Input::Inking::InkStrokeContainer const& strokeCollection, winrt::Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
        auto GetRecognizers() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke
    {
        [[nodiscard]] auto DrawingAttributes() const;
        auto DrawingAttributes(winrt::Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
        [[nodiscard]] auto BoundingRect() const;
        [[nodiscard]] auto Selected() const;
        auto Selected(bool value) const;
        [[nodiscard]] auto Recognized() const;
        auto GetRenderingSegments() const;
        auto Clone() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStroke>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke2
    {
        [[nodiscard]] auto PointTransform() const;
        auto PointTransform(winrt::Windows::Foundation::Numerics::float3x2 const& value) const;
        auto GetInkPoints() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStroke2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke3
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto StrokeStartedTime() const;
        auto StrokeStartedTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] auto StrokeDuration() const;
        auto StrokeDuration(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStroke3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStroke4
    {
        [[nodiscard]] auto PointerId() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStroke4>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder
    {
        auto BeginStroke(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto AppendToStroke(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto EndStroke(winrt::Windows::UI::Input::PointerPoint const& pointerPoint) const;
        auto CreateStroke(param::iterable<winrt::Windows::Foundation::Point> const& points) const;
        auto SetDefaultDrawingAttributes(winrt::Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder2
    {
        auto CreateStrokeFromInkPoints(param::iterable<winrt::Windows::UI::Input::Inking::InkPoint> const& inkPoints, winrt::Windows::Foundation::Numerics::float3x2 const& transform) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder3
    {
        auto CreateStrokeFromInkPoints(param::iterable<winrt::Windows::UI::Input::Inking::InkPoint> const& inkPoints, winrt::Windows::Foundation::Numerics::float3x2 const& transform, winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& strokeStartedTime, winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& strokeDuration) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer
    {
        [[nodiscard]] auto BoundingRect() const;
        auto AddStroke(winrt::Windows::UI::Input::Inking::InkStroke const& stroke) const;
        auto DeleteSelected() const;
        auto MoveSelected(winrt::Windows::Foundation::Point const& translation) const;
        auto SelectWithPolyLine(param::iterable<winrt::Windows::Foundation::Point> const& polyline) const;
        auto SelectWithLine(winrt::Windows::Foundation::Point const& from, winrt::Windows::Foundation::Point const& to) const;
        auto CopySelectedToClipboard() const;
        auto PasteFromClipboard(winrt::Windows::Foundation::Point const& position) const;
        auto CanPasteFromClipboard() const;
        auto LoadAsync(winrt::Windows::Storage::Streams::IInputStream const& inputStream) const;
        auto SaveAsync(winrt::Windows::Storage::Streams::IOutputStream const& outputStream) const;
        auto UpdateRecognitionResults(param::vector_view<winrt::Windows::UI::Input::Inking::InkRecognitionResult> const& recognitionResults) const;
        auto GetStrokes() const;
        auto GetRecognitionResults() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer2
    {
        auto AddStrokes(param::iterable<winrt::Windows::UI::Input::Inking::InkStroke> const& strokes) const;
        auto Clear() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeContainer3
    {
        auto SaveAsync(winrt::Windows::Storage::Streams::IOutputStream const& outputStream, winrt::Windows::UI::Input::Inking::InkPersistenceFormat const& inkPersistenceFormat) const;
        auto GetStrokeById(uint32_t id) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeInput
    {
        auto StrokeStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeStarted_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeStarted>;
        [[nodiscard]] StrokeStarted_revoker StrokeStarted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeStarted(winrt::event_token const& cookie) const noexcept;
        auto StrokeContinued(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeContinued_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeContinued>;
        [[nodiscard]] StrokeContinued_revoker StrokeContinued(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeContinued(winrt::event_token const& cookie) const noexcept;
        auto StrokeEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeEnded_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeEnded>;
        [[nodiscard]] StrokeEnded_revoker StrokeEnded(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeEnded(winrt::event_token const& cookie) const noexcept;
        auto StrokeCanceled(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using StrokeCanceled_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkStrokeInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeCanceled>;
        [[nodiscard]] StrokeCanceled_revoker StrokeCanceled(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkStrokeInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto StrokeCanceled(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeInput>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment
    {
        [[nodiscard]] auto Position() const;
        [[nodiscard]] auto BezierControlPoint1() const;
        [[nodiscard]] auto BezierControlPoint2() const;
        [[nodiscard]] auto Pressure() const;
        [[nodiscard]] auto TiltX() const;
        [[nodiscard]] auto TiltY() const;
        [[nodiscard]] auto Twist() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs
    {
        [[nodiscard]] auto Strokes() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs
    {
        [[nodiscard]] auto Strokes() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkSynchronizer
    {
        auto BeginDry() const;
        auto EndDry() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkSynchronizer>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkSynchronizer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IInkUnprocessedInput
    {
        auto PointerEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerEntered_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerEntered>;
        [[nodiscard]] PointerEntered_revoker PointerEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerEntered(winrt::event_token const& cookie) const noexcept;
        auto PointerHovered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerHovered_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerHovered>;
        [[nodiscard]] PointerHovered_revoker PointerHovered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerHovered(winrt::event_token const& cookie) const noexcept;
        auto PointerExited(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerExited_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerExited>;
        [[nodiscard]] PointerExited_revoker PointerExited(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerExited(winrt::event_token const& cookie) const noexcept;
        auto PointerPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerPressed_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerPressed>;
        [[nodiscard]] PointerPressed_revoker PointerPressed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerPressed(winrt::event_token const& cookie) const noexcept;
        auto PointerMoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerMoved_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerMoved>;
        [[nodiscard]] PointerMoved_revoker PointerMoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerMoved(winrt::event_token const& cookie) const noexcept;
        auto PointerReleased(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerReleased_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerReleased>;
        [[nodiscard]] PointerReleased_revoker PointerReleased(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerReleased(winrt::event_token const& cookie) const noexcept;
        auto PointerLost(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        using PointerLost_revoker = impl::event_revoker<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput, &impl::abi_t<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerLost>;
        [[nodiscard]] PointerLost_revoker PointerLost(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Inking::InkUnprocessedInput, winrt::Windows::UI::Core::PointerEventArgs> const& handler) const;
        auto PointerLost(winrt::event_token const& cookie) const noexcept;
        [[nodiscard]] auto InkPresenter() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IPenAndInkSettings
    {
        [[nodiscard]] auto IsHandwritingDirectlyIntoTextFieldEnabled() const;
        [[nodiscard]] auto PenHandedness() const;
        [[nodiscard]] auto HandwritingLineHeight() const;
        [[nodiscard]] auto FontFamilyName() const;
        [[nodiscard]] auto UserConsentsToHandwritingTelemetryCollection() const;
        [[nodiscard]] auto IsTouchHandwritingEnabled() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IPenAndInkSettings>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IPenAndInkSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IPenAndInkSettings2
    {
        auto SetPenHandedness(winrt::Windows::UI::Input::Inking::PenHandedness const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IPenAndInkSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IPenAndInkSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Input_Inking_IPenAndInkSettingsStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::UI::Input::Inking::IPenAndInkSettingsStatics>
    {
        template <typename D> using type = consume_Windows_UI_Input_Inking_IPenAndInkSettingsStatics<D>;
    };
}
#endif
