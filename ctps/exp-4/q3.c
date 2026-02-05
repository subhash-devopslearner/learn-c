/*
Write a program that uses a for loop to generate and display the multiplication table for a
given number.
*/

#include <stdio.h>

int main() {
    int num, i;

    // Ask the user for the number
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    // For loop to generate multiplication table from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
