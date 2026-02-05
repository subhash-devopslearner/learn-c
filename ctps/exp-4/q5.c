/*
Develop a program that uses iterative logic to calculate both the GCD and LCM of two userentered numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    int gcd, lcm;
    int smaller;

    // Input two numbers from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller number (without ternary)
    if (num1 < num2) {
        smaller = num1;
    } else {
        smaller = num2;
    }

    // Find GCD using iterative approach
    for (int i = smaller; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;  // Stop when the greatest common divisor is found
        }
    }

    // Find LCM using the formula: LCM * GCD = num1 * num2
    lcm = (num1 * num2) / gcd;

    // Output results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
