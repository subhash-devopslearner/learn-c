/*
Write a program in C to perform various operations such as writing, reading, appending,
and searching on the file product.txt. The product details to be processed include product
ID, price, and quantity. The read and write operations should use the fprintf() and fscanf()
functions.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int choice, id, qty, searchId, found;
    float price;

    while (1) {
        printf("\n--- PRODUCT FILE OPERATIONS ---\n");
        printf("1. Write product details\n");
        printf("2. Read product details\n");
        printf("3. Append product details\n");
        printf("4. Search product by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: /* Write */
            fp = fopen("product.txt", "w");
            if (fp == NULL) {
                printf("Unable to open file\n");
                exit(0);
            }

            printf("Enter Product ID, Price, Quantity (-1 to stop):\n");
            while (1) {
                scanf("%d", &id);
                if (id == -1)
                    break;
                scanf("%f %d", &price, &qty);
                fprintf(fp, "%d %.2f %d\n", id, price, qty);
            }

            fclose(fp);
            break;

        case 2: /* Read */
            fp = fopen("product.txt", "r");
            if (fp == NULL) {
                printf("File not found\n");
                break;
            }

            printf("\nProductID  Price   Quantity\n");
            while (fscanf(fp, "%d %f %d", &id, &price, &qty) != EOF) {
                printf("%8d %7.2f %8d\n", id, price, qty);
            }

            fclose(fp);
            break;

        case 3: /* Append */
            fp = fopen("product.txt", "a");
            if (fp == NULL) {
                printf("Unable to open file\n");
                break;
            }

            printf("Enter Product ID, Price, Quantity (-1 to stop):\n");
            while (1) {
                scanf("%d", &id);
                if (id == -1)
                    break;
                scanf("%f %d", &price, &qty);
                fprintf(fp, "%d %.2f %d\n", id, price, qty);
            }

            fclose(fp);
            break;

        case 4: /* Search */
            fp = fopen("product.txt", "r");
            if (fp == NULL) {
                printf("File not found\n");
                break;
            }

            printf("Enter Product ID to search: ");
            scanf("%d", &searchId);
            found = 0;

            while (fscanf(fp, "%d %f %d", &id, &price, &qty) != EOF) {
                if (id == searchId) {
                    printf("Product Found:\n");
                    printf("ID: %d\nPrice: %.2f\nQuantity: %d\n", id, price, qty);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found\n");

            fclose(fp);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
