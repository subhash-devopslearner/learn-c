/*
Write a program to check entered number is Armstrong(magic) number or not.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    /* Count number of digits */
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    /* Calculate sum of digits raised to power count */
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
