// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_0_H
#define WINRT_Windows_Foundation_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class AsyncStatus : int32_t
    {
        Canceled = 2,
        Completed = 1,
        Error = 3,
        Started = 0,
    };
    enum class PropertyType : int32_t
    {
        Empty = 0,
        UInt8 = 1,
        Int16 = 2,
        UInt16 = 3,
        Int32 = 4,
        UInt32 = 5,
        Int64 = 6,
        UInt64 = 7,
        Single = 8,
        Double = 9,
        Char16 = 10,
        Boolean = 11,
        String = 12,
        Inspectable = 13,
        DateTime = 14,
        TimeSpan = 15,
        Guid = 16,
        Point = 17,
        Size = 18,
        Rect = 19,
        OtherType = 20,
        UInt8Array = 1025,
        Int16Array = 1026,
        UInt16Array = 1027,
        Int32Array = 1028,
        UInt32Array = 1029,
        Int64Array = 1030,
        UInt64Array = 1031,
        SingleArray = 1032,
        DoubleArray = 1033,
        Char16Array = 1034,
        BooleanArray = 1035,
        StringArray = 1036,
        InspectableArray = 1037,
        DateTimeArray = 1038,
        TimeSpanArray = 1039,
        GuidArray = 1040,
        PointArray = 1041,
        SizeArray = 1042,
        RectArray = 1043,
        OtherTypeArray = 1044,
    };
    struct IAsyncAction;
    template <typename TProgress> struct __declspec(empty_bases) IAsyncActionWithProgress;
    struct IAsyncInfo;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct IClosable;
    struct IDeferral;
    struct IDeferralFactory;
    struct IGetActivationFactory;
    struct IGuidHelperStatics;
    struct IMemoryBuffer;
    struct IMemoryBufferFactory;
    struct IMemoryBufferReference;
    struct IPropertyValue;
    struct IPropertyValueStatics;
    template <typename T> struct __declspec(empty_bases) IReferenceArray;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct IStringable;
    struct IUriEscapeStatics;
    struct IUriRuntimeClass;
    struct IUriRuntimeClassFactory;
    struct IUriRuntimeClassWithAbsoluteCanonicalUri;
    struct IWwwFormUrlDecoderEntry;
    struct IWwwFormUrlDecoderRuntimeClass;
    struct IWwwFormUrlDecoderRuntimeClassFactory;
    struct Deferral;
    struct GuidHelper;
    struct MemoryBuffer;
    struct PropertyValue;
    struct Uri;
    struct WwwFormUrlDecoder;
    struct WwwFormUrlDecoderEntry;
    struct AsyncActionCompletedHandler;
    template <typename TProgress> struct __declspec(empty_bases) AsyncActionProgressHandler;
    template <typename TProgress> struct __declspec(empty_bases) AsyncActionWithProgressCompletedHandler;
    template <typename TResult> struct __declspec(empty_bases) AsyncOperationCompletedHandler;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) AsyncOperationProgressHandler;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) AsyncOperationWithProgressCompletedHandler;
    struct DeferralCompletedHandler;
    template <typename T> struct __declspec(empty_bases) EventHandler;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Foundation::IAsyncAction>{ using type = interface_category; };
    template <typename TProgress> struct category<Windows::Foundation::IAsyncActionWithProgress<TProgress>>{ using type = generic_category<TProgress>; };
    template <> struct category<Windows::Foundation::IAsyncInfo>{ using type = interface_category; };
    template <typename TResult, typename TProgress> struct category<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>{ using type = generic_category<TResult, TProgress>; };
    template <typename TResult> struct category<Windows::Foundation::IAsyncOperation<TResult>>{ using type = generic_category<TResult>; };
    template <> struct category<Windows::Foundation::IClosable>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IDeferral>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IDeferralFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IGetActivationFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IGuidHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IMemoryBuffer>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IMemoryBufferFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IMemoryBufferReference>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IPropertyValue>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IPropertyValueStatics>{ using type = interface_category; };
    template <typename T> struct category<Windows::Foundation::IReferenceArray<T>>{ using type = generic_category<T>; };
    template <typename T> struct category<Windows::Foundation::IReference<T>>{ using type = generic_category<T>; };
    template <> struct category<Windows::Foundation::IStringable>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IUriEscapeStatics>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IUriRuntimeClass>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IUriRuntimeClassFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IWwwFormUrlDecoderEntry>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Deferral>{ using type = class_category; };
    template <> struct category<Windows::Foundation::GuidHelper>{ using type = class_category; };
    template <> struct category<Windows::Foundation::MemoryBuffer>{ using type = class_category; };
    template <> struct category<Windows::Foundation::PropertyValue>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Uri>{ using type = class_category; };
    template <> struct category<Windows::Foundation::WwwFormUrlDecoder>{ using type = class_category; };
    template <> struct category<Windows::Foundation::WwwFormUrlDecoderEntry>{ using type = class_category; };
    template <> struct category<Windows::Foundation::AsyncStatus>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::PropertyType>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::AsyncActionCompletedHandler>{ using type = delegate_category; };
    template <typename TProgress> struct category<Windows::Foundation::AsyncActionProgressHandler<TProgress>>{ using type = generic_category<TProgress>; };
    template <typename TProgress> struct category<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>{ using type = generic_category<TProgress>; };
    template <typename TResult> struct category<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>{ using type = generic_category<TResult>; };
    template <typename TResult, typename TProgress> struct category<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>{ using type = generic_category<TResult, TProgress>; };
    template <typename TResult, typename TProgress> struct category<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>{ using type = generic_category<TResult, TProgress>; };
    template <> struct category<Windows::Foundation::DeferralCompletedHandler>{ using type = delegate_category; };
    template <typename T> struct category<Windows::Foundation::EventHandler<T>>{ using type = generic_category<T>; };
    template <typename TSender, typename TResult> struct category<Windows::Foundation::TypedEventHandler<TSender, TResult>>{ using type = generic_category<TSender, TResult>; };
    template <> inline constexpr auto& name_v<Windows::Foundation::Deferral> = L"Windows.Foundation.Deferral";
    template <> inline constexpr auto& name_v<Windows::Foundation::GuidHelper> = L"Windows.Foundation.GuidHelper";
    template <> inline constexpr auto& name_v<Windows::Foundation::MemoryBuffer> = L"Windows.Foundation.MemoryBuffer";
    template <> inline constexpr auto& name_v<Windows::Foundation::PropertyValue> = L"Windows.Foundation.PropertyValue";
    template <> inline constexpr auto& name_v<Windows::Foundation::Uri> = L"Windows.Foundation.Uri";
    template <> inline constexpr auto& name_v<Windows::Foundation::WwwFormUrlDecoder> = L"Windows.Foundation.WwwFormUrlDecoder";
    template <> inline constexpr auto& name_v<Windows::Foundation::WwwFormUrlDecoderEntry> = L"Windows.Foundation.WwwFormUrlDecoderEntry";
    template <> inline constexpr auto& name_v<Windows::Foundation::AsyncStatus> = L"Windows.Foundation.AsyncStatus";
    template <> inline constexpr auto& name_v<Windows::Foundation::PropertyType> = L"Windows.Foundation.PropertyType";
    template <> inline constexpr auto& name_v<Windows::Foundation::IAsyncAction> = L"Windows.Foundation.IAsyncAction";
    template <typename TProgress> inline constexpr auto name_v<Windows::Foundation::IAsyncActionWithProgress<TProgress>> = zcombine(L"Windows.Foundation.IAsyncActionWithProgress`1<", name_v<TProgress>, L">");
    template <> inline constexpr auto& name_v<Windows::Foundation::IAsyncInfo> = L"Windows.Foundation.IAsyncInfo";
    template <typename TResult, typename TProgress> inline constexpr auto name_v<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> = zcombine(L"Windows.Foundation.IAsyncOperationWithProgress`2<", name_v<TResult>, L", ", name_v<TProgress>, L">");
    template <typename TResult> inline constexpr auto name_v<Windows::Foundation::IAsyncOperation<TResult>> = zcombine(L"Windows.Foundation.IAsyncOperation`1<", name_v<TResult>, L">");
    template <> inline constexpr auto& name_v<Windows::Foundation::IClosable> = L"Windows.Foundation.IClosable";
    template <> inline constexpr auto& name_v<Windows::Foundation::IDeferral> = L"Windows.Foundation.IDeferral";
    template <> inline constexpr auto& name_v<Windows::Foundation::IDeferralFactory> = L"Windows.Foundation.IDeferralFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::IGetActivationFactory> = L"Windows.Foundation.IGetActivationFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::IGuidHelperStatics> = L"Windows.Foundation.IGuidHelperStatics";
    template <> inline constexpr auto& name_v<Windows::Foundation::IMemoryBuffer> = L"Windows.Foundation.IMemoryBuffer";
    template <> inline constexpr auto& name_v<Windows::Foundation::IMemoryBufferFactory> = L"Windows.Foundation.IMemoryBufferFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::IMemoryBufferReference> = L"Windows.Foundation.IMemoryBufferReference";
    template <> inline constexpr auto& name_v<Windows::Foundation::IPropertyValue> = L"Windows.Foundation.IPropertyValue";
    template <> inline constexpr auto& name_v<Windows::Foundation::IPropertyValueStatics> = L"Windows.Foundation.IPropertyValueStatics";
    template <typename T> inline constexpr auto name_v<Windows::Foundation::IReferenceArray<T>> = zcombine(L"Windows.Foundation.IReferenceArray`1<", name_v<T>, L">");
    template <typename T> inline constexpr auto name_v<Windows::Foundation::IReference<T>> = zcombine(L"Windows.Foundation.IReference`1<", name_v<T>, L">");
    template <> inline constexpr auto& name_v<Windows::Foundation::IStringable> = L"Windows.Foundation.IStringable";
    template <> inline constexpr auto& name_v<Windows::Foundation::IUriEscapeStatics> = L"Windows.Foundation.IUriEscapeStatics";
    template <> inline constexpr auto& name_v<Windows::Foundation::IUriRuntimeClass> = L"Windows.Foundation.IUriRuntimeClass";
    template <> inline constexpr auto& name_v<Windows::Foundation::IUriRuntimeClassFactory> = L"Windows.Foundation.IUriRuntimeClassFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri> = L"Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri";
    template <> inline constexpr auto& name_v<Windows::Foundation::IWwwFormUrlDecoderEntry> = L"Windows.Foundation.IWwwFormUrlDecoderEntry";
    template <> inline constexpr auto& name_v<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> = L"Windows.Foundation.IWwwFormUrlDecoderRuntimeClass";
    template <> inline constexpr auto& name_v<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory> = L"Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory";
    template <> inline constexpr auto& name_v<Windows::Foundation::AsyncActionCompletedHandler> = L"Windows.Foundation.AsyncActionCompletedHandler";
    template <typename TProgress> inline constexpr auto name_v<Windows::Foundation::AsyncActionProgressHandler<TProgress>> = zcombine(L"Windows.Foundation.AsyncActionProgressHandler`1<", name_v<TProgress>, L">");
    template <typename TProgress> inline constexpr auto name_v<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>> = zcombine(L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<", name_v<TProgress>, L">");
    template <typename TResult> inline constexpr auto name_v<Windows::Foundation::AsyncOperationCompletedHandler<TResult>> = zcombine(L"Windows.Foundation.AsyncOperationCompletedHandler`1<", name_v<TResult>, L">");
    template <typename TResult, typename TProgress> inline constexpr auto name_v<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>> = zcombine(L"Windows.Foundation.AsyncOperationProgressHandler`2<", name_v<TResult>, L", ", name_v<TProgress>, L">");
    template <typename TResult, typename TProgress> inline constexpr auto name_v<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> = zcombine(L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<", name_v<TResult>, L", ", name_v<TProgress>, L">");
    template <> inline constexpr auto& name_v<Windows::Foundation::DeferralCompletedHandler> = L"Windows.Foundation.DeferralCompletedHandler";
    template <typename T> inline constexpr auto name_v<Windows::Foundation::EventHandler<T>> = zcombine(L"Windows.Foundation.EventHandler`1<", name_v<T>, L">");
    template <typename TSender, typename TResult> inline constexpr auto name_v<Windows::Foundation::TypedEventHandler<TSender, TResult>> = zcombine(L"Windows.Foundation.TypedEventHandler`2<", name_v<TSender>, L", ", name_v<TResult>, L">");
    template <> inline constexpr guid guid_v<Windows::Foundation::IAsyncAction>{ 0x5A648006,0x843A,0x4DA9,{ 0x86,0x5B,0x9D,0x26,0xE5,0xDF,0xAD,0x7B } }; // 5A648006-843A-4DA9-865B-9D26E5DFAD7B
    template <typename TProgress> inline constexpr guid guid_v<Windows::Foundation::IAsyncActionWithProgress<TProgress>>{ pinterface_guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>::value };
    template <typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::IAsyncActionWithProgress<TProgress>>{ 0x1F6DB258,0xE803,0x48A1,{ 0x95,0x46,0xEB,0x73,0x53,0x39,0x88,0x84 } }; // 1F6DB258-E803-48A1-9546-EB7353398884
    template <> inline constexpr guid guid_v<Windows::Foundation::IAsyncInfo>{ 0x00000036,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } }; // 00000036-0000-0000-C000-000000000046
    template <typename TResult, typename TProgress> inline constexpr guid guid_v<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>{ pinterface_guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>::value };
    template <typename TResult, typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>{ 0xB5D036D7,0xE297,0x498F,{ 0xBA,0x60,0x02,0x89,0xE7,0x6E,0x23,0xDD } }; // B5D036D7-E297-498F-BA60-0289E76E23DD
    template <typename TResult> inline constexpr guid guid_v<Windows::Foundation::IAsyncOperation<TResult>>{ pinterface_guid<Windows::Foundation::IAsyncOperation<TResult>>::value };
    template <typename TResult> inline constexpr guid generic_guid_v<Windows::Foundation::IAsyncOperation<TResult>>{ 0x9FC2B0BB,0xE446,0x44E2,{ 0xAA,0x61,0x9C,0xAB,0x8F,0x63,0x6A,0xF2 } }; // 9FC2B0BB-E446-44E2-AA61-9CAB8F636AF2
    template <> inline constexpr guid guid_v<Windows::Foundation::IClosable>{ 0x30D5A829,0x7FA4,0x4026,{ 0x83,0xBB,0xD7,0x5B,0xAE,0x4E,0xA9,0x9E } }; // 30D5A829-7FA4-4026-83BB-D75BAE4EA99E
    template <> inline constexpr guid guid_v<Windows::Foundation::IDeferral>{ 0xD6269732,0x3B7F,0x46A7,{ 0xB4,0x0B,0x4F,0xDC,0xA2,0xA2,0xC6,0x93 } }; // D6269732-3B7F-46A7-B40B-4FDCA2A2C693
    template <> inline constexpr guid guid_v<Windows::Foundation::IDeferralFactory>{ 0x65A1ECC5,0x3FB5,0x4832,{ 0x8C,0xA9,0xF0,0x61,0xB2,0x81,0xD1,0x3A } }; // 65A1ECC5-3FB5-4832-8CA9-F061B281D13A
    template <> inline constexpr guid guid_v<Windows::Foundation::IGetActivationFactory>{ 0x4EDB8EE2,0x96DD,0x49A7,{ 0x94,0xF7,0x46,0x07,0xDD,0xAB,0x8E,0x3C } }; // 4EDB8EE2-96DD-49A7-94F7-4607DDAB8E3C
    template <> inline constexpr guid guid_v<Windows::Foundation::IGuidHelperStatics>{ 0x59C7966B,0xAE52,0x5283,{ 0xAD,0x7F,0xA1,0xB9,0xE9,0x67,0x8A,0xDD } }; // 59C7966B-AE52-5283-AD7F-A1B9E9678ADD
    template <> inline constexpr guid guid_v<Windows::Foundation::IMemoryBuffer>{ 0xFBC4DD2A,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; // FBC4DD2A-245B-11E4-AF98-689423260CF8
    template <> inline constexpr guid guid_v<Windows::Foundation::IMemoryBufferFactory>{ 0xFBC4DD2B,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; // FBC4DD2B-245B-11E4-AF98-689423260CF8
    template <> inline constexpr guid guid_v<Windows::Foundation::IMemoryBufferReference>{ 0xFBC4DD29,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; // FBC4DD29-245B-11E4-AF98-689423260CF8
    template <> inline constexpr guid guid_v<Windows::Foundation::IPropertyValue>{ 0x4BD682DD,0x7554,0x40E9,{ 0x9A,0x9B,0x82,0x65,0x4E,0xDE,0x7E,0x62 } }; // 4BD682DD-7554-40E9-9A9B-82654EDE7E62
    template <> inline constexpr guid guid_v<Windows::Foundation::IPropertyValueStatics>{ 0x629BDBC8,0xD932,0x4FF4,{ 0x96,0xB9,0x8D,0x96,0xC5,0xC1,0xE8,0x58 } }; // 629BDBC8-D932-4FF4-96B9-8D96C5C1E858
    template <typename T> inline constexpr guid guid_v<Windows::Foundation::IReferenceArray<T>>{ pinterface_guid<Windows::Foundation::IReferenceArray<T>>::value };
    template <typename T> inline constexpr guid generic_guid_v<Windows::Foundation::IReferenceArray<T>>{ 0x61C17707,0x2D65,0x11E0,{ 0x9A,0xE8,0xD4,0x85,0x64,0x01,0x54,0x72 } }; // 61C17707-2D65-11E0-9AE8-D48564015472
    template <typename T> inline constexpr guid guid_v<Windows::Foundation::IReference<T>>{ pinterface_guid<Windows::Foundation::IReference<T>>::value };
    template <typename T> inline constexpr guid generic_guid_v<Windows::Foundation::IReference<T>>{ 0x61C17706,0x2D65,0x11E0,{ 0x9A,0xE8,0xD4,0x85,0x64,0x01,0x54,0x72 } }; // 61C17706-2D65-11E0-9AE8-D48564015472
    template <> inline constexpr guid guid_v<Windows::Foundation::IStringable>{ 0x96369F54,0x8EB6,0x48F0,{ 0xAB,0xCE,0xC1,0xB2,0x11,0xE6,0x27,0xC3 } }; // 96369F54-8EB6-48F0-ABCE-C1B211E627C3
    template <> inline constexpr guid guid_v<Windows::Foundation::IUriEscapeStatics>{ 0xC1D432BA,0xC824,0x4452,{ 0xA7,0xFD,0x51,0x2B,0xC3,0xBB,0xE9,0xA1 } }; // C1D432BA-C824-4452-A7FD-512BC3BBE9A1
    template <> inline constexpr guid guid_v<Windows::Foundation::IUriRuntimeClass>{ 0x9E365E57,0x48B2,0x4160,{ 0x95,0x6F,0xC7,0x38,0x51,0x20,0xBB,0xFC } }; // 9E365E57-48B2-4160-956F-C7385120BBFC
    template <> inline constexpr guid guid_v<Windows::Foundation::IUriRuntimeClassFactory>{ 0x44A9796F,0x723E,0x4FDF,{ 0xA2,0x18,0x03,0x3E,0x75,0xB0,0xC0,0x84 } }; // 44A9796F-723E-4FDF-A218-033E75B0C084
    template <> inline constexpr guid guid_v<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ 0x758D9661,0x221C,0x480F,{ 0xA3,0x39,0x50,0x65,0x66,0x73,0xF4,0x6F } }; // 758D9661-221C-480F-A339-50656673F46F
    template <> inline constexpr guid guid_v<Windows::Foundation::IWwwFormUrlDecoderEntry>{ 0x125E7431,0xF678,0x4E8E,{ 0xB6,0x70,0x20,0xA9,0xB0,0x6C,0x51,0x2D } }; // 125E7431-F678-4E8E-B670-20A9B06C512D
    template <> inline constexpr guid guid_v<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ 0xD45A0451,0xF225,0x4542,{ 0x92,0x96,0x0E,0x1D,0xF5,0xD2,0x54,0xDF } }; // D45A0451-F225-4542-9296-0E1DF5D254DF
    template <> inline constexpr guid guid_v<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ 0x5B8C6B3D,0x24AE,0x41B5,{ 0xA1,0xBF,0xF0,0xC3,0xD5,0x44,0x84,0x5B } }; // 5B8C6B3D-24AE-41B5-A1BF-F0C3D544845B
    template <> inline constexpr guid guid_v<Windows::Foundation::AsyncActionCompletedHandler>{ 0xA4ED5C81,0x76C9,0x40BD,{ 0x8B,0xE6,0xB1,0xD9,0x0F,0xB2,0x0A,0xE7 } }; // A4ED5C81-76C9-40BD-8BE6-B1D90FB20AE7
    template <typename TProgress> inline constexpr guid guid_v<Windows::Foundation::AsyncActionProgressHandler<TProgress>>{ pinterface_guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>::value };
    template <typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::AsyncActionProgressHandler<TProgress>>{ 0x6D844858,0x0CFF,0x4590,{ 0xAE,0x89,0x95,0xA5,0xA5,0xC8,0xB4,0xB8 } }; // 6D844858-0CFF-4590-AE89-95A5A5C8B4B8
    template <typename TProgress> inline constexpr guid guid_v<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>{ pinterface_guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>::value };
    template <typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>{ 0x9C029F91,0xCC84,0x44FD,{ 0xAC,0x26,0x0A,0x6C,0x4E,0x55,0x52,0x81 } }; // 9C029F91-CC84-44FD-AC26-0A6C4E555281
    template <typename TResult> inline constexpr guid guid_v<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>{ pinterface_guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>::value };
    template <typename TResult> inline constexpr guid generic_guid_v<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>{ 0xFCDCF02C,0xE5D8,0x4478,{ 0x91,0x5A,0x4D,0x90,0xB7,0x4B,0x83,0xA5 } }; // FCDCF02C-E5D8-4478-915A-4D90B74B83A5
    template <typename TResult, typename TProgress> inline constexpr guid guid_v<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>{ pinterface_guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>::value };
    template <typename TResult, typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>{ 0x55690902,0x0AAB,0x421A,{ 0x87,0x78,0xF8,0xCE,0x50,0x26,0xD7,0x58 } }; // 55690902-0AAB-421A-8778-F8CE5026D758
    template <typename TResult, typename TProgress> inline constexpr guid guid_v<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>{ pinterface_guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>::value };
    template <typename TResult, typename TProgress> inline constexpr guid generic_guid_v<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>{ 0xE85DF41D,0x6AA7,0x46E3,{ 0xA8,0xE2,0xF0,0x09,0xD8,0x40,0xC6,0x27 } }; // E85DF41D-6AA7-46E3-A8E2-F009D840C627
    template <> inline constexpr guid guid_v<Windows::Foundation::DeferralCompletedHandler>{ 0xED32A372,0xF3C8,0x4FAA,{ 0x9C,0xFB,0x47,0x01,0x48,0xDA,0x38,0x88 } }; // ED32A372-F3C8-4FAA-9CFB-470148DA3888
    template <typename T> inline constexpr guid guid_v<Windows::Foundation::EventHandler<T>>{ pinterface_guid<Windows::Foundation::EventHandler<T>>::value };
    template <typename T> inline constexpr guid generic_guid_v<Windows::Foundation::EventHandler<T>>{ 0x9DE1C535,0x6AE1,0x11E0,{ 0x84,0xE1,0x18,0xA9,0x05,0xBC,0xC5,0x3F } }; // 9DE1C535-6AE1-11E0-84E1-18A905BCC53F
    template <typename TSender, typename TResult> inline constexpr guid guid_v<Windows::Foundation::TypedEventHandler<TSender, TResult>>{ pinterface_guid<Windows::Foundation::TypedEventHandler<TSender, TResult>>::value };
    template <typename TSender, typename TResult> inline constexpr guid generic_guid_v<Windows::Foundation::TypedEventHandler<TSender, TResult>>{ 0x9DE1C534,0x6AE1,0x11E0,{ 0x84,0xE1,0x18,0xA9,0x05,0xBC,0xC5,0x3F } }; // 9DE1C534-6AE1-11E0-84E1-18A905BCC53F
    template <> struct default_interface<Windows::Foundation::Deferral>{ using type = Windows::Foundation::IDeferral; };
    template <> struct default_interface<Windows::Foundation::MemoryBuffer>{ using type = Windows::Foundation::IMemoryBuffer; };
    template <> struct default_interface<Windows::Foundation::Uri>{ using type = Windows::Foundation::IUriRuntimeClass; };
    template <> struct default_interface<Windows::Foundation::WwwFormUrlDecoder>{ using type = Windows::Foundation::IWwwFormUrlDecoderRuntimeClass; };
    template <> struct default_interface<Windows::Foundation::WwwFormUrlDecoderEntry>{ using type = Windows::Foundation::IWwwFormUrlDecoderEntry; };
    template <> struct abi<Windows::Foundation::IAsyncAction>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Completed(void*) noexcept = 0;
            virtual int32_t __stdcall get_Completed(void**) noexcept = 0;
            virtual int32_t __stdcall GetResults() noexcept = 0;
        };
    };
    template <typename TProgress> struct abi<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Progress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Progress(void**) noexcept = 0;
            virtual int32_t __stdcall put_Completed(void*) noexcept = 0;
            virtual int32_t __stdcall get_Completed(void**) noexcept = 0;
            virtual int32_t __stdcall GetResults() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IAsyncInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Progress(void*) noexcept = 0;
            virtual int32_t __stdcall get_Progress(void**) noexcept = 0;
            virtual int32_t __stdcall put_Completed(void*) noexcept = 0;
            virtual int32_t __stdcall get_Completed(void**) noexcept = 0;
            virtual int32_t __stdcall GetResults(arg_out<TResult>) noexcept = 0;
        };
    };
    template <typename TResult> struct abi<Windows::Foundation::IAsyncOperation<TResult>>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Completed(void*) noexcept = 0;
            virtual int32_t __stdcall get_Completed(void**) noexcept = 0;
            virtual int32_t __stdcall GetResults(arg_out<TResult>) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IClosable>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Close() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IDeferralFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IGetActivationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetActivationFactory(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IGuidHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNewGuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Empty(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall Equals(winrt::guid const&, winrt::guid const&, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IMemoryBuffer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateReference(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IMemoryBufferFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IMemoryBufferReference>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Capacity(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IPropertyValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Type(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsNumericScalar(bool*) noexcept = 0;
            virtual int32_t __stdcall GetUInt8(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetInt16(int16_t*) noexcept = 0;
            virtual int32_t __stdcall GetUInt16(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall GetInt32(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetUInt32(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetInt64(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetUInt64(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall GetSingle(float*) noexcept = 0;
            virtual int32_t __stdcall GetDouble(double*) noexcept = 0;
            virtual int32_t __stdcall GetChar16(char16_t*) noexcept = 0;
            virtual int32_t __stdcall GetBoolean(bool*) noexcept = 0;
            virtual int32_t __stdcall GetString(void**) noexcept = 0;
            virtual int32_t __stdcall GetGuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall GetDateTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetTimeSpan(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall GetSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall GetRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall GetUInt8Array(uint32_t*, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetInt16Array(uint32_t*, int16_t**) noexcept = 0;
            virtual int32_t __stdcall GetUInt16Array(uint32_t*, uint16_t**) noexcept = 0;
            virtual int32_t __stdcall GetInt32Array(uint32_t*, int32_t**) noexcept = 0;
            virtual int32_t __stdcall GetUInt32Array(uint32_t*, uint32_t**) noexcept = 0;
            virtual int32_t __stdcall GetInt64Array(uint32_t*, int64_t**) noexcept = 0;
            virtual int32_t __stdcall GetUInt64Array(uint32_t*, uint64_t**) noexcept = 0;
            virtual int32_t __stdcall GetSingleArray(uint32_t*, float**) noexcept = 0;
            virtual int32_t __stdcall GetDoubleArray(uint32_t*, double**) noexcept = 0;
            virtual int32_t __stdcall GetChar16Array(uint32_t*, char16_t**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanArray(uint32_t*, bool**) noexcept = 0;
            virtual int32_t __stdcall GetStringArray(uint32_t*, void***) noexcept = 0;
            virtual int32_t __stdcall GetInspectableArray(uint32_t*, void***) noexcept = 0;
            virtual int32_t __stdcall GetGuidArray(uint32_t*, winrt::guid**) noexcept = 0;
            virtual int32_t __stdcall GetDateTimeArray(uint32_t*, int64_t**) noexcept = 0;
            virtual int32_t __stdcall GetTimeSpanArray(uint32_t*, int64_t**) noexcept = 0;
            virtual int32_t __stdcall GetPointArray(uint32_t*, Windows::Foundation::Point**) noexcept = 0;
            virtual int32_t __stdcall GetSizeArray(uint32_t*, Windows::Foundation::Size**) noexcept = 0;
            virtual int32_t __stdcall GetRectArray(uint32_t*, Windows::Foundation::Rect**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IPropertyValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateEmpty(void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt8(uint8_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt16(int16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt16(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt32(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt32(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt64(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt64(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSingle(float, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDouble(double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateChar16(char16_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBoolean(bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInspectable(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateGuid(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDateTime(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTimeSpan(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePoint(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSize(Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall CreateRect(Windows::Foundation::Rect, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt8Array(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt16Array(uint32_t, int16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt16Array(uint32_t, uint16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt32Array(uint32_t, int32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt32Array(uint32_t, uint32_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInt64Array(uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUInt64Array(uint32_t, uint64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSingleArray(uint32_t, float*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDoubleArray(uint32_t, double*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateChar16Array(uint32_t, char16_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBooleanArray(uint32_t, bool*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStringArray(uint32_t, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInspectableArray(uint32_t, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateGuidArray(uint32_t, winrt::guid*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDateTimeArray(uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTimeSpanArray(uint32_t, int64_t*, void**) noexcept = 0;
            virtual int32_t __stdcall CreatePointArray(uint32_t, Windows::Foundation::Point*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateSizeArray(uint32_t, Windows::Foundation::Size*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateRectArray(uint32_t, Windows::Foundation::Rect*, void**) noexcept = 0;
        };
    };
    template <typename T> struct abi<Windows::Foundation::IReferenceArray<T>>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(uint32_t* __winrt_impl_resultSize, T**) noexcept = 0;
        };
    };
    template <typename T> struct abi<Windows::Foundation::IReference<T>>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(arg_out<T>) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IStringable>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToString(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IUriEscapeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnescapeComponent(void*, void**) noexcept = 0;
            virtual int32_t __stdcall EscapeComponent(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IUriRuntimeClass>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Domain(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extension(void**) noexcept = 0;
            virtual int32_t __stdcall get_Fragment(void**) noexcept = 0;
            virtual int32_t __stdcall get_Host(void**) noexcept = 0;
            virtual int32_t __stdcall get_Password(void**) noexcept = 0;
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall get_Query(void**) noexcept = 0;
            virtual int32_t __stdcall get_QueryParsed(void**) noexcept = 0;
            virtual int32_t __stdcall get_RawUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_SchemeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Port(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Suspicious(bool*) noexcept = 0;
            virtual int32_t __stdcall Equals(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall CombineUri(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IUriRuntimeClassFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWithRelativeUri(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AbsoluteCanonicalUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayIri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFirstValueByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWwwFormUrlDecoder(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::AsyncActionCompletedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <typename TProgress> struct abi<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, arg_in<TProgress>) noexcept = 0;
        };
    };
    template <typename TProgress> struct abi<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <typename TResult> struct abi<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, arg_in<TProgress>) noexcept = 0;
        };
    };
    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Foundation::DeferralCompletedHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <typename T> struct abi<Windows::Foundation::EventHandler<T>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, arg_in<T>) noexcept = 0;
        };
    };
    template <typename TSender, typename TResult> struct abi<Windows::Foundation::TypedEventHandler<TSender, TResult>>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(arg_in<TSender>, arg_in<TResult>) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Foundation_IAsyncAction
    {
        WINRT_IMPL_AUTO(void) Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncActionCompletedHandler) Completed() const;
        WINRT_IMPL_AUTO(void) GetResults() const;
        auto get() const;
        auto wait_for(Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <> struct consume<Windows::Foundation::IAsyncAction>
    {
        template <typename D> using type = consume_Windows_Foundation_IAsyncAction<D>;
    };
    template <typename D, typename TProgress>
    struct consume_Windows_Foundation_IAsyncActionWithProgress
    {
        WINRT_IMPL_AUTO(void) Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncActionProgressHandler<TProgress>) Progress() const;
        WINRT_IMPL_AUTO(void) Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>) Completed() const;
        WINRT_IMPL_AUTO(void) GetResults() const;
        auto get() const;
        auto wait_for(Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <typename TProgress> struct consume<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        template <typename D> using type = consume_Windows_Foundation_IAsyncActionWithProgress<D, TProgress>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IAsyncInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
        WINRT_IMPL_AUTO(void) Cancel() const;
        WINRT_IMPL_AUTO(void) Close() const;
    };
    template <> struct consume<Windows::Foundation::IAsyncInfo>
    {
        template <typename D> using type = consume_Windows_Foundation_IAsyncInfo<D>;
    };
    template <typename D, typename TResult, typename TProgress>
    struct consume_Windows_Foundation_IAsyncOperationWithProgress
    {
        WINRT_IMPL_AUTO(void) Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>) Progress() const;
        WINRT_IMPL_AUTO(void) Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>) Completed() const;
        WINRT_IMPL_AUTO(TResult) GetResults() const;
        auto get() const;
        auto wait_for(Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <typename TResult, typename TProgress> struct consume<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        template <typename D> using type = consume_Windows_Foundation_IAsyncOperationWithProgress<D, TResult, TProgress>;
    };
    template <typename D, typename TResult>
    struct consume_Windows_Foundation_IAsyncOperation
    {
        WINRT_IMPL_AUTO(void) Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::AsyncOperationCompletedHandler<TResult>) Completed() const;
        WINRT_IMPL_AUTO(TResult) GetResults() const;
        auto get() const;
        auto wait_for(Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <typename TResult> struct consume<Windows::Foundation::IAsyncOperation<TResult>>
    {
        template <typename D> using type = consume_Windows_Foundation_IAsyncOperation<D, TResult>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IClosable
    {
        WINRT_IMPL_AUTO(void) Close() const;
    };
    template <> struct consume<Windows::Foundation::IClosable>
    {
        template <typename D> using type = consume_Windows_Foundation_IClosable<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::Foundation::IDeferral>
    {
        template <typename D> using type = consume_Windows_Foundation_IDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IDeferralFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) Create(Windows::Foundation::DeferralCompletedHandler const& handler) const;
    };
    template <> struct consume<Windows::Foundation::IDeferralFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_IDeferralFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IGetActivationFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetActivationFactory(param::hstring const& activatableClassId) const;
    };
    template <> struct consume<Windows::Foundation::IGetActivationFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_IGetActivationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IGuidHelperStatics
    {
        WINRT_IMPL_AUTO(winrt::guid) CreateNewGuid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) Empty() const;
        WINRT_IMPL_AUTO(bool) Equals(winrt::guid const& target, winrt::guid const& value) const;
    };
    template <> struct consume<Windows::Foundation::IGuidHelperStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_IGuidHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IMemoryBuffer
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IMemoryBufferReference) CreateReference() const;
    };
    template <> struct consume<Windows::Foundation::IMemoryBuffer>
    {
        template <typename D> using type = consume_Windows_Foundation_IMemoryBuffer<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IMemoryBufferFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::MemoryBuffer) Create(uint32_t capacity) const;
    };
    template <> struct consume<Windows::Foundation::IMemoryBufferFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_IMemoryBufferFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IMemoryBufferReference
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Capacity() const;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::Foundation::IMemoryBufferReference, &impl::abi_t<Windows::Foundation::IMemoryBufferReference>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::Foundation::IMemoryBufferReference>
    {
        template <typename D> using type = consume_Windows_Foundation_IMemoryBufferReference<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IPropertyValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::PropertyType) Type() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsNumericScalar() const;
        WINRT_IMPL_AUTO(uint8_t) GetUInt8() const;
        WINRT_IMPL_AUTO(int16_t) GetInt16() const;
        WINRT_IMPL_AUTO(uint16_t) GetUInt16() const;
        WINRT_IMPL_AUTO(int32_t) GetInt32() const;
        WINRT_IMPL_AUTO(uint32_t) GetUInt32() const;
        WINRT_IMPL_AUTO(int64_t) GetInt64() const;
        WINRT_IMPL_AUTO(uint64_t) GetUInt64() const;
        WINRT_IMPL_AUTO(float) GetSingle() const;
        WINRT_IMPL_AUTO(double) GetDouble() const;
        WINRT_IMPL_AUTO(char16_t) GetChar16() const;
        WINRT_IMPL_AUTO(bool) GetBoolean() const;
        WINRT_IMPL_AUTO(hstring) GetString() const;
        WINRT_IMPL_AUTO(winrt::guid) GetGuid() const;
        WINRT_IMPL_AUTO(Windows::Foundation::DateTime) GetDateTime() const;
        WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) GetTimeSpan() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetPoint() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Size) GetSize() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) GetRect() const;
        WINRT_IMPL_AUTO(void) GetUInt8Array(com_array<uint8_t>& value) const;
        WINRT_IMPL_AUTO(void) GetInt16Array(com_array<int16_t>& value) const;
        WINRT_IMPL_AUTO(void) GetUInt16Array(com_array<uint16_t>& value) const;
        WINRT_IMPL_AUTO(void) GetInt32Array(com_array<int32_t>& value) const;
        WINRT_IMPL_AUTO(void) GetUInt32Array(com_array<uint32_t>& value) const;
        WINRT_IMPL_AUTO(void) GetInt64Array(com_array<int64_t>& value) const;
        WINRT_IMPL_AUTO(void) GetUInt64Array(com_array<uint64_t>& value) const;
        WINRT_IMPL_AUTO(void) GetSingleArray(com_array<float>& value) const;
        WINRT_IMPL_AUTO(void) GetDoubleArray(com_array<double>& value) const;
        WINRT_IMPL_AUTO(void) GetChar16Array(com_array<char16_t>& value) const;
        WINRT_IMPL_AUTO(void) GetBooleanArray(com_array<bool>& value) const;
        WINRT_IMPL_AUTO(void) GetStringArray(com_array<hstring>& value) const;
        WINRT_IMPL_AUTO(void) GetInspectableArray(com_array<Windows::Foundation::IInspectable>& value) const;
        WINRT_IMPL_AUTO(void) GetGuidArray(com_array<winrt::guid>& value) const;
        WINRT_IMPL_AUTO(void) GetDateTimeArray(com_array<Windows::Foundation::DateTime>& value) const;
        WINRT_IMPL_AUTO(void) GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan>& value) const;
        WINRT_IMPL_AUTO(void) GetPointArray(com_array<Windows::Foundation::Point>& value) const;
        WINRT_IMPL_AUTO(void) GetSizeArray(com_array<Windows::Foundation::Size>& value) const;
        WINRT_IMPL_AUTO(void) GetRectArray(com_array<Windows::Foundation::Rect>& value) const;
    };
    template <> struct consume<Windows::Foundation::IPropertyValue>
    {
        template <typename D> using type = consume_Windows_Foundation_IPropertyValue<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IPropertyValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateEmpty() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt8(uint8_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt16(int16_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt16(uint16_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt32(int32_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt32(uint32_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt64(int64_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt64(uint64_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateSingle(float value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateDouble(double value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateChar16(char16_t value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateBoolean(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateString(param::hstring const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInspectable(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateGuid(winrt::guid const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateDateTime(Windows::Foundation::DateTime const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateTimeSpan(Windows::Foundation::TimeSpan const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreatePoint(Windows::Foundation::Point const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateSize(Windows::Foundation::Size const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateRect(Windows::Foundation::Rect const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt8Array(array_view<uint8_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt16Array(array_view<int16_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt16Array(array_view<uint16_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt32Array(array_view<int32_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt32Array(array_view<uint32_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInt64Array(array_view<int64_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateUInt64Array(array_view<uint64_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateSingleArray(array_view<float const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateDoubleArray(array_view<double const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateChar16Array(array_view<char16_t const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateBooleanArray(array_view<bool const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateStringArray(array_view<hstring const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateGuidArray(array_view<winrt::guid const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreatePointArray(array_view<Windows::Foundation::Point const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateSizeArray(array_view<Windows::Foundation::Size const> value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CreateRectArray(array_view<Windows::Foundation::Rect const> value) const;
    };
    template <> struct consume<Windows::Foundation::IPropertyValueStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_IPropertyValueStatics<D>;
    };
    template <typename D, typename T>
    struct consume_Windows_Foundation_IReferenceArray
    {
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<T>) Value() const;
    };
    template <typename T> struct consume<Windows::Foundation::IReferenceArray<T>>
    {
        template <typename D> using type = consume_Windows_Foundation_IReferenceArray<D, T>;
    };
    template <typename D, typename T>
    struct consume_Windows_Foundation_IReference
    {
        [[nodiscard]] WINRT_IMPL_AUTO(T) Value() const;
    };
    template <typename T> struct consume<Windows::Foundation::IReference<T>>
    {
        template <typename D> using type = consume_Windows_Foundation_IReference<D, T>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IStringable
    {
        WINRT_IMPL_AUTO(hstring) ToString() const;
    };
    template <> struct consume<Windows::Foundation::IStringable>
    {
        template <typename D> using type = consume_Windows_Foundation_IStringable<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IUriEscapeStatics
    {
        WINRT_IMPL_AUTO(hstring) UnescapeComponent(param::hstring const& toUnescape) const;
        WINRT_IMPL_AUTO(hstring) EscapeComponent(param::hstring const& toEscape) const;
    };
    template <> struct consume<Windows::Foundation::IUriEscapeStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_IUriEscapeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IUriRuntimeClass
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AbsoluteUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Domain() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Extension() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Fragment() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Host() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Password() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Path() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Query() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::WwwFormUrlDecoder) QueryParsed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RawUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SchemeName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Port() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Suspicious() const;
        WINRT_IMPL_AUTO(bool) Equals(Windows::Foundation::Uri const& pUri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Uri) CombineUri(param::hstring const& relativeUri) const;
    };
    template <> struct consume<Windows::Foundation::IUriRuntimeClass>
    {
        template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClass<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IUriRuntimeClassFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Uri) CreateUri(param::hstring const& uri) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Uri) CreateWithRelativeUri(param::hstring const& baseUri, param::hstring const& relativeUri) const;
    };
    template <> struct consume<Windows::Foundation::IUriRuntimeClassFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClassFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AbsoluteCanonicalUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayIri() const;
    };
    template <> struct consume<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
    {
        template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IWwwFormUrlDecoderEntry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
    };
    template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderEntry>
    {
        template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderEntry<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass
    {
        WINRT_IMPL_AUTO(hstring) GetFirstValueByName(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>
    {
        template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<D>;
    };
    template <typename D>
    struct consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClassFactory
    {
        WINRT_IMPL_AUTO(Windows::Foundation::WwwFormUrlDecoder) CreateWwwFormUrlDecoder(param::hstring const& query) const;
    };
    template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>
    {
        template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClassFactory<D>;
    };
}
#endif
