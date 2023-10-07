// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Display_Core_1_H
#define WINRT_Windows_Devices_Display_Core_1_H
#include "winrt/impl/Windows.Devices.Display.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display::Core
{
    struct __declspec(empty_bases) IDisplayAdapter :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayAdapter>
    {
        IDisplayAdapter(std::nullptr_t = nullptr) noexcept {}
        IDisplayAdapter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayAdapterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayAdapterStatics>
    {
        IDisplayAdapterStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayAdapterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayDevice :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayDevice>
    {
        IDisplayDevice(std::nullptr_t = nullptr) noexcept {}
        IDisplayDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayFence :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayFence>
    {
        IDisplayFence(std::nullptr_t = nullptr) noexcept {}
        IDisplayFence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManager>
    {
        IDisplayManager(std::nullptr_t = nullptr) noexcept {}
        IDisplayManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerChangedEventArgs>
    {
        IDisplayManagerChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerDisabledEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerDisabledEventArgs>
    {
        IDisplayManagerDisabledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerDisabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerEnabledEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerEnabledEventArgs>
    {
        IDisplayManagerEnabledEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerPathsFailedOrInvalidatedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerPathsFailedOrInvalidatedEventArgs>
    {
        IDisplayManagerPathsFailedOrInvalidatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerPathsFailedOrInvalidatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerResultWithState :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerResultWithState>
    {
        IDisplayManagerResultWithState(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerResultWithState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayManagerStatics>
    {
        IDisplayManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayModeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayModeInfo>
    {
        IDisplayModeInfo(std::nullptr_t = nullptr) noexcept {}
        IDisplayModeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayPath :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayPath>
    {
        IDisplayPath(std::nullptr_t = nullptr) noexcept {}
        IDisplayPath(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayPrimaryDescription :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayPrimaryDescription>
    {
        IDisplayPrimaryDescription(std::nullptr_t = nullptr) noexcept {}
        IDisplayPrimaryDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayPrimaryDescriptionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayPrimaryDescriptionFactory>
    {
        IDisplayPrimaryDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
        IDisplayPrimaryDescriptionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayPrimaryDescriptionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayPrimaryDescriptionStatics>
    {
        IDisplayPrimaryDescriptionStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayPrimaryDescriptionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayScanout :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayScanout>
    {
        IDisplayScanout(std::nullptr_t = nullptr) noexcept {}
        IDisplayScanout(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplaySource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplaySource>
    {
        IDisplaySource(std::nullptr_t = nullptr) noexcept {}
        IDisplaySource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayState :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayState>
    {
        IDisplayState(std::nullptr_t = nullptr) noexcept {}
        IDisplayState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayStateOperationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayStateOperationResult>
    {
        IDisplayStateOperationResult(std::nullptr_t = nullptr) noexcept {}
        IDisplayStateOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplaySurface :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplaySurface>
    {
        IDisplaySurface(std::nullptr_t = nullptr) noexcept {}
        IDisplaySurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayTarget>
    {
        IDisplayTarget(std::nullptr_t = nullptr) noexcept {}
        IDisplayTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayTask :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayTask>
    {
        IDisplayTask(std::nullptr_t = nullptr) noexcept {}
        IDisplayTask(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayTaskPool :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayTaskPool>
    {
        IDisplayTaskPool(std::nullptr_t = nullptr) noexcept {}
        IDisplayTaskPool(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayView :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayView>
    {
        IDisplayView(std::nullptr_t = nullptr) noexcept {}
        IDisplayView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayWireFormat :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayWireFormat>
    {
        IDisplayWireFormat(std::nullptr_t = nullptr) noexcept {}
        IDisplayWireFormat(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayWireFormatFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayWireFormatFactory>
    {
        IDisplayWireFormatFactory(std::nullptr_t = nullptr) noexcept {}
        IDisplayWireFormatFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayWireFormatStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayWireFormatStatics>
    {
        IDisplayWireFormatStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayWireFormatStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
