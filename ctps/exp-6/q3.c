/*
Implement a C program to search for a specific element within 
an array and display its position if found.
*/

#include <stdio.h>

int main() {
    int arr[50], n, key, i, pos = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i + 1;   // Position (1-based index)
            break;
        }
    }

    // Display result
    if (pos != -1)
        printf("Element found at position %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
