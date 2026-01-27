/*
Apply array manipulation techniques and write a C program to 
multiply each element of a given array by 5 and display the 
resultant array.
*/

#include <stdio.h>

int main() {
    int arr[10], n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Multiply each element by 5
    for (i = 0; i < n; i++) {
        arr[i] = arr[i] * 5;
    }

    // Display resultant array
    printf("Resultant array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
