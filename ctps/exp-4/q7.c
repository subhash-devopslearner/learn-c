/*
Construct a C program that applies a do-while loop to calculate the sum of squares of userentered numbers, ignoring numbers divisible by 3, and stopping when a negative number is
entered
*/

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers (negative number to stop):\n");

    do {
        scanf("%d", &num);

        if (num < 0) {
            break;  // Stop if negative number is entered
        }

        if (num % 3 == 0) {
            continue;  // Ignore numbers divisible by 3
        }

        sum += num * num;  // Add square of the number
    } while (1);  // Infinite loop, broken by negative number

    printf("Sum of squares (excluding multiples of 3) = %d\n", sum);

    return 0;
}
