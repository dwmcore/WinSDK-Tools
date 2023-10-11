// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_Inventory_2_H
#define WINRT_Windows_System_Inventory_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Inventory.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Inventory
{
    struct __declspec(empty_bases) InstalledDesktopApp : winrt::Windows::System::Inventory::IInstalledDesktopApp,
        impl::require<InstalledDesktopApp, winrt::Windows::Foundation::IStringable>
    {
        InstalledDesktopApp(std::nullptr_t) noexcept {}
        InstalledDesktopApp(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Inventory::IInstalledDesktopApp(ptr, take_ownership_from_abi) {}
        static auto GetInventoryAsync();
    };
}
#endif
