/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfiotarget.h

Abstract:

    Interfaces for WDF IO Targets

Environment:

    kernel mode only

Revision History:

--*/

#ifndef _WDFIOTARGET_1_9_H_
#define _WDFIOTARGET_1_9_H_



#if (NTDDI_VERSION >= NTDDI_WIN2K)

typedef enum _WDF_IO_TARGET_STATE {
    WdfIoTargetStateUndefined = 0,
    WdfIoTargetStarted,
    WdfIoTargetStopped,
    WdfIoTargetClosedForQueryRemove,
    WdfIoTargetClosed,
    WdfIoTargetDeleted,
} WDF_IO_TARGET_STATE, *PWDF_IO_TARGET_STATE;

typedef enum _WDF_IO_TARGET_OPEN_TYPE {
    WdfIoTargetOpenUndefined = 0,
    WdfIoTargetOpenUseExistingDevice = 1,
    WdfIoTargetOpenByName = 2,
    WdfIoTargetOpenReopen = 3,
} WDF_IO_TARGET_OPEN_TYPE;

typedef enum _WDF_IO_TARGET_SENT_IO_ACTION {
    WdfIoTargetSentIoUndefined = 0,
    WdfIoTargetCancelSentIo,
    WdfIoTargetWaitForSentIoToComplete,
    WdfIoTargetLeaveSentIoPending,
} WDF_IO_TARGET_SENT_IO_ACTION;



typedef
_Function_class_(EVT_WDF_IO_TARGET_QUERY_REMOVE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_WDF_IO_TARGET_QUERY_REMOVE(
    _In_
    WDFIOTARGET IoTarget
    );

typedef EVT_WDF_IO_TARGET_QUERY_REMOVE *PFN_WDF_IO_TARGET_QUERY_REMOVE;

typedef
_Function_class_(EVT_WDF_IO_TARGET_REMOVE_CANCELED)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_IO_TARGET_REMOVE_CANCELED(
    _In_
    WDFIOTARGET IoTarget
    );

typedef EVT_WDF_IO_TARGET_REMOVE_CANCELED *PFN_WDF_IO_TARGET_REMOVE_CANCELED;

typedef
_Function_class_(EVT_WDF_IO_TARGET_REMOVE_COMPLETE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_WDF_IO_TARGET_REMOVE_COMPLETE(
    _In_
    WDFIOTARGET IoTarget
    );

typedef EVT_WDF_IO_TARGET_REMOVE_COMPLETE *PFN_WDF_IO_TARGET_REMOVE_COMPLETE;

typedef struct _WDF_IO_TARGET_OPEN_PARAMS {
    //
    // Size of this structure in bytes
    //
    ULONG Size;

    //
    // Indicates which fields of this structure are going to be used in
    // creating the WDFIOTARGET.
    //
    WDF_IO_TARGET_OPEN_TYPE Type;

    //
    // Notification when the target is being queried for removal.
    // If !NT_SUCCESS is returned, the query will fail and the target will
    // remain opened.
    //
    PFN_WDF_IO_TARGET_QUERY_REMOVE EvtIoTargetQueryRemove;

    //
    // The previous query remove has been canceled and the target can now be
    // reopened.
    //
    PFN_WDF_IO_TARGET_REMOVE_CANCELED EvtIoTargetRemoveCanceled;

    //
    // The query remove has succeeded and the target is now removed from the
    // system.
    //
    PFN_WDF_IO_TARGET_REMOVE_COMPLETE EvtIoTargetRemoveComplete;


    // ========== WdfIoTargetOpenUseExistingDevice begin ==========
    //
    // The device object to send requests to
    //
    PDEVICE_OBJECT TargetDeviceObject;

    //
    // File object representing the TargetDeviceObject.  The PFILE_OBJECT will
    // be passed as a parameter in all requests sent to the resulting
    // WDFIOTARGET.
    //
    PFILE_OBJECT TargetFileObject;
    // ========== WdfIoTargetOpenUseExistingDevice end ==========

    // ========== WdfIoTargetOpenByName begin ==========
    //
    // Name of the device to open.
    //
    UNICODE_STRING TargetDeviceName;

    //
    // The access desired on the device being opened up, ie WDM FILE_XXX_ACCESS
    // such as FILE_ANY_ACCESS, FILE_SPECIAL_ACCESS, FILE_READ_ACCESS, or
    // FILE_WRITE_ACCESS or you can use values such as GENERIC_READ,
    // GENERIC_WRITE, or GENERIC_ALL.
    //
    ACCESS_MASK DesiredAccess;

    //
    // Share access desired on the target being opened, ie WDM FILE_SHARE_XXX
    // values such as FILE_SHARE_READ, FILE_SHARE_WRITE, FILE_SHARE_DELETE.
    //
    // A zero value means exclusive access to the target.
    //
    ULONG ShareAccess;

    //
    // File  attributes, see ZwCreateFile in the DDK for a list of valid
    // values and their meaning.
    //
    ULONG FileAttributes;

    //
    // Create disposition, see ZwCreateFile in the DDK for a list of valid
    // values and their meaning.
    //
    ULONG CreateDisposition;

    //
    // Options for opening the device, see CreateOptions for ZwCreateFile in the
    // DDK for a list of valid values and their meaning.
    //
    ULONG CreateOptions;

    PVOID EaBuffer;

    ULONG EaBufferLength;

    PLONGLONG AllocationSize;

    // ========== WdfIoTargetOpenByName end ==========

    //
    // On return for a create by name, this will contain one of the following
    // values:  FILE_CREATED, FILE_OPENED, FILE_OVERWRITTEN, FILE_SUPERSEDED,
    //          FILE_EXISTS, FILE_DOES_NOT_EXIST
    //
    ULONG FileInformation;

} WDF_IO_TARGET_OPEN_PARAMS, *PWDF_IO_TARGET_OPEN_PARAMS;

VOID
FORCEINLINE
WDF_IO_TARGET_OPEN_PARAMS_INIT_EXISTING_DEVICE(
    _Out_ PWDF_IO_TARGET_OPEN_PARAMS Params,
    _In_ PDEVICE_OBJECT DeviceObject
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));

    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenUseExistingDevice;

    Params->TargetDeviceObject = DeviceObject;
}

VOID
FORCEINLINE
WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(
    _Out_ PWDF_IO_TARGET_OPEN_PARAMS Params,
    _In_ PCUNICODE_STRING TargetDeviceName,
    _In_ ACCESS_MASK DesiredAccess
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));

    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenByName;

    RtlCopyMemory(&Params->TargetDeviceName,
                  TargetDeviceName,
                  sizeof(UNICODE_STRING));
    Params->DesiredAccess = DesiredAccess;
    Params->CreateOptions = FILE_NON_DIRECTORY_FILE;
}

VOID
FORCEINLINE
WDF_IO_TARGET_OPEN_PARAMS_INIT_OPEN_BY_NAME(
    _Out_ PWDF_IO_TARGET_OPEN_PARAMS Params,
    _In_ PCUNICODE_STRING TargetDeviceName,
    _In_ ACCESS_MASK DesiredAccess
    )
{
    WDF_IO_TARGET_OPEN_PARAMS_INIT_CREATE_BY_NAME(Params,
                                                  TargetDeviceName,
                                                  DesiredAccess);
    Params->CreateDisposition = FILE_OPEN;
}

VOID
FORCEINLINE
WDF_IO_TARGET_OPEN_PARAMS_INIT_REOPEN(
    _Out_ PWDF_IO_TARGET_OPEN_PARAMS Params
    )
{
    RtlZeroMemory(Params, sizeof(WDF_IO_TARGET_OPEN_PARAMS));

    Params->Size = sizeof(WDF_IO_TARGET_OPEN_PARAMS);
    Params->Type = WdfIoTargetOpenReopen;
}

//
// WDF Function: WdfIoTargetCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETCREATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFDEVICE Device,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
    _Out_
    WDFIOTARGET* IoTarget
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetCreate(
    _In_
    WDFDEVICE Device,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES IoTargetAttributes,
    _Out_
    WDFIOTARGET* IoTarget
    )
{
    return ((PFN_WDFIOTARGETCREATE) WdfFunctions[WdfIoTargetCreateTableIndex])(WdfDriverGlobals, Device, IoTargetAttributes, IoTarget);
}

//
// WDF Function: WdfIoTargetOpen
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETOPEN)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetOpen(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    PWDF_IO_TARGET_OPEN_PARAMS OpenParams
    )
{
    return ((PFN_WDFIOTARGETOPEN) WdfFunctions[WdfIoTargetOpenTableIndex])(WdfDriverGlobals, IoTarget, OpenParams);
}

//
// WDF Function: WdfIoTargetCloseForQueryRemove
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFIOTARGETCLOSEFORQUERYREMOVE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfIoTargetCloseForQueryRemove(
    _In_
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSEFORQUERYREMOVE) WdfFunctions[WdfIoTargetCloseForQueryRemoveTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetClose
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
VOID
(*PFN_WDFIOTARGETCLOSE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FORCEINLINE
WdfIoTargetClose(
    _In_
    WDFIOTARGET IoTarget
    )
{
    ((PFN_WDFIOTARGETCLOSE) WdfFunctions[WdfIoTargetCloseTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetStart
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSTART)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetStart(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETSTART) WdfFunctions[WdfIoTargetStartTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetStop
//
typedef
_When_(Action == 2, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Action == 0 || Action == 1, _IRQL_requires_max_(PASSIVE_LEVEL))
WDFAPI
VOID
(*PFN_WDFIOTARGETSTOP)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    _Strict_type_match_
    WDF_IO_TARGET_SENT_IO_ACTION Action
    );

_When_(Action == 2, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Action == 0 || Action == 1, _IRQL_requires_max_(PASSIVE_LEVEL))
VOID
FORCEINLINE
WdfIoTargetStop(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    _Strict_type_match_
    WDF_IO_TARGET_SENT_IO_ACTION Action
    )
{
    ((PFN_WDFIOTARGETSTOP) WdfFunctions[WdfIoTargetStopTableIndex])(WdfDriverGlobals, IoTarget, Action);
}

//
// WDF Function: WdfIoTargetGetState
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDF_IO_TARGET_STATE
(*PFN_WDFIOTARGETGETSTATE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDF_IO_TARGET_STATE
FORCEINLINE
WdfIoTargetGetState(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETSTATE) WdfFunctions[WdfIoTargetGetStateTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetGetDevice
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
WDFDEVICE
(*PFN_WDFIOTARGETGETDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
WDFDEVICE
FORCEINLINE
WdfIoTargetGetDevice(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETGETDEVICE) WdfFunctions[WdfIoTargetGetDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetQueryTargetProperty
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETQUERYTARGETPROPERTY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    ULONG BufferLength,
    _When_(BufferLength != 0, _Out_writes_bytes_to_opt_(BufferLength, *ResultLength))
    _When_(BufferLength == 0, _Out_opt_)
    PVOID PropertyBuffer,
    _Deref_out_range_(<=,BufferLength)
    PULONG ResultLength
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetQueryTargetProperty(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    ULONG BufferLength,
    _When_(BufferLength != 0, _Out_writes_bytes_to_opt_(BufferLength, *ResultLength))
    _When_(BufferLength == 0, _Out_opt_)
    PVOID PropertyBuffer,
    _Deref_out_range_(<=,BufferLength)
    PULONG ResultLength
    )
{
    return ((PFN_WDFIOTARGETQUERYTARGETPROPERTY) WdfFunctions[WdfIoTargetQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}

//
// WDF Function: WdfIoTargetAllocAndQueryTargetProperty
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    _Strict_type_match_
    POOL_TYPE PoolType,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    _Out_
    WDFMEMORY* PropertyMemory
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetAllocAndQueryTargetProperty(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    DEVICE_REGISTRY_PROPERTY DeviceProperty,
    _In_
    _Strict_type_match_
    POOL_TYPE PoolType,
    _In_opt_
    PWDF_OBJECT_ATTRIBUTES PropertyMemoryAttributes,
    _Out_
    WDFMEMORY* PropertyMemory
    )
{
    return ((PFN_WDFIOTARGETALLOCANDQUERYTARGETPROPERTY) WdfFunctions[WdfIoTargetAllocAndQueryTargetPropertyTableIndex])(WdfDriverGlobals, IoTarget, DeviceProperty, PoolType, PropertyMemoryAttributes, PropertyMemory);
}

//
// WDF Function: WdfIoTargetQueryForInterface
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETQUERYFORINTERFACE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    LPCGUID InterfaceType,
    _Out_
    PINTERFACE Interface,
    _In_
    USHORT Size,
    _In_
    USHORT Version,
    _In_opt_
    PVOID InterfaceSpecificData
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetQueryForInterface(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    LPCGUID InterfaceType,
    _Out_
    PINTERFACE Interface,
    _In_
    USHORT Size,
    _In_
    USHORT Version,
    _In_opt_
    PVOID InterfaceSpecificData
    )
{
    return ((PFN_WDFIOTARGETQUERYFORINTERFACE) WdfFunctions[WdfIoTargetQueryForInterfaceTableIndex])(WdfDriverGlobals, IoTarget, InterfaceType, Interface, Size, Version, InterfaceSpecificData);
}

//
// WDF Function: WdfIoTargetWdmGetTargetDeviceObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDEVICE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDEVICE_OBJECT
FORCEINLINE
WdfIoTargetWdmGetTargetDeviceObject(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETDEVICEOBJECT) WdfFunctions[WdfIoTargetWdmGetTargetDeviceObjectTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetWdmGetTargetPhysicalDevice
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PDEVICE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PDEVICE_OBJECT
FORCEINLINE
WdfIoTargetWdmGetTargetPhysicalDevice(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETPHYSICALDEVICE) WdfFunctions[WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetWdmGetTargetFileObject
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
PFILE_OBJECT
(*PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
PFILE_OBJECT
FORCEINLINE
WdfIoTargetWdmGetTargetFileObject(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEOBJECT) WdfFunctions[WdfIoTargetWdmGetTargetFileObjectTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetWdmGetTargetFileHandle
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
HANDLE
(*PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
HANDLE
FORCEINLINE
WdfIoTargetWdmGetTargetFileHandle(
    _In_
    WDFIOTARGET IoTarget
    )
{
    return ((PFN_WDFIOTARGETWDMGETTARGETFILEHANDLE) WdfFunctions[WdfIoTargetWdmGetTargetFileHandleTableIndex])(WdfDriverGlobals, IoTarget);
}

//
// WDF Function: WdfIoTargetSendReadSynchronously
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PLONGLONG DeviceOffset,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesRead
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetSendReadSynchronously(
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PLONGLONG DeviceOffset,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesRead
    )
{
    return ((PFN_WDFIOTARGETSENDREADSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendReadSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, DeviceOffset, RequestOptions, BytesRead);
}

//
// WDF Function: WdfIoTargetFormatRequestForRead
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORREAD)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset,
    _In_opt_
    PLONGLONG DeviceOffset
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetFormatRequestForRead(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset,
    _In_opt_
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORREAD) WdfFunctions[WdfIoTargetFormatRequestForReadTableIndex])(WdfDriverGlobals, IoTarget, Request, OutputBuffer, OutputBufferOffset, DeviceOffset);
}

//
// WDF Function: WdfIoTargetSendWriteSynchronously
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PLONGLONG DeviceOffset,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesWritten
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetSendWriteSynchronously(
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PLONGLONG DeviceOffset,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesWritten
    )
{
    return ((PFN_WDFIOTARGETSENDWRITESYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendWriteSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, DeviceOffset, RequestOptions, BytesWritten);
}

//
// WDF Function: WdfIoTargetFormatRequestForWrite
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORWRITE)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    PLONGLONG DeviceOffset
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetFormatRequestForWrite(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    PLONGLONG DeviceOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORWRITE) WdfFunctions[WdfIoTargetFormatRequestForWriteTableIndex])(WdfDriverGlobals, IoTarget, Request, InputBuffer, InputBufferOffset, DeviceOffset);
}

//
// WDF Function: WdfIoTargetSendIoctlSynchronously
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetSendIoctlSynchronously(
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDIOCTLSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}

//
// WDF Function: WdfIoTargetFormatRequestForIoctl
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORIOCTL)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetFormatRequestForIoctl(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORIOCTL) WdfFunctions[WdfIoTargetFormatRequestForIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}

//
// WDF Function: WdfIoTargetSendInternalIoctlSynchronously
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetSendInternalIoctlSynchronously(
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    _In_
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR InputBuffer,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OutputBuffer,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendInternalIoctlSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, OutputBuffer, RequestOptions, BytesReturned);
}

//
// WDF Function: WdfIoTargetFormatRequestForInternalIoctl
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetFormatRequestForInternalIoctl(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY InputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET InputBufferOffset,
    _In_opt_
    WDFMEMORY OutputBuffer,
    _In_opt_
    PWDFMEMORY_OFFSET OutputBufferOffset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTL) WdfFunctions[WdfIoTargetFormatRequestForInternalIoctlTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, InputBuffer, InputBufferOffset, OutputBuffer, OutputBufferOffset);
}

//
// WDF Function: WdfIoTargetSendInternalIoctlOthersSynchronously
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetSendInternalIoctlOthersSynchronously(
    _In_
    WDFIOTARGET IoTarget,
    _In_opt_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg1,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg2,
    _In_opt_
    PWDF_MEMORY_DESCRIPTOR OtherArg4,
    _In_opt_
    PWDF_REQUEST_SEND_OPTIONS RequestOptions,
    _Out_opt_
    PULONG_PTR BytesReturned
    )
{
    return ((PFN_WDFIOTARGETSENDINTERNALIOCTLOTHERSSYNCHRONOUSLY) WdfFunctions[WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg2, OtherArg4, RequestOptions, BytesReturned);
}

//
// WDF Function: WdfIoTargetFormatRequestForInternalIoctlOthers
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
WDFAPI
NTSTATUS
(*PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY OtherArg1,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg1Offset,
    _In_opt_
    WDFMEMORY OtherArg2,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg2Offset,
    _In_opt_
    WDFMEMORY OtherArg4,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg4Offset
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
FORCEINLINE
WdfIoTargetFormatRequestForInternalIoctlOthers(
    _In_
    WDFIOTARGET IoTarget,
    _In_
    WDFREQUEST Request,
    ULONG IoctlCode,
    _In_opt_
    WDFMEMORY OtherArg1,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg1Offset,
    _In_opt_
    WDFMEMORY OtherArg2,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg2Offset,
    _In_opt_
    WDFMEMORY OtherArg4,
    _In_opt_
    PWDFMEMORY_OFFSET OtherArg4Offset
    )
{
    return ((PFN_WDFIOTARGETFORMATREQUESTFORINTERNALIOCTLOTHERS) WdfFunctions[WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex])(WdfDriverGlobals, IoTarget, Request, IoctlCode, OtherArg1, OtherArg1Offset, OtherArg2, OtherArg2Offset, OtherArg4, OtherArg4Offset);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#endif // _WDFIOTARGET_1_9_H_
