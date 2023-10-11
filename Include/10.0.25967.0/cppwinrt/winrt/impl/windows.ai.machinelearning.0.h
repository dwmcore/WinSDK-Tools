// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_MachineLearning_0_H
#define WINRT_Windows_AI_MachineLearning_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    struct IPropertySet;
}
WINRT_EXPORT namespace winrt::Windows::Graphics
{
    struct DisplayAdapterId;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    struct IDirect3DDevice;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    enum class BitmapAlphaMode : int32_t;
    enum class BitmapPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct VideoFrame;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning
{
    enum class LearningModelDeviceKind : int32_t
    {
        Default = 0,
        Cpu = 1,
        DirectX = 2,
        DirectXHighPerformance = 3,
        DirectXMinPower = 4,
    };
    enum class LearningModelFeatureKind : int32_t
    {
        Tensor = 0,
        Sequence = 1,
        Map = 2,
        Image = 3,
    };
    enum class LearningModelPixelRange : int32_t
    {
        ZeroTo255 = 0,
        ZeroToOne = 1,
        MinusOneToOne = 2,
    };
    enum class TensorKind : int32_t
    {
        Undefined = 0,
        Float = 1,
        UInt8 = 2,
        Int8 = 3,
        UInt16 = 4,
        Int16 = 5,
        Int32 = 6,
        Int64 = 7,
        String = 8,
        Boolean = 9,
        Float16 = 10,
        Double = 11,
        UInt32 = 12,
        UInt64 = 13,
        Complex64 = 14,
        Complex128 = 15,
    };
    struct IImageFeatureDescriptor;
    struct IImageFeatureDescriptor2;
    struct IImageFeatureValue;
    struct IImageFeatureValueStatics;
    struct ILearningModel;
    struct ILearningModelBinding;
    struct ILearningModelBindingFactory;
    struct ILearningModelDevice;
    struct ILearningModelDeviceFactory;
    struct ILearningModelDeviceStatics;
    struct ILearningModelEvaluationResult;
    struct ILearningModelFeatureDescriptor;
    struct ILearningModelFeatureValue;
    struct ILearningModelOperatorProvider;
    struct ILearningModelSession;
    struct ILearningModelSessionFactory;
    struct ILearningModelSessionFactory2;
    struct ILearningModelSessionOptions;
    struct ILearningModelSessionOptions2;
    struct ILearningModelSessionOptions3;
    struct ILearningModelStatics;
    struct IMapFeatureDescriptor;
    struct ISequenceFeatureDescriptor;
    struct ITensor;
    struct ITensorBoolean;
    struct ITensorBooleanStatics;
    struct ITensorBooleanStatics2;
    struct ITensorDouble;
    struct ITensorDoubleStatics;
    struct ITensorDoubleStatics2;
    struct ITensorFeatureDescriptor;
    struct ITensorFloat;
    struct ITensorFloat16Bit;
    struct ITensorFloat16BitStatics;
    struct ITensorFloat16BitStatics2;
    struct ITensorFloatStatics;
    struct ITensorFloatStatics2;
    struct ITensorInt16Bit;
    struct ITensorInt16BitStatics;
    struct ITensorInt16BitStatics2;
    struct ITensorInt32Bit;
    struct ITensorInt32BitStatics;
    struct ITensorInt32BitStatics2;
    struct ITensorInt64Bit;
    struct ITensorInt64BitStatics;
    struct ITensorInt64BitStatics2;
    struct ITensorInt8Bit;
    struct ITensorInt8BitStatics;
    struct ITensorInt8BitStatics2;
    struct ITensorString;
    struct ITensorStringStatics;
    struct ITensorStringStatics2;
    struct ITensorUInt16Bit;
    struct ITensorUInt16BitStatics;
    struct ITensorUInt16BitStatics2;
    struct ITensorUInt32Bit;
    struct ITensorUInt32BitStatics;
    struct ITensorUInt32BitStatics2;
    struct ITensorUInt64Bit;
    struct ITensorUInt64BitStatics;
    struct ITensorUInt64BitStatics2;
    struct ITensorUInt8Bit;
    struct ITensorUInt8BitStatics;
    struct ITensorUInt8BitStatics2;
    struct ImageFeatureDescriptor;
    struct ImageFeatureValue;
    struct LearningModel;
    struct LearningModelBinding;
    struct LearningModelDevice;
    struct LearningModelEvaluationResult;
    struct LearningModelSession;
    struct LearningModelSessionOptions;
    struct MapFeatureDescriptor;
    struct SequenceFeatureDescriptor;
    struct TensorBoolean;
    struct TensorDouble;
    struct TensorFeatureDescriptor;
    struct TensorFloat;
    struct TensorFloat16Bit;
    struct TensorInt16Bit;
    struct TensorInt32Bit;
    struct TensorInt64Bit;
    struct TensorInt8Bit;
    struct TensorString;
    struct TensorUInt16Bit;
    struct TensorUInt32Bit;
    struct TensorUInt64Bit;
    struct TensorUInt8Bit;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::IImageFeatureValue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::IImageFeatureValueStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModel>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelBinding>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelBindingFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelDeviceFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ILearningModelStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorBoolean>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorDouble>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloat>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloat16Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloatStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorFloatStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt16Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt32Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt64Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt8Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorString>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorStringStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorStringStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt16Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt32Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt64Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt8Bit>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ImageFeatureDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::ImageFeatureValue>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModel>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelBinding>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelEvaluationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelSessionOptions>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::MapFeatureDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::SequenceFeatureDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorBoolean>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorDouble>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorFeatureDescriptor>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorFloat>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorFloat16Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorInt16Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorInt32Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorInt64Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorInt8Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorString>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorUInt16Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorUInt32Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorUInt64Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorUInt8Bit>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelDeviceKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelFeatureKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::LearningModelPixelRange>{ using type = enum_category; };
    template <> struct category<winrt::Windows::AI::MachineLearning::TensorKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ImageFeatureDescriptor> = L"Windows.AI.MachineLearning.ImageFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ImageFeatureValue> = L"Windows.AI.MachineLearning.ImageFeatureValue";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModel> = L"Windows.AI.MachineLearning.LearningModel";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelBinding> = L"Windows.AI.MachineLearning.LearningModelBinding";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelDevice> = L"Windows.AI.MachineLearning.LearningModelDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelEvaluationResult> = L"Windows.AI.MachineLearning.LearningModelEvaluationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelSession> = L"Windows.AI.MachineLearning.LearningModelSession";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelSessionOptions> = L"Windows.AI.MachineLearning.LearningModelSessionOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::MapFeatureDescriptor> = L"Windows.AI.MachineLearning.MapFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::SequenceFeatureDescriptor> = L"Windows.AI.MachineLearning.SequenceFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorBoolean> = L"Windows.AI.MachineLearning.TensorBoolean";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorDouble> = L"Windows.AI.MachineLearning.TensorDouble";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorFeatureDescriptor> = L"Windows.AI.MachineLearning.TensorFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorFloat> = L"Windows.AI.MachineLearning.TensorFloat";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorFloat16Bit> = L"Windows.AI.MachineLearning.TensorFloat16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorInt16Bit> = L"Windows.AI.MachineLearning.TensorInt16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorInt32Bit> = L"Windows.AI.MachineLearning.TensorInt32Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorInt64Bit> = L"Windows.AI.MachineLearning.TensorInt64Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorInt8Bit> = L"Windows.AI.MachineLearning.TensorInt8Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorString> = L"Windows.AI.MachineLearning.TensorString";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorUInt16Bit> = L"Windows.AI.MachineLearning.TensorUInt16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorUInt32Bit> = L"Windows.AI.MachineLearning.TensorUInt32Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorUInt64Bit> = L"Windows.AI.MachineLearning.TensorUInt64Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorUInt8Bit> = L"Windows.AI.MachineLearning.TensorUInt8Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelDeviceKind> = L"Windows.AI.MachineLearning.LearningModelDeviceKind";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelFeatureKind> = L"Windows.AI.MachineLearning.LearningModelFeatureKind";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::LearningModelPixelRange> = L"Windows.AI.MachineLearning.LearningModelPixelRange";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::TensorKind> = L"Windows.AI.MachineLearning.TensorKind";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor> = L"Windows.AI.MachineLearning.IImageFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor2> = L"Windows.AI.MachineLearning.IImageFeatureDescriptor2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::IImageFeatureValue> = L"Windows.AI.MachineLearning.IImageFeatureValue";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::IImageFeatureValueStatics> = L"Windows.AI.MachineLearning.IImageFeatureValueStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModel> = L"Windows.AI.MachineLearning.ILearningModel";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelBinding> = L"Windows.AI.MachineLearning.ILearningModelBinding";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelBindingFactory> = L"Windows.AI.MachineLearning.ILearningModelBindingFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelDevice> = L"Windows.AI.MachineLearning.ILearningModelDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelDeviceFactory> = L"Windows.AI.MachineLearning.ILearningModelDeviceFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelDeviceStatics> = L"Windows.AI.MachineLearning.ILearningModelDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult> = L"Windows.AI.MachineLearning.ILearningModelEvaluationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor> = L"Windows.AI.MachineLearning.ILearningModelFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue> = L"Windows.AI.MachineLearning.ILearningModelFeatureValue";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider> = L"Windows.AI.MachineLearning.ILearningModelOperatorProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSession> = L"Windows.AI.MachineLearning.ILearningModelSession";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory> = L"Windows.AI.MachineLearning.ILearningModelSessionFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory2> = L"Windows.AI.MachineLearning.ILearningModelSessionFactory2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions> = L"Windows.AI.MachineLearning.ILearningModelSessionOptions";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2> = L"Windows.AI.MachineLearning.ILearningModelSessionOptions2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions3> = L"Windows.AI.MachineLearning.ILearningModelSessionOptions3";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ILearningModelStatics> = L"Windows.AI.MachineLearning.ILearningModelStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor> = L"Windows.AI.MachineLearning.IMapFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor> = L"Windows.AI.MachineLearning.ISequenceFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensor> = L"Windows.AI.MachineLearning.ITensor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorBoolean> = L"Windows.AI.MachineLearning.ITensorBoolean";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics> = L"Windows.AI.MachineLearning.ITensorBooleanStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics2> = L"Windows.AI.MachineLearning.ITensorBooleanStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorDouble> = L"Windows.AI.MachineLearning.ITensorDouble";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics> = L"Windows.AI.MachineLearning.ITensorDoubleStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics2> = L"Windows.AI.MachineLearning.ITensorDoubleStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor> = L"Windows.AI.MachineLearning.ITensorFeatureDescriptor";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloat> = L"Windows.AI.MachineLearning.ITensorFloat";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloat16Bit> = L"Windows.AI.MachineLearning.ITensorFloat16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics> = L"Windows.AI.MachineLearning.ITensorFloat16BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics2> = L"Windows.AI.MachineLearning.ITensorFloat16BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloatStatics> = L"Windows.AI.MachineLearning.ITensorFloatStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorFloatStatics2> = L"Windows.AI.MachineLearning.ITensorFloatStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt16Bit> = L"Windows.AI.MachineLearning.ITensorInt16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics> = L"Windows.AI.MachineLearning.ITensorInt16BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics2> = L"Windows.AI.MachineLearning.ITensorInt16BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt32Bit> = L"Windows.AI.MachineLearning.ITensorInt32Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics> = L"Windows.AI.MachineLearning.ITensorInt32BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics2> = L"Windows.AI.MachineLearning.ITensorInt32BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt64Bit> = L"Windows.AI.MachineLearning.ITensorInt64Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics> = L"Windows.AI.MachineLearning.ITensorInt64BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics2> = L"Windows.AI.MachineLearning.ITensorInt64BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt8Bit> = L"Windows.AI.MachineLearning.ITensorInt8Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics> = L"Windows.AI.MachineLearning.ITensorInt8BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics2> = L"Windows.AI.MachineLearning.ITensorInt8BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorString> = L"Windows.AI.MachineLearning.ITensorString";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorStringStatics> = L"Windows.AI.MachineLearning.ITensorStringStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorStringStatics2> = L"Windows.AI.MachineLearning.ITensorStringStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt16Bit> = L"Windows.AI.MachineLearning.ITensorUInt16Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics> = L"Windows.AI.MachineLearning.ITensorUInt16BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics2> = L"Windows.AI.MachineLearning.ITensorUInt16BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt32Bit> = L"Windows.AI.MachineLearning.ITensorUInt32Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics> = L"Windows.AI.MachineLearning.ITensorUInt32BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics2> = L"Windows.AI.MachineLearning.ITensorUInt32BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt64Bit> = L"Windows.AI.MachineLearning.ITensorUInt64Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics> = L"Windows.AI.MachineLearning.ITensorUInt64BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics2> = L"Windows.AI.MachineLearning.ITensorUInt64BitStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt8Bit> = L"Windows.AI.MachineLearning.ITensorUInt8Bit";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics> = L"Windows.AI.MachineLearning.ITensorUInt8BitStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics2> = L"Windows.AI.MachineLearning.ITensorUInt8BitStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor>{ 0x365585A5,0x171A,0x4A2A,{ 0x98,0x5F,0x26,0x51,0x59,0xD3,0x89,0x5A } }; // 365585A5-171A-4A2A-985F-265159D3895A
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor2>{ 0x2B27CCA7,0xD533,0x5862,{ 0xBB,0x98,0x16,0x11,0xB1,0x55,0xB0,0xE1 } }; // 2B27CCA7-D533-5862-BB98-1611B155B0E1
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::IImageFeatureValue>{ 0xF0414FD9,0xC9AA,0x4405,{ 0xB7,0xFB,0x94,0xF8,0x7C,0x8A,0x30,0x37 } }; // F0414FD9-C9AA-4405-B7FB-94F87C8A3037
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::IImageFeatureValueStatics>{ 0x1BC317FD,0x23CB,0x4610,{ 0xB0,0x85,0xC8,0xE1,0xC8,0x7E,0xBA,0xA0 } }; // 1BC317FD-23CB-4610-B085-C8E1C87EBAA0
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModel>{ 0x5B8E4920,0x489F,0x4E86,{ 0x91,0x28,0x26,0x5A,0x32,0x7B,0x78,0xFA } }; // 5B8E4920-489F-4E86-9128-265A327B78FA
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelBinding>{ 0xEA312F20,0x168F,0x4F8C,{ 0x94,0xFE,0x2E,0x7A,0xC3,0x1B,0x4A,0xA8 } }; // EA312F20-168F-4F8C-94FE-2E7AC31B4AA8
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelBindingFactory>{ 0xC95F7A7A,0xE788,0x475E,{ 0x89,0x17,0x23,0xAA,0x38,0x1F,0xAF,0x0B } }; // C95F7A7A-E788-475E-8917-23AA381FAF0B
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelDevice>{ 0xF5C2C8FE,0x3F56,0x4A8C,{ 0xAC,0x5F,0xFD,0xB9,0x2D,0x8B,0x82,0x52 } }; // F5C2C8FE-3F56-4A8C-AC5F-FDB92D8B8252
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelDeviceFactory>{ 0x9CFFD74D,0xB1E5,0x4F20,{ 0x80,0xAD,0x0A,0x56,0x69,0x0D,0xB0,0x6B } }; // 9CFFD74D-B1E5-4F20-80AD-0A56690DB06B
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelDeviceStatics>{ 0x49F32107,0xA8BF,0x42BB,{ 0x92,0xC7,0x10,0xB1,0x2D,0xC5,0xD2,0x1F } }; // 49F32107-A8BF-42BB-92C7-10B12DC5D21F
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult>{ 0xB2F9BFCD,0x960E,0x49C0,{ 0x85,0x93,0xEB,0x19,0x0A,0xE3,0xEE,0xE2 } }; // B2F9BFCD-960E-49C0-8593-EB190AE3EEE2
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>{ 0xBC08CF7C,0x6ED0,0x4004,{ 0x97,0xBA,0xB9,0xA2,0xEE,0xCD,0x2B,0x4F } }; // BC08CF7C-6ED0-4004-97BA-B9A2EECD2B4F
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue>{ 0xF51005DB,0x4085,0x4DFE,{ 0x9F,0xED,0x95,0xEB,0x0C,0x0C,0xF7,0x5C } }; // F51005DB-4085-4DFE-9FED-95EB0C0CF75C
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider>{ 0x2A222E5D,0xAFB1,0x47ED,{ 0xBF,0xAD,0xB5,0xB3,0xA4,0x59,0xEC,0x04 } }; // 2A222E5D-AFB1-47ED-BFAD-B5B3A459EC04
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSession>{ 0x8E58F8F6,0xB787,0x4C11,{ 0x90,0xF0,0x71,0x29,0xAE,0xCA,0x74,0xA9 } }; // 8E58F8F6-B787-4C11-90F0-7129AECA74A9
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory>{ 0x0F6B881D,0x1C9B,0x47B6,{ 0xBF,0xE0,0xF1,0xCF,0x62,0xA6,0x75,0x79 } }; // 0F6B881D-1C9B-47B6-BFE0-F1CF62A67579
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory2>{ 0x4E5C88BF,0x0A1F,0x5FEC,{ 0xAD,0xE0,0x2F,0xD9,0x1E,0x4E,0xF2,0x9B } }; // 4E5C88BF-0A1F-5FEC-ADE0-2FD91E4EF29B
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions>{ 0xB8F63FA1,0x134D,0x5133,{ 0x8C,0xFF,0x3A,0x5C,0x3C,0x26,0x3B,0xEB } }; // B8F63FA1-134D-5133-8CFF-3A5C3C263BEB
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2>{ 0x6FCD1DC4,0x175F,0x5BD2,{ 0x8D,0xE5,0x2F,0x20,0x06,0xA2,0x5A,0xDF } }; // 6FCD1DC4-175F-5BD2-8DE5-2F2006A25ADF
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions3>{ 0x58E15CEE,0xD8C2,0x56FC,{ 0x92,0xE8,0x76,0xD7,0x51,0x08,0x10,0x86 } }; // 58E15CEE-D8C2-56FC-92E8-76D751081086
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ILearningModelStatics>{ 0xE3B977E8,0x6952,0x4E47,{ 0x8E,0xF4,0x1F,0x7F,0x07,0x89,0x7C,0x6D } }; // E3B977E8-6952-4E47-8EF4-1F7F07897C6D
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor>{ 0x530424BD,0xA257,0x436D,{ 0x9E,0x60,0xC2,0x98,0x1F,0x7C,0xC5,0xC4 } }; // 530424BD-A257-436D-9E60-C2981F7CC5C4
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor>{ 0x84F6945A,0x562B,0x4D62,{ 0xA8,0x51,0x73,0x9A,0xCE,0xD9,0x66,0x68 } }; // 84F6945A-562B-4D62-A851-739ACED96668
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensor>{ 0x05489593,0xA305,0x4A25,{ 0xAD,0x09,0x44,0x01,0x19,0xB4,0xB7,0xF6 } }; // 05489593-A305-4A25-AD09-440119B4B7F6
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorBoolean>{ 0x50F311ED,0x29E9,0x4A5C,{ 0xA4,0x4D,0x8F,0xC5,0x12,0x58,0x4E,0xED } }; // 50F311ED-29E9-4A5C-A44D-8FC512584EED
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics>{ 0x2796862C,0x2357,0x49A7,{ 0xB4,0x76,0xD0,0xAA,0x3D,0xFE,0x68,0x66 } }; // 2796862C-2357-49A7-B476-D0AA3DFE6866
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics2>{ 0xA3A4A501,0x6A2D,0x52D7,{ 0xB0,0x4B,0xC4,0x35,0xBA,0xEE,0x01,0x15 } }; // A3A4A501-6A2D-52D7-B04B-C435BAEE0115
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorDouble>{ 0x91E41252,0x7A8F,0x4F0E,{ 0xA2,0x8F,0x96,0x37,0xFF,0xC8,0xA3,0xD0 } }; // 91E41252-7A8F-4F0E-A28F-9637FFC8A3D0
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics>{ 0xA86693C5,0x9538,0x44E7,{ 0xA3,0xCA,0x5D,0xF3,0x74,0xA5,0xA7,0x0C } }; // A86693C5-9538-44E7-A3CA-5DF374A5A70C
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics2>{ 0x93A570DE,0x5E9A,0x5094,{ 0x85,0xC8,0x59,0x2C,0x65,0x5E,0x68,0xAC } }; // 93A570DE-5E9A-5094-85C8-592C655E68AC
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor>{ 0x74455C80,0x946A,0x4310,{ 0xA1,0x9C,0xEE,0x0A,0xF0,0x28,0xFC,0xE4 } }; // 74455C80-946A-4310-A19C-EE0AF028FCE4
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloat>{ 0xF2282D82,0xAA02,0x42C8,{ 0xA0,0xC8,0xDF,0x1E,0xFC,0x96,0x76,0xE1 } }; // F2282D82-AA02-42C8-A0C8-DF1EFC9676E1
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloat16Bit>{ 0x0AB994FC,0x5B89,0x4C3C,{ 0xB5,0xE4,0x52,0x82,0xA5,0x31,0x6C,0x0A } }; // 0AB994FC-5B89-4C3C-B5E4-5282A5316C0A
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics>{ 0xA52DB6F5,0x318A,0x44D4,{ 0x82,0x0B,0x0C,0xDC,0x70,0x54,0xA8,0x4A } }; // A52DB6F5-318A-44D4-820B-0CDC7054A84A
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics2>{ 0x68545726,0x2DC7,0x51BF,{ 0xB4,0x70,0x0B,0x34,0x4C,0xC2,0xA1,0xBC } }; // 68545726-2DC7-51BF-B470-0B344CC2A1BC
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloatStatics>{ 0xDBCD395B,0x3BA3,0x452F,{ 0xB1,0x0D,0x3C,0x13,0x5E,0x57,0x3F,0xA9 } }; // DBCD395B-3BA3-452F-B10D-3C135E573FA9
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorFloatStatics2>{ 0x24610BC1,0x5E44,0x5713,{ 0xB2,0x81,0x8F,0x4A,0xD4,0xD5,0x55,0xE8 } }; // 24610BC1-5E44-5713-B281-8F4AD4D555E8
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt16Bit>{ 0x98A32D39,0xE6D6,0x44AF,{ 0x8A,0xFA,0xBA,0xEB,0xC4,0x4D,0xC0,0x20 } }; // 98A32D39-E6D6-44AF-8AFA-BAEBC44DC020
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics>{ 0x98646293,0x266E,0x4B1A,{ 0x82,0x1F,0xE6,0x0D,0x70,0x89,0x8B,0x91 } }; // 98646293-266E-4B1A-821F-E60D70898B91
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics2>{ 0x0CD70CF4,0x696C,0x5E5F,{ 0x95,0xD8,0x5E,0xBF,0x96,0x70,0x14,0x8B } }; // 0CD70CF4-696C-5E5F-95D8-5EBF9670148B
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt32Bit>{ 0x2C0C28D3,0x207C,0x4486,{ 0xA7,0xD2,0x88,0x45,0x22,0xC5,0xE5,0x89 } }; // 2C0C28D3-207C-4486-A7D2-884522C5E589
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics>{ 0x6539864B,0x52FA,0x4E35,{ 0x90,0x7C,0x83,0x4C,0xAC,0x41,0x7B,0x50 } }; // 6539864B-52FA-4E35-907C-834CAC417B50
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics2>{ 0x7C4B079A,0xE956,0x5CE0,{ 0xA3,0xBD,0x15,0x7D,0x9D,0x79,0xB5,0xEC } }; // 7C4B079A-E956-5CE0-A3BD-157D9D79B5EC
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt64Bit>{ 0x499665BA,0x1FA2,0x45AD,{ 0xAF,0x25,0xA0,0xBD,0x9B,0xDA,0x4C,0x87 } }; // 499665BA-1FA2-45AD-AF25-A0BD9BDA4C87
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics>{ 0x9648AD9D,0x1198,0x4D74,{ 0x95,0x17,0x78,0x3A,0xB6,0x2B,0x9C,0xC2 } }; // 9648AD9D-1198-4D74-9517-783AB62B9CC2
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics2>{ 0x6D3D9DCB,0xFF40,0x5EC2,{ 0x89,0xFE,0x08,0x4E,0x2B,0x6B,0xC6,0xDB } }; // 6D3D9DCB-FF40-5EC2-89FE-084E2B6BC6DB
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt8Bit>{ 0xCDDD97C5,0xFFD8,0x4FEF,{ 0xAE,0xFB,0x30,0xE1,0xA4,0x85,0xB2,0xEE } }; // CDDD97C5-FFD8-4FEF-AEFB-30E1A485B2EE
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics>{ 0xB1A12284,0x095C,0x4C76,{ 0xA6,0x61,0xAC,0x4C,0xEE,0x1F,0x3E,0x8B } }; // B1A12284-095C-4C76-A661-AC4CEE1F3E8B
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics2>{ 0xC0D59637,0xC468,0x56FB,{ 0x95,0x35,0xC0,0x52,0xBD,0xB9,0x3D,0xC0 } }; // C0D59637-C468-56FB-9535-C052BDB93DC0
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorString>{ 0x582335C8,0xBDB1,0x4610,{ 0xBC,0x75,0x35,0xE9,0xCB,0xF0,0x09,0xB7 } }; // 582335C8-BDB1-4610-BC75-35E9CBF009B7
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorStringStatics>{ 0x83623324,0xCF26,0x4F17,{ 0xA2,0xD4,0x20,0xEF,0x8D,0x09,0x7D,0x53 } }; // 83623324-CF26-4F17-A2D4-20EF8D097D53
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorStringStatics2>{ 0x9E355ED0,0xC8E2,0x5254,{ 0x91,0x37,0x01,0x93,0xA3,0x66,0x8F,0xD8 } }; // 9E355ED0-C8E2-5254-9137-0193A3668FD8
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt16Bit>{ 0x68140F4B,0x23C0,0x42F3,{ 0x81,0xF6,0xA8,0x91,0xC0,0x11,0xBC,0x3F } }; // 68140F4B-23C0-42F3-81F6-A891C011BC3F
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics>{ 0x5DF745DD,0x028A,0x481A,{ 0xA2,0x7C,0xC7,0xE6,0x43,0x5E,0x52,0xDD } }; // 5DF745DD-028A-481A-A27C-C7E6435E52DD
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics2>{ 0x8AF40C64,0xD69F,0x5315,{ 0x93,0x48,0x49,0x08,0x77,0xBB,0xD6,0x42 } }; // 8AF40C64-D69F-5315-9348-490877BBD642
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt32Bit>{ 0xD8C9C2FF,0x7511,0x45A3,{ 0xBF,0xAC,0xC3,0x8F,0x37,0x0D,0x22,0x37 } }; // D8C9C2FF-7511-45A3-BFAC-C38F370D2237
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics>{ 0x417C3837,0xE773,0x4378,{ 0x8E,0x7F,0x0C,0xC3,0x3D,0xBE,0xA6,0x97 } }; // 417C3837-E773-4378-8E7F-0CC33DBEA697
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics2>{ 0xEF1A1F1C,0x314E,0x569D,{ 0xB4,0x96,0x5C,0x84,0x47,0xD2,0x0C,0xD2 } }; // EF1A1F1C-314E-569D-B496-5C8447D20CD2
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt64Bit>{ 0x2E70FFAD,0x04BF,0x4825,{ 0x83,0x9A,0x82,0xBA,0xEF,0x8C,0x78,0x86 } }; // 2E70FFAD-04BF-4825-839A-82BAEF8C7886
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics>{ 0x7A7E20EB,0x242F,0x47CB,{ 0xA9,0xC6,0xF6,0x02,0xEC,0xFB,0xFE,0xE4 } }; // 7A7E20EB-242F-47CB-A9C6-F602ECFBFEE4
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics2>{ 0x085A687D,0x67E1,0x5B1E,{ 0xB2,0x32,0x4F,0xAB,0xE9,0xCA,0x20,0xB3 } }; // 085A687D-67E1-5B1E-B232-4FABE9CA20B3
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt8Bit>{ 0x58E1AE27,0x622B,0x48E3,{ 0xBE,0x22,0xD8,0x67,0xAE,0xD1,0xDA,0xAC } }; // 58E1AE27-622B-48E3-BE22-D867AED1DAAC
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics>{ 0x05F67583,0xBC24,0x4220,{ 0x8A,0x41,0x2D,0xCD,0x8C,0x5E,0xD3,0x3C } }; // 05F67583-BC24-4220-8A41-2DCD8C5ED33C
    template <> inline constexpr guid guid_v<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics2>{ 0x2BA042D6,0x373E,0x5A3A,{ 0xA2,0xFC,0xA6,0xC4,0x1B,0xD5,0x27,0x89 } }; // 2BA042D6-373E-5A3A-A2FC-A6C41BD52789
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::ImageFeatureDescriptor>{ using type = winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::ImageFeatureValue>{ using type = winrt::Windows::AI::MachineLearning::IImageFeatureValue; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModel>{ using type = winrt::Windows::AI::MachineLearning::ILearningModel; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModelBinding>{ using type = winrt::Windows::AI::MachineLearning::ILearningModelBinding; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModelDevice>{ using type = winrt::Windows::AI::MachineLearning::ILearningModelDevice; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModelEvaluationResult>{ using type = winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModelSession>{ using type = winrt::Windows::AI::MachineLearning::ILearningModelSession; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::LearningModelSessionOptions>{ using type = winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::MapFeatureDescriptor>{ using type = winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::SequenceFeatureDescriptor>{ using type = winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorBoolean>{ using type = winrt::Windows::AI::MachineLearning::ITensorBoolean; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorDouble>{ using type = winrt::Windows::AI::MachineLearning::ITensorDouble; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorFeatureDescriptor>{ using type = winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorFloat>{ using type = winrt::Windows::AI::MachineLearning::ITensorFloat; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorFloat16Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorFloat16Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorInt16Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorInt16Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorInt32Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorInt32Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorInt64Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorInt64Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorInt8Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorInt8Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorString>{ using type = winrt::Windows::AI::MachineLearning::ITensorString; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorUInt16Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorUInt16Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorUInt32Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorUInt32Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorUInt64Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorUInt64Bit; };
    template <> struct default_interface<winrt::Windows::AI::MachineLearning::TensorUInt8Bit>{ using type = winrt::Windows::AI::MachineLearning::ITensorUInt8Bit; };
    template <> struct abi<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapPixelFormat(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BitmapAlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Width(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelRange(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::IImageFeatureValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_VideoFrame(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromVideoFrame(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Domain(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Metadata(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputFeatures(void**) noexcept = 0;
            virtual int32_t __stdcall get_OutputFeatures(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelBinding>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Bind(void*, void*) noexcept = 0;
            virtual int32_t __stdcall BindWithProperties(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromSession(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AdapterId(struct struct_Windows_Graphics_DisplayAdapterId*) noexcept = 0;
            virtual int32_t __stdcall get_Direct3D11Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromDirect3D11Device(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ErrorStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Outputs(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsRequired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
            virtual int32_t __stdcall get_EvaluationProperties(void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateFeaturesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Evaluate(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall EvaluateFeatures(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromModel(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromModelOnDevice(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromModelOnDeviceWithSessionOptions(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BatchSizeOverride(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BatchSizeOverride(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CloseModelOnSessionCreation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CloseModelOnSessionCreation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OverrideNamedDimension(void*, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ILearningModelStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadFromStorageFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFilePath(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStream(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStorageFileWithOperatorProviderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithOperatorProviderAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromFilePathWithOperatorProvider(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadFromStreamWithOperatorProvider(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ValueDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ElementDescriptor(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TensorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorBoolean>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, bool*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, bool*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorDouble>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, double*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, double*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TensorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Shape(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloat>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorString>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorStringStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAsVectorView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void**) noexcept = 0;
            virtual int32_t __stdcall Create2(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromArray(void*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromIterable(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromShapeArrayAndDataArray(uint32_t, int64_t*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBuffer(uint32_t, int64_t*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureDescriptor
    {
        [[nodiscard]] auto BitmapPixelFormat() const;
        [[nodiscard]] auto BitmapAlphaMode() const;
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureDescriptor2
    {
        [[nodiscard]] auto PixelRange() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureDescriptor2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureValue
    {
        [[nodiscard]] auto VideoFrame() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::IImageFeatureValue>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureValue<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IImageFeatureValueStatics
    {
        auto CreateFromVideoFrame(winrt::Windows::Media::VideoFrame const& image) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::IImageFeatureValueStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IImageFeatureValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModel
    {
        [[nodiscard]] auto Author() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Domain() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Version() const;
        [[nodiscard]] auto Metadata() const;
        [[nodiscard]] auto InputFeatures() const;
        [[nodiscard]] auto OutputFeatures() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModel>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModel<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelBinding
    {
        auto Bind(param::hstring const& name, winrt::Windows::Foundation::IInspectable const& value) const;
        auto Bind(param::hstring const& name, winrt::Windows::Foundation::IInspectable const& value, winrt::Windows::Foundation::Collections::IPropertySet const& props) const;
        auto Clear() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelBinding>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelBinding<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelBindingFactory
    {
        auto CreateFromSession(winrt::Windows::AI::MachineLearning::LearningModelSession const& session) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelBindingFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelBindingFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDevice
    {
        [[nodiscard]] auto AdapterId() const;
        [[nodiscard]] auto Direct3D11Device() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelDevice>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDevice<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDeviceFactory
    {
        auto Create(winrt::Windows::AI::MachineLearning::LearningModelDeviceKind const& deviceKind) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelDeviceFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDeviceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelDeviceStatics
    {
        auto CreateFromDirect3D11Device(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelDeviceStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult
    {
        [[nodiscard]] auto CorrelationId() const;
        [[nodiscard]] auto ErrorStatus() const;
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto Outputs() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelEvaluationResult<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor
    {
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto Kind() const;
        [[nodiscard]] auto IsRequired() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelFeatureValue
    {
        [[nodiscard]] auto Kind() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelFeatureValue<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelOperatorProvider
    {
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelOperatorProvider<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSession
    {
        [[nodiscard]] auto Model() const;
        [[nodiscard]] auto Device() const;
        [[nodiscard]] auto EvaluationProperties() const;
        auto EvaluateAsync(winrt::Windows::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const;
        auto EvaluateFeaturesAsync(param::map<hstring, winrt::Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const;
        auto Evaluate(winrt::Windows::AI::MachineLearning::LearningModelBinding const& bindings, param::hstring const& correlationId) const;
        auto EvaluateFeatures(param::map<hstring, winrt::Windows::Foundation::IInspectable> const& features, param::hstring const& correlationId) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSession>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSession<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionFactory
    {
        auto CreateFromModel(winrt::Windows::AI::MachineLearning::LearningModel const& model) const;
        auto CreateFromModelOnDevice(winrt::Windows::AI::MachineLearning::LearningModel const& model, winrt::Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionFactory2
    {
        auto CreateFromModelOnDeviceWithSessionOptions(winrt::Windows::AI::MachineLearning::LearningModel const& model, winrt::Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn, winrt::Windows::AI::MachineLearning::LearningModelSessionOptions const& learningModelSessionOptions) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSessionFactory2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionOptions
    {
        [[nodiscard]] auto BatchSizeOverride() const;
        auto BatchSizeOverride(uint32_t value) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionOptions<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2
    {
        [[nodiscard]] auto CloseModelOnSessionCreation() const;
        auto CloseModelOnSessionCreation(bool value) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionOptions2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelSessionOptions3
    {
        auto OverrideNamedDimension(param::hstring const& name, uint32_t dimension) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions3>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelSessionOptions3<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ILearningModelStatics
    {
        auto LoadFromStorageFileAsync(winrt::Windows::Storage::IStorageFile const& modelFile) const;
        auto LoadFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const;
        auto LoadFromFilePath(param::hstring const& filePath) const;
        auto LoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream) const;
        auto LoadFromStorageFileAsync(winrt::Windows::Storage::IStorageFile const& modelFile, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromFilePath(param::hstring const& filePath, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
        auto LoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ILearningModelStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ILearningModelStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_IMapFeatureDescriptor
    {
        [[nodiscard]] auto KeyKind() const;
        [[nodiscard]] auto ValueDescriptor() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_IMapFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ISequenceFeatureDescriptor
    {
        [[nodiscard]] auto ElementDescriptor() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ISequenceFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensor
    {
        [[nodiscard]] auto TensorKind() const;
        [[nodiscard]] auto Shape() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBoolean
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorBoolean>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBoolean<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBooleanStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<bool const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<bool> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBooleanStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorBooleanStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<bool const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorBooleanStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorBooleanStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDouble
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorDouble>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDouble<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDoubleStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<double const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<double> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDoubleStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorDoubleStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<double const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorDoubleStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorDoubleStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor
    {
        [[nodiscard]] auto TensorKind() const;
        [[nodiscard]] auto Shape() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFeatureDescriptor<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloat>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloat16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloat16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloat16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloatStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloatStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloatStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorFloatStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorFloatStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorFloatStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int16_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int16_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int16_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt32Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int32_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int32_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int32_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt32BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt32BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt64Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int64_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int64_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int64_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt64BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt64BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt8Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorInt8BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorInt8BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorString
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorString>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorString<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorStringStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<hstring const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<hstring> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorStringStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorStringStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorStringStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<hstring const> data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorStringStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorStringStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt16Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint16_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint16_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint16_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt16BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt16BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt32Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint32_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint32_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint32_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt32BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt32BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt64Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint64_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint64_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint64_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt64BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt64BitStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8Bit
    {
        auto GetAsVectorView() const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt8Bit>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8Bit<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics
    {
        auto Create() const;
        auto Create(param::iterable<int64_t> const& shape) const;
        auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data) const;
        auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2
    {
        auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data) const;
        auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer) const;
    };
    template <> struct consume<winrt::Windows::AI::MachineLearning::ITensorUInt8BitStatics2>
    {
        template <typename D> using type = consume_Windows_AI_MachineLearning_ITensorUInt8BitStatics2<D>;
    };
}
#endif
