// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_Http_Filters_0_H
#define WINRT_Windows_Web_Http_Filters_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class SocketSslErrorSeverity : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    struct Certificate;
    enum class ChainValidationResult : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http
{
    struct HttpCookieManager;
    struct HttpProgress;
    struct HttpRequestMessage;
    struct HttpResponseMessage;
    enum class HttpVersion : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    enum class HttpCacheReadBehavior : int32_t
    {
        Default = 0,
        MostRecent = 1,
        OnlyFromCache = 2,
        NoCache = 3,
    };
    enum class HttpCacheWriteBehavior : int32_t
    {
        Default = 0,
        NoCache = 1,
    };
    enum class HttpCookieUsageBehavior : int32_t
    {
        Default = 0,
        NoCookies = 1,
    };
    struct IHttpBaseProtocolFilter;
    struct IHttpBaseProtocolFilter2;
    struct IHttpBaseProtocolFilter3;
    struct IHttpBaseProtocolFilter4;
    struct IHttpBaseProtocolFilter5;
    struct IHttpBaseProtocolFilterStatics;
    struct IHttpCacheControl;
    struct IHttpFilter;
    struct IHttpServerCustomValidationRequestedEventArgs;
    struct HttpBaseProtocolFilter;
    struct HttpCacheControl;
    struct HttpServerCustomValidationRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpCacheControl>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpFilter>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpBaseProtocolFilter>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheControl>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheReadBehavior>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpCacheWriteBehavior>{ using type = enum_category; };
    template <> struct category<Windows::Web::Http::Filters::HttpCookieUsageBehavior>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpBaseProtocolFilter> = L"Windows.Web.Http.Filters.HttpBaseProtocolFilter";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpCacheControl> = L"Windows.Web.Http.Filters.HttpCacheControl";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> = L"Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpCacheReadBehavior> = L"Windows.Web.Http.Filters.HttpCacheReadBehavior";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpCacheWriteBehavior> = L"Windows.Web.Http.Filters.HttpCacheWriteBehavior";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::HttpCookieUsageBehavior> = L"Windows.Web.Http.Filters.HttpCookieUsageBehavior";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter2";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter3";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter4";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter5";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilterStatics";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpCacheControl> = L"Windows.Web.Http.Filters.IHttpCacheControl";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpFilter> = L"Windows.Web.Http.Filters.IHttpFilter";
    template <> inline constexpr auto& name_v<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> = L"Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs";
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>{ 0x71C89B09,0xE131,0x4B54,{ 0xA5,0x3C,0xEB,0x43,0xFF,0x37,0xE9,0xBB } }; // 71C89B09-E131-4B54-A53C-EB43FF37E9BB
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>{ 0x2EC30013,0x9427,0x4900,{ 0xA0,0x17,0xFA,0x7D,0xA3,0xB5,0xC9,0xAE } }; // 2EC30013-9427-4900-A017-FA7DA3B5C9AE
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>{ 0xD43F4D4C,0xBD42,0x43AE,{ 0x87,0x17,0xAD,0x2C,0x8F,0x4B,0x29,0x37 } }; // D43F4D4C-BD42-43AE-8717-AD2C8F4B2937
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>{ 0x9FE36CCF,0x2983,0x4893,{ 0x94,0x1F,0xEB,0x51,0x8C,0xA8,0xCE,0xF9 } }; // 9FE36CCF-2983-4893-941F-EB518CA8CEF9
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>{ 0x416E4993,0x31E3,0x4816,{ 0xBF,0x09,0xE0,0x18,0xEE,0x8D,0xC1,0xF5 } }; // 416E4993-31E3-4816-BF09-E018EE8DC1F5
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>{ 0x6D4DEE0C,0xE908,0x494E,{ 0xB5,0xA3,0x12,0x63,0xC9,0xB8,0x24,0x2A } }; // 6D4DEE0C-E908-494E-B5A3-1263C9B8242A
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpCacheControl>{ 0xC77E1CB4,0x3CEA,0x4EB5,{ 0xAC,0x85,0x04,0xE1,0x86,0xE6,0x3A,0xB7 } }; // C77E1CB4-3CEA-4EB5-AC85-04E186E63AB7
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpFilter>{ 0xA4CB6DD5,0x0902,0x439E,{ 0xBF,0xD7,0xE1,0x25,0x52,0xB1,0x65,0xCE } }; // A4CB6DD5-0902-439E-BFD7-E12552B165CE
    template <> inline constexpr guid guid_v<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>{ 0x3165FE32,0xE7DD,0x48B7,{ 0xA3,0x61,0x93,0x9C,0x75,0x0E,0x63,0xCC } }; // 3165FE32-E7DD-48B7-A361-939C750E63CC
    template <> struct default_interface<Windows::Web::Http::Filters::HttpBaseProtocolFilter>{ using type = Windows::Web::Http::Filters::IHttpBaseProtocolFilter; };
    template <> struct default_interface<Windows::Web::Http::Filters::HttpCacheControl>{ using type = Windows::Web::Http::Filters::IHttpCacheControl; };
    template <> struct default_interface<Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>{ using type = Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs; };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowAutoRedirect(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowAutoRedirect(bool) noexcept = 0;
            virtual int32_t __stdcall get_AllowUI(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowUI(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutomaticDecompression(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutomaticDecompression(bool) noexcept = 0;
            virtual int32_t __stdcall get_CacheControl(void**) noexcept = 0;
            virtual int32_t __stdcall get_CookieManager(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClientCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClientCertificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_IgnorableServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxConnectionsPerServer(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxConnectionsPerServer(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProxyCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ProxyCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCredential(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerCredential(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseProxy(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseProxy(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxVersion(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxVersion(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CookieUsageBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CookieUsageBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ServerCustomValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ServerCustomValidationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ClearAuthenticationCache() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReadBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReadBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WriteBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WriteBehavior(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendRequestAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServerCertificateErrors(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServerIntermediateCertificates(void**) noexcept = 0;
            virtual int32_t __stdcall Reject() noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowAutoRedirect() const;
        WINRT_IMPL_AUTO(void) AllowAutoRedirect(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowUI() const;
        WINRT_IMPL_AUTO(void) AllowUI(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AutomaticDecompression() const;
        WINRT_IMPL_AUTO(void) AutomaticDecompression(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Filters::HttpCacheControl) CacheControl() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpCookieManager) CookieManager() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) ClientCertificate() const;
        WINRT_IMPL_AUTO(void) ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult>) IgnorableServerCertificateErrors() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxConnectionsPerServer() const;
        WINRT_IMPL_AUTO(void) MaxConnectionsPerServer(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) ProxyCredential() const;
        WINRT_IMPL_AUTO(void) ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) ServerCredential() const;
        WINRT_IMPL_AUTO(void) ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) UseProxy() const;
        WINRT_IMPL_AUTO(void) UseProxy(bool value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpVersion) MaxVersion() const;
        WINRT_IMPL_AUTO(void) MaxVersion(Windows::Web::Http::HttpVersion const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Filters::HttpCookieUsageBehavior) CookieUsageBehavior() const;
        WINRT_IMPL_AUTO(void) CookieUsageBehavior(Windows::Web::Http::Filters::HttpCookieUsageBehavior const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4
    {
        WINRT_IMPL_AUTO(winrt::event_token) ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const;
        using ServerCustomValidationRequested_revoker = impl::event_revoker<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4, &impl::abi_t<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>::remove_ServerCustomValidationRequested>;
        [[nodiscard]] ServerCustomValidationRequested_revoker ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ServerCustomValidationRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) ClearAuthenticationCache() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics
    {
        WINRT_IMPL_AUTO(Windows::Web::Http::Filters::HttpBaseProtocolFilter) CreateForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpCacheControl
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Filters::HttpCacheReadBehavior) ReadBehavior() const;
        WINRT_IMPL_AUTO(void) ReadBehavior(Windows::Web::Http::Filters::HttpCacheReadBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::Filters::HttpCacheWriteBehavior) WriteBehavior() const;
        WINRT_IMPL_AUTO(void) WriteBehavior(Windows::Web::Http::Filters::HttpCacheWriteBehavior const& value) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpCacheControl>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpCacheControl<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpFilter
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>) SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpFilter>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Web::Http::HttpRequestMessage) RequestMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) ServerCertificate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::Sockets::SocketSslErrorSeverity) ServerCertificateErrorSeverity() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>) ServerCertificateErrors() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) ServerIntermediateCertificates() const;
        WINRT_IMPL_AUTO(void) Reject() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>;
    };
}
#endif
