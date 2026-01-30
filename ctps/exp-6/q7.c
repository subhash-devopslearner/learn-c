/*
Manipulate array elements by writing a C program that copies data from one array into
another such that the second array contains all even elements first, followed by all odd
elements.
*/

#include <stdio.h>

int main()
{
    int a[50], b[50];
    int n, i, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Copy even elements first */
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    /* Copy odd elements next */
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    printf("Array after arranging even elements first and odd elements next:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

