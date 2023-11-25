#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _INTERRUPTS_H
#define _INTERRUPTS_H


#define INTERRUPT_GATE 0x5
#define TRAP_GATE 0x7
#define TASK_GATE 0x9

#define HighestPrivledge 0x0
#define HighPrivledge 0x1
#define MediumPrivledge 0x2
#define LowestPrivledge 0x3

#define Present 0x1
#define NotPresent 0x0

typedef struct __attribute__((packed)){
    uint16_t base_low;      // Lower 16 bits of the handler function's address
    uint16_t selector;      // Code segment selector
    uint8_t ist;            // Interrupt Stack Table offset
    uint8_t type_attr;      // Type and attributes of the interrupt gate
    uint16_t base_mid;      // Middle 16 bits of the handler function's address
    uint32_t base_high;     // Higher 32 bits of the handler function's address
    uint32_t reserved;      // Reserved for future use
}Interrupt_Descriptor_Table;

static Interrupt_Descriptor_Table IDT[256];



typedef struct __attribute__((packed)){
    uint16_t limit;
    uint64_t base;
}IDTP64;


void RegisterMemoryProbe();
void RegisterPageTableDeletion();


LOUSTATUS SetBasicInterrupts(bool init);

LOUSTATUS set_idt_gate(int num,void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr);

static bool USBKeyboardInterrupt;

void MemoryProbingPageFaultHandler();

void PageFault();
void DoubleFault();
void GeneralProtectionFault();

bool GetProbeStatus();

void DivideByZero();
void DebugException();
void NMI();
void BreakPoint();
void OverFlow();
void BoundCheck();
void InvalidOpcode();
void FPUNoDev();
void CLOCK();
void Keyboard();

void SetPicIDTGate(int index, void (*handler)());

LOUSTATUS InitializeMainInterruptHandleing();
LOUSTATUS InitializeStartupInterruptHandleing();

LOUSTATUS UpdateIDT(bool Init);

void SetInterruptFlags();
void UnSetInterruptFlags();
void WaitForInterrupt();


#endif
