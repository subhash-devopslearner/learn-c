/*
C Program to Print Factors of N
*/

#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Factors of %d are:\n", N);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
