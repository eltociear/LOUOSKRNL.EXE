// Copyright (C) Microsoft Corporation. All rights reserved.

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _NETTXQUEUE_2_1_H_
#define _NETTXQUEUE_2_1_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START




#include <NetPacketQueue.h>


struct _NETTXQUEUE_INIT;
typedef struct _NETTXQUEUE_INIT NETTXQUEUE_INIT;


inline
void
NET_TX_QUEUE_CONFIG_INIT_EXECUTION_CONTEXT(
    _Out_ NET_PACKET_QUEUE_CONFIG * Config,
    _In_ NETEXECUTIONCONTEXT ExecutionContext,
    _In_  PFN_PACKET_QUEUE_ADVANCE EvtAdvance
)
{
    NET_PACKET_QUEUE_CONFIG_INIT(Config, EvtAdvance, NULL, NULL);
    Config->ExecutionContext = ExecutionContext;
}

//
// NET Function: NetTxQueueCreate
//
typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(NTAPI *PFN_NETTXQUEUECREATE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _Inout_
    NETTXQUEUE_INIT* NetTxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* TxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    );

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
NTSTATUS
NetTxQueueCreate(
    _Inout_
    NETTXQUEUE_INIT* NetTxQueueInit,
    _In_opt_
    WDF_OBJECT_ATTRIBUTES* TxQueueAttributes,
    _In_
    NET_PACKET_QUEUE_CONFIG* Configuration,
    _Out_
    NETPACKETQUEUE* PacketQueue
    )
{
    return ((PFN_NETTXQUEUECREATE) NetFunctions[NetTxQueueCreateTableIndex])(NetDriverGlobals, NetTxQueueInit, TxQueueAttributes, Configuration, PacketQueue);
}

//
// NET Function: NetTxQueueNotifyMoreCompletedPacketsAvailable
//
typedef
_IRQL_requires_max_(HIGH_LEVEL)
WDFAPI
void
(NTAPI *PFN_NETTXQUEUENOTIFYMORECOMPLETEDPACKETSAVAILABLE)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );

_IRQL_requires_max_(HIGH_LEVEL)
FORCEINLINE
void
NetTxQueueNotifyMoreCompletedPacketsAvailable(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    ((PFN_NETTXQUEUENOTIFYMORECOMPLETEDPACKETSAVAILABLE) NetFunctions[NetTxQueueNotifyMoreCompletedPacketsAvailableTableIndex])(NetDriverGlobals, PacketQueue);
}

//
// NET Function: NetTxQueueInitGetQueueId
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
ULONG
(NTAPI *PFN_NETTXQUEUEINITGETQUEUEID)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETTXQUEUE_INIT* NetTxQueueInit
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
ULONG
NetTxQueueInitGetQueueId(
    _In_
    NETTXQUEUE_INIT* NetTxQueueInit
    )
{
    return ((PFN_NETTXQUEUEINITGETQUEUEID) NetFunctions[NetTxQueueInitGetQueueIdTableIndex])(NetDriverGlobals, NetTxQueueInit);
}

//
// NET Function: NetTxQueueGetRingCollection
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
const NET_RING_COLLECTION *
(NTAPI *PFN_NETTXQUEUEGETRINGCOLLECTION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
const NET_RING_COLLECTION *
NetTxQueueGetRingCollection(
    _In_
    NETPACKETQUEUE PacketQueue
    )
{
    return ((PFN_NETTXQUEUEGETRINGCOLLECTION) NetFunctions[NetTxQueueGetRingCollectionTableIndex])(NetDriverGlobals, PacketQueue);
}

//
// NET Function: NetTxQueueGetExtension
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
void
(NTAPI *PFN_NETTXQUEUEGETEXTENSION)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
void
NetTxQueueGetExtension(
    _In_
    NETPACKETQUEUE PacketQueue,
    _In_
    CONST NET_EXTENSION_QUERY* Query,
    _Out_
    NET_EXTENSION* Extension
    )
{
    ((PFN_NETTXQUEUEGETEXTENSION) NetFunctions[NetTxQueueGetExtensionTableIndex])(NetDriverGlobals, PacketQueue, Query, Extension);
}

//
// NET Function: NetTxQueueGetDemux8021p
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
UINT8
(NTAPI *PFN_NETTXQUEUEGETDEMUX8021P)(
    _In_
    PNET_DRIVER_GLOBALS DriverGlobals,
    _In_
    NETPACKETQUEUE Queue
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
FORCEINLINE
UINT8
NetTxQueueGetDemux8021p(
    _In_
    NETPACKETQUEUE Queue
    )
{
    return ((PFN_NETTXQUEUEGETDEMUX8021P) NetFunctions[NetTxQueueGetDemux8021pTableIndex])(NetDriverGlobals, Queue);
}




WDF_EXTERN_C_END

#endif // _NETTXQUEUE_2_1_H_

