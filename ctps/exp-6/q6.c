/*
Convert a binary number into decimal equivalent number

Formula: (1 * 2^3)+(0 * 2^2)+(1 * 2^1)+(1 * 2^0) 
Above binary number is 1011 that decimal 11.
*/

#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal equivalent = %d", decimal);
    return 0;
}


