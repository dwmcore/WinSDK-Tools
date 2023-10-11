// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Globalization_0_H
#define WINRT_Windows_Globalization_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Globalization
{
    enum class DayOfWeek : int32_t
    {
        Sunday = 0,
        Monday = 1,
        Tuesday = 2,
        Wednesday = 3,
        Thursday = 4,
        Friday = 5,
        Saturday = 6,
    };
    enum class LanguageLayoutDirection : int32_t
    {
        Ltr = 0,
        Rtl = 1,
        TtbLtr = 2,
        TtbRtl = 3,
    };
    struct IApplicationLanguagesStatics;
    struct IApplicationLanguagesStatics2;
    struct ICalendar;
    struct ICalendarFactory;
    struct ICalendarFactory2;
    struct ICalendarIdentifiersStatics;
    struct ICalendarIdentifiersStatics2;
    struct ICalendarIdentifiersStatics3;
    struct IClockIdentifiersStatics;
    struct ICurrencyAmount;
    struct ICurrencyAmountFactory;
    struct ICurrencyIdentifiersStatics;
    struct ICurrencyIdentifiersStatics2;
    struct ICurrencyIdentifiersStatics3;
    struct IGeographicRegion;
    struct IGeographicRegionFactory;
    struct IGeographicRegionStatics;
    struct IJapanesePhoneme;
    struct IJapanesePhoneticAnalyzerStatics;
    struct ILanguage;
    struct ILanguage2;
    struct ILanguage3;
    struct ILanguageExtensionSubtags;
    struct ILanguageFactory;
    struct ILanguageStatics;
    struct ILanguageStatics2;
    struct ILanguageStatics3;
    struct INumeralSystemIdentifiersStatics;
    struct INumeralSystemIdentifiersStatics2;
    struct ITimeZoneOnCalendar;
    struct ApplicationLanguages;
    struct Calendar;
    struct CalendarIdentifiers;
    struct ClockIdentifiers;
    struct CurrencyAmount;
    struct CurrencyIdentifiers;
    struct GeographicRegion;
    struct JapanesePhoneme;
    struct JapanesePhoneticAnalyzer;
    struct Language;
    struct NumeralSystemIdentifiers;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Globalization::IApplicationLanguagesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IApplicationLanguagesStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendar>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendarFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendarFactory2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendarIdentifiersStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendarIdentifiersStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICalendarIdentifiersStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IClockIdentifiersStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICurrencyAmount>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICurrencyAmountFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICurrencyIdentifiersStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ICurrencyIdentifiersStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IGeographicRegion>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IGeographicRegionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IGeographicRegionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IJapanesePhoneme>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguage2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguage3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguageExtensionSubtags>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguageStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguageStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ILanguageStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ITimeZoneOnCalendar>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Globalization::ApplicationLanguages>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::Calendar>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::CalendarIdentifiers>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::ClockIdentifiers>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::CurrencyAmount>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::CurrencyIdentifiers>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::GeographicRegion>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::JapanesePhoneme>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::JapanesePhoneticAnalyzer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::Language>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::NumeralSystemIdentifiers>{ using type = class_category; };
    template <> struct category<winrt::Windows::Globalization::DayOfWeek>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Globalization::LanguageLayoutDirection>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ApplicationLanguages> = L"Windows.Globalization.ApplicationLanguages";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::Calendar> = L"Windows.Globalization.Calendar";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::CalendarIdentifiers> = L"Windows.Globalization.CalendarIdentifiers";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ClockIdentifiers> = L"Windows.Globalization.ClockIdentifiers";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::CurrencyAmount> = L"Windows.Globalization.CurrencyAmount";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::CurrencyIdentifiers> = L"Windows.Globalization.CurrencyIdentifiers";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::GeographicRegion> = L"Windows.Globalization.GeographicRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::JapanesePhoneme> = L"Windows.Globalization.JapanesePhoneme";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::JapanesePhoneticAnalyzer> = L"Windows.Globalization.JapanesePhoneticAnalyzer";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::Language> = L"Windows.Globalization.Language";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::NumeralSystemIdentifiers> = L"Windows.Globalization.NumeralSystemIdentifiers";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::DayOfWeek> = L"Windows.Globalization.DayOfWeek";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::LanguageLayoutDirection> = L"Windows.Globalization.LanguageLayoutDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IApplicationLanguagesStatics> = L"Windows.Globalization.IApplicationLanguagesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IApplicationLanguagesStatics2> = L"Windows.Globalization.IApplicationLanguagesStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendar> = L"Windows.Globalization.ICalendar";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendarFactory> = L"Windows.Globalization.ICalendarFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendarFactory2> = L"Windows.Globalization.ICalendarFactory2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics> = L"Windows.Globalization.ICalendarIdentifiersStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics2> = L"Windows.Globalization.ICalendarIdentifiersStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics3> = L"Windows.Globalization.ICalendarIdentifiersStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IClockIdentifiersStatics> = L"Windows.Globalization.IClockIdentifiersStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICurrencyAmount> = L"Windows.Globalization.ICurrencyAmount";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICurrencyAmountFactory> = L"Windows.Globalization.ICurrencyAmountFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics> = L"Windows.Globalization.ICurrencyIdentifiersStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2> = L"Windows.Globalization.ICurrencyIdentifiersStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics3> = L"Windows.Globalization.ICurrencyIdentifiersStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IGeographicRegion> = L"Windows.Globalization.IGeographicRegion";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IGeographicRegionFactory> = L"Windows.Globalization.IGeographicRegionFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IGeographicRegionStatics> = L"Windows.Globalization.IGeographicRegionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IJapanesePhoneme> = L"Windows.Globalization.IJapanesePhoneme";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics> = L"Windows.Globalization.IJapanesePhoneticAnalyzerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguage> = L"Windows.Globalization.ILanguage";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguage2> = L"Windows.Globalization.ILanguage2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguage3> = L"Windows.Globalization.ILanguage3";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguageExtensionSubtags> = L"Windows.Globalization.ILanguageExtensionSubtags";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguageFactory> = L"Windows.Globalization.ILanguageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguageStatics> = L"Windows.Globalization.ILanguageStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguageStatics2> = L"Windows.Globalization.ILanguageStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ILanguageStatics3> = L"Windows.Globalization.ILanguageStatics3";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics> = L"Windows.Globalization.INumeralSystemIdentifiersStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2> = L"Windows.Globalization.INumeralSystemIdentifiersStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Globalization::ITimeZoneOnCalendar> = L"Windows.Globalization.ITimeZoneOnCalendar";
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IApplicationLanguagesStatics>{ 0x75B40847,0x0A4C,0x4A92,{ 0x95,0x65,0xFD,0x63,0xC9,0x5F,0x7A,0xED } }; // 75B40847-0A4C-4A92-9565-FD63C95F7AED
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IApplicationLanguagesStatics2>{ 0x1DF0DE4F,0x072B,0x4D7B,{ 0x8F,0x06,0xCB,0x2D,0xB4,0x0F,0x2B,0xB5 } }; // 1DF0DE4F-072B-4D7B-8F06-CB2DB40F2BB5
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendar>{ 0xCA30221D,0x86D9,0x40FB,{ 0xA2,0x6B,0xD4,0x4E,0xB7,0xCF,0x08,0xEA } }; // CA30221D-86D9-40FB-A26B-D44EB7CF08EA
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendarFactory>{ 0x83F58412,0xE56B,0x4C75,{ 0xA6,0x6E,0x0F,0x63,0xD5,0x77,0x58,0xA6 } }; // 83F58412-E56B-4C75-A66E-0F63D57758A6
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendarFactory2>{ 0xB44B378C,0xCA7E,0x4590,{ 0x9E,0x72,0xEA,0x2B,0xEC,0x1A,0x51,0x15 } }; // B44B378C-CA7E-4590-9E72-EA2BEC1A5115
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics>{ 0x80653F68,0x2CB2,0x4C1F,{ 0xB5,0x90,0xF0,0xF5,0x2B,0xF4,0xFD,0x1A } }; // 80653F68-2CB2-4C1F-B590-F0F52BF4FD1A
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics2>{ 0x7DF4D488,0x5FD0,0x42A7,{ 0x95,0xB5,0x7D,0x98,0xD8,0x23,0x07,0x5F } }; // 7DF4D488-5FD0-42A7-95B5-7D98D823075F
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICalendarIdentifiersStatics3>{ 0x2C225423,0x1FAD,0x40C0,{ 0x93,0x34,0xA8,0xEB,0x90,0xDB,0x04,0xF5 } }; // 2C225423-1FAD-40C0-9334-A8EB90DB04F5
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IClockIdentifiersStatics>{ 0x523805BB,0x12EC,0x4F83,{ 0xBC,0x31,0xB1,0xB4,0x37,0x6B,0x08,0x08 } }; // 523805BB-12EC-4F83-BC31-B1B4376B0808
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICurrencyAmount>{ 0x74B49942,0xEB75,0x443A,{ 0x95,0xB3,0x7D,0x72,0x3F,0x56,0xF9,0x3C } }; // 74B49942-EB75-443A-95B3-7D723F56F93C
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICurrencyAmountFactory>{ 0x48D7168F,0xEF3B,0x4AEE,{ 0xA6,0xA1,0x4B,0x03,0x6F,0xE0,0x3F,0xF0 } }; // 48D7168F-EF3B-4AEE-A6A1-4B036FE03FF0
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics>{ 0x9F1D091B,0xD586,0x4913,{ 0x9B,0x6A,0xA9,0xBD,0x2D,0xC1,0x28,0x74 } }; // 9F1D091B-D586-4913-9B6A-A9BD2DC12874
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2>{ 0x1814797F,0xC3B2,0x4C33,{ 0x95,0x91,0x98,0x00,0x11,0x95,0x0D,0x37 } }; // 1814797F-C3B2-4C33-9591-980011950D37
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ICurrencyIdentifiersStatics3>{ 0x4FB23BFA,0xED25,0x4F4D,{ 0x85,0x7F,0x23,0x7F,0x17,0x48,0xC2,0x1C } }; // 4FB23BFA-ED25-4F4D-857F-237F1748C21C
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IGeographicRegion>{ 0x01E9A621,0x4A64,0x4ED9,{ 0x95,0x4F,0x9E,0xDE,0xB0,0x7B,0xD9,0x03 } }; // 01E9A621-4A64-4ED9-954F-9EDEB07BD903
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IGeographicRegionFactory>{ 0x53425270,0x77B4,0x426B,{ 0x85,0x9F,0x81,0xE1,0x9D,0x51,0x25,0x46 } }; // 53425270-77B4-426B-859F-81E19D512546
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IGeographicRegionStatics>{ 0x29E28974,0x7AD9,0x4EF4,{ 0x87,0x99,0xB3,0xB4,0x4F,0xAD,0xEC,0x08 } }; // 29E28974-7AD9-4EF4-8799-B3B44FADEC08
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IJapanesePhoneme>{ 0x2F6A9300,0xE85B,0x43E6,{ 0x89,0x7D,0x5D,0x82,0xF8,0x62,0xDF,0x21 } }; // 2F6A9300-E85B-43E6-897D-5D82F862DF21
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics>{ 0x88AB9E90,0x93DE,0x41B2,{ 0xB4,0xD5,0x8E,0xDB,0x22,0x7F,0xD1,0xC2 } }; // 88AB9E90-93DE-41B2-B4D5-8EDB227FD1C2
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguage>{ 0xEA79A752,0xF7C2,0x4265,{ 0xB1,0xBD,0xC4,0xDE,0xC4,0xE4,0xF0,0x80 } }; // EA79A752-F7C2-4265-B1BD-C4DEC4E4F080
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguage2>{ 0x6A47E5B5,0xD94D,0x4886,{ 0xA4,0x04,0xA5,0xA5,0xB9,0xD5,0xB4,0x94 } }; // 6A47E5B5-D94D-4886-A404-A5A5B9D5B494
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguage3>{ 0xC6AF3D10,0x641A,0x5BA4,{ 0xBB,0x43,0x5E,0x12,0xAE,0xD7,0x59,0x54 } }; // C6AF3D10-641A-5BA4-BB43-5E12AED75954
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguageExtensionSubtags>{ 0x7D7DAF45,0x368D,0x4364,{ 0x85,0x2B,0xDE,0xC9,0x27,0x03,0x7B,0x85 } }; // 7D7DAF45-368D-4364-852B-DEC927037B85
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguageFactory>{ 0x9B0252AC,0x0C27,0x44F8,{ 0xB7,0x92,0x97,0x93,0xFB,0x66,0xC6,0x3E } }; // 9B0252AC-0C27-44F8-B792-9793FB66C63E
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguageStatics>{ 0xB23CD557,0x0865,0x46D4,{ 0x89,0xB8,0xD5,0x9B,0xE8,0x99,0x0F,0x0D } }; // B23CD557-0865-46D4-89B8-D59BE8990F0D
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguageStatics2>{ 0x30199F6E,0x914B,0x4B2A,{ 0x9D,0x6E,0xE3,0xB0,0xE2,0x7D,0xBE,0x4F } }; // 30199F6E-914B-4B2A-9D6E-E3B0E27DBE4F
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ILanguageStatics3>{ 0xD15ECB5A,0x71DE,0x5752,{ 0x95,0x42,0xFA,0xC5,0xB4,0xF2,0x72,0x61 } }; // D15ECB5A-71DE-5752-9542-FAC5B4F27261
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics>{ 0xA5C662C3,0x68C9,0x4D3D,{ 0xB7,0x65,0x97,0x20,0x29,0xE2,0x1D,0xEC } }; // A5C662C3-68C9-4D3D-B765-972029E21DEC
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2>{ 0x7F003228,0x9DDB,0x4A34,{ 0x91,0x04,0x02,0x60,0xC0,0x91,0xA7,0xC7 } }; // 7F003228-9DDB-4A34-9104-0260C091A7C7
    template <> inline constexpr guid guid_v<winrt::Windows::Globalization::ITimeZoneOnCalendar>{ 0xBB3C25E5,0x46CF,0x4317,{ 0xA3,0xF5,0x02,0x62,0x1A,0xD5,0x44,0x78 } }; // BB3C25E5-46CF-4317-A3F5-02621AD54478
    template <> struct default_interface<winrt::Windows::Globalization::Calendar>{ using type = winrt::Windows::Globalization::ICalendar; };
    template <> struct default_interface<winrt::Windows::Globalization::CurrencyAmount>{ using type = winrt::Windows::Globalization::ICurrencyAmount; };
    template <> struct default_interface<winrt::Windows::Globalization::GeographicRegion>{ using type = winrt::Windows::Globalization::IGeographicRegion; };
    template <> struct default_interface<winrt::Windows::Globalization::JapanesePhoneme>{ using type = winrt::Windows::Globalization::IJapanesePhoneme; };
    template <> struct default_interface<winrt::Windows::Globalization::Language>{ using type = winrt::Windows::Globalization::ILanguage; };
    template <> struct abi<winrt::Windows::Globalization::IApplicationLanguagesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrimaryLanguageOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrimaryLanguageOverride(void*) noexcept = 0;
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManifestLanguages(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IApplicationLanguagesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLanguagesForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall SetToMin() noexcept = 0;
            virtual int32_t __stdcall SetToMax() noexcept = 0;
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall get_NumeralSystem(void**) noexcept = 0;
            virtual int32_t __stdcall put_NumeralSystem(void*) noexcept = 0;
            virtual int32_t __stdcall GetCalendarSystem(void**) noexcept = 0;
            virtual int32_t __stdcall ChangeCalendarSystem(void*) noexcept = 0;
            virtual int32_t __stdcall GetClock(void**) noexcept = 0;
            virtual int32_t __stdcall ChangeClock(void*) noexcept = 0;
            virtual int32_t __stdcall GetDateTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SetDateTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall SetToNow() noexcept = 0;
            virtual int32_t __stdcall get_FirstEra(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastEra(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfEras(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Era(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Era(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddEras(int32_t) noexcept = 0;
            virtual int32_t __stdcall EraAsFullString(void**) noexcept = 0;
            virtual int32_t __stdcall EraAsString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstYearInThisEra(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastYearInThisEra(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfYearsInThisEra(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Year(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Year(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddYears(int32_t) noexcept = 0;
            virtual int32_t __stdcall YearAsString(void**) noexcept = 0;
            virtual int32_t __stdcall YearAsTruncatedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall YearAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstMonthInThisYear(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastMonthInThisYear(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfMonthsInThisYear(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Month(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Month(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddMonths(int32_t) noexcept = 0;
            virtual int32_t __stdcall MonthAsFullString(void**) noexcept = 0;
            virtual int32_t __stdcall MonthAsString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall MonthAsFullSoloString(void**) noexcept = 0;
            virtual int32_t __stdcall MonthAsSoloString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall MonthAsNumericString(void**) noexcept = 0;
            virtual int32_t __stdcall MonthAsPaddedNumericString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall AddWeeks(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FirstDayInThisMonth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastDayInThisMonth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfDaysInThisMonth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Day(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Day(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddDays(int32_t) noexcept = 0;
            virtual int32_t __stdcall DayAsString(void**) noexcept = 0;
            virtual int32_t __stdcall DayAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_DayOfWeek(int32_t*) noexcept = 0;
            virtual int32_t __stdcall DayOfWeekAsFullString(void**) noexcept = 0;
            virtual int32_t __stdcall DayOfWeekAsString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall DayOfWeekAsFullSoloString(void**) noexcept = 0;
            virtual int32_t __stdcall DayOfWeekAsSoloString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstPeriodInThisDay(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastPeriodInThisDay(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfPeriodsInThisDay(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Period(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Period(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddPeriods(int32_t) noexcept = 0;
            virtual int32_t __stdcall PeriodAsFullString(void**) noexcept = 0;
            virtual int32_t __stdcall PeriodAsString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_FirstHourInThisPeriod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastHourInThisPeriod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfHoursInThisPeriod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Hour(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Hour(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddHours(int32_t) noexcept = 0;
            virtual int32_t __stdcall HourAsString(void**) noexcept = 0;
            virtual int32_t __stdcall HourAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Minute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Minute(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddMinutes(int32_t) noexcept = 0;
            virtual int32_t __stdcall MinuteAsString(void**) noexcept = 0;
            virtual int32_t __stdcall MinuteAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Second(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Second(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddSeconds(int32_t) noexcept = 0;
            virtual int32_t __stdcall SecondAsString(void**) noexcept = 0;
            virtual int32_t __stdcall SecondAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Nanosecond(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Nanosecond(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddNanoseconds(int32_t) noexcept = 0;
            virtual int32_t __stdcall NanosecondAsString(void**) noexcept = 0;
            virtual int32_t __stdcall NanosecondAsPaddedString(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall Compare(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CompareDateTime(int64_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall CopyTo(void*) noexcept = 0;
            virtual int32_t __stdcall get_FirstMinuteInThisHour(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastMinuteInThisHour(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfMinutesInThisHour(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FirstSecondInThisMinute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LastSecondInThisMinute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfSecondsInThisMinute(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResolvedLanguage(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDaylightSavingTime(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendarFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCalendarDefaultCalendarAndClock(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCalendar(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendarFactory2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCalendarWithTimeZone(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendarIdentifiersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Gregorian(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hebrew(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hijri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Japanese(void**) noexcept = 0;
            virtual int32_t __stdcall get_Julian(void**) noexcept = 0;
            virtual int32_t __stdcall get_Korean(void**) noexcept = 0;
            virtual int32_t __stdcall get_Taiwan(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thai(void**) noexcept = 0;
            virtual int32_t __stdcall get_UmAlQura(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendarIdentifiersStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Persian(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICalendarIdentifiersStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChineseLunar(void**) noexcept = 0;
            virtual int32_t __stdcall get_JapaneseLunar(void**) noexcept = 0;
            virtual int32_t __stdcall get_KoreanLunar(void**) noexcept = 0;
            virtual int32_t __stdcall get_TaiwanLunar(void**) noexcept = 0;
            virtual int32_t __stdcall get_VietnameseLunar(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IClockIdentifiersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TwelveHour(void**) noexcept = 0;
            virtual int32_t __stdcall get_TwentyFourHour(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICurrencyAmount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Amount(void**) noexcept = 0;
            virtual int32_t __stdcall get_Currency(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICurrencyAmountFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICurrencyIdentifiersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AED(void**) noexcept = 0;
            virtual int32_t __stdcall get_AFN(void**) noexcept = 0;
            virtual int32_t __stdcall get_ALL(void**) noexcept = 0;
            virtual int32_t __stdcall get_AMD(void**) noexcept = 0;
            virtual int32_t __stdcall get_ANG(void**) noexcept = 0;
            virtual int32_t __stdcall get_AOA(void**) noexcept = 0;
            virtual int32_t __stdcall get_ARS(void**) noexcept = 0;
            virtual int32_t __stdcall get_AUD(void**) noexcept = 0;
            virtual int32_t __stdcall get_AWG(void**) noexcept = 0;
            virtual int32_t __stdcall get_AZN(void**) noexcept = 0;
            virtual int32_t __stdcall get_BAM(void**) noexcept = 0;
            virtual int32_t __stdcall get_BBD(void**) noexcept = 0;
            virtual int32_t __stdcall get_BDT(void**) noexcept = 0;
            virtual int32_t __stdcall get_BGN(void**) noexcept = 0;
            virtual int32_t __stdcall get_BHD(void**) noexcept = 0;
            virtual int32_t __stdcall get_BIF(void**) noexcept = 0;
            virtual int32_t __stdcall get_BMD(void**) noexcept = 0;
            virtual int32_t __stdcall get_BND(void**) noexcept = 0;
            virtual int32_t __stdcall get_BOB(void**) noexcept = 0;
            virtual int32_t __stdcall get_BRL(void**) noexcept = 0;
            virtual int32_t __stdcall get_BSD(void**) noexcept = 0;
            virtual int32_t __stdcall get_BTN(void**) noexcept = 0;
            virtual int32_t __stdcall get_BWP(void**) noexcept = 0;
            virtual int32_t __stdcall get_BYR(void**) noexcept = 0;
            virtual int32_t __stdcall get_BZD(void**) noexcept = 0;
            virtual int32_t __stdcall get_CAD(void**) noexcept = 0;
            virtual int32_t __stdcall get_CDF(void**) noexcept = 0;
            virtual int32_t __stdcall get_CHF(void**) noexcept = 0;
            virtual int32_t __stdcall get_CLP(void**) noexcept = 0;
            virtual int32_t __stdcall get_CNY(void**) noexcept = 0;
            virtual int32_t __stdcall get_COP(void**) noexcept = 0;
            virtual int32_t __stdcall get_CRC(void**) noexcept = 0;
            virtual int32_t __stdcall get_CUP(void**) noexcept = 0;
            virtual int32_t __stdcall get_CVE(void**) noexcept = 0;
            virtual int32_t __stdcall get_CZK(void**) noexcept = 0;
            virtual int32_t __stdcall get_DJF(void**) noexcept = 0;
            virtual int32_t __stdcall get_DKK(void**) noexcept = 0;
            virtual int32_t __stdcall get_DOP(void**) noexcept = 0;
            virtual int32_t __stdcall get_DZD(void**) noexcept = 0;
            virtual int32_t __stdcall get_EGP(void**) noexcept = 0;
            virtual int32_t __stdcall get_ERN(void**) noexcept = 0;
            virtual int32_t __stdcall get_ETB(void**) noexcept = 0;
            virtual int32_t __stdcall get_EUR(void**) noexcept = 0;
            virtual int32_t __stdcall get_FJD(void**) noexcept = 0;
            virtual int32_t __stdcall get_FKP(void**) noexcept = 0;
            virtual int32_t __stdcall get_GBP(void**) noexcept = 0;
            virtual int32_t __stdcall get_GEL(void**) noexcept = 0;
            virtual int32_t __stdcall get_GHS(void**) noexcept = 0;
            virtual int32_t __stdcall get_GIP(void**) noexcept = 0;
            virtual int32_t __stdcall get_GMD(void**) noexcept = 0;
            virtual int32_t __stdcall get_GNF(void**) noexcept = 0;
            virtual int32_t __stdcall get_GTQ(void**) noexcept = 0;
            virtual int32_t __stdcall get_GYD(void**) noexcept = 0;
            virtual int32_t __stdcall get_HKD(void**) noexcept = 0;
            virtual int32_t __stdcall get_HNL(void**) noexcept = 0;
            virtual int32_t __stdcall get_HRK(void**) noexcept = 0;
            virtual int32_t __stdcall get_HTG(void**) noexcept = 0;
            virtual int32_t __stdcall get_HUF(void**) noexcept = 0;
            virtual int32_t __stdcall get_IDR(void**) noexcept = 0;
            virtual int32_t __stdcall get_ILS(void**) noexcept = 0;
            virtual int32_t __stdcall get_INR(void**) noexcept = 0;
            virtual int32_t __stdcall get_IQD(void**) noexcept = 0;
            virtual int32_t __stdcall get_IRR(void**) noexcept = 0;
            virtual int32_t __stdcall get_ISK(void**) noexcept = 0;
            virtual int32_t __stdcall get_JMD(void**) noexcept = 0;
            virtual int32_t __stdcall get_JOD(void**) noexcept = 0;
            virtual int32_t __stdcall get_JPY(void**) noexcept = 0;
            virtual int32_t __stdcall get_KES(void**) noexcept = 0;
            virtual int32_t __stdcall get_KGS(void**) noexcept = 0;
            virtual int32_t __stdcall get_KHR(void**) noexcept = 0;
            virtual int32_t __stdcall get_KMF(void**) noexcept = 0;
            virtual int32_t __stdcall get_KPW(void**) noexcept = 0;
            virtual int32_t __stdcall get_KRW(void**) noexcept = 0;
            virtual int32_t __stdcall get_KWD(void**) noexcept = 0;
            virtual int32_t __stdcall get_KYD(void**) noexcept = 0;
            virtual int32_t __stdcall get_KZT(void**) noexcept = 0;
            virtual int32_t __stdcall get_LAK(void**) noexcept = 0;
            virtual int32_t __stdcall get_LBP(void**) noexcept = 0;
            virtual int32_t __stdcall get_LKR(void**) noexcept = 0;
            virtual int32_t __stdcall get_LRD(void**) noexcept = 0;
            virtual int32_t __stdcall get_LSL(void**) noexcept = 0;
            virtual int32_t __stdcall get_LTL(void**) noexcept = 0;
            virtual int32_t __stdcall get_LVL(void**) noexcept = 0;
            virtual int32_t __stdcall get_LYD(void**) noexcept = 0;
            virtual int32_t __stdcall get_MAD(void**) noexcept = 0;
            virtual int32_t __stdcall get_MDL(void**) noexcept = 0;
            virtual int32_t __stdcall get_MGA(void**) noexcept = 0;
            virtual int32_t __stdcall get_MKD(void**) noexcept = 0;
            virtual int32_t __stdcall get_MMK(void**) noexcept = 0;
            virtual int32_t __stdcall get_MNT(void**) noexcept = 0;
            virtual int32_t __stdcall get_MOP(void**) noexcept = 0;
            virtual int32_t __stdcall get_MRO(void**) noexcept = 0;
            virtual int32_t __stdcall get_MUR(void**) noexcept = 0;
            virtual int32_t __stdcall get_MVR(void**) noexcept = 0;
            virtual int32_t __stdcall get_MWK(void**) noexcept = 0;
            virtual int32_t __stdcall get_MXN(void**) noexcept = 0;
            virtual int32_t __stdcall get_MYR(void**) noexcept = 0;
            virtual int32_t __stdcall get_MZN(void**) noexcept = 0;
            virtual int32_t __stdcall get_NAD(void**) noexcept = 0;
            virtual int32_t __stdcall get_NGN(void**) noexcept = 0;
            virtual int32_t __stdcall get_NIO(void**) noexcept = 0;
            virtual int32_t __stdcall get_NOK(void**) noexcept = 0;
            virtual int32_t __stdcall get_NPR(void**) noexcept = 0;
            virtual int32_t __stdcall get_NZD(void**) noexcept = 0;
            virtual int32_t __stdcall get_OMR(void**) noexcept = 0;
            virtual int32_t __stdcall get_PAB(void**) noexcept = 0;
            virtual int32_t __stdcall get_PEN(void**) noexcept = 0;
            virtual int32_t __stdcall get_PGK(void**) noexcept = 0;
            virtual int32_t __stdcall get_PHP(void**) noexcept = 0;
            virtual int32_t __stdcall get_PKR(void**) noexcept = 0;
            virtual int32_t __stdcall get_PLN(void**) noexcept = 0;
            virtual int32_t __stdcall get_PYG(void**) noexcept = 0;
            virtual int32_t __stdcall get_QAR(void**) noexcept = 0;
            virtual int32_t __stdcall get_RON(void**) noexcept = 0;
            virtual int32_t __stdcall get_RSD(void**) noexcept = 0;
            virtual int32_t __stdcall get_RUB(void**) noexcept = 0;
            virtual int32_t __stdcall get_RWF(void**) noexcept = 0;
            virtual int32_t __stdcall get_SAR(void**) noexcept = 0;
            virtual int32_t __stdcall get_SBD(void**) noexcept = 0;
            virtual int32_t __stdcall get_SCR(void**) noexcept = 0;
            virtual int32_t __stdcall get_SDG(void**) noexcept = 0;
            virtual int32_t __stdcall get_SEK(void**) noexcept = 0;
            virtual int32_t __stdcall get_SGD(void**) noexcept = 0;
            virtual int32_t __stdcall get_SHP(void**) noexcept = 0;
            virtual int32_t __stdcall get_SLL(void**) noexcept = 0;
            virtual int32_t __stdcall get_SOS(void**) noexcept = 0;
            virtual int32_t __stdcall get_SRD(void**) noexcept = 0;
            virtual int32_t __stdcall get_STD(void**) noexcept = 0;
            virtual int32_t __stdcall get_SYP(void**) noexcept = 0;
            virtual int32_t __stdcall get_SZL(void**) noexcept = 0;
            virtual int32_t __stdcall get_THB(void**) noexcept = 0;
            virtual int32_t __stdcall get_TJS(void**) noexcept = 0;
            virtual int32_t __stdcall get_TMT(void**) noexcept = 0;
            virtual int32_t __stdcall get_TND(void**) noexcept = 0;
            virtual int32_t __stdcall get_TOP(void**) noexcept = 0;
            virtual int32_t __stdcall get_TRY(void**) noexcept = 0;
            virtual int32_t __stdcall get_TTD(void**) noexcept = 0;
            virtual int32_t __stdcall get_TWD(void**) noexcept = 0;
            virtual int32_t __stdcall get_TZS(void**) noexcept = 0;
            virtual int32_t __stdcall get_UAH(void**) noexcept = 0;
            virtual int32_t __stdcall get_UGX(void**) noexcept = 0;
            virtual int32_t __stdcall get_USD(void**) noexcept = 0;
            virtual int32_t __stdcall get_UYU(void**) noexcept = 0;
            virtual int32_t __stdcall get_UZS(void**) noexcept = 0;
            virtual int32_t __stdcall get_VEF(void**) noexcept = 0;
            virtual int32_t __stdcall get_VND(void**) noexcept = 0;
            virtual int32_t __stdcall get_VUV(void**) noexcept = 0;
            virtual int32_t __stdcall get_WST(void**) noexcept = 0;
            virtual int32_t __stdcall get_XAF(void**) noexcept = 0;
            virtual int32_t __stdcall get_XCD(void**) noexcept = 0;
            virtual int32_t __stdcall get_XOF(void**) noexcept = 0;
            virtual int32_t __stdcall get_XPF(void**) noexcept = 0;
            virtual int32_t __stdcall get_XXX(void**) noexcept = 0;
            virtual int32_t __stdcall get_YER(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZAR(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZMW(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZWL(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BYN(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ICurrencyIdentifiersStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MRU(void**) noexcept = 0;
            virtual int32_t __stdcall get_SSP(void**) noexcept = 0;
            virtual int32_t __stdcall get_STN(void**) noexcept = 0;
            virtual int32_t __stdcall get_VES(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IGeographicRegion>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Code(void**) noexcept = 0;
            virtual int32_t __stdcall get_CodeTwoLetter(void**) noexcept = 0;
            virtual int32_t __stdcall get_CodeThreeLetter(void**) noexcept = 0;
            virtual int32_t __stdcall get_CodeThreeDigit(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_NativeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrenciesInUse(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IGeographicRegionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateGeographicRegion(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IGeographicRegionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IJapanesePhoneme>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayText(void**) noexcept = 0;
            virtual int32_t __stdcall get_YomiText(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPhraseStart(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetWords(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetWordsWithMonoRubyOption(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LanguageTag(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_NativeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Script(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LayoutDirection(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbbreviatedName(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguageExtensionSubtags>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetExtensionSubtags(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateLanguage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsWellFormed(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentInputMethodLanguageTag(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguageStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TrySetInputMethodLanguageTag(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ILanguageStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMuiCompatibleLanguageListFromLanguageTags(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Arab(void**) noexcept = 0;
            virtual int32_t __stdcall get_ArabExt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bali(void**) noexcept = 0;
            virtual int32_t __stdcall get_Beng(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cham(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deva(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullWide(void**) noexcept = 0;
            virtual int32_t __stdcall get_Gujr(void**) noexcept = 0;
            virtual int32_t __stdcall get_Guru(void**) noexcept = 0;
            virtual int32_t __stdcall get_HaniDec(void**) noexcept = 0;
            virtual int32_t __stdcall get_Java(void**) noexcept = 0;
            virtual int32_t __stdcall get_Kali(void**) noexcept = 0;
            virtual int32_t __stdcall get_Khmr(void**) noexcept = 0;
            virtual int32_t __stdcall get_Knda(void**) noexcept = 0;
            virtual int32_t __stdcall get_Lana(void**) noexcept = 0;
            virtual int32_t __stdcall get_LanaTham(void**) noexcept = 0;
            virtual int32_t __stdcall get_Laoo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Latn(void**) noexcept = 0;
            virtual int32_t __stdcall get_Lepc(void**) noexcept = 0;
            virtual int32_t __stdcall get_Limb(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mlym(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mong(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mtei(void**) noexcept = 0;
            virtual int32_t __stdcall get_Mymr(void**) noexcept = 0;
            virtual int32_t __stdcall get_MymrShan(void**) noexcept = 0;
            virtual int32_t __stdcall get_Nkoo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Olck(void**) noexcept = 0;
            virtual int32_t __stdcall get_Orya(void**) noexcept = 0;
            virtual int32_t __stdcall get_Saur(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sund(void**) noexcept = 0;
            virtual int32_t __stdcall get_Talu(void**) noexcept = 0;
            virtual int32_t __stdcall get_TamlDec(void**) noexcept = 0;
            virtual int32_t __stdcall get_Telu(void**) noexcept = 0;
            virtual int32_t __stdcall get_Thai(void**) noexcept = 0;
            virtual int32_t __stdcall get_Tibt(void**) noexcept = 0;
            virtual int32_t __stdcall get_Vaii(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Brah(void**) noexcept = 0;
            virtual int32_t __stdcall get_Osma(void**) noexcept = 0;
            virtual int32_t __stdcall get_MathBold(void**) noexcept = 0;
            virtual int32_t __stdcall get_MathDbl(void**) noexcept = 0;
            virtual int32_t __stdcall get_MathSans(void**) noexcept = 0;
            virtual int32_t __stdcall get_MathSanb(void**) noexcept = 0;
            virtual int32_t __stdcall get_MathMono(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZmthBold(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZmthDbl(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZmthSans(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZmthSanb(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZmthMono(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Globalization::ITimeZoneOnCalendar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTimeZone(void**) noexcept = 0;
            virtual int32_t __stdcall ChangeTimeZone(void*) noexcept = 0;
            virtual int32_t __stdcall TimeZoneAsFullString(void**) noexcept = 0;
            virtual int32_t __stdcall TimeZoneAsString(int32_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_IApplicationLanguagesStatics
    {
        [[nodiscard]] auto PrimaryLanguageOverride() const;
        auto PrimaryLanguageOverride(param::hstring const& value) const;
        [[nodiscard]] auto Languages() const;
        [[nodiscard]] auto ManifestLanguages() const;
    };
    template <> struct consume<winrt::Windows::Globalization::IApplicationLanguagesStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_IApplicationLanguagesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IApplicationLanguagesStatics2
    {
        auto GetLanguagesForUser(winrt::Windows::System::User const& user) const;
    };
    template <> struct consume<winrt::Windows::Globalization::IApplicationLanguagesStatics2>
    {
        template <typename D> using type = consume_Windows_Globalization_IApplicationLanguagesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendar
    {
        auto Clone() const;
        auto SetToMin() const;
        auto SetToMax() const;
        [[nodiscard]] auto Languages() const;
        [[nodiscard]] auto NumeralSystem() const;
        auto NumeralSystem(param::hstring const& value) const;
        auto GetCalendarSystem() const;
        auto ChangeCalendarSystem(param::hstring const& value) const;
        auto GetClock() const;
        auto ChangeClock(param::hstring const& value) const;
        auto GetDateTime() const;
        auto SetDateTime(winrt::Windows::Foundation::DateTime const& value) const;
        auto SetToNow() const;
        [[nodiscard]] auto FirstEra() const;
        [[nodiscard]] auto LastEra() const;
        [[nodiscard]] auto NumberOfEras() const;
        [[nodiscard]] auto Era() const;
        auto Era(int32_t value) const;
        auto AddEras(int32_t eras) const;
        auto EraAsString() const;
        auto EraAsString(int32_t idealLength) const;
        [[nodiscard]] auto FirstYearInThisEra() const;
        [[nodiscard]] auto LastYearInThisEra() const;
        [[nodiscard]] auto NumberOfYearsInThisEra() const;
        [[nodiscard]] auto Year() const;
        auto Year(int32_t value) const;
        auto AddYears(int32_t years) const;
        auto YearAsString() const;
        auto YearAsTruncatedString(int32_t remainingDigits) const;
        auto YearAsPaddedString(int32_t minDigits) const;
        [[nodiscard]] auto FirstMonthInThisYear() const;
        [[nodiscard]] auto LastMonthInThisYear() const;
        [[nodiscard]] auto NumberOfMonthsInThisYear() const;
        [[nodiscard]] auto Month() const;
        auto Month(int32_t value) const;
        auto AddMonths(int32_t months) const;
        auto MonthAsString() const;
        auto MonthAsString(int32_t idealLength) const;
        auto MonthAsSoloString() const;
        auto MonthAsSoloString(int32_t idealLength) const;
        auto MonthAsNumericString() const;
        auto MonthAsPaddedNumericString(int32_t minDigits) const;
        auto AddWeeks(int32_t weeks) const;
        [[nodiscard]] auto FirstDayInThisMonth() const;
        [[nodiscard]] auto LastDayInThisMonth() const;
        [[nodiscard]] auto NumberOfDaysInThisMonth() const;
        [[nodiscard]] auto Day() const;
        auto Day(int32_t value) const;
        auto AddDays(int32_t days) const;
        auto DayAsString() const;
        auto DayAsPaddedString(int32_t minDigits) const;
        [[nodiscard]] auto DayOfWeek() const;
        auto DayOfWeekAsString() const;
        auto DayOfWeekAsString(int32_t idealLength) const;
        auto DayOfWeekAsSoloString() const;
        auto DayOfWeekAsSoloString(int32_t idealLength) const;
        [[nodiscard]] auto FirstPeriodInThisDay() const;
        [[nodiscard]] auto LastPeriodInThisDay() const;
        [[nodiscard]] auto NumberOfPeriodsInThisDay() const;
        [[nodiscard]] auto Period() const;
        auto Period(int32_t value) const;
        auto AddPeriods(int32_t periods) const;
        auto PeriodAsString() const;
        auto PeriodAsString(int32_t idealLength) const;
        [[nodiscard]] auto FirstHourInThisPeriod() const;
        [[nodiscard]] auto LastHourInThisPeriod() const;
        [[nodiscard]] auto NumberOfHoursInThisPeriod() const;
        [[nodiscard]] auto Hour() const;
        auto Hour(int32_t value) const;
        auto AddHours(int32_t hours) const;
        auto HourAsString() const;
        auto HourAsPaddedString(int32_t minDigits) const;
        [[nodiscard]] auto Minute() const;
        auto Minute(int32_t value) const;
        auto AddMinutes(int32_t minutes) const;
        auto MinuteAsString() const;
        auto MinuteAsPaddedString(int32_t minDigits) const;
        [[nodiscard]] auto Second() const;
        auto Second(int32_t value) const;
        auto AddSeconds(int32_t seconds) const;
        auto SecondAsString() const;
        auto SecondAsPaddedString(int32_t minDigits) const;
        [[nodiscard]] auto Nanosecond() const;
        auto Nanosecond(int32_t value) const;
        auto AddNanoseconds(int32_t nanoseconds) const;
        auto NanosecondAsString() const;
        auto NanosecondAsPaddedString(int32_t minDigits) const;
        auto Compare(winrt::Windows::Globalization::Calendar const& other) const;
        auto CompareDateTime(winrt::Windows::Foundation::DateTime const& other) const;
        auto CopyTo(winrt::Windows::Globalization::Calendar const& other) const;
        [[nodiscard]] auto FirstMinuteInThisHour() const;
        [[nodiscard]] auto LastMinuteInThisHour() const;
        [[nodiscard]] auto NumberOfMinutesInThisHour() const;
        [[nodiscard]] auto FirstSecondInThisMinute() const;
        [[nodiscard]] auto LastSecondInThisMinute() const;
        [[nodiscard]] auto NumberOfSecondsInThisMinute() const;
        [[nodiscard]] auto ResolvedLanguage() const;
        [[nodiscard]] auto IsDaylightSavingTime() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendar>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendar<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendarFactory
    {
        auto CreateCalendarDefaultCalendarAndClock(param::iterable<hstring> const& languages) const;
        auto CreateCalendar(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendarFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendarFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendarFactory2
    {
        auto CreateCalendarWithTimeZone(param::iterable<hstring> const& languages, param::hstring const& calendar, param::hstring const& clock, param::hstring const& timeZoneId) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendarFactory2>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendarFactory2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendarIdentifiersStatics
    {
        [[nodiscard]] auto Gregorian() const;
        [[nodiscard]] auto Hebrew() const;
        [[nodiscard]] auto Hijri() const;
        [[nodiscard]] auto Japanese() const;
        [[nodiscard]] auto Julian() const;
        [[nodiscard]] auto Korean() const;
        [[nodiscard]] auto Taiwan() const;
        [[nodiscard]] auto Thai() const;
        [[nodiscard]] auto UmAlQura() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendarIdentifiersStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendarIdentifiersStatics2
    {
        [[nodiscard]] auto Persian() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendarIdentifiersStatics2>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICalendarIdentifiersStatics3
    {
        [[nodiscard]] auto ChineseLunar() const;
        [[nodiscard]] auto JapaneseLunar() const;
        [[nodiscard]] auto KoreanLunar() const;
        [[nodiscard]] auto TaiwanLunar() const;
        [[nodiscard]] auto VietnameseLunar() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICalendarIdentifiersStatics3>
    {
        template <typename D> using type = consume_Windows_Globalization_ICalendarIdentifiersStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IClockIdentifiersStatics
    {
        [[nodiscard]] auto TwelveHour() const;
        [[nodiscard]] auto TwentyFourHour() const;
    };
    template <> struct consume<winrt::Windows::Globalization::IClockIdentifiersStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_IClockIdentifiersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICurrencyAmount
    {
        [[nodiscard]] auto Amount() const;
        [[nodiscard]] auto Currency() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICurrencyAmount>
    {
        template <typename D> using type = consume_Windows_Globalization_ICurrencyAmount<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICurrencyAmountFactory
    {
        auto Create(param::hstring const& amount, param::hstring const& currency) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICurrencyAmountFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_ICurrencyAmountFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICurrencyIdentifiersStatics
    {
        [[nodiscard]] auto AED() const;
        [[nodiscard]] auto AFN() const;
        [[nodiscard]] auto ALL() const;
        [[nodiscard]] auto AMD() const;
        [[nodiscard]] auto ANG() const;
        [[nodiscard]] auto AOA() const;
        [[nodiscard]] auto ARS() const;
        [[nodiscard]] auto AUD() const;
        [[nodiscard]] auto AWG() const;
        [[nodiscard]] auto AZN() const;
        [[nodiscard]] auto BAM() const;
        [[nodiscard]] auto BBD() const;
        [[nodiscard]] auto BDT() const;
        [[nodiscard]] auto BGN() const;
        [[nodiscard]] auto BHD() const;
        [[nodiscard]] auto BIF() const;
        [[nodiscard]] auto BMD() const;
        [[nodiscard]] auto BND() const;
        [[nodiscard]] auto BOB() const;
        [[nodiscard]] auto BRL() const;
        [[nodiscard]] auto BSD() const;
        [[nodiscard]] auto BTN() const;
        [[nodiscard]] auto BWP() const;
        [[nodiscard]] auto BYR() const;
        [[nodiscard]] auto BZD() const;
        [[nodiscard]] auto CAD() const;
        [[nodiscard]] auto CDF() const;
        [[nodiscard]] auto CHF() const;
        [[nodiscard]] auto CLP() const;
        [[nodiscard]] auto CNY() const;
        [[nodiscard]] auto COP() const;
        [[nodiscard]] auto CRC() const;
        [[nodiscard]] auto CUP() const;
        [[nodiscard]] auto CVE() const;
        [[nodiscard]] auto CZK() const;
        [[nodiscard]] auto DJF() const;
        [[nodiscard]] auto DKK() const;
        [[nodiscard]] auto DOP() const;
        [[nodiscard]] auto DZD() const;
        [[nodiscard]] auto EGP() const;
        [[nodiscard]] auto ERN() const;
        [[nodiscard]] auto ETB() const;
        [[nodiscard]] auto EUR() const;
        [[nodiscard]] auto FJD() const;
        [[nodiscard]] auto FKP() const;
        [[nodiscard]] auto GBP() const;
        [[nodiscard]] auto GEL() const;
        [[nodiscard]] auto GHS() const;
        [[nodiscard]] auto GIP() const;
        [[nodiscard]] auto GMD() const;
        [[nodiscard]] auto GNF() const;
        [[nodiscard]] auto GTQ() const;
        [[nodiscard]] auto GYD() const;
        [[nodiscard]] auto HKD() const;
        [[nodiscard]] auto HNL() const;
        [[nodiscard]] auto HRK() const;
        [[nodiscard]] auto HTG() const;
        [[nodiscard]] auto HUF() const;
        [[nodiscard]] auto IDR() const;
        [[nodiscard]] auto ILS() const;
        [[nodiscard]] auto INR() const;
        [[nodiscard]] auto IQD() const;
        [[nodiscard]] auto IRR() const;
        [[nodiscard]] auto ISK() const;
        [[nodiscard]] auto JMD() const;
        [[nodiscard]] auto JOD() const;
        [[nodiscard]] auto JPY() const;
        [[nodiscard]] auto KES() const;
        [[nodiscard]] auto KGS() const;
        [[nodiscard]] auto KHR() const;
        [[nodiscard]] auto KMF() const;
        [[nodiscard]] auto KPW() const;
        [[nodiscard]] auto KRW() const;
        [[nodiscard]] auto KWD() const;
        [[nodiscard]] auto KYD() const;
        [[nodiscard]] auto KZT() const;
        [[nodiscard]] auto LAK() const;
        [[nodiscard]] auto LBP() const;
        [[nodiscard]] auto LKR() const;
        [[nodiscard]] auto LRD() const;
        [[nodiscard]] auto LSL() const;
        [[nodiscard]] auto LTL() const;
        [[nodiscard]] auto LVL() const;
        [[nodiscard]] auto LYD() const;
        [[nodiscard]] auto MAD() const;
        [[nodiscard]] auto MDL() const;
        [[nodiscard]] auto MGA() const;
        [[nodiscard]] auto MKD() const;
        [[nodiscard]] auto MMK() const;
        [[nodiscard]] auto MNT() const;
        [[nodiscard]] auto MOP() const;
        [[nodiscard]] auto MRO() const;
        [[nodiscard]] auto MUR() const;
        [[nodiscard]] auto MVR() const;
        [[nodiscard]] auto MWK() const;
        [[nodiscard]] auto MXN() const;
        [[nodiscard]] auto MYR() const;
        [[nodiscard]] auto MZN() const;
        [[nodiscard]] auto NAD() const;
        [[nodiscard]] auto NGN() const;
        [[nodiscard]] auto NIO() const;
        [[nodiscard]] auto NOK() const;
        [[nodiscard]] auto NPR() const;
        [[nodiscard]] auto NZD() const;
        [[nodiscard]] auto OMR() const;
        [[nodiscard]] auto PAB() const;
        [[nodiscard]] auto PEN() const;
        [[nodiscard]] auto PGK() const;
        [[nodiscard]] auto PHP() const;
        [[nodiscard]] auto PKR() const;
        [[nodiscard]] auto PLN() const;
        [[nodiscard]] auto PYG() const;
        [[nodiscard]] auto QAR() const;
        [[nodiscard]] auto RON() const;
        [[nodiscard]] auto RSD() const;
        [[nodiscard]] auto RUB() const;
        [[nodiscard]] auto RWF() const;
        [[nodiscard]] auto SAR() const;
        [[nodiscard]] auto SBD() const;
        [[nodiscard]] auto SCR() const;
        [[nodiscard]] auto SDG() const;
        [[nodiscard]] auto SEK() const;
        [[nodiscard]] auto SGD() const;
        [[nodiscard]] auto SHP() const;
        [[nodiscard]] auto SLL() const;
        [[nodiscard]] auto SOS() const;
        [[nodiscard]] auto SRD() const;
        [[nodiscard]] auto STD() const;
        [[nodiscard]] auto SYP() const;
        [[nodiscard]] auto SZL() const;
        [[nodiscard]] auto THB() const;
        [[nodiscard]] auto TJS() const;
        [[nodiscard]] auto TMT() const;
        [[nodiscard]] auto TND() const;
        [[nodiscard]] auto TOP() const;
        [[nodiscard]] auto TRY() const;
        [[nodiscard]] auto TTD() const;
        [[nodiscard]] auto TWD() const;
        [[nodiscard]] auto TZS() const;
        [[nodiscard]] auto UAH() const;
        [[nodiscard]] auto UGX() const;
        [[nodiscard]] auto USD() const;
        [[nodiscard]] auto UYU() const;
        [[nodiscard]] auto UZS() const;
        [[nodiscard]] auto VEF() const;
        [[nodiscard]] auto VND() const;
        [[nodiscard]] auto VUV() const;
        [[nodiscard]] auto WST() const;
        [[nodiscard]] auto XAF() const;
        [[nodiscard]] auto XCD() const;
        [[nodiscard]] auto XOF() const;
        [[nodiscard]] auto XPF() const;
        [[nodiscard]] auto XXX() const;
        [[nodiscard]] auto YER() const;
        [[nodiscard]] auto ZAR() const;
        [[nodiscard]] auto ZMW() const;
        [[nodiscard]] auto ZWL() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICurrencyIdentifiersStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_ICurrencyIdentifiersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICurrencyIdentifiersStatics2
    {
        [[nodiscard]] auto BYN() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICurrencyIdentifiersStatics2>
    {
        template <typename D> using type = consume_Windows_Globalization_ICurrencyIdentifiersStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ICurrencyIdentifiersStatics3
    {
        [[nodiscard]] auto MRU() const;
        [[nodiscard]] auto SSP() const;
        [[nodiscard]] auto STN() const;
        [[nodiscard]] auto VES() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ICurrencyIdentifiersStatics3>
    {
        template <typename D> using type = consume_Windows_Globalization_ICurrencyIdentifiersStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IGeographicRegion
    {
        [[nodiscard]] auto Code() const;
        [[nodiscard]] auto CodeTwoLetter() const;
        [[nodiscard]] auto CodeThreeLetter() const;
        [[nodiscard]] auto CodeThreeDigit() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto NativeName() const;
        [[nodiscard]] auto CurrenciesInUse() const;
    };
    template <> struct consume<winrt::Windows::Globalization::IGeographicRegion>
    {
        template <typename D> using type = consume_Windows_Globalization_IGeographicRegion<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IGeographicRegionFactory
    {
        auto CreateGeographicRegion(param::hstring const& geographicRegionCode) const;
    };
    template <> struct consume<winrt::Windows::Globalization::IGeographicRegionFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_IGeographicRegionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IGeographicRegionStatics
    {
        auto IsSupported(param::hstring const& geographicRegionCode) const;
    };
    template <> struct consume<winrt::Windows::Globalization::IGeographicRegionStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_IGeographicRegionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IJapanesePhoneme
    {
        [[nodiscard]] auto DisplayText() const;
        [[nodiscard]] auto YomiText() const;
        [[nodiscard]] auto IsPhraseStart() const;
    };
    template <> struct consume<winrt::Windows::Globalization::IJapanesePhoneme>
    {
        template <typename D> using type = consume_Windows_Globalization_IJapanesePhoneme<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics
    {
        auto GetWords(param::hstring const& input) const;
        auto GetWords(param::hstring const& input, bool monoRuby) const;
    };
    template <> struct consume<winrt::Windows::Globalization::IJapanesePhoneticAnalyzerStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_IJapanesePhoneticAnalyzerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguage
    {
        [[nodiscard]] auto LanguageTag() const;
        [[nodiscard]] auto DisplayName() const;
        [[nodiscard]] auto NativeName() const;
        [[nodiscard]] auto Script() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguage>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguage<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguage2
    {
        [[nodiscard]] auto LayoutDirection() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguage2>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguage2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguage3
    {
        [[nodiscard]] auto AbbreviatedName() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguage3>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguage3<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguageExtensionSubtags
    {
        auto GetExtensionSubtags(param::hstring const& singleton) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguageExtensionSubtags>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguageExtensionSubtags<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguageFactory
    {
        auto CreateLanguage(param::hstring const& languageTag) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguageFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguageStatics
    {
        auto IsWellFormed(param::hstring const& languageTag) const;
        [[nodiscard]] auto CurrentInputMethodLanguageTag() const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguageStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguageStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguageStatics2
    {
        auto TrySetInputMethodLanguageTag(param::hstring const& languageTag) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguageStatics2>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguageStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ILanguageStatics3
    {
        auto GetMuiCompatibleLanguageListFromLanguageTags(param::iterable<hstring> const& languageTags) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ILanguageStatics3>
    {
        template <typename D> using type = consume_Windows_Globalization_ILanguageStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_INumeralSystemIdentifiersStatics
    {
        [[nodiscard]] auto Arab() const;
        [[nodiscard]] auto ArabExt() const;
        [[nodiscard]] auto Bali() const;
        [[nodiscard]] auto Beng() const;
        [[nodiscard]] auto Cham() const;
        [[nodiscard]] auto Deva() const;
        [[nodiscard]] auto FullWide() const;
        [[nodiscard]] auto Gujr() const;
        [[nodiscard]] auto Guru() const;
        [[nodiscard]] auto HaniDec() const;
        [[nodiscard]] auto Java() const;
        [[nodiscard]] auto Kali() const;
        [[nodiscard]] auto Khmr() const;
        [[nodiscard]] auto Knda() const;
        [[nodiscard]] auto Lana() const;
        [[nodiscard]] auto LanaTham() const;
        [[nodiscard]] auto Laoo() const;
        [[nodiscard]] auto Latn() const;
        [[nodiscard]] auto Lepc() const;
        [[nodiscard]] auto Limb() const;
        [[nodiscard]] auto Mlym() const;
        [[nodiscard]] auto Mong() const;
        [[nodiscard]] auto Mtei() const;
        [[nodiscard]] auto Mymr() const;
        [[nodiscard]] auto MymrShan() const;
        [[nodiscard]] auto Nkoo() const;
        [[nodiscard]] auto Olck() const;
        [[nodiscard]] auto Orya() const;
        [[nodiscard]] auto Saur() const;
        [[nodiscard]] auto Sund() const;
        [[nodiscard]] auto Talu() const;
        [[nodiscard]] auto TamlDec() const;
        [[nodiscard]] auto Telu() const;
        [[nodiscard]] auto Thai() const;
        [[nodiscard]] auto Tibt() const;
        [[nodiscard]] auto Vaii() const;
    };
    template <> struct consume<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics>
    {
        template <typename D> using type = consume_Windows_Globalization_INumeralSystemIdentifiersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_INumeralSystemIdentifiersStatics2
    {
        [[nodiscard]] auto Brah() const;
        [[nodiscard]] auto Osma() const;
        [[nodiscard]] auto MathBold() const;
        [[nodiscard]] auto MathDbl() const;
        [[nodiscard]] auto MathSans() const;
        [[nodiscard]] auto MathSanb() const;
        [[nodiscard]] auto MathMono() const;
        [[nodiscard]] auto ZmthBold() const;
        [[nodiscard]] auto ZmthDbl() const;
        [[nodiscard]] auto ZmthSans() const;
        [[nodiscard]] auto ZmthSanb() const;
        [[nodiscard]] auto ZmthMono() const;
    };
    template <> struct consume<winrt::Windows::Globalization::INumeralSystemIdentifiersStatics2>
    {
        template <typename D> using type = consume_Windows_Globalization_INumeralSystemIdentifiersStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_ITimeZoneOnCalendar
    {
        auto GetTimeZone() const;
        auto ChangeTimeZone(param::hstring const& timeZoneId) const;
        auto TimeZoneAsString() const;
        auto TimeZoneAsString(int32_t idealLength) const;
    };
    template <> struct consume<winrt::Windows::Globalization::ITimeZoneOnCalendar>
    {
        template <typename D> using type = consume_Windows_Globalization_ITimeZoneOnCalendar<D>;
    };
}
#endif
