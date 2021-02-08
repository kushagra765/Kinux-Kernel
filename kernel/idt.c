/* kernel/idt.c
 * Author - @kushagra765
*/

#include "idt.h"
#include "../include/string.h"
#include <stdint.h>

void set_gate_idt(uint8_t num, uint32_t base, uint16_t sel, uint8_t flags) {
     
     idt[num].lo_base = base & 0xFFFF;
     idt[num].hi_base = (base >> 16) & 0xFFFF;
     idt[num].sel = sel;
     idt[num].always0 = 0;
     idt[num].flags = flags;
}

void init_idt() {
     
     idt_ptr.limit = (sizeof(struct entry_idt)*256) - 1;
     idt_ptr.base = (uintptr_t)&idt;
     memset(&idt, 0, sizeof(struct entry_idt)*256);
}
