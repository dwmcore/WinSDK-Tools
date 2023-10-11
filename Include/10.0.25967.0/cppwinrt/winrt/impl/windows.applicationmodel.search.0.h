// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Search_0_H
#define WINRT_Windows_ApplicationModel_Search_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search
{
    struct ILocalContentSuggestionSettings;
    struct ISearchPane;
    struct ISearchPaneQueryChangedEventArgs;
    struct ISearchPaneQueryLinguisticDetails;
    struct ISearchPaneQuerySubmittedEventArgs;
    struct ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
    struct ISearchPaneResultSuggestionChosenEventArgs;
    struct ISearchPaneStatics;
    struct ISearchPaneStaticsWithHideThisApplication;
    struct ISearchPaneSuggestionsRequest;
    struct ISearchPaneSuggestionsRequestDeferral;
    struct ISearchPaneSuggestionsRequestedEventArgs;
    struct ISearchPaneVisibilityChangedEventArgs;
    struct ISearchQueryLinguisticDetails;
    struct ISearchQueryLinguisticDetailsFactory;
    struct ISearchSuggestionCollection;
    struct ISearchSuggestionsRequest;
    struct ISearchSuggestionsRequestDeferral;
    struct LocalContentSuggestionSettings;
    struct SearchPane;
    struct SearchPaneQueryChangedEventArgs;
    struct SearchPaneQueryLinguisticDetails;
    struct SearchPaneQuerySubmittedEventArgs;
    struct SearchPaneResultSuggestionChosenEventArgs;
    struct SearchPaneSuggestionsRequest;
    struct SearchPaneSuggestionsRequestDeferral;
    struct SearchPaneSuggestionsRequestedEventArgs;
    struct SearchPaneVisibilityChangedEventArgs;
    struct SearchQueryLinguisticDetails;
    struct SearchSuggestionCollection;
    struct SearchSuggestionsRequest;
    struct SearchSuggestionsRequestDeferral;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPane>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPane>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings> = L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPane> = L"Windows.ApplicationModel.Search.SearchPane";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> = L"Windows.ApplicationModel.Search.SearchPaneQueryChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> = L"Windows.ApplicationModel.Search.SearchPaneQuerySubmittedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> = L"Windows.ApplicationModel.Search.SearchPaneResultSuggestionChosenEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest> = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> = L"Windows.ApplicationModel.Search.SearchPaneVisibilityChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection> = L"Windows.ApplicationModel.Search.SearchSuggestionCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest> = L"Windows.ApplicationModel.Search.SearchSuggestionsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings> = L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPane> = L"Windows.ApplicationModel.Search.ISearchPane";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs> = L"Windows.ApplicationModel.Search.ISearchPaneQueryChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs> = L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails> = L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs> = L"Windows.ApplicationModel.Search.ISearchPaneResultSuggestionChosenEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics> = L"Windows.ApplicationModel.Search.ISearchPaneStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication> = L"Windows.ApplicationModel.Search.ISearchPaneStaticsWithHideThisApplication";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest> = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs> = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs> = L"Windows.ApplicationModel.Search.ISearchPaneVisibilityChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails> = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory> = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection> = L"Windows.ApplicationModel.Search.ISearchSuggestionCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest> = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral> = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>{ 0xEEAEB062,0x743D,0x456E,{ 0x84,0xA3,0x23,0xF0,0x6F,0x2D,0x15,0xD7 } }; // EEAEB062-743D-456E-84A3-23F06F2D15D7
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPane>{ 0xFDACEC38,0x3700,0x4D73,{ 0x91,0xA1,0x2F,0x99,0x86,0x74,0x23,0x8A } }; // FDACEC38-3700-4D73-91A1-2F998674238A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>{ 0x3C064FE9,0x2351,0x4248,{ 0xA5,0x29,0x71,0x10,0xF4,0x64,0xA7,0x85 } }; // 3C064FE9-2351-4248-A529-7110F464A785
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>{ 0x82FB460E,0x0940,0x4B6D,{ 0xB8,0xD0,0x64,0x2B,0x30,0x98,0x9E,0x15 } }; // 82FB460E-0940-4B6D-B8D0-642B30989E15
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>{ 0x143BA4FC,0xE9C5,0x4736,{ 0x91,0xB2,0xE8,0xEB,0x9C,0xB8,0x83,0x56 } }; // 143BA4FC-E9C5-4736-91B2-E8EB9CB88356
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>{ 0x460C92E5,0x4C32,0x4538,{ 0xA4,0xD4,0xB6,0xB4,0x40,0x0D,0x14,0x0F } }; // 460C92E5-4C32-4538-A4D4-B6B4400D140F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>{ 0xC8316CC0,0xAED2,0x41E0,{ 0xBC,0xE0,0xC2,0x6C,0xA7,0x4F,0x85,0xEC } }; // C8316CC0-AED2-41E0-BCE0-C26CA74F85EC
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics>{ 0x9572ADF1,0x8F1D,0x481F,{ 0xA1,0x5B,0xC6,0x16,0x55,0xF1,0x6A,0x0E } }; // 9572ADF1-8F1D-481F-A15B-C61655F16A0E
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>{ 0x00732830,0x50F1,0x4D03,{ 0x99,0xAC,0xC6,0x64,0x4C,0x8E,0xD8,0xB5 } }; // 00732830-50F1-4D03-99AC-C6644C8ED8B5
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>{ 0x81B10B1C,0xE561,0x4093,{ 0x9B,0x4D,0x2A,0xD4,0x82,0x79,0x4A,0x53 } }; // 81B10B1C-E561-4093-9B4D-2AD482794A53
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>{ 0xA0D009F7,0x8748,0x4EE2,{ 0xAD,0x44,0xAF,0xA6,0xBE,0x99,0x7C,0x51 } }; // A0D009F7-8748-4EE2-AD44-AFA6BE997C51
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>{ 0xC89B8A2F,0xAC56,0x4460,{ 0x8D,0x2F,0x80,0x02,0x3B,0xEC,0x4F,0xC5 } }; // C89B8A2F-AC56-4460-8D2F-80023BEC4FC5
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>{ 0x3C4D3046,0xAC4B,0x49F2,{ 0x97,0xD6,0x02,0x0E,0x61,0x82,0xCB,0x9C } }; // 3C4D3046-AC4B-49F2-97D6-020E6182CB9C
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>{ 0x46A1205B,0x69C9,0x4745,{ 0xB7,0x2F,0xA8,0xA4,0xFC,0x8F,0x24,0xAE } }; // 46A1205B-69C9-4745-B72F-A8A4FC8F24AE
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>{ 0xCAC6C3B8,0x3C64,0x4DFD,{ 0xAD,0x9F,0x47,0x9E,0x4D,0x40,0x65,0xA4 } }; // CAC6C3B8-3C64-4DFD-AD9F-479E4D4065A4
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection>{ 0x323A8A4B,0xFBEA,0x4446,{ 0xAB,0xBC,0x3D,0xA7,0x91,0x5F,0xDD,0x3A } }; // 323A8A4B-FBEA-4446-ABBC-3DA7915FDD3A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest>{ 0x4E4E26A7,0x44E5,0x4039,{ 0x90,0x99,0x60,0x00,0xEA,0xD1,0xF0,0xC6 } }; // 4E4E26A7-44E5-4039-9099-6000EAD1F0C6
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>{ 0xB71598A9,0xC065,0x456D,{ 0xA8,0x45,0x1E,0xCC,0xEC,0x5D,0xC2,0x8B } }; // B71598A9-C065-456D-A845-1ECCEC5DC28B
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings>{ using type = winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPane>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPane; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>{ using type = winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>{ using type = winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection>{ using type = winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest>{ using type = winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>{ using type = winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral; };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Enabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Enabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Locations(void**) noexcept = 0;
            virtual int32_t __stdcall put_AqsFilter(void*) noexcept = 0;
            virtual int32_t __stdcall get_AqsFilter(void**) noexcept = 0;
            virtual int32_t __stdcall get_PropertiesToMatch(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPane>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_SearchHistoryEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SearchHistoryEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SearchHistoryContext(void*) noexcept = 0;
            virtual int32_t __stdcall get_SearchHistoryContext(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderText(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderText(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall add_VisibilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QueryChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QueryChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SuggestionsRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SuggestionsRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_QuerySubmitted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_QuerySubmitted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ResultSuggestionChosen(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ResultSuggestionChosen(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SetLocalContentSuggestionSettings(void*) noexcept = 0;
            virtual int32_t __stdcall ShowOverloadDefault() noexcept = 0;
            virtual int32_t __stdcall ShowOverloadWithQuery(void*) noexcept = 0;
            virtual int32_t __stdcall put_ShowOnKeyboardInput(bool) noexcept = 0;
            virtual int32_t __stdcall get_ShowOnKeyboardInput(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetQueryText(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_LinguisticDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryText(void**) noexcept = 0;
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LinguisticDetails(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall HideThisApplication() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SearchSuggestionCollection(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QueryTextAlternatives(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionStart(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_QueryTextCompositionLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, uint32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestion(void*) noexcept = 0;
            virtual int32_t __stdcall AppendQuerySuggestions(void*) noexcept = 0;
            virtual int32_t __stdcall AppendResultSuggestion(void*, void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall AppendSearchSeparator(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCanceled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SearchSuggestionCollection(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings
    {
        auto Enabled(bool value) const;
        [[nodiscard]] auto Enabled() const;
        [[nodiscard]] auto Locations() const;
        auto AqsFilter(param::hstring const& value) const;
        [[nodiscard]] auto AqsFilter() const;
        [[nodiscard]] auto PropertiesToMatch() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPane
    {
        auto SearchHistoryEnabled(bool value) const;
        [[nodiscard]] auto SearchHistoryEnabled() const;
        auto SearchHistoryContext(param::hstring const& value) const;
        [[nodiscard]] auto SearchHistoryContext() const;
        auto PlaceholderText(param::hstring const& value) const;
        [[nodiscard]] auto PlaceholderText() const;
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto Visible() const;
        auto VisibilityChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
        using VisibilityChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<winrt::Windows::ApplicationModel::Search::ISearchPane>::remove_VisibilityChanged>;
        [[nodiscard]] VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs> const& handler) const;
        auto VisibilityChanged(winrt::event_token const& token) const noexcept;
        auto QueryChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
        using QueryChanged_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<winrt::Windows::ApplicationModel::Search::ISearchPane>::remove_QueryChanged>;
        [[nodiscard]] QueryChanged_revoker QueryChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs> const& handler) const;
        auto QueryChanged(winrt::event_token const& token) const noexcept;
        auto SuggestionsRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
        using SuggestionsRequested_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<winrt::Windows::ApplicationModel::Search::ISearchPane>::remove_SuggestionsRequested>;
        [[nodiscard]] SuggestionsRequested_revoker SuggestionsRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs> const& handler) const;
        auto SuggestionsRequested(winrt::event_token const& token) const noexcept;
        auto QuerySubmitted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
        using QuerySubmitted_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<winrt::Windows::ApplicationModel::Search::ISearchPane>::remove_QuerySubmitted>;
        [[nodiscard]] QuerySubmitted_revoker QuerySubmitted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs> const& handler) const;
        auto QuerySubmitted(winrt::event_token const& token) const noexcept;
        auto ResultSuggestionChosen(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
        using ResultSuggestionChosen_revoker = impl::event_revoker<winrt::Windows::ApplicationModel::Search::ISearchPane, &impl::abi_t<winrt::Windows::ApplicationModel::Search::ISearchPane>::remove_ResultSuggestionChosen>;
        [[nodiscard]] ResultSuggestionChosen_revoker ResultSuggestionChosen(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Search::SearchPane, winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs> const& handler) const;
        auto ResultSuggestionChosen(winrt::event_token const& token) const noexcept;
        auto SetLocalContentSuggestionSettings(winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings const& settings) const;
        auto Show() const;
        auto Show(param::hstring const& query) const;
        auto ShowOnKeyboardInput(bool value) const;
        [[nodiscard]] auto ShowOnKeyboardInput() const;
        auto TrySetQueryText(param::hstring const& query) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPane>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPane<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs
    {
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto LinguisticDetails() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails
    {
        [[nodiscard]] auto QueryTextAlternatives() const;
        [[nodiscard]] auto QueryTextCompositionStart() const;
        [[nodiscard]] auto QueryTextCompositionLength() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs
    {
        [[nodiscard]] auto QueryText() const;
        [[nodiscard]] auto Language() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails
    {
        [[nodiscard]] auto LinguisticDetails() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs
    {
        [[nodiscard]] auto Tag() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneResultSuggestionChosenEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication
    {
        auto HideThisApplication() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneStaticsWithHideThisApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest
    {
        [[nodiscard]] auto IsCanceled() const;
        [[nodiscard]] auto SearchSuggestionCollection() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs
    {
        [[nodiscard]] auto Visible() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchPaneVisibilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails
    {
        [[nodiscard]] auto QueryTextAlternatives() const;
        [[nodiscard]] auto QueryTextCompositionStart() const;
        [[nodiscard]] auto QueryTextCompositionLength() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory
    {
        auto CreateInstance(param::iterable<hstring> const& queryTextAlternatives, uint32_t queryTextCompositionStart, uint32_t queryTextCompositionLength) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetailsFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection
    {
        [[nodiscard]] auto Size() const;
        auto AppendQuerySuggestion(param::hstring const& text) const;
        auto AppendQuerySuggestions(param::iterable<hstring> const& suggestions) const;
        auto AppendResultSuggestion(param::hstring const& text, param::hstring const& detailText, param::hstring const& tag, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& image, param::hstring const& imageAlternateText) const;
        auto AppendSearchSeparator(param::hstring const& label) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchSuggestionCollection>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionCollection<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest
    {
        [[nodiscard]] auto IsCanceled() const;
        [[nodiscard]] auto SearchSuggestionCollection() const;
        auto GetDeferral() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequest>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequest<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral<D>;
    };
}
#endif
