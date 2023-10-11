// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Data_Html_0_H
#define WINRT_Windows_Data_Html_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Html
{
    struct IHtmlUtilities;
    struct HtmlUtilities;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Data::Html::IHtmlUtilities>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Data::Html::HtmlUtilities>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Data::Html::HtmlUtilities> = L"Windows.Data.Html.HtmlUtilities";
    template <> inline constexpr auto& name_v<winrt::Windows::Data::Html::IHtmlUtilities> = L"Windows.Data.Html.IHtmlUtilities";
    template <> inline constexpr guid guid_v<winrt::Windows::Data::Html::IHtmlUtilities>{ 0xFEC00ADD,0x2399,0x4FAC,{ 0xB5,0xA7,0x05,0xE9,0xAC,0xD7,0x18,0x1D } }; // FEC00ADD-2399-4FAC-B5A7-05E9ACD7181D
    template <> struct abi<winrt::Windows::Data::Html::IHtmlUtilities>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertToText(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Html_IHtmlUtilities
    {
        auto ConvertToText(param::hstring const& html) const;
    };
    template <> struct consume<winrt::Windows::Data::Html::IHtmlUtilities>
    {
        template <typename D> using type = consume_Windows_Data_Html_IHtmlUtilities<D>;
    };
}
#endif
