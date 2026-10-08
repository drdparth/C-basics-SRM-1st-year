#include <stdio.h>

void bill(int choice , int units){

    int bill;

    switch (choice){
        case 1:
        if(units >= 0 && units <= 100){
            bill = units * 1;
            printf("The bill is %d.\n" , bill);
        }
        else if(units >= 101 && units <= 200){
            bill = 100 + (units - 100) * 2;
            printf("The bill is %d.\n", bill);
        }
        else if(units >= 201){
            bill = 100 + 200 + (units - 200) * 3;
            printf("The bill is %d.\n", bill);
        }
        else{
            printf("!!ERROR!!");
        }
        break;

        case 2:
        if(units >= 0 && units <= 100){
            bill = units * 2;
            printf("The bill is %d.\n" , bill);
        }
        else if(units >= 101 && units <= 200){
            bill = 100 + (units - 100) * 4;
            printf("The bill is %d.\n", bill);
        }
        else if(units >= 201){
            bill = 100 + 200 + (units - 200) * 6;
            printf("The bill is %d.\n", bill);
        }
        else{
            printf("!!ERROR!!");
        }
        break;
    }
}

int main()
{
    int choice , units;
    printf("1 - Domestic\n2 - Commercial\n");
    printf("Enter your type:\n");
    scanf("%d" , &choice);

    printf("Enter amount of electrical units consumed:\n");
    scanf("%d" , &units);

    bill(choice , units);

    return 0;
}