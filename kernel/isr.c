#include <isr.h>
#include <idt.h>
#include <kinux/kernel.h>

void install_isr() {
     
     set_gate_idt(0, (uint32_t)isr0, 0x08, 0x8E);
     set_gate_idt(1, (uint32_t)isr1, 0x08, 0x8E);
     set_gate_idt(2, (uint32_t)isr2, 0x08, 0x8E);
     set_gate_idt(3, (uint32_t)isr3, 0x08, 0x8E);
     set_gate_idt(4, (uint32_t)isr4, 0x08, 0x8E);
     set_gate_idt(5, (uint32_t)isr5, 0x08, 0x8E);
     set_gate_idt(6, (uint32_t)isr6, 0x08, 0x8E);
     set_gate_idt(7, (uint32_t)isr7, 0x08, 0x8E);
     set_gate_idt(8, (uint32_t)isr8, 0x08, 0x8E);
     set_gate_idt(9, (uint32_t)isr9, 0x08, 0x8E);
     set_gate_idt(10, (uint32_t)isr10, 0x08, 0x8E);
     set_gate_idt(11, (uint32_t)isr11, 0x08, 0x8E);
     set_gate_idt(12, (uint32_t)isr12, 0x08, 0x8E);
     set_gate_idt(13, (uint32_t)isr13, 0x08, 0x8E);
     set_gate_idt(14, (uint32_t)isr14, 0x08, 0x8E);
     set_gate_idt(15, (uint32_t)isr15, 0x08, 0x8E);
     set_gate_idt(16, (uint32_t)isr16, 0x08, 0x8E);
     set_gate_idt(17, (uint32_t)isr17, 0x08, 0x8E);
     set_gate_idt(18, (uint32_t)isr18, 0x08, 0x8E);
     set_gate_idt(19, (uint32_t)isr19, 0x08, 0x8E);
     set_gate_idt(20, (uint32_t)isr20, 0x08, 0x8E);
     
     /* Rest to be added soon */
}

void handler_isr(struct registers *regs) {
     
     if (regs->int_no <= 31) {
        panic("Panic : An Exception Occured\n");
     }
}