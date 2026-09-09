#include <stdio.h>

int main()

{
    int category;

    printf("In Which category are you in ?\n");
    printf("Domestic category:- 1\n");
    printf("Commerical category:- 2\n");

    printf("Enter category:- \n");
    scanf("%d", &category);

    float units;

    switch(category){
        case 1:       

        printf("Enter the units of Electricity consumed:");
        scanf("%f", &units);

        if(units <= 0){
            printf("!!ERROR!!");
        }
        else if(units <= 100){
            printf("Your total electricity bill is %.2f\n", units*2);
        }
        else if(units > 100 && units <= 200){
            printf("Your total electricity bill is %.2f\n", units*3);
        }
        else if(units > 200 && units <= 300){
            printf("Your total electricity bill is %.2f\n", units*5);
        }
        else{
            printf("Your total electricity bill is %.2f\n", units*7);
        }
        break;

        case 2:
        printf("Enter the units of Electricity consumed:");
        scanf("%f", &units);

        if(units <= 0){
            printf("!!ERROR!!");
        }
        else if(units <= 100){
            printf("Your total electricity bill is %.2f\n", units*5);
        }
        else if(units > 100 && units <= 200){
            printf("Your total electricity bill is %.2f\n", units*7);
        }
        else if(units > 200 && units <= 300){
            printf("Your total electricity bill is %.2f\n", units*10);
        }
        else{
            printf("Your total electricity bill is %.2f\n", units*12);
        }
        break;

        default:
        printf("Not Registered ");

    }
    return 0;
}