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

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;
    char ch;
    int chars=0, spaces=0, words=0, lines=0;

    // Reading file

    fp = fopen("file.txt", "r");

    if(fp == NULL){
        printf("Unable to open file");
        exit(0);
    }

    while((ch=fgetc(fp))!=EOF){
        chars++;
        if(ch==' ' || ch=='\t' )
            spaces++;
        if(ch=='\n')
            lines++;
    }

    printf("Characters in file are: %d\n", chars);
    printf("Spaces in file are: %d\n", spaces);
    printf("Words in file are: %d\n", spaces + 1);
    printf("Lines in file are: %d\n", lines);

    return 0;    
}