#ifndef _STRING_H
#define _STRING_H

int strcmp(const char *str1, const char *str2);
char *strcpy(char *str1, char *str2);
char *strcat(char *str1, char *str2);
char *strlen(const char *str);
char *strerror(int err_code);

#endif //_STRING_H