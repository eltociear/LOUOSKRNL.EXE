// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Automation_Core_H
#define WINRT_Windows_Perception_Automation_Core_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Perception.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Perception.Automation.Core.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics<D>::SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics)->SetActivationFactoryProvider(*(void**)(&provider)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : produce_base<D, Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>
    {
        int32_t __stdcall SetActivationFactoryProvider(void* provider) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActivationFactoryProvider(*reinterpret_cast<Windows::Foundation::IGetActivationFactory const*>(&provider));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    inline auto CorePerceptionAutomation::SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider)
    {
        impl::call_factory<CorePerceptionAutomation, ICorePerceptionAutomationStatics>([&](ICorePerceptionAutomationStatics const& f) { return f.SetActivationFactoryProvider(provider); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation> : winrt::impl::hash_base {};
#endif
}
#endif
