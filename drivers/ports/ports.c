/* drivers/ports/ports.c
 * Author - @jaychandra6
 * Edited by - @kushagra765
*/

#include "../../include/kinux/ports.h"

unsigned char byte_in(unsigned short port) {
	unsigned char result;
	/* "=a"(result) puts value of rax in result
	 * "d" (port) puts value of port in dx
	 * asm instructions are as follows
	 * command : output : input
	 * "in" is the assembly command to read from port
	 */
	
	__asm__ volatile("in %%dx, %%al" : "=a" (result) : "d" (port));
	return result;
}

void byte_out(unsigned short port, unsigned char data) {
	/* "out" is the command to write to a port
	 * here nothing is returned, so there is no = symbol
	 * but there are two variables in output space, so we use a comma to seperate them
	 */
	
	__asm__ volatile("out %%al, %%dx" : : "a" (data), "d" (port));
}
