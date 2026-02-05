/*
Execute a program that uses a do-while loop to repeatedly accept numbers and count positive,
negative, and zero values until the user decides to stop.
*/

#include <stdio.h>

int main() {
    int number;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
            positive++;
        else if (number < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume any leftover newline
    } while (choice == 'y' || choice == 'Y');

    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}
