/*
Write a C program that continues writing to a file until the user enters 'y', then stops
writing when the user inputs 'n', reads the file, and counts the words ending with the
letter "e".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char word[50];
    char choice;
    int count = 0;

    /* Writing to file */
    fp = fopen("words.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file\n");
        exit(0);
    }

    do {
        printf("Enter a word: ");
        scanf("%s", word);
        fprintf(fp, "%s ", word);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y');

    fclose(fp);

    /* Reading file and counting words ending with 'e' */
    fp = fopen("words.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file\n");
        exit(0);
    }

    while (fscanf(fp, "%s", word) != EOF) {
        int len = strlen(word);
        if (tolower(word[len - 1]) == 'e') {
            count++;
        }
    }

    fclose(fp);

    printf("\nNumber of words ending with 'e': %d\n", count);

    return 0;
}
