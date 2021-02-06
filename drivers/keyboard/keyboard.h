#ifndef _KEYBOARD_H
#define _KEYBOARD_H

#include "../../kernel/isr.h"

/* drivers/keyboard/keyboard.h
 * Author - @kushagra765
*/

/* PS/2 Keyboard Driver */

#define DATA_PORT 0x60
#define STATUS_PORT 0x64

/* Initialize the keyboard */
void init_keyboard();

/* Keyboard Handler */
void handler_keyboard(struct registers *regs);

#endif //_KEYBOARD_H
