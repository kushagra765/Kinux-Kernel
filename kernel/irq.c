#include "../include/kinux/ports.h"
#include "../include/kinux/kernel.h"
#include "irq.h"
#include "isr.h"
#include <stdint.h>

void *kernel_routines_irq[16] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0
};

void install_irq_handler(int irq_num, void(*kernel_irq_handler)(struct registers *regs)) {
     kernel_routines_irq[irq_num] = kernel_irq_handler;
}

void uninstall_irq_handler(int irq_num) {
     kernel_routines_irq[irq_num] = 0;
}

void remap_kernel_irq() {
     byte_out(0x20, 0x11);
     byte_out(0xA0, 0x11);
     byte_out(0x21, 0x20);
     byte_out(0xA1, 0x28);
     byte_out(0x21, 0x04);
     byte_out(0xA1, 0x02);
     byte_out(0x21, 0x01);
     byte_out(0xA1, 0x01);
     byte_out(0x21, 0x0);
     byte_out(0xA1, 0x0);
}

void install_irq() {
     printm("[KERNEL] Initializing IRQ");
     remap_kernel_irq();
     set_gate_idt(32, (uint32_t)irq0, 0x08, 0x8E);
     set_gate_idt(33, (uint32_t)irq1, 0x08, 0x8E);
     set_gate_idt(34, (uint32_t)irq2, 0x08, 0x8E);
     set_gate_idt(35, (uint32_t)irq3, 0x08, 0x8E);
     set_gate_idt(36, (uint32_t)irq4, 0x08, 0x8E);
     set_gate_idt(37, (uint32_t)irq5, 0x08, 0x8E);
     set_gate_idt(38, (uint32_t)irq6, 0x08, 0x8E);
     set_gate_idt(39, (uint32_t)irq7, 0x08, 0x8E);
     set_gate_idt(40, (uint32_t)irq8, 0x08, 0x8E);
     set_gate_idt(41, (uint32_t)irq9, 0x08, 0x8E);
     set_gate_idt(42, (uint32_t)irq10, 0x08, 0x8E);
     set_gate_idt(43, (uint32_t)irq11, 0x08, 0x8E);
     set_gate_idt(44, (uint32_t)irq12, 0x08, 0x8E);
     set_gate_idt(45, (uint32_t)irq13, 0x08, 0x8E);
     set_gate_idt(46, (uint32_t)irq14, 0x08, 0x8E);
     set_gate_idt(47, (uint32_t)irq15, 0x08, 0x8E);
}

void handler_irq(struct registers *regs) {
     void(*kernel_irq_handler)(struct registers *regs);
     
     kernel_irq_handler = kernel_routines_irq[regs->int_no-32];
     
     if (kernel_irq_handler) {
         kernel_irq_handler(regs);
     }
     
     if (regs->int_no >= 40) {
         byte_out(0xA0, 0x20);
     }
     
     byte_out(0x20, 0x20);
}
