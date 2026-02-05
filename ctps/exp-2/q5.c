/*
Use the conditional (ternary) operator in C to compare three numbers. Write a program
to determine the largest of the three and illustrate your logic through a flowchart.
*/

#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number is: %d", largest);

    return 0;
}
