/*
C program to find the area of a triangle using Heron’s formula.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle = %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
