/* time command for Kinux Kernel */

#include <stdio.h>
#include <time.h>

int main() {
    time_t systime;
    time(&systime);
    char *realtime = ctime(&systime);

    printf("time utility\n");

    //Prints the time and exits
    printf("%s\n", realtime);

    return 0;
}

//End