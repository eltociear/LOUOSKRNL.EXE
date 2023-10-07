// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Core_0_H
#define WINRT_Windows_ApplicationModel_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppDisplayInfo;
    struct AppInfo;
    struct EnteredBackgroundEventArgs;
    struct LeavingBackgroundEventArgs;
    struct SuspendingEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct BackgroundActivatedEventArgs;
    struct IActivatedEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct IGetActivationFactory;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IPropertySet;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct DispatcherQueue;
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct CoreDispatcher;
    struct CoreWindow;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    enum class AppRestartFailureReason : int32_t
    {
        RestartPending = 0,
        NotInForeground = 1,
        InvalidUser = 2,
        Other = 3,
    };
    struct IAppListEntry;
    struct IAppListEntry2;
    struct IAppListEntry3;
    struct IAppListEntry4;
    struct ICoreApplication;
    struct ICoreApplication2;
    struct ICoreApplication3;
    struct ICoreApplicationExit;
    struct ICoreApplicationUnhandledError;
    struct ICoreApplicationUseCount;
    struct ICoreApplicationView;
    struct ICoreApplicationView2;
    struct ICoreApplicationView3;
    struct ICoreApplicationView5;
    struct ICoreApplicationView6;
    struct ICoreApplicationViewTitleBar;
    struct ICoreImmersiveApplication;
    struct ICoreImmersiveApplication2;
    struct ICoreImmersiveApplication3;
    struct IFrameworkView;
    struct IFrameworkViewSource;
    struct IHostedViewClosingEventArgs;
    struct IUnhandledError;
    struct IUnhandledErrorDetectedEventArgs;
    struct AppListEntry;
    struct CoreApplication;
    struct CoreApplicationView;
    struct CoreApplicationViewTitleBar;
    struct HostedViewClosingEventArgs;
    struct UnhandledError;
    struct UnhandledErrorDetectedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IAppListEntry4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplication3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationExit>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView5>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView6>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IFrameworkView>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IFrameworkViewSource>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IUnhandledError>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Core::AppListEntry>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplication>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplicationView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::UnhandledError>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Core::AppRestartFailureReason>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::AppListEntry> = L"Windows.ApplicationModel.Core.AppListEntry";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::CoreApplication> = L"Windows.ApplicationModel.Core.CoreApplication";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::CoreApplicationView> = L"Windows.ApplicationModel.Core.CoreApplicationView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar> = L"Windows.ApplicationModel.Core.CoreApplicationViewTitleBar";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::HostedViewClosingEventArgs> = L"Windows.ApplicationModel.Core.HostedViewClosingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::UnhandledError> = L"Windows.ApplicationModel.Core.UnhandledError";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> = L"Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::AppRestartFailureReason> = L"Windows.ApplicationModel.Core.AppRestartFailureReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IAppListEntry> = L"Windows.ApplicationModel.Core.IAppListEntry";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IAppListEntry2> = L"Windows.ApplicationModel.Core.IAppListEntry2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IAppListEntry3> = L"Windows.ApplicationModel.Core.IAppListEntry3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IAppListEntry4> = L"Windows.ApplicationModel.Core.IAppListEntry4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplication> = L"Windows.ApplicationModel.Core.ICoreApplication";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplication2> = L"Windows.ApplicationModel.Core.ICoreApplication2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplication3> = L"Windows.ApplicationModel.Core.ICoreApplication3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationExit> = L"Windows.ApplicationModel.Core.ICoreApplicationExit";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> = L"Windows.ApplicationModel.Core.ICoreApplicationUnhandledError";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationUseCount> = L"Windows.ApplicationModel.Core.ICoreApplicationUseCount";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationView> = L"Windows.ApplicationModel.Core.ICoreApplicationView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationView2> = L"Windows.ApplicationModel.Core.ICoreApplicationView2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationView3> = L"Windows.ApplicationModel.Core.ICoreApplicationView3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationView5> = L"Windows.ApplicationModel.Core.ICoreApplicationView5";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationView6> = L"Windows.ApplicationModel.Core.ICoreApplicationView6";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> = L"Windows.ApplicationModel.Core.ICoreApplicationViewTitleBar";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication> = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication2> = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication3> = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IFrameworkView> = L"Windows.ApplicationModel.Core.IFrameworkView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IFrameworkViewSource> = L"Windows.ApplicationModel.Core.IFrameworkViewSource";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> = L"Windows.ApplicationModel.Core.IHostedViewClosingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IUnhandledError> = L"Windows.ApplicationModel.Core.IUnhandledError";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> = L"Windows.ApplicationModel.Core.IUnhandledErrorDetectedEventArgs";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IAppListEntry>{ 0xEF00F07F,0x2108,0x490A,{ 0x87,0x7A,0x8A,0x9F,0x17,0xC2,0x5F,0xAD } }; // EF00F07F-2108-490A-877A-8A9F17C25FAD
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IAppListEntry2>{ 0xD0A618AD,0xBF35,0x42AC,{ 0xAC,0x06,0x86,0xEE,0xEB,0x41,0xD0,0x4B } }; // D0A618AD-BF35-42AC-AC06-86EEEB41D04B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IAppListEntry3>{ 0x6099F28D,0xFC32,0x470A,{ 0xBC,0x69,0x4B,0x06,0x1A,0x76,0xEF,0x2E } }; // 6099F28D-FC32-470A-BC69-4B061A76EF2E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IAppListEntry4>{ 0x2A131ED2,0x56F5,0x487C,{ 0x86,0x97,0x51,0x66,0xF3,0xB3,0x3D,0xA0 } }; // 2A131ED2-56F5-487C-8697-5166F3B33DA0
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplication>{ 0x0AACF7A4,0x5E1D,0x49DF,{ 0x80,0x34,0xFB,0x6A,0x68,0xBC,0x5E,0xD1 } }; // 0AACF7A4-5E1D-49DF-8034-FB6A68BC5ED1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplication2>{ 0x998681FB,0x1AB6,0x4B7F,{ 0xBE,0x4A,0x9A,0x06,0x45,0x22,0x4C,0x04 } }; // 998681FB-1AB6-4B7F-BE4A-9A0645224C04
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplication3>{ 0xFEEC0D39,0x598B,0x4507,{ 0x8A,0x67,0x77,0x26,0x32,0x58,0x0A,0x57 } }; // FEEC0D39-598B-4507-8A67-772632580A57
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationExit>{ 0xCF86461D,0x261E,0x4B72,{ 0x9A,0xCD,0x44,0xED,0x2A,0xCE,0x6A,0x29 } }; // CF86461D-261E-4B72-9ACD-44ED2ACE6A29
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ 0xF0E24AB0,0xDD09,0x42E1,{ 0xB0,0xBC,0xE0,0xE1,0x31,0xF7,0x8D,0x7E } }; // F0E24AB0-DD09-42E1-B0BC-E0E131F78D7E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ 0x518DC408,0xC077,0x475B,{ 0x80,0x9E,0x0B,0xC0,0xC5,0x7E,0x4B,0x74 } }; // 518DC408-C077-475B-809E-0BC0C57E4B74
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationView>{ 0x638BB2DB,0x451D,0x4661,{ 0xB0,0x99,0x41,0x4F,0x34,0xFF,0xB9,0xF1 } }; // 638BB2DB-451D-4661-B099-414F34FFB9F1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationView2>{ 0x68EB7ADF,0x917F,0x48EB,{ 0x9A,0xEB,0x7D,0xE5,0x3E,0x08,0x6A,0xB1 } }; // 68EB7ADF-917F-48EB-9AEB-7DE53E086AB1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationView3>{ 0x07EBE1B3,0xA4CF,0x4550,{ 0xAB,0x70,0xB0,0x7E,0x85,0x33,0x0B,0xC8 } }; // 07EBE1B3-A4CF-4550-AB70-B07E85330BC8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationView5>{ 0x2BC095A8,0x8EF0,0x446D,{ 0x9E,0x60,0x3A,0x3E,0x04,0x28,0xC6,0x71 } }; // 2BC095A8-8EF0-446D-9E60-3A3E0428C671
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationView6>{ 0xC119D49A,0x0679,0x49BA,{ 0x80,0x3F,0xB7,0x9C,0x5C,0xF3,0x4C,0xCA } }; // C119D49A-0679-49BA-803F-B79C5CF34CCA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ 0x006D35E3,0xE1F1,0x431B,{ 0x95,0x08,0x29,0xB9,0x69,0x26,0xAC,0x53 } }; // 006D35E3-E1F1-431B-9508-29B96926AC53
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ 0x1ADA0E3E,0xE4A2,0x4123,{ 0xB4,0x51,0xDC,0x96,0xBF,0x80,0x04,0x19 } }; // 1ADA0E3E-E4A2-4123-B451-DC96BF800419
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ 0x828E1E36,0xE9E3,0x4CFC,{ 0x9B,0x66,0x48,0xB7,0x8E,0xA9,0xBB,0x2C } }; // 828E1E36-E9E3-4CFC-9B66-48B78EA9BB2C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ 0x34A05B2F,0xEE0D,0x41E5,{ 0x83,0x14,0xCF,0x10,0xC9,0x1B,0xF0,0xAF } }; // 34A05B2F-EE0D-41E5-8314-CF10C91BF0AF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IFrameworkView>{ 0xFAAB5CD0,0x8924,0x45AC,{ 0xAD,0x0F,0xA0,0x8F,0xAE,0x5D,0x03,0x24 } }; // FAAB5CD0-8924-45AC-AD0F-A08FAE5D0324
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IFrameworkViewSource>{ 0xCD770614,0x65C4,0x426C,{ 0x94,0x94,0x34,0xFC,0x43,0x55,0x48,0x62 } }; // CD770614-65C4-426C-9494-34FC43554862
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ 0xD238943C,0xB24E,0x4790,{ 0xAC,0xB5,0x3E,0x42,0x43,0xC4,0xFF,0x87 } }; // D238943C-B24E-4790-ACB5-3E4243C4FF87
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IUnhandledError>{ 0x9459B726,0x53B5,0x4686,{ 0x9E,0xAF,0xFA,0x81,0x62,0xDC,0x39,0x80 } }; // 9459B726-53B5-4686-9EAF-FA8162DC3980
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ 0x679AB78B,0xB336,0x4822,{ 0xAC,0x40,0x0D,0x75,0x0F,0x0B,0x7A,0x2B } }; // 679AB78B-B336-4822-AC40-0D750F0B7A2B
    template <> struct default_interface<Windows::ApplicationModel::Core::AppListEntry>{ using type = Windows::ApplicationModel::Core::IAppListEntry; };
    template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationView>{ using type = Windows::ApplicationModel::Core::ICoreApplicationView; };
    template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>{ using type = Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar; };
    template <> struct default_interface<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>{ using type = Windows::ApplicationModel::Core::IHostedViewClosingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledError>{ using type = Windows::ApplicationModel::Core::IUnhandledError; };
    template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>{ using type = Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs; };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchForUserAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall add_Suspending(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Suspending(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Resuming(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Resuming(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall GetCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall Run(void*) noexcept = 0;
            virtual int32_t __stdcall RunWithActivationFactories(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BackgroundActivated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BackgroundActivated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LeavingBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LeavingBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnteredBackground(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnteredBackground(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall EnablePrelaunch(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestRestartAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestRestartForUserAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Exit() noexcept = 0;
            virtual int32_t __stdcall add_Exiting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Exiting(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_UnhandledErrorDetected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UnhandledErrorDetected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IncrementApplicationUseCount() noexcept = 0;
            virtual int32_t __stdcall DecrementApplicationUseCount() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CoreWindow(void**) noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsMain(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsHosted(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Dispatcher(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsComponent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_TitleBar(void**) noexcept = 0;
            virtual int32_t __stdcall add_HostedViewClosing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HostedViewClosing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ExtendViewIntoTitleBar(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtendViewIntoTitleBar(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SystemOverlayLeftInset(double*) noexcept = 0;
            virtual int32_t __stdcall get_SystemOverlayRightInset(double*) noexcept = 0;
            virtual int32_t __stdcall get_Height(double*) noexcept = 0;
            virtual int32_t __stdcall add_LayoutMetricsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LayoutMetricsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_IsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsVisibleChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsVisibleChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Views(void**) noexcept = 0;
            virtual int32_t __stdcall CreateNewView(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_MainView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNewViewFromMainView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNewViewWithViewSource(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IFrameworkView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Initialize(void*) noexcept = 0;
            virtual int32_t __stdcall SetWindow(void*) noexcept = 0;
            virtual int32_t __stdcall Load(void*) noexcept = 0;
            virtual int32_t __stdcall Run() noexcept = 0;
            virtual int32_t __stdcall Uninitialize() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IUnhandledError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall Propagate() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnhandledError(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppDisplayInfo) DisplayInfo() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppUserModelId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchForUserAsync(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IAppListEntry4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) AppInfo() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        WINRT_IMPL_AUTO(winrt::event_token) Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
        using Suspending_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending>;
        [[nodiscard]] Suspending_revoker Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Suspending(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Resuming_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming>;
        [[nodiscard]] Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Resuming(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) GetCurrentView() const;
        WINRT_IMPL_AUTO(void) Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
        WINRT_IMPL_AUTO(void) RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication2
    {
        WINRT_IMPL_AUTO(winrt::event_token) BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        using BackgroundActivated_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated>;
        [[nodiscard]] BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BackgroundActivated(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
        using LeavingBackground_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground>;
        [[nodiscard]] LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LeavingBackground(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
        using EnteredBackground_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground>;
        [[nodiscard]] EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) EnteredBackground(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) EnablePrelaunch(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplication3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>) RequestRestartAsync(param::hstring const& launchArguments) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Core::AppRestartFailureReason>) RequestRestartForUserAsync(Windows::System::User const& user, param::hstring const& launchArguments) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationExit
    {
        WINRT_IMPL_AUTO(void) Exit() const;
        WINRT_IMPL_AUTO(winrt::event_token) Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Exiting_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting>;
        [[nodiscard]] Exiting_revoker Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Exiting(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationExit>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError
    {
        WINRT_IMPL_AUTO(winrt::event_token) UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
        using UnhandledErrorDetected_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected>;
        [[nodiscard]] UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UnhandledErrorDetected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount
    {
        WINRT_IMPL_AUTO(void) IncrementApplicationUseCount() const;
        WINRT_IMPL_AUTO(void) DecrementApplicationUseCount() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Core::CoreWindow) CoreWindow() const;
        WINRT_IMPL_AUTO(winrt::event_token) Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
        using Activated_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationView>::remove_Activated>;
        [[nodiscard]] Activated_revoker Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Activated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMain() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsHosted() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Core::CoreDispatcher) Dispatcher() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComponent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationViewTitleBar) TitleBar() const;
        WINRT_IMPL_AUTO(winrt::event_token) HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
        using HostedViewClosing_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView3, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationView3>::remove_HostedViewClosing>;
        [[nodiscard]] HostedViewClosing_revoker HostedViewClosing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) HostedViewClosing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IPropertySet) Properties() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationView6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) DispatcherQueue() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView6<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar
    {
        WINRT_IMPL_AUTO(void) ExtendViewIntoTitleBar(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ExtendViewIntoTitleBar() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SystemOverlayLeftInset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SystemOverlayRightInset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Height() const;
        WINRT_IMPL_AUTO(winrt::event_token) LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        using LayoutMetricsChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_LayoutMetricsChanged>;
        [[nodiscard]] LayoutMetricsChanged_revoker LayoutMetricsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) LayoutMetricsChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsVisible() const;
        WINRT_IMPL_AUTO(winrt::event_token) IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        using IsVisibleChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar, &impl::abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_IsVisibleChanged>;
        [[nodiscard]] IsVisibleChanged_revoker IsVisibleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsVisibleChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView>) Views() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) MainView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) CreateNewView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::CoreApplicationView) CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IFrameworkView
    {
        WINRT_IMPL_AUTO(void) Initialize(Windows::ApplicationModel::Core::CoreApplicationView const& applicationView) const;
        WINRT_IMPL_AUTO(void) SetWindow(Windows::UI::Core::CoreWindow const& window) const;
        WINRT_IMPL_AUTO(void) Load(param::hstring const& entryPoint) const;
        WINRT_IMPL_AUTO(void) Run() const;
        WINRT_IMPL_AUTO(void) Uninitialize() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IFrameworkView>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkView<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IFrameworkViewSource
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::IFrameworkView) CreateView() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkViewSource<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IUnhandledError
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Propagate() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IUnhandledError>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledError<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Core::UnhandledError) UnhandledError() const;
    };
    template <> struct consume<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs<D>;
    };
}
#endif
