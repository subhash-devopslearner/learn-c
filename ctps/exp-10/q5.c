/*
Write a program to create two files called even and odd, and write a set of numbers
stored in an array to these files. Store all odd numbers in the odd file and even
numbers in the even file.
*/

#include <stdio.h>

int main() {
    int a[10], n, i;
    FILE *feven, *fodd;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    feven = fopen("even.txt", "w");
    fodd = fopen("odd.txt", "w");

    if (feven == NULL || fodd == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            fprintf(feven, "%d ", a[i]);
        else
            fprintf(fodd, "%d ", a[i]);
    }

    fclose(feven);
    fclose(fodd);

    printf("Even and odd numbers stored successfully.\n");

    return 0;
}
