#ifndef _GDT_H
#define _GDT_H

#include "stdint.h"

struct entry_gdt {
   uint16_t low_limit;
   uint16_t low_base;
   uint8_t middle_base;
   uint8_t access;
   uint8_t granularity;
   uint8_t high_base;
} __attribute__((packed));


struct pointer_gdt {
   uint16_t limit;
   uint32_t base;
} __attribute__((packed));


struct entry_gdt gdt[3];
struct pointer_gdt gdt_ptr;

void init_gdt();
extern void flush_gdt();
void set_gate_gdt(uint32_t num, uint32_t base, uint32_t limit, uint8_t access, uint8_t gran);
   
#endif //_GDT_H
