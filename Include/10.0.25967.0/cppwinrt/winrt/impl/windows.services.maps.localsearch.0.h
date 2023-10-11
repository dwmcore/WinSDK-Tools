// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Services_Maps_LocalSearch_0_H
#define WINRT_Windows_Services_Maps_LocalSearch_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct Geocircle;
    struct Geopoint;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::Globalization
{
    enum class DayOfWeek : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Services::Maps
{
    struct MapAddress;
    struct PlaceInfo;
}
WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch
{
    enum class LocalLocationFinderStatus : int32_t
    {
        Success = 0,
        UnknownError = 1,
        InvalidCredentials = 2,
        InvalidCategory = 3,
        InvalidSearchTerm = 4,
        InvalidSearchArea = 5,
        NetworkFailure = 6,
        NotSupported = 7,
    };
    struct ILocalCategoriesStatics;
    struct ILocalLocation;
    struct ILocalLocation2;
    struct ILocalLocationFinderResult;
    struct ILocalLocationFinderStatics;
    struct ILocalLocationHoursOfOperationItem;
    struct ILocalLocationRatingInfo;
    struct IPlaceInfoHelperStatics;
    struct LocalCategories;
    struct LocalLocation;
    struct LocalLocationFinder;
    struct LocalLocationFinderResult;
    struct LocalLocationHoursOfOperationItem;
    struct LocalLocationRatingInfo;
    struct PlaceInfoHelper;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalCategories>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::PlaceInfoHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalCategories> = L"Windows.Services.Maps.LocalSearch.LocalCategories";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocation> = L"Windows.Services.Maps.LocalSearch.LocalLocation";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder> = L"Windows.Services.Maps.LocalSearch.LocalLocationFinder";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> = L"Windows.Services.Maps.LocalSearch.LocalLocationFinderResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> = L"Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo> = L"Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::PlaceInfoHelper> = L"Windows.Services.Maps.LocalSearch.PlaceInfoHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus> = L"Windows.Services.Maps.LocalSearch.LocalLocationFinderStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics> = L"Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation> = L"Windows.Services.Maps.LocalSearch.ILocalLocation";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2> = L"Windows.Services.Maps.LocalSearch.ILocalLocation2";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult> = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics> = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem> = L"Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo> = L"Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics> = L"Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>{ 0xF49399F5,0x8261,0x4321,{ 0x99,0x74,0xEF,0x92,0xD4,0x9A,0x8D,0xCA } }; // F49399F5-8261-4321-9974-EF92D49A8DCA
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation>{ 0xBB0FE9AB,0x4502,0x4F2C,{ 0x94,0xA9,0x0D,0x60,0xDE,0x0E,0x21,0x63 } }; // BB0FE9AB-4502-4F2C-94A9-0D60DE0E2163
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2>{ 0x6E9E307C,0xECB5,0x4FFC,{ 0xBB,0x8C,0xBA,0x50,0xBA,0x8C,0x2D,0xC6 } }; // 6E9E307C-ECB5-4FFC-BB8C-BA50BA8C2DC6
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>{ 0xD09B6CC6,0xF338,0x4191,{ 0x9F,0xD8,0x54,0x40,0xB9,0xA6,0x8F,0x52 } }; // D09B6CC6-F338-4191-9FD8-5440B9A68F52
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>{ 0xD2EF7344,0xA0DE,0x48CA,{ 0x81,0xA8,0x07,0xC7,0xDC,0xFD,0x37,0xAB } }; // D2EF7344-A0DE-48CA-81A8-07C7DCFD37AB
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>{ 0x23548C72,0xA1C7,0x43F1,{ 0xA4,0xF0,0x10,0x91,0xC3,0x9E,0xC6,0x40 } }; // 23548C72-A1C7-43F1-A4F0-1091C39EC640
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>{ 0xCB1DAB56,0x3354,0x4311,{ 0x8B,0xC0,0xA2,0xD4,0xD5,0xEB,0x80,0x6E } }; // CB1DAB56-3354-4311-8BC0-A2D4D5EB806E
    template <> inline constexpr guid guid_v<winrt::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>{ 0xDD1CA9A7,0xA9C6,0x491B,{ 0xBC,0x09,0xE8,0x0F,0xCE,0xA4,0x8E,0xE6 } }; // DD1CA9A7-A9C6-491B-BC09-E80FCEA48EE6
    template <> struct default_interface<winrt::Windows::Services::Maps::LocalSearch::LocalLocation>{ using type = winrt::Windows::Services::Maps::LocalSearch::ILocalLocation; };
    template <> struct default_interface<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>{ using type = winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult; };
    template <> struct default_interface<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>{ using type = winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem; };
    template <> struct default_interface<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>{ using type = winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo; };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BankAndCreditUnions(void**) noexcept = 0;
            virtual int32_t __stdcall get_EatDrink(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hospitals(void**) noexcept = 0;
            virtual int32_t __stdcall get_HotelsAndMotels(void**) noexcept = 0;
            virtual int32_t __stdcall get_All(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parking(void**) noexcept = 0;
            virtual int32_t __stdcall get_SeeDo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Shop(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Address(void**) noexcept = 0;
            virtual int32_t __stdcall get_Identifier(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DataAttribution(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Category(void**) noexcept = 0;
            virtual int32_t __stdcall get_RatingInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_HoursOfOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindLocalLocationsAsync(void*, void*, void*, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Day(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Start(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Span(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AggregateRating(void**) noexcept = 0;
            virtual int32_t __stdcall get_RatingCount(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProviderIdentifier(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromLocalLocation(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics
    {
        [[nodiscard]] auto BankAndCreditUnions() const;
        [[nodiscard]] auto EatDrink() const;
        [[nodiscard]] auto Hospitals() const;
        [[nodiscard]] auto HotelsAndMotels() const;
        [[nodiscard]] auto All() const;
        [[nodiscard]] auto Parking() const;
        [[nodiscard]] auto SeeDo() const;
        [[nodiscard]] auto Shop() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocation
    {
        [[nodiscard]] auto Address() const;
        [[nodiscard]] auto Identifier() const;
        [[nodiscard]] auto Description() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto Point() const;
        [[nodiscard]] auto PhoneNumber() const;
        [[nodiscard]] auto DataAttribution() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocation2
    {
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto RatingInfo() const;
        [[nodiscard]] auto HoursOfOperation() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocation2<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult
    {
        [[nodiscard]] auto LocalLocations() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics
    {
        auto FindLocalLocationsAsync(param::hstring const& searchTerm, winrt::Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults) const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem
    {
        [[nodiscard]] auto Day() const;
        [[nodiscard]] auto Start() const;
        [[nodiscard]] auto Span() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo
    {
        [[nodiscard]] auto AggregateRating() const;
        [[nodiscard]] auto RatingCount() const;
        [[nodiscard]] auto ProviderIdentifier() const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics
    {
        auto CreateFromLocalLocation(winrt::Windows::Services::Maps::LocalSearch::LocalLocation const& location) const;
    };
    template <> struct consume<winrt::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics>
    {
        template <typename D> using type = consume_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics<D>;
    };
}
#endif
