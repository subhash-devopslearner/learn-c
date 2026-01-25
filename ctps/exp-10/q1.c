/*
Write a program to count the number of characters, spaces, words, and lines present in a
file.
Consider the following file ‘file.txt’ :
A file is data stored under a specific name on a storage device. A stream represents a
sequence of bytes. A Text File stores information using ASCII characters. In text files,
each line ends with a special character called the EOL (End of Line) or delimiter. When
this EOL character is read or written, internal translations happen. A Binary file contains
data in the same format as in memory. Binary files do not use line delimiters, and no
translations occur.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file\n");
        exit(0);
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ' || ch == '\t') {
            spaces++;
            inWord = 0;
        }
        else if (ch == '\n') {
            lines++;
            inWord = 0;
        }
        else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }

    if (characters > 0)
        lines++;   // count last line if file is not empty

    fclose(fp);

    printf("Characters in file: %d\n", characters);
    printf("Spaces in file: %d\n", spaces);
    printf("Words in file: %d\n", words);
    printf("Lines in file: %d\n", lines);

    return 0;
}
