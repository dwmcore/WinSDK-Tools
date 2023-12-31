// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Data_Html_2_H
#define WINRT_Windows_Data_Html_2_H
#include "winrt/impl/Windows.Data.Html.1.h"
WINRT_EXPORT namespace winrt::Windows::Data::Html
{
    struct HtmlUtilities
    {
        HtmlUtilities() = delete;
        static auto ConvertToText(param::hstring const& html);
    };
}
#endif
