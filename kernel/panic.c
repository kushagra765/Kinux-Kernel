#include <kinux/kernel.h>

void panic(const char *string) {
     printm("Panic: %s", string);
}     
