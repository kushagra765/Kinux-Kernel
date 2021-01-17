#ifndef _KEYBOARD_H
#define _KEYBOARD_H

/* PS/2 Keyboard Driver */

#define DATA_PORT 0x60
#define STATUS_PORT 0x64

/* Initialize the keyboard */
void init_keyboard();

#endif //_KEYBOARD_H
