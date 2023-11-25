#include <kernel/interrupts.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <CPUInstructionSet/CPURegisters.h>
#include <kernel/pic.h>

static bool UsingAPIC = false;

void FPUNoDev(){
    UnSetInterruptFlags();    
    PIC_sendEOI(1);

}
