#include <idt.h>
#include <string.h>

void set_gate_idt(uint8_t num, uint32_t base, uint16_t sel, uint8_t flags) {
     
     idt[num].lo_base = base & 0xFFFF;
     idt[num].hi_base = (base >> 16) & 0xFFFF;
     idt[num].sel = sel;
     idt[num].always0 = 0;
     idt[num].flags = flags;
}

void init_idt() {
     
     pointer_idt.limit = (sizeof(struct entry_idt)*256) - 1;
     pointer_idt.base = &idt;
     memset(&idt, 0, sizeof(struct entry_idt)*256);
}
