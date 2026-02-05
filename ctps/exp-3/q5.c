/*
Develop a program to calculate the electricity bill including a discount based on the
total bill amount. The initial base bill is 100 Rs, and the program should calculate the
total bill amount by multiplying the number of units consumed by 10 Rs per unit and
then adding this amount to the base bill. The discount should be applied according to
predefined ranges of bill amounts based on the following ranges:
 Bill Amount ≤ 200: No discount
 200 < Bill Amount ≤ 500: 5% discount
 500 < Bill Amount ≤ 800: 10% discount
 800 < Bill Amount ≤ 1100: 15% discount
 Bill Amount > 1100: 20% discount
The program should display initial base bill amount, bill amount, percentage discount
applied, the discount amount applied and the total bill amount after applying the discount.
*/

#include <stdio.h>

int main()
{
    int units;
    float baseBill = 100.0;
    float billAmount, discountPercent, discountAmount, finalBill;

    /* Input */
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    /* Bill calculation */
    billAmount = baseBill + (units * 10);

    /* Discount calculation */
    if (billAmount <= 200)
        discountPercent = 0;
    else if (billAmount <= 500)
        discountPercent = 5;
    else if (billAmount <= 800)
        discountPercent = 10;
    else if (billAmount <= 1100)
        discountPercent = 15;
    else
        discountPercent = 20;

    discountAmount = (discountPercent / 100) * billAmount;
    finalBill = billAmount - discountAmount;

    /* Output */
    printf("\n----- Electricity Bill Details -----\n");
    printf("Base Bill Amount        : Rs %.2f\n", baseBill);
    printf("Total Bill Amount       : Rs %.2f\n", billAmount);
    printf("Discount Applied        : %.0f%%\n", discountPercent);
    printf("Discount Amount         : Rs %.2f\n", discountAmount);
    printf("Final Bill Amount       : Rs %.2f\n", finalBill);

    return 0;
}
