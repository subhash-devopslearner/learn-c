/*
Analyse the use of math library functions in C to compute trigonometric values. Write
a C program to find sine and cosine of a given angle (in degrees).
*/

#include <stdio.h>
#include <math.h>

int main() {
    double degree, radian;
    double sine, cosine;

    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);

    /* Convert degrees to radians */
    radian = degree * (M_PI / 180.0);

    /* Calculate sine and cosine */
    sine = sin(radian);
    cosine = cos(radian);

    printf("Sine of %.2lf degrees = %.4lf\n", degree, sine);
    printf("Cosine of %.2lf degrees = %.4lf\n", degree, cosine);

    return 0;
}
