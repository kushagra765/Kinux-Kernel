/* lib/libc/string/strcmp.c
 * Author - @kushagra765
*/

#include "../../../include/string.h"

int strcmp(const char *str1, const char *str2) {

   while (*str1 == *str2) {
       ++str1;
       ++str2;
   }
}
