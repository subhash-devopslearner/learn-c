/*
Implement a program that applies a while loop to compute the sum of all numbers between
two given integers M and N.
*/

#include <stdio.h>

int main() {
    int M, N, sum = 0, i;

    // Input two integers
    printf("Enter the first integer (M): ");
    scanf("%d", &M);
    printf("Enter the second integer (N): ");
    scanf("%d", &N);

    // Ensure M <= N
    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    // Initialize loop variable
    i = M;

    // While loop to sum numbers from M to N
    while (i <= N) {
        sum += i;
        i++;
    }

    // Display the result
    printf("The sum of numbers between %d and %d is %d.\n", M, N, sum);

    return 0;
}
