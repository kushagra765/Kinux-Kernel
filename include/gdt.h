#ifndef _GDT_H
#define _GDT_H

struct entry_gdt {
   uint16_t low_limit;
   uint16_t low_base;
   uint8_t middle_base;
   uint8_t access;
   uint8_t granularity;
   uint8_t high_base;
} __atribute__((packed));

#endif //_GDT_H
