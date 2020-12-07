/* cat utility for Kinux Kernel */

#include <stdio.h>
#include <error/error.h>
#include <string.h>

void print_contents();

void copy_contents();

//Main Function
int main() {
    char input[5];
    printf("cat utility\n");
    printf("Usage: [mode]\n");
    printf("Modes:\n"
           "-p to print file contents\n"
           "-c to copy one file contents to another (input two file paths)\n");
    printf("Type exit to Exit\n");
    scanf("%s", input);

    if (strcmp(input, "-p")==0) {
        print_contents();
    }
    else if (strcmp(input, "-c")==0) {
        copy_contents();
    }
    else if (strcmp(input, "exit")==0) {
        return 0;
    }
    else {
        //Error Code 2 means a wrong input
        error("Invalid Mode\n", 2);
    }

    return 0;
}


//This function prints the file contents
void print_contents() {
    FILE *ptr;
    char path[50], contents;

    printf("Enter file path:\n");
    scanf("%s", path);

    //Opens the File for Reading
    ptr = fopen(path, "r");

    if (ptr == NULL) {
        //Error Code 3 means pointer is NULL
        error("An error occurred while opening the file\n", 3);
    }

    contents = fgetc(ptr);

    while (contents != EOF) {
        printf("%c", contents);
        contents = fgetc(ptr);
    }

    //Closes the file
    fclose(ptr);
}


/* This function copies the contents of file 1 to file 2 */
void copy_contents() {
    FILE *ptr;
    FILE *ptr2;
    char path[50], contents;
    char path2[50];

    //Gets the first input from the user from which the program will read the contents
    printf("Enter path for first file for reading:\n");
    scanf("%s", path);
    ptr = fopen(path, "r");

    /* Gets the second input from the user from which the program will copy the contents of the file1 to file2 */
    printf("Enter path for second file for writing:\n");
    scanf("%s", path2);
    ptr2 = fopen(path2, "w");

    if (ptr || ptr2 == NULL) {
        //Error Code 3 means pointer is NULL
        error("An error occurred while opening files\n", 3);
    }

    //Gets the contents
    contents = fgetc(ptr);

    //Copies the contents
    while (contents != EOF) {
        fputc(contents, ptr2);
        contents = fgetc(ptr);
    }

    fclose(ptr);
    fclose(ptr2);
}

//End of File
