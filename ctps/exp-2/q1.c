/*
Interpret the problem of finding the area of a trapezoid and develop a C program to
implement the logic.
*/

#include <stdio.h>

int main()
{
    float a, b, h, area;

    printf("Enter the length of first parallel side: ");
    scanf("%f", &a);

    printf("Enter the length of second parallel side: ");
    scanf("%f", &b);

    printf("Enter the height of the trapezoid: ");
    scanf("%f", &h);

    area = (a + b) * h / 2;

    printf("Area of the trapezoid = %.2f", area);

    return 0;
}
