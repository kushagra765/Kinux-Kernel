#ifndef _PORTS_H
#define _PORTS_H


//Reads a byte from a port
unsigned char byte_in(unsigned short port);

//Writes a byte to a port
void byte_out(unsigned short port, unsigned char data);

#endif //_PORTS_H
