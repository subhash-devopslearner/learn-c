/*
Understand the formula for compound interest and write a C program to calculate it.
Include a flowchart to represent the sequence of operations.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, A, CI;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    A = P * pow((1 + R / 100), T);
    CI = A - P;

    printf("Total Amount = %.2f\n", A);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
