/* drivers/keyboard/keyboard.c
 * Author - @kushagra765
*/

#include "../../include/kinux/ports.h"
#include "../../kernel/isr.h"
#include "../../kernel/irq.h"
#include "../../include/kinux/kernel.h"
#include "keyboard.h"

unsigned char keyboard_layout[128] = {
     0,  27, '1', '2', '3', '4', '5', '6', '7', '8',
  '9', '0', '-', '=', '\b',
  '\t',			
  'q', 'w', 'e', 'r',	
  't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\n',	
    0,			
  'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',	
 '\'', '`',   0,		
 '\\', 'z', 'x', 'c', 'v', 'b', 'n',			
  'm', ',', '.', '/',   0,				
  '*',
    0,	
  ' ',	
    0,	
    0,	
    0,   0,   0,   0,   0,   0,   0,   0,
    0,	
    0,	
    0,	
    0,	
    0,	
    0,	
  '-',
    0,	
    0,
    0,
  '+',
    0,	
    0,	
    0,	
    0,	
    0,	
    0,   0,   0,
    0,	
    0,	
    0,	
};

void handler_keyboard(struct registers *regs) {
     unsigned char keyboard_key_scancode;
     
     keyboard_key_scancode = byte_in(DATA_PORT);
     
    /* The code to check which key the user has pressed or released will be implemented later. */
}

void init_keyboard() {
     printm("[KERNEL] Initializing Keyboard");
     install_irq_handler(IRQ1, handler_keyboard);
}
