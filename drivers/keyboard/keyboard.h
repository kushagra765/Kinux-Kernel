#ifndef _KEYBOARD_H
#define _KEYBOARD_H

/* PS/2 Keyboard Driver */

// This file is still in development

#define DATA_PORT 0x60

/* Numeric Keys (above alphabet keys) */
#define NUM_1 0x02
#define NUM_2 0x03
#define NUM_3 0x04
#define NUM_4 0x05
#define NUM_5 0x06
#define NUM_6 0x07
#define NUM_7 0x08
#define NUM_8 0x09
#define NUM_9 0x0A
#define NUM_0 0x0B

/* Alphabet Keys */
#define A 0x1E
#define B 0x30
#define C 0x2E
#define D 0x20
#define E 0x12
#define F 0x21
#define G 0x22
#define H 0x23
#define I 0x17
#define J 0x24
#define K 0x25
#define L 0x26
#define M 0x32
#define N 0x31
#define O 0x18
#define P 0x19
#define Q 0x10
#define R 0x13
#define S 0x1F
#define T 0x14
#define U 0x16
#define V 0x2F
#define W 0x11
#define X 0x2D
#define Y 0x15
#define Z 0x2C

/* Function Keys */
#define F1 0x3B
#define F2 0x3C
#define F3 0x3D
#define F4 0x3E
#define F5 0x3F
#define F6 0x40
#define F7 0x41
#define F8 0x42
#define F9 0x43
#define F10 0x44
#define F11 0x57
#define F12 0x58


#endif //_KEYBOARD_H
