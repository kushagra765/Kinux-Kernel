#ifndef _IDT_H
#define _IDT_H

#include "stdint.h"

struct entry_idt {
   uint16_t lo_base;
   uint16_t sel;
   uint8_t always0;
   uint8_t flags;
   uint16_t hi_base;
} __attribute__((packed));


struct pointer_idt {
   uint16_t limit;
   uint32_t base;
} __attribute_((packed));


struct entry_idt idt[256];
struct pointer_idt idt_ptr;

void init_idt();
extern void flush_idt();
void set_gate_idt(uint8_t num, uint32_t base, uint16_t sel, uint8_t flags);

#endif //_IDT_H
