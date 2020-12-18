/* This file contains some error functions */

#ifndef _ERROR_H
#define _ERROR_H

#include <stdio.h>

void error(char *error_str, int error_code) {
    printf("Error: %s" "Exit Code: %d", error_str, error_code);
}

/* Do not call this error unless it's a fatal error! */
void fatal_error(char *str) {
    printf("A fatal error has occured: %s", str);
}    

#endif //_ERROR_H
