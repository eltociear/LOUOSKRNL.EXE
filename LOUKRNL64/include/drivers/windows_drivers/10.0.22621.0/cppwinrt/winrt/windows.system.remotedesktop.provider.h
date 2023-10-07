// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_H
#define WINRT_Windows_System_RemoteDesktop_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/Windows.System.RemoteDesktop.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.System.RemoteDesktop.Provider.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo<D>::SetConnectionStatus(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo)->SetConnectionStatus(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo) consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics<D>::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics)->GetForLaunchUri(*(void**)(&launchUri), impl::bind_in(windowId), &result));
        return winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>
    {
        int32_t __stdcall SetConnectionStatus(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetConnectionStatus(*reinterpret_cast<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>
    {
        int32_t __stdcall GetForLaunchUri(void* launchUri, struct struct_Windows_UI_WindowId windowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>(this->shim().GetForLaunchUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&launchUri), *reinterpret_cast<winrt::Windows::UI::WindowId const*>(&windowId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Provider
{
    inline auto RemoteDesktopConnectionInfo::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId)
    {
        return impl::call_factory<RemoteDesktopConnectionInfo, IRemoteDesktopConnectionInfoStatics>([&](IRemoteDesktopConnectionInfoStatics const& f) { return f.GetForLaunchUri(launchUri, windowId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
