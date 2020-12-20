#include <kinux/kernel.h>
#include <kinux/error.h>

void panic(const char *string) {
     fatal_error("Panic: %s", string);
}     
