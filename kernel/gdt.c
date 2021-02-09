/* kernel/gdt.c
 * Author - @kushagra765
*/

#include "../include/stdint.h"
#include "gdt.h"

void set_gate_gdt(uint32_t num, uint32_t base, uint32_t limit, uint8_t access, uint8_t gran) {

     /* Set the base address */
     gdt[num].low_base = (base & 0xFFFF);
     gdt[num].middle_base = (base >> 16) & 0xFF;
     gdt[num].high_base = (base >> 24) & 0xFF;
     
     /* Set the limits */
     gdt[num].low_limit = (limit & 0xFFFF);
     gdt[num].granularity = ((limit >> 16) & 0x0F);
     
     /* Set the granularity and access flags */
     gdt[num].granularity |= (gran & 0xF0);
     gdt[num].access = access;
}

void init_gdt() {
   gdt_ptr.limit = (sizeof(struct entry_gdt)*3) - 1;
   gdt_ptr.base = (uintptr_t)&gdt;
   
   set_gate_gdt(0, 0, 0, 0, 0);
   set_gate_gdt(1, 0, 0xFFFFFFFF, 0x9A, 0xCF);
   set_gate_gdt(2, 0, 0xFFFFFFFF, 0x92, 0xCF);
}
