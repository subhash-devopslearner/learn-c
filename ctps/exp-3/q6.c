/*
Write a C++ program to test whether a given character is capital or small letter and
change small letter to capital letter and vice versa
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is a Capital Letter.\n");
        printf("After conversion: %c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a Small Letter.\n");
        printf("After conversion: %c\n", ch - 32);
    }
    else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
