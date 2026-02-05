/*
Develop a program that takes an arithmetic operator (+, -, *, or /) and two operands from the
user. Perform corresponding arithmetic operations on the operands using switch case.
*/

#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    // Input operator and operands
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c avoids newline issues

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Switch case for arithmetic operations
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f", result);
            } else {
                printf("Error: Division by zero is not allowed");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
