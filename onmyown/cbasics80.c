#include <stdio.h>

struct product{
    int id;
    char name[30];
    float price;
    int quantity;

};

void calculatebill(struct product p[] , int n , float *total){
    int i;
    *total = 0;
    for(i = 0 ; i < n ; i++){
        *total = *total + (p[i].price * p[i].quantity);
    }
}

int main(){
    struct product p[100];
    int i , n ;
    float total;

    printf("Enter total number of products: ");
    scanf("%d" , &n);

    for(i = 0 ; i < n ; i++){
        printf("\nEnter Product ID: ");
        scanf("%d" , &p[i].id);

        printf("Enter product name: ");
        scanf("%s" , &p[i].name);

        printf("Enter price: ");
        scanf("%f" , &p[i].price);

        printf("Enter quantity: ");
        scanf("%d" , &p[i].quantity);

    }

    calculatebill(p , n , &total);

    for(i = 0 ; i < n ; i++){
        printf("\nTD : %d" , p[i].id);
         printf("\nName: %s", p[i].name);
        printf("\nPrice: %.2f\n", p[i].price);
    }

    printf("\nTotal price: %.2f" , total);

    return 0;
}