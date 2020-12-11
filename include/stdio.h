#ifndef _STDIO_H
#define _STDIO_H

//Print Text
extern int printf(const char *format, ...);

//Take Input
extern int scanf(const char *format, ...);

//Open Files
int fopen(const char *filename, const char *mode);

//Close Files
int fclose(FILE *stream);

//Get Characters from a file
int fgetc(FILE *stream);

#endif //_STDIO_H
