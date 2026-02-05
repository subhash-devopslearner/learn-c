/*
Given the values of variables x, y, and z, interpret the logic to cyclically rotate their
values such that x takes y’s value, y takes z’s, and z takes x’s. Write a C program.
*/

#include <stdio.h>

int main()
{
    int x, y, z, temp;

    printf("Enter values of x, y, and z:\n");
    scanf("%d %d %d", &x, &y, &z);

    /* Cyclic rotation */
    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After cyclic rotation:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}
