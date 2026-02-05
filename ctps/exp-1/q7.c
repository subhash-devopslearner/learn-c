/*
Write an algorithm and draw a flow chart to find the sum of the following series- 1! + 2! + 3!
+…. N!
*/

#include <stdio.h>

int main()
{
    int i, n;
    long fact = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;   // calculate factorial
        sum = sum + fact; // add factorial to sum
    }

    printf("Sum of the series = %ld", sum);

    return 0;
}
