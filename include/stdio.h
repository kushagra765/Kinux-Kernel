#ifndef _STDIO_H
#define _STDIO_H

#include <stddef.h>

/* include/stdio.h
 * Author - @kushagra765
 *
 * If you are using a function that has "FILE *" like fprintf(), use #include <stdio.h> not "../include/stdio.h"
 * or you will get errors that "FILE *" is not defined!
*/

int printf(const char *format, ...);
int scanf(const char *format, ...);
int putchar(int ch);
int getchar(void);
int puts(const char *string);
int sprintf(char *string, const char *format, ...);
int snprintf(char *string, size_t number, const char *format, ...);
void perror(const char *string);

#endif //_STDIO_H
