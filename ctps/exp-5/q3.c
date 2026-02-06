/*
Implement a C program to apply looping and decision-making logic for generating and
displaying all prime numbers in the range from N1 to N2, ensuring that N2 > N1.
*/


#include <stdio.h>

int main()
{
    int N1, N2, i, j, isPrime;

    printf("Enter N1 and N2: ");
    scanf("%d %d", &N1, &N2);

    /* Validate range */
    if (N2 <= N1)
    {
        printf("Invalid range! N2 must be greater than N1.\n");
        return 0;
    }

    printf("Prime numbers between %d and %d are:\n", N1, N2);

    for (i = N1; i <= N2; i++)
    {
        if (i < 2)
            continue;

        isPrime = 1;   // Assume number is prime

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;   // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
