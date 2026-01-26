#include <stdio.h>

struct Product {
    int product_id;
    float price;
    int quantity;
};

int main() {
    struct Product p[10];
    FILE *fp;
    int n, i;

    // Number of products
    printf("Enter number of products (max 10): ");
    scanf("%d", &n);

    // Input product details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of product %d\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &p[i].product_id);
        printf("Price: ");
        scanf("%f", &p[i].price);
        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
    }

    // Write to binary file
    fp = fopen("product.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    fwrite(p, sizeof(struct Product), n, fp);
    fclose(fp);

    printf("\nData written to binary file successfully.\n");

    // Read from binary file
    fp = fopen("product.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    fread(p, sizeof(struct Product), n, fp);
    fclose(fp);

    // Display product details
    printf("\nProduct Details from File:\n");
    for (i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID: %d\n", p[i].product_id);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);
    }

    return 0;
}
