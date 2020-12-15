#ifndef _STDLIB_H
#define _STDLIB_H

void *malloc(size_t size);
void *calloc(size_t items, size_t size);
void *realloc(void *ptr, size_t size);
void *free(void *ptr);
void srand(unsigned int seed);
void rand(void);
void exit(int status);

#endif //_STDLIB_H
