/*
Understand the logic behind swapping two numbers without using a temporary
variable. Implement the logic using multiplication and division in a C program.
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Swapping without using a temporary variable
    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
