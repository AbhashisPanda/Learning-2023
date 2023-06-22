#include <stdio.h>


struct Product {
    char name[50];
    int price;
};

void swapProduct(struct Product *p1, struct Product *p2) {

    char tempName[50];
    strcpy(tempName, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempName);


    int tempprice = p1->price;
    p1->price = p2->price;
    p2->price = tempprice;
}

int main() {
    struct Product product1 = {"Brinjal", 25};
    struct Product product2 = {"Banana", 30};


    printf("Original data:\n");
    printf("Product 1: Name = %s, price = %d\n", product1.name, product1.price);
    printf("Product 2: Name = %s, price = %d\n", product2.name, product2.price);


    swapProduct(&product1, &product2);


    printf("Swapped data:\n");
    printf("Product 1: Name = %s, price = %d\n", product1.name, product1.price);
    printf("Product 2: Name = %s, price = %d\n", product2.name, product2.price);

    return 0;
}