#include <LouDDK.h>
#include <NtAPI.h>


// Apply the static assertion
//STATIC_ASSERT(sizeof(HW_INITIALIZATION_DATA) == 0xD0, HW_INITIALIZATION_DATA_size_is_incorrect);

UNUSED static PSTOR_PORT_STACK_OBJECT StorPortStack[255] = {0};

PSTOR_PORT_STACK_OBJECT GetStorPortObject(PDRIVER_OBJECT DrvObject){
    
    for(uint8_t i = 0; i < 255; i++){
        if(StorPortStack[i]->DrvObj == DrvObject){
            return StorPortStack[i];
        }
    }
    
    return 0x00;
}

void StorPortGetPhysicalAddress(){
    LouPrint("void StorPortGetPhysicalAddress()\n");
    while(1);
}

void StorPortStallExecution(){
    LouPrint("void StorPortStallExecution()\n");
    while(1);
}

void StorPortNotification(
  SCSI_NOTIFICATION_TYPE NotificationType,
  PVOID HwDeviceExtension,
  ...
){
    LouPrint("void StorPortNotification()\n");


    LouPrint("void StorPortNotification() LOUSINE IS NOTIFIED\n");
    while(1);
}

void StorPortSetDeviceQueueDepth(){
    LouPrint("void StorPortSetDeviceQueueDepth()\n");
    while(1);
}

void StorPortGetUncachedExtension(){
    LouPrint("void StorPortGetUncachedExtension()\n");
    while(1);
}

NTSTATUS StorPortInitialize(
    PDRIVER_OBJECT DrvObj,
    PUNICODE_STRING RegistryEntry,
    PHW_INITIALIZATION_DATA HwInitializationData,
    PVOID HwContext
){
    LouPrint("NTSTATUS StorPortInitialize()\n");

    
    if((DrvObj == 0x00) || (RegistryEntry == 0x00) || 
       (HwInitializationData == 0x00)){
        LouPrint("One Or More Parameters are Null\n");
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INVALID_PARAMETER\n");
        return STATUS_INVALID_PARAMETER;
    }

    uint8_t i = 0;
    for(;i < 255; i++){
        if(StorPortStack[i] == 0x00){
            break;
        }
    }

    if(i == 255){
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INSUFFICIENT_RESOURCES\n");
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    StorPortStack[i] = (PSTOR_PORT_STACK_OBJECT)LouMalloc(sizeof(STOR_PORT_STACK_OBJECT));

    if(StorPortStack[i] == 0x00){
        LouPrint("NTSTATUS StorPortInitialize() STATUS_INSUFFICIENT_RESOURCES\n");
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    LouPrint("Found An Available Storport Slot [slot Number]:%d\n", i);

    StorPortStack[i]->DrvObj = DrvObj;

    
    StorPortStack[i]->FindAdapter = (uint64_t)HwInitializationData->HwFindAdapter;
    StorPortStack[i]->InitAdapter = (uint64_t)HwInitializationData->HwInitialize;

    if(HwInitializationData->DeviceExtensionSize > 0x00){
        StorPortStack[i]->DeviceExtention = LouMalloc(HwInitializationData->DeviceExtensionSize);
    }
    if(HwInitializationData->SpecificLuExtensionSize > 0x00){
        StorPortStack[i]->SpecificLuExtention = LouMalloc(HwInitializationData->SpecificLuExtensionSize);
    }
    if(HwInitializationData->SrbExtensionSize > 0x00){
        StorPortStack[i]->SrbExtension = LouMalloc(HwInitializationData->SrbExtensionSize);
    }

    StorPortStack[i]->ConfigInfo = (PPORT_CONFIGURATION_INFORMATION)LouMalloc(sizeof(PORT_CONFIGURATION_INFORMATION));

    LouPrint("void StorPortInitialize() STATUS SUCCESS\n");
    return STATUS_SUCCESS;
}   

void StorPortGetScatterGatherList(){
    LouPrint("void StorPortGetScatterGatherList()\n");
    while(1);
}

void StorPortGetDeviceBase(){
    LouPrint("void StorPortGetDeviceBase()\n");
    while(1);
}
/**
typedef enum _BUS_DATA_TYPE {
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE;
*/
// Holds Adapter Information



ULONG StorPortGetBusData(
  PVOID HwDeviceExtension,
  ULONG BusDataType,
  ULONG SystemIoBusNumber,
  ULONG SlotNumber,
  PVOID Buffer,
  ULONG Length
){
    LouPrint("void StorPortGetBusData()\n");


    if(BusDataType == PCIConfiguration){
        LouPrint("StorPort: Retrieving PCI CONFIGURATION INFORMATION\n");
        // Ensure the buffer is not NULL and the length is valid
        if (Buffer == 0x00 || Length == 0) {
            LouPrint("Invalid buffer or length\n");
            return 0;
        }
        UNUSED PPCI_COMMON_CONFIG ConfigBuffer = (PPCI_COMMON_CONFIG)Buffer;

        ConfigBuffer->Header.VendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x00);
        ConfigBuffer->Header.DeviceID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x02);
        ConfigBuffer->Header.Command = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x04);
        ConfigBuffer->Header.Status = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x06);

        ConfigBuffer->Header.RevisionID = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x08);
        ConfigBuffer->Header.ProgIf = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x09);
        ConfigBuffer->Header.SubClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0A);
        ConfigBuffer->Header.BaseClass = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0B);
        ConfigBuffer->Header.CacheLineSize = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0C);
        ConfigBuffer->Header.LatencyTimer = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0D);
        ConfigBuffer->Header.HeaderType = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0E);
        ConfigBuffer->Header.BIST = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x0F);

        if(getHeaderType(SystemIoBusNumber, SlotNumber, 0) == 0x00){
            ConfigBuffer->Header.u.type0.BaseAddresses[0] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x10);
            ConfigBuffer->Header.u.type0.BaseAddresses[1] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x14);
            ConfigBuffer->Header.u.type0.BaseAddresses[2] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x18);
            ConfigBuffer->Header.u.type0.BaseAddresses[3] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x1C);
            ConfigBuffer->Header.u.type0.BaseAddresses[4] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x20);
            ConfigBuffer->Header.u.type0.BaseAddresses[5] = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x24);

            ConfigBuffer->Header.u.type0.CIS = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x28);
            ConfigBuffer->Header.u.type0.SubVendorID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x2C);
            ConfigBuffer->Header.u.type0.SubSystemID = pciConfigReadWord(SystemIoBusNumber, SlotNumber, 0, 0x2E);
            ConfigBuffer->Header.u.type0.ROMBaseAddress = pci_read(SystemIoBusNumber, SlotNumber, 0, 0x30);
            
            ConfigBuffer->Header.u.type0.CapabilitiesPtr = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x34);

            ConfigBuffer->Header.u.type0.InterruptLine = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3C);
            ConfigBuffer->Header.u.type0.InterruptPin = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3D);
            ConfigBuffer->Header.u.type0.MinimumGrant = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3E);
            ConfigBuffer->Header.u.type0.MaximumLatency = pciConfigReadByte(SystemIoBusNumber, SlotNumber, 0, 0x3F);
        }

        
        LouPrint("ABAR IS:%h\n", ConfigBuffer->Header.u.type0.BaseAddresses[5] & 0xFFFFFFF0);
	    //LouPrint("Bus:%h:Slot:%h:Function:%h\n",SystemIoBusNumber,SlotNumber,0); 
        LouPrint("void StorPortGetBusData() COMPLETE\n");
        //while(1);
        return sizeof(PCI_COMMON_CONFIG);
    }

    LouPrint("void StorPortGetBusData() FAILED\n");
    LouPrint("Unsuported Type\n");
    return 0;
}

