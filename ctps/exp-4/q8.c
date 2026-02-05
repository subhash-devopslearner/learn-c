/*
Develop a program that uses a for loop to generate and display the first n Fibonacci numbers,
and illustrate the logic with a flowchart.
*/

#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    // Ask user for the number of terms
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers are:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two Fibonacci numbers are 0 and 1
        } else {
            next = first + second; // Next number is sum of previous two
            first = second;       // Update first
            second = next;        // Update second
        }
        printf("%lld ", next);
    }

    printf("\n");
    return 0;
}
