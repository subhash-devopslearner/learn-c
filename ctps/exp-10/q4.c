/*
Write a program to write and read data from a product.dat 
binary file. The program should
write product details such as product ID, price, and quantity; 
the product is defined as a structure.
*/

#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    float price;
    int quantity;
};

int main() {
    FILE *fp;
    struct Product p;
    int n, i;

    /* Writing to binary file */
    fp = fopen("product.dat", "wb");
    if (fp == NULL) {
        printf("Unable to open file for writing\n");
        exit(0);
    }

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Product ID, Price, Quantity: ");
        scanf("%d %f %d", &p.id, &p.price, &p.quantity);
        fwrite(&p, sizeof(p), 1, fp);
    }

    fclose(fp);

    /* Reading from binary file */
    fp = fopen("product.dat", "rb");
    if (fp == NULL) {
        printf("Unable to open file for reading\n");
        exit(0);
    }

    printf("\nProduct Details:\n");
    printf("ID\tPrice\tQuantity\n");

    while (fread(&p, sizeof(p), 1, fp)) {
        printf("%d\t%.2f\t%d\n", p.id, p.price, p.quantity);
    }

    fclose(fp);

    return 0;
}
