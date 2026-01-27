/*
Construct a C program to swap the first and last elements 
of a one-dimensional array of size N and display the modified array.
*/

#include <stdio.h>

int main() {
    int arr[50], n, temp, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap first and last elements
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    // Display modified array
    printf("Modified array after swapping:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
