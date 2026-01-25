/*
Write a program to copy the contents of one file 
(use the above file.txt) to another file, and
also print a summary of the copy process, such as the 
number of characters, words, and
lines copied.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fs, *fd;
    char ch, lastChar = '\0';
    int characters = 0, spaces = 0, words = 0, lines = 0;
    int inWord = 0;

    /* Open source file */
    fs = fopen("file.txt", "r");
    if (fs == NULL) {
        printf("Unable to open source file\n");
        exit(0);
    }

    /* Open destination file */
    fd = fopen("copy.txt", "w");
    if (fd == NULL) {
        printf("Unable to open destination file\n");
        fclose(fs);
        exit(0);
    }

    /* Copy contents and count */
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);

        characters++;
        lastChar = ch;

        if (ch == ' ' || ch == '\t') {
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

    /* Handle last line if no newline at EOF */
    if (characters > 0 && lastChar != '\n')
        lines++;

    fclose(fs);
    fclose(fd);

    /* Summary */
    printf("File copy completed successfully.\n");
    printf("Characters copied: %d\n", characters);
    printf("Words copied: %d\n", words);
    printf("Lines copied: %d\n", lines);

    return 0;
}
