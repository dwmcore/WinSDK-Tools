// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Midi_0_H
#define WINRT_Windows_Devices_Midi_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Midi
{
    enum class MidiMessageType : int32_t
    {
        None = 0,
        NoteOff = 128,
        NoteOn = 144,
        PolyphonicKeyPressure = 160,
        ControlChange = 176,
        ProgramChange = 192,
        ChannelPressure = 208,
        PitchBendChange = 224,
        SystemExclusive = 240,
        MidiTimeCode = 241,
        SongPositionPointer = 242,
        SongSelect = 243,
        TuneRequest = 246,
        EndSystemExclusive = 247,
        TimingClock = 248,
        Start = 250,
        Continue = 251,
        Stop = 252,
        ActiveSensing = 254,
        SystemReset = 255,
    };
    struct IMidiChannelPressureMessage;
    struct IMidiChannelPressureMessageFactory;
    struct IMidiControlChangeMessage;
    struct IMidiControlChangeMessageFactory;
    struct IMidiInPort;
    struct IMidiInPortStatics;
    struct IMidiMessage;
    struct IMidiMessageReceivedEventArgs;
    struct IMidiNoteOffMessage;
    struct IMidiNoteOffMessageFactory;
    struct IMidiNoteOnMessage;
    struct IMidiNoteOnMessageFactory;
    struct IMidiOutPort;
    struct IMidiOutPortStatics;
    struct IMidiPitchBendChangeMessage;
    struct IMidiPitchBendChangeMessageFactory;
    struct IMidiPolyphonicKeyPressureMessage;
    struct IMidiPolyphonicKeyPressureMessageFactory;
    struct IMidiProgramChangeMessage;
    struct IMidiProgramChangeMessageFactory;
    struct IMidiSongPositionPointerMessage;
    struct IMidiSongPositionPointerMessageFactory;
    struct IMidiSongSelectMessage;
    struct IMidiSongSelectMessageFactory;
    struct IMidiSynthesizer;
    struct IMidiSynthesizerStatics;
    struct IMidiSystemExclusiveMessageFactory;
    struct IMidiTimeCodeMessage;
    struct IMidiTimeCodeMessageFactory;
    struct MidiActiveSensingMessage;
    struct MidiChannelPressureMessage;
    struct MidiContinueMessage;
    struct MidiControlChangeMessage;
    struct MidiInPort;
    struct MidiMessageReceivedEventArgs;
    struct MidiNoteOffMessage;
    struct MidiNoteOnMessage;
    struct MidiOutPort;
    struct MidiPitchBendChangeMessage;
    struct MidiPolyphonicKeyPressureMessage;
    struct MidiProgramChangeMessage;
    struct MidiSongPositionPointerMessage;
    struct MidiSongSelectMessage;
    struct MidiStartMessage;
    struct MidiStopMessage;
    struct MidiSynthesizer;
    struct MidiSystemExclusiveMessage;
    struct MidiSystemResetMessage;
    struct MidiTimeCodeMessage;
    struct MidiTimingClockMessage;
    struct MidiTuneRequestMessage;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiControlChangeMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiInPort>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiInPortStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiNoteOffMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiNoteOnMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiOutPort>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiOutPortStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSongSelectMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSynthesizer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiActiveSensingMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiChannelPressureMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiContinueMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiControlChangeMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiInPort>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiNoteOffMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiNoteOnMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiOutPort>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiProgramChangeMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiSongSelectMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiStartMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiStopMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiSynthesizer>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiSystemResetMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiTimeCodeMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiTimingClockMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiTuneRequestMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Midi::MidiMessageType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiActiveSensingMessage> = L"Windows.Devices.Midi.MidiActiveSensingMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiChannelPressureMessage> = L"Windows.Devices.Midi.MidiChannelPressureMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiContinueMessage> = L"Windows.Devices.Midi.MidiContinueMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiControlChangeMessage> = L"Windows.Devices.Midi.MidiControlChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiInPort> = L"Windows.Devices.Midi.MidiInPort";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs> = L"Windows.Devices.Midi.MidiMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiNoteOffMessage> = L"Windows.Devices.Midi.MidiNoteOffMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiNoteOnMessage> = L"Windows.Devices.Midi.MidiNoteOnMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiOutPort> = L"Windows.Devices.Midi.MidiOutPort";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage> = L"Windows.Devices.Midi.MidiPitchBendChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage> = L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiProgramChangeMessage> = L"Windows.Devices.Midi.MidiProgramChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage> = L"Windows.Devices.Midi.MidiSongPositionPointerMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiSongSelectMessage> = L"Windows.Devices.Midi.MidiSongSelectMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiStartMessage> = L"Windows.Devices.Midi.MidiStartMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiStopMessage> = L"Windows.Devices.Midi.MidiStopMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiSynthesizer> = L"Windows.Devices.Midi.MidiSynthesizer";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage> = L"Windows.Devices.Midi.MidiSystemExclusiveMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiSystemResetMessage> = L"Windows.Devices.Midi.MidiSystemResetMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiTimeCodeMessage> = L"Windows.Devices.Midi.MidiTimeCodeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiTimingClockMessage> = L"Windows.Devices.Midi.MidiTimingClockMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiTuneRequestMessage> = L"Windows.Devices.Midi.MidiTuneRequestMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::MidiMessageType> = L"Windows.Devices.Midi.MidiMessageType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage> = L"Windows.Devices.Midi.IMidiChannelPressureMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory> = L"Windows.Devices.Midi.IMidiChannelPressureMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiControlChangeMessage> = L"Windows.Devices.Midi.IMidiControlChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory> = L"Windows.Devices.Midi.IMidiControlChangeMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiInPort> = L"Windows.Devices.Midi.IMidiInPort";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiInPortStatics> = L"Windows.Devices.Midi.IMidiInPortStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiMessage> = L"Windows.Devices.Midi.IMidiMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs> = L"Windows.Devices.Midi.IMidiMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiNoteOffMessage> = L"Windows.Devices.Midi.IMidiNoteOffMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory> = L"Windows.Devices.Midi.IMidiNoteOffMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiNoteOnMessage> = L"Windows.Devices.Midi.IMidiNoteOnMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory> = L"Windows.Devices.Midi.IMidiNoteOnMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiOutPort> = L"Windows.Devices.Midi.IMidiOutPort";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiOutPortStatics> = L"Windows.Devices.Midi.IMidiOutPortStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage> = L"Windows.Devices.Midi.IMidiPitchBendChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> = L"Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage> = L"Windows.Devices.Midi.IMidiProgramChangeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory> = L"Windows.Devices.Midi.IMidiProgramChangeMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage> = L"Windows.Devices.Midi.IMidiSongPositionPointerMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> = L"Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSongSelectMessage> = L"Windows.Devices.Midi.IMidiSongSelectMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory> = L"Windows.Devices.Midi.IMidiSongSelectMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSynthesizer> = L"Windows.Devices.Midi.IMidiSynthesizer";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics> = L"Windows.Devices.Midi.IMidiSynthesizerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> = L"Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage> = L"Windows.Devices.Midi.IMidiTimeCodeMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory> = L"Windows.Devices.Midi.IMidiTimeCodeMessageFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage>{ 0xBE1FA860,0x62B4,0x4D52,{ 0xA3,0x7E,0x92,0xE5,0x4D,0x35,0xB9,0x09 } }; // BE1FA860-62B4-4D52-A37E-92E54D35B909
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ 0x6218ED2F,0x2284,0x412A,{ 0x94,0xCF,0x10,0xFB,0x04,0x84,0x2C,0x6C } }; // 6218ED2F-2284-412A-94CF-10FB04842C6C
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiControlChangeMessage>{ 0xB7E15F83,0x780D,0x405F,{ 0xB7,0x81,0x3E,0x15,0x98,0xC9,0x7F,0x40 } }; // B7E15F83-780D-405F-B781-3E1598C97F40
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ 0x2AB14321,0x956C,0x46AD,{ 0x97,0x52,0xF8,0x7F,0x55,0x05,0x2F,0xE3 } }; // 2AB14321-956C-46AD-9752-F87F55052FE3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiInPort>{ 0xD5C1D9DB,0x971A,0x4EAF,{ 0xA2,0x3D,0xEA,0x19,0xFE,0x60,0x7F,0xF9 } }; // D5C1D9DB-971A-4EAF-A23D-EA19FE607FF9
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiInPortStatics>{ 0x44C439DC,0x67FF,0x4A6E,{ 0x8B,0xAC,0xFD,0xB6,0x61,0x0C,0xF2,0x96 } }; // 44C439DC-67FF-4A6E-8BAC-FDB6610CF296
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiMessage>{ 0x79767945,0x1094,0x4283,{ 0x9B,0xE0,0x28,0x9F,0xC0,0xEE,0x83,0x34 } }; // 79767945-1094-4283-9BE0-289FC0EE8334
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ 0x76566E56,0xF328,0x4B51,{ 0x90,0x7D,0xB3,0xA8,0xCE,0x96,0xBF,0x80 } }; // 76566E56-F328-4B51-907D-B3A8CE96BF80
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiNoteOffMessage>{ 0x16FD8AF4,0x198E,0x4D8F,{ 0xA6,0x54,0xD3,0x05,0xA2,0x93,0x54,0x8F } }; // 16FD8AF4-198E-4D8F-A654-D305A293548F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ 0xA6B240E0,0xA749,0x425F,{ 0x8A,0xF4,0xA4,0xD9,0x79,0xCC,0x15,0xB5 } }; // A6B240E0-A749-425F-8AF4-A4D979CC15B5
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiNoteOnMessage>{ 0xE0224AF5,0x6181,0x46DD,{ 0xAF,0xA2,0x41,0x00,0x04,0xC0,0x57,0xAA } }; // E0224AF5-6181-46DD-AFA2-410004C057AA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ 0x9B4280A0,0x59C1,0x420E,{ 0xB5,0x17,0x15,0xA1,0x0A,0xA9,0x60,0x6B } }; // 9B4280A0-59C1-420E-B517-15A10AA9606B
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiOutPort>{ 0x931D6D9F,0x57A2,0x4A3A,{ 0xAD,0xB8,0x46,0x40,0x88,0x6F,0x66,0x93 } }; // 931D6D9F-57A2-4A3A-ADB8-4640886F6693
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiOutPortStatics>{ 0x065CC3E9,0x0F88,0x448B,{ 0x9B,0x64,0xA9,0x58,0x26,0xC6,0x5B,0x8F } }; // 065CC3E9-0F88-448B-9B64-A95826C65B8F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ 0x29DF4CB1,0x2E9F,0x4FAF,{ 0x8C,0x2B,0x9C,0xB8,0x2A,0x90,0x79,0xCA } }; // 29DF4CB1-2E9F-4FAF-8C2B-9CB82A9079CA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ 0xF5EEDF55,0xCFC8,0x4926,{ 0xB3,0x0E,0xA3,0x62,0x23,0x93,0x30,0x6C } }; // F5EEDF55-CFC8-4926-B30E-A3622393306C
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ 0x1F7337FE,0xACE8,0x48A0,{ 0x86,0x8E,0x7C,0xDB,0xF2,0x0F,0x04,0xD6 } }; // 1F7337FE-ACE8-48A0-868E-7CDBF20F04D6
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ 0xE98F483E,0xC4B3,0x4DD2,{ 0x91,0x7C,0xE3,0x49,0x81,0x5A,0x1B,0x3B } }; // E98F483E-C4B3-4DD2-917C-E349815A1B3B
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage>{ 0x9CBB3C78,0x7A3E,0x4327,{ 0xAA,0x98,0x20,0xB8,0xE4,0x48,0x5A,0xF8 } }; // 9CBB3C78-7A3E-4327-AA98-20B8E4485AF8
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ 0xD6B04387,0x524B,0x4104,{ 0x9C,0x99,0x65,0x72,0xBF,0xD2,0xE2,0x61 } }; // D6B04387-524B-4104-9C99-6572BFD2E261
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ 0x4CA50C56,0xEC5E,0x4AE4,{ 0xA1,0x15,0x88,0xDC,0x57,0xCC,0x2B,0x79 } }; // 4CA50C56-EC5E-4AE4-A115-88DC57CC2B79
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ 0x9C00E996,0xF10B,0x4FEA,{ 0xB3,0x95,0xF5,0xD6,0xCF,0x80,0xF6,0x4E } }; // 9C00E996-F10B-4FEA-B395-F5D6CF80F64E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSongSelectMessage>{ 0x49F0F27F,0x6D83,0x4741,{ 0xA5,0xBF,0x46,0x29,0xF6,0xBE,0x97,0x4F } }; // 49F0F27F-6D83-4741-A5BF-4629F6BE974F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ 0x848878E4,0x8748,0x4129,{ 0xA6,0x6C,0xA0,0x54,0x93,0xF7,0x5D,0xAA } }; // 848878E4-8748-4129-A66C-A05493F75DAA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSynthesizer>{ 0xF0DA155E,0xDB90,0x405F,{ 0xB8,0xAE,0x21,0xD2,0xE1,0x7F,0x2E,0x45 } }; // F0DA155E-DB90-405F-B8AE-21D2E17F2E45
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics>{ 0x4224EAA8,0x6629,0x4D6B,{ 0xAA,0x8F,0xD4,0x52,0x1A,0x5A,0x31,0xCE } }; // 4224EAA8-6629-4D6B-AA8F-D4521A5A31CE
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ 0x083DE222,0x3B74,0x4320,{ 0x9B,0x42,0x0C,0xA8,0x54,0x5F,0x8A,0x24 } }; // 083DE222-3B74-4320-9B42-0CA8545F8A24
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage>{ 0x0BF7087D,0xFA63,0x4A1C,{ 0x8D,0xEB,0xC0,0xE8,0x77,0x96,0xA6,0xD7 } }; // 0BF7087D-FA63-4A1C-8DEB-C0E87796A6D7
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ 0xEB3099C5,0x771C,0x40DE,{ 0xB9,0x61,0x17,0x5A,0x74,0x89,0xA8,0x5E } }; // EB3099C5-771C-40DE-B961-175A7489A85E
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiActiveSensingMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiChannelPressureMessage>{ using type = winrt::Windows::Devices::Midi::IMidiChannelPressureMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiContinueMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiControlChangeMessage>{ using type = winrt::Windows::Devices::Midi::IMidiControlChangeMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiInPort>{ using type = winrt::Windows::Devices::Midi::IMidiInPort; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs>{ using type = winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiNoteOffMessage>{ using type = winrt::Windows::Devices::Midi::IMidiNoteOffMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiNoteOnMessage>{ using type = winrt::Windows::Devices::Midi::IMidiNoteOnMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiOutPort>{ using type = winrt::Windows::Devices::Midi::IMidiOutPort; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage>{ using type = winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>{ using type = winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiProgramChangeMessage>{ using type = winrt::Windows::Devices::Midi::IMidiProgramChangeMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage>{ using type = winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiSongSelectMessage>{ using type = winrt::Windows::Devices::Midi::IMidiSongSelectMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiStartMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiStopMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiSynthesizer>{ using type = winrt::Windows::Devices::Midi::IMidiSynthesizer; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiSystemResetMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiTimeCodeMessage>{ using type = winrt::Windows::Devices::Midi::IMidiTimeCodeMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiTimingClockMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Midi::MidiTuneRequestMessage>{ using type = winrt::Windows::Devices::Midi::IMidiMessage; };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiChannelPressureMessage(uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiControlChangeMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Controller(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ControlValue(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiControlChangeMessage(uint8_t, uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiInPort>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiInPortStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_RawData(void**) noexcept = 0;
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Message(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiNoteOffMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Note(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Velocity(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiNoteOffMessage(uint8_t, uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiNoteOnMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Note(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Velocity(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiNoteOnMessage(uint8_t, uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiOutPort>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendMessage(void*) noexcept = 0;
            virtual int32_t __stdcall SendBuffer(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiOutPortStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Bend(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiPitchBendChangeMessage(uint8_t, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Note(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Pressure(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiPolyphonicKeyPressureMessage(uint8_t, uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Channel(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Program(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiProgramChangeMessage(uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Beats(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiSongPositionPointerMessage(uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSongSelectMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Song(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiSongSelectMessage(uint8_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSynthesizer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AudioDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_Volume(double*) noexcept = 0;
            virtual int32_t __stdcall put_Volume(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromAudioDeviceAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsSynthesizer(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiSystemExclusiveMessage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_Values(uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMidiTimeCodeMessage(uint8_t, uint8_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiChannelPressureMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Pressure() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiChannelPressureMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiChannelPressureMessageFactory
    {
        auto CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiChannelPressureMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiControlChangeMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Controller() const;
        [[nodiscard]] auto ControlValue() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiControlChangeMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiControlChangeMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiControlChangeMessageFactory
    {
        auto CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiControlChangeMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiInPort
    {
        auto MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Midi::MidiInPort, winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const;
        using MessageReceived_revoker = impl::event_revoker<winrt::Windows::Devices::Midi::IMidiInPort, &impl::abi_t<winrt::Windows::Devices::Midi::IMidiInPort>::remove_MessageReceived>;
        [[nodiscard]] MessageReceived_revoker MessageReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Midi::MidiInPort, winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const;
        auto MessageReceived(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto DeviceId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiInPort>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiInPort<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiInPortStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiInPortStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiInPortStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiMessage
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto RawData() const;
        [[nodiscard]] auto Type() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiMessageReceivedEventArgs
    {
        [[nodiscard]] auto Message() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiMessageReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiNoteOffMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Note() const;
        [[nodiscard]] auto Velocity() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiNoteOffMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOffMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiNoteOffMessageFactory
    {
        auto CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOffMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiNoteOnMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Note() const;
        [[nodiscard]] auto Velocity() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiNoteOnMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOnMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiNoteOnMessageFactory
    {
        auto CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOnMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiOutPort
    {
        auto SendMessage(winrt::Windows::Devices::Midi::IMidiMessage const& midiMessage) const;
        auto SendBuffer(winrt::Windows::Storage::Streams::IBuffer const& midiData) const;
        [[nodiscard]] auto DeviceId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiOutPort>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiOutPort<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiOutPortStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiOutPortStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiOutPortStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Bend() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory
    {
        auto CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Note() const;
        [[nodiscard]] auto Pressure() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory
    {
        auto CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiProgramChangeMessage
    {
        [[nodiscard]] auto Channel() const;
        [[nodiscard]] auto Program() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiProgramChangeMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiProgramChangeMessageFactory
    {
        auto CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiProgramChangeMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSongPositionPointerMessage
    {
        [[nodiscard]] auto Beats() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongPositionPointerMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory
    {
        auto CreateMidiSongPositionPointerMessage(uint16_t beats) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSongSelectMessage
    {
        [[nodiscard]] auto Song() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSongSelectMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongSelectMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSongSelectMessageFactory
    {
        auto CreateMidiSongSelectMessage(uint8_t song) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongSelectMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSynthesizer
    {
        [[nodiscard]] auto AudioDevice() const;
        [[nodiscard]] auto Volume() const;
        auto Volume(double value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSynthesizer>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSynthesizer<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSynthesizerStatics
    {
        auto CreateAsync() const;
        auto CreateAsync(winrt::Windows::Devices::Enumeration::DeviceInformation const& audioDevice) const;
        auto IsSynthesizer(winrt::Windows::Devices::Enumeration::DeviceInformation const& midiDevice) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSynthesizerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory
    {
        auto CreateMidiSystemExclusiveMessage(winrt::Windows::Storage::Streams::IBuffer const& rawData) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiTimeCodeMessage
    {
        [[nodiscard]] auto FrameType() const;
        [[nodiscard]] auto Values() const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiTimeCodeMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Midi_IMidiTimeCodeMessageFactory
    {
        auto CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values) const;
    };
    template <> struct consume<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Midi_IMidiTimeCodeMessageFactory<D>;
    };
}
#endif
