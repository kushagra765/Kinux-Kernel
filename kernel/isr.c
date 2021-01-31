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
     set_gate_idt(21, (uint32_t)isr21, 0x08, 0x8E);
     set_gate_idt(22, (uint32_t)isr22, 0x08, 0x8E);
     set_gate_idt(23, (uint32_t)isr23, 0x08, 0x8E);
     set_gate_idt(24, (uint32_t)isr24, 0x08, 0x8E);
     set_gate_idt(25, (uint32_t)isr25, 0x08, 0x8E);
     set_gate_idt(26, (uint32_t)isr26, 0x08, 0x8E);
     set_gate_idt(27, (uint32_t)isr27, 0x08, 0x8E);
     set_gate_idt(28, (uint32_t)isr28, 0x08, 0x8E);
     set_gate_idt(29, (uint32_t)isr29, 0x08, 0x8E);
     set_gate_idt(30, (uint32_t)isr30, 0x08, 0x8E);
     set_gate_idt(31, (uint32_t)isr31, 0x08, 0x8E);
}

unsigned char *exceptions[] = {
      "Division by zero",
      "Debug",
      "Non Maskable Interrupt",
      "Breakpoint exception",
      "Into Detected Overflow",
      "Out of Bounds exception",
      "Invalid Opcode exception",
      "No Coprocessor exception",

      "Double Fault exception",
      "Coprocessor Segment Overrun",
      "Bad TSS exception",
      "Segment Not Present",
      "Stack Fault exception",
      "General Protection Fault",
      "Page Fault exception",
      "Unknown Interrupt exception",

      "Coprocessor Fault exception",
      "Alignment Check exception",
      "Machine Check exception",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",

      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved",
      "Reserved"
};

void handler_isr(struct registers *regs) {
     
     if (regs->int_no <= 31) {
        panic("Panic: An Exception Occured -- %s", exceptions[regs->int_no]);
     }
}
