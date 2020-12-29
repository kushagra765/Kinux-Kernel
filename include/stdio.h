#ifndef _STDIO_H
#define _STDIO_H

int printf(const char *format, ...);
int scanf(const char *format, ...);
FILE *fopen(const char *fname, const char *mode);
FILE *tmpfile(void);
int fclose(FILE *stream);
int fprintf(FILE *stream, const char *format, ...);
int sprintf(char *string, const char *format, ...);
int vprintf(FILE *stream, const char *format, va_list arg);
int vfscanf(FILE *stream, const char *format, va_list arg);
int fscanf(FILE *stream, const char *format, ...);
int fgets(char *string, int num, FILE *stream);
int fgetc(FILE *stream);
int fputc(int ch, FILE *stream);
int fputs(const char *string, FILE *stream);
int putchar(int ch);
int getchar(void);
int fputs(const char *string, FILE *stream);
int fputc(int ch, FILE *stream);
int puts(const char *string);
int putc(int ch, FILE *stream);
void perror(const char *string);
int feof(FILE *stream);
int ferror(FILE *stream);
void rewind(FILE *stream);
void clearerr(FILE *stream);
int remove(const char *fname);
int rename(const char *oldname, const char *newname);
errno_t fopen_s(FILE *ptr, const char *fname, const char *mode);

#endif //_STDIO_H
