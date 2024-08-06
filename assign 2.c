#include <stdio.h>

struct Product {
    char name[100];
    char id[10];
    float price;
};

int main() {
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct Product products[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product Name: ");
        scanf("%s", products[i].name);
        printf("Product ID: ");
        scanf("%s", products[i].id);
        printf("Price: ");
        scanf("%f", &products[i].price);
    }

    printf("Product Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Product Name: %s, Product ID: %s, Price: %.2f\n", products[i].name, products[i].id, products[i].price);
    }

    float totalCost = 0;
    float maxPrice = products[0].price;
    float minPrice = products[0].price;
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        totalCost += products[i].price;
        if (products[i].price > maxPrice) {
            maxPrice = products[i].price;
            maxIndex = i;
        }
        if (products[i].price < minPrice) {
            minPrice = products[i].price;
            minIndex = i;
        }
    }

    totalCost += products[0].price;

    printf("\nMost Expensive Product: %s, Product ID: %s, Price: %.2f\n", products[maxIndex].name, products[maxIndex].id, products[maxIndex].price);
    printf("Least Expensive Product: %s, Product ID: %s, Price: %.2f\n", products[minIndex].name, products[minIndex].id, products[minIndex].price);
    printf("\nTotal Cost of All Products: %.2f\n", totalCost);

    return 0;
}