// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataTasks_0_H
#define WINRT_Windows_ApplicationModel_UserDataTasks_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks
{
    enum class UserDataTaskDaysOfWeek : uint32_t
    {
        None = 0,
        Sunday = 0x1,
        Monday = 0x2,
        Tuesday = 0x4,
        Wednesday = 0x8,
        Thursday = 0x10,
        Friday = 0x20,
        Saturday = 0x40,
    };
    enum class UserDataTaskDetailsKind : int32_t
    {
        PlainText = 0,
        Html = 1,
    };
    enum class UserDataTaskKind : int32_t
    {
        Single = 0,
        Recurring = 1,
        Regenerating = 2,
    };
    enum class UserDataTaskListOtherAppReadAccess : int32_t
    {
        Full = 0,
        SystemOnly = 1,
        None = 2,
    };
    enum class UserDataTaskListOtherAppWriteAccess : int32_t
    {
        Limited = 0,
        None = 1,
    };
    enum class UserDataTaskListSyncStatus : int32_t
    {
        Idle = 0,
        Syncing = 1,
        UpToDate = 2,
        AuthenticationError = 3,
        PolicyError = 4,
        UnknownError = 5,
    };
    enum class UserDataTaskPriority : int32_t
    {
        Normal = 0,
        Low = -1,
        High = 1,
    };
    enum class UserDataTaskQueryKind : int32_t
    {
        All = 0,
        Incomplete = 1,
        Complete = 2,
    };
    enum class UserDataTaskQuerySortProperty : int32_t
    {
        DueDate = 0,
    };
    enum class UserDataTaskRecurrenceUnit : int32_t
    {
        Daily = 0,
        Weekly = 1,
        Monthly = 2,
        MonthlyOnDay = 3,
        Yearly = 4,
        YearlyOnDay = 5,
    };
    enum class UserDataTaskRegenerationUnit : int32_t
    {
        Daily = 0,
        Weekly = 1,
        Monthly = 2,
        Yearly = 4,
    };
    enum class UserDataTaskSensitivity : int32_t
    {
        Public = 0,
        Private = 1,
    };
    enum class UserDataTaskStoreAccessType : int32_t
    {
        AppTasksReadWrite = 0,
        AllTasksLimitedReadWrite = 1,
    };
    enum class UserDataTaskWeekOfMonth : int32_t
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        Last = 4,
    };
    struct IUserDataTask;
    struct IUserDataTaskBatch;
    struct IUserDataTaskList;
    struct IUserDataTaskListLimitedWriteOperations;
    struct IUserDataTaskListSyncManager;
    struct IUserDataTaskManager;
    struct IUserDataTaskManagerStatics;
    struct IUserDataTaskQueryOptions;
    struct IUserDataTaskReader;
    struct IUserDataTaskRecurrenceProperties;
    struct IUserDataTaskRegenerationProperties;
    struct IUserDataTaskStore;
    struct UserDataTask;
    struct UserDataTaskBatch;
    struct UserDataTaskList;
    struct UserDataTaskListLimitedWriteOperations;
    struct UserDataTaskListSyncManager;
    struct UserDataTaskManager;
    struct UserDataTaskQueryOptions;
    struct UserDataTaskReader;
    struct UserDataTaskRecurrenceProperties;
    struct UserDataTaskRegenerationProperties;
    struct UserDataTaskStore;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTask>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTask> = L"Windows.ApplicationModel.UserDataTasks.UserDataTask";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskBatch";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskList";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListLimitedWriteOperations";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryOptions";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStore";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskDaysOfWeek";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskDetailsKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListOtherAppReadAccess";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListOtherAppWriteAccess";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskPriority";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQuerySortProperty";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceUnit";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationUnit";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskSensitivity";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStoreAccessType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> = L"Windows.ApplicationModel.UserDataTasks.UserDataTaskWeekOfMonth";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTask> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTask";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskBatch";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskList";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListLimitedWriteOperations";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListSyncManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskQueryOptions";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskReader";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRecurrenceProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRegenerationProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore> = L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskStore";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ 0x7C6585D1,0xE0D4,0x4F99,{ 0xAE,0xE2,0xBC,0x2D,0x5D,0xDA,0xDF,0x4C } }; // 7C6585D1-E0D4-4F99-AEE2-BC2D5DDADF4C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ 0x382DA5FE,0x20B5,0x431C,{ 0x8F,0x42,0xA5,0xD2,0x92,0xEC,0x93,0x0C } }; // 382DA5FE-20B5-431C-8F42-A5D292EC930C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ 0x49412E39,0x7C1D,0x4DF1,{ 0xBE,0xD3,0x31,0x4B,0x7C,0xBF,0x5E,0x4E } }; // 49412E39-7C1D-4DF1-BED3-314B7CBF5E4E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ 0x7AA267F2,0x6078,0x4183,{ 0x91,0x9E,0x4F,0x29,0xF1,0x9C,0xFA,0xE9 } }; // 7AA267F2-6078-4183-919E-4F29F19CFAE9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ 0x8E591A95,0x1DCF,0x469F,{ 0x93,0xEC,0xBA,0x48,0xBB,0x55,0x3C,0x6B } }; // 8E591A95-1DCF-469F-93EC-BA48BB553C6B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ 0x8451C914,0xE60B,0x48A9,{ 0x92,0x11,0x7F,0xB8,0xA5,0x6C,0xB8,0x4C } }; // 8451C914-E60B-48A9-9211-7FB8A56CB84C
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ 0xB35539F8,0xC502,0x47FC,{ 0xA8,0x1E,0x10,0x08,0x83,0x71,0x9D,0x55 } }; // B35539F8-C502-47FC-A81E-100883719D55
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ 0x959F27ED,0x909A,0x4D30,{ 0x8C,0x1B,0x33,0x1D,0x8F,0xE6,0x67,0xE2 } }; // 959F27ED-909A-4D30-8C1B-331D8FE667E2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ 0x03E688B1,0x4CCF,0x4500,{ 0x88,0x3B,0xE7,0x62,0x90,0xCF,0xED,0x63 } }; // 03E688B1-4CCF-4500-883B-E76290CFED63
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ 0x73DF80B0,0x27C6,0x40CE,{ 0xB1,0x49,0x9C,0xD4,0x14,0x85,0xA6,0x9E } }; // 73DF80B0-27C6-40CE-B149-9CD41485A69E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ 0x92AB0007,0x090E,0x4704,{ 0xBB,0x5C,0x84,0xFC,0x0B,0x0D,0x9C,0x31 } }; // 92AB0007-090E-4704-BB5C-84FC0B0D9C31
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ 0xF06A9CB0,0xF1DB,0x45BA,{ 0x8A,0x62,0x08,0x60,0x04,0xC0,0x21,0x3D } }; // F06A9CB0-F1DB-45BA-8A62-086004C0213D
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTask>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTask; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskList; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties; };
    template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore; };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListId(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteId(void**) noexcept = 0;
            virtual int32_t __stdcall put_RemoteId(void*) noexcept = 0;
            virtual int32_t __stdcall get_CompletedDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompletedDate(void*) noexcept = 0;
            virtual int32_t __stdcall get_Details(void**) noexcept = 0;
            virtual int32_t __stdcall put_Details(void*) noexcept = 0;
            virtual int32_t __stdcall get_DetailsKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DetailsKind(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DueDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_DueDate(void*) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Priority(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Priority(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RecurrenceProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_RecurrenceProperties(void*) noexcept = 0;
            virtual int32_t __stdcall get_RegenerationProperties(void**) noexcept = 0;
            virtual int32_t __stdcall put_RegenerationProperties(void*) noexcept = 0;
            virtual int32_t __stdcall get_Reminder(void**) noexcept = 0;
            virtual int32_t __stdcall put_Reminder(void*) noexcept = 0;
            virtual int32_t __stdcall get_Sensitivity(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Sensitivity(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartDate(void**) noexcept = 0;
            virtual int32_t __stdcall put_StartDate(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tasks(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SourceDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppReadAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppReadAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_OtherAppWriteAccess(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_OtherAppWriteAccess(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_LimitedWriteOperations(void**) noexcept = 0;
            virtual int32_t __stdcall get_SyncManager(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterSyncManagerAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetTaskReader(void**) noexcept = 0;
            virtual int32_t __stdcall GetTaskReaderWithOptions(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SaveTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCompleteTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryCreateOrUpdateTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryDeleteTaskAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySkipOccurrenceAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LastAttemptedSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastAttemptedSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_LastSuccessfulSyncTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_LastSuccessfulSyncTime(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Status(int32_t) noexcept = 0;
            virtual int32_t __stdcall SyncAsync(void**) noexcept = 0;
            virtual int32_t __stdcall add_SyncStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SyncStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestStoreAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SortProperty(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SortProperty(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReadBatchAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Unit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(void**) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(void*) noexcept = 0;
            virtual int32_t __stdcall get_Until(void**) noexcept = 0;
            virtual int32_t __stdcall put_Until(void*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DaysOfWeek(void**) noexcept = 0;
            virtual int32_t __stdcall put_DaysOfWeek(void*) noexcept = 0;
            virtual int32_t __stdcall get_WeekOfMonth(void**) noexcept = 0;
            virtual int32_t __stdcall put_WeekOfMonth(void*) noexcept = 0;
            virtual int32_t __stdcall get_Month(void**) noexcept = 0;
            virtual int32_t __stdcall put_Month(void*) noexcept = 0;
            virtual int32_t __stdcall get_Day(void**) noexcept = 0;
            virtual int32_t __stdcall put_Day(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Unit(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Occurrences(void**) noexcept = 0;
            virtual int32_t __stdcall put_Occurrences(void*) noexcept = 0;
            virtual int32_t __stdcall get_Until(void**) noexcept = 0;
            virtual int32_t __stdcall put_Until(void*) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateListAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateListInAccountAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindListsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetListAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ListId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RemoteId() const;
        WINRT_IMPL_AUTO(void) RemoteId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) CompletedDate() const;
        WINRT_IMPL_AUTO(void) CompletedDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Details() const;
        WINRT_IMPL_AUTO(void) Details(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind) DetailsKind() const;
        WINRT_IMPL_AUTO(void) DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) DueDate() const;
        WINRT_IMPL_AUTO(void) DueDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority) Priority() const;
        WINRT_IMPL_AUTO(void) Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties) RecurrenceProperties() const;
        WINRT_IMPL_AUTO(void) RecurrenceProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties) RegenerationProperties() const;
        WINRT_IMPL_AUTO(void) RegenerationProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Reminder() const;
        WINRT_IMPL_AUTO(void) Reminder(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity) Sensitivity() const;
        WINRT_IMPL_AUTO(void) Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        WINRT_IMPL_AUTO(void) Subject(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) StartDate() const;
        WINRT_IMPL_AUTO(void) StartDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTask>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask>) Tasks() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserDataAccountId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SourceDisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess) OtherAppReadAccess() const;
        WINRT_IMPL_AUTO(void) OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess) OtherAppWriteAccess() const;
        WINRT_IMPL_AUTO(void) OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations) LimitedWriteOperations() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager) SyncManager() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) RegisterSyncManagerAsync() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskReader) GetTaskReader() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskReader) GetTaskReader(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask>) GetTaskAsync(param::hstring const& userDataTask) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteTaskAsync(param::hstring const& userDataTaskId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) DeleteAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) TryCompleteTaskAsync(param::hstring const& userDataTaskId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryCreateOrUpdateTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryDeleteTaskAsync(param::hstring const& userDataTaskId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySkipOccurrenceAsync(param::hstring const& userDataTaskId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) LastAttemptedSyncTime() const;
        WINRT_IMPL_AUTO(void) LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) LastSuccessfulSyncTime() const;
        WINRT_IMPL_AUTO(void) LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus) Status() const;
        WINRT_IMPL_AUTO(void) Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) SyncAsync() const;
        WINRT_IMPL_AUTO(winrt::event_token) SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        using SyncStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager, &impl::abi_t<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>::remove_SyncStatusChanged>;
        [[nodiscard]] SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SyncStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>) RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType const& accessType) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::User) User() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskManager) GetDefault() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskManager) GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty) SortProperty() const;
        WINRT_IMPL_AUTO(void) SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind) Kind() const;
        WINRT_IMPL_AUTO(void) Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>) ReadBatchAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit) Unit() const;
        WINRT_IMPL_AUTO(void) Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) Occurrences() const;
        WINRT_IMPL_AUTO(void) Occurrences(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Until() const;
        WINRT_IMPL_AUTO(void) Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Interval() const;
        WINRT_IMPL_AUTO(void) Interval(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>) DaysOfWeek() const;
        WINRT_IMPL_AUTO(void) DaysOfWeek(Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>) WeekOfMonth() const;
        WINRT_IMPL_AUTO(void) WeekOfMonth(Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) Month() const;
        WINRT_IMPL_AUTO(void) Month(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) Day() const;
        WINRT_IMPL_AUTO(void) Day(Windows::Foundation::IReference<int32_t> const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit) Unit() const;
        WINRT_IMPL_AUTO(void) Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) Occurrences() const;
        WINRT_IMPL_AUTO(void) Occurrences(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) Until() const;
        WINRT_IMPL_AUTO(void) Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Interval() const;
        WINRT_IMPL_AUTO(void) Interval(int32_t value) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>) CreateListAsync(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>) CreateListAsync(param::hstring const& name, param::hstring const& userDataAccountId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>>) FindListsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>) GetListAsync(param::hstring const& taskListId) const;
    };
    template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>;
    };
}
#endif
