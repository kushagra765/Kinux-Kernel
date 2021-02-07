#ifndef _STDIO_H
#define _STDIO_H

#include <stddef.h>

/* include/stdio.h
 * Author - @kushagra765
*/

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;


int printf(const char *format, ...);
int scanf(const char *format, ...);
int putchar(int ch);
int getchar(void);
int fclose(FILE *stream);
int puts(const char *string);
int fputc(int ch, FILE *stream);
int fputs(const char *string, FILE *stream);
void perror(const char *string);
void rewind(FILE *stream);
int fprintf(FILE *stream, const char *format, ...);
int fseek(FILE *stream, long int offset, int w);
size_t fread(void *ptr, size_t size, size_t elements, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t elements, FILE *stream);

#endif //_STDIO_H
