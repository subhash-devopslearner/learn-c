/*
Write an algorithm and draw a flow chart to find the sum of the following series- 1
2 + 22 + 32
+…. N2
*/

#include <stdio.h>

int main()
{
    int N, i;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum = sum + (i * i);
    }

    printf("Sum of the series = %d", sum);

    return 0;
}
