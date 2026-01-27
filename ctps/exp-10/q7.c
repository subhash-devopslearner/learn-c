/*
Write a C program to print the contents of a file in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    long size;
    char ch;

    fp = fopen("newfile.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Move to end of file
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    printf("End size: %ld", size); // If file have word Hello, it would show 6, 5+\n, 6 chars 6 bytes

    // Read file in reverse
    for (long i = size - 1; i >= 0; i--) {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
