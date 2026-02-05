/*
Write a program to calculate the Goods and Services Tax (GST) for a given amount based on
the GST rate. The program should be able to handle different GST rates and provide a clear
breakdown of the total amount, GST amount, and the amount before GST. Your program
should accept the original price of the item and the GST rate. The rate can be a whole number
or a decimal. The program should display the amount of GST applied, price before GST and
after GST. Constraints: The original price should be a positive number and the GST rate
should be a non-negative number and can be a decimal ranging from 0% to 28%.
*/

#include <stdio.h>

int main() {
    float originalPrice, gstRate;
    float gstAmount, totalPrice;

    // Input
    printf("Enter the original price of the item: ");
    scanf("%f", &originalPrice);

    printf("Enter the GST rate (in %%): ");
    scanf("%f", &gstRate);

    // Validation
    if (originalPrice <= 0) {
        printf("Error: Original price must be a positive number.\n");
        return 0;
    }

    if (gstRate < 0 || gstRate > 28) {
        printf("Error: GST rate must be between 0%% and 28%%.\n");
        return 0;
    }

    // Calculations
    gstAmount = (originalPrice * gstRate) / 100;
    totalPrice = originalPrice + gstAmount;

    // Output
    printf("\n--- GST Breakdown ---\n");
    printf("Price before GST : %.2f\n", originalPrice);
    printf("GST Amount (%.2f%%) : %.2f\n", gstRate, gstAmount);
    printf("Price after GST  : %.2f\n", totalPrice);

    return 0;
}
