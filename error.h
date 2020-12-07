#ifndef _ERROR_H
#define _ERROR_H

#include <stdio.h>

void error(char *error_str, int error_code) {
    printf("Error: %s" "Exit Code: %d", error_str, error_code);
}

#endif //_ERROR_H