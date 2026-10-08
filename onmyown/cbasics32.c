#include <stdio.h>

void bank(int choice , int balance){

    int amount;

    switch (choice) {
        case 1:
        printf("The balance is %d.\n", balance);
        break;

        case 2:
        printf("Enter the ammount to be withdrawed :\n");
        scanf("%d" , &amount);
        if(balance < amount){
            printf("!ERROR!!");
        }
        else{
            balance -= amount;
            printf("New balance is %d.\n" , balance);
        }
        break;

        case 3:
        printf("Enter amount to deposite:\n");
        scanf("%d" , &amount);
        balance += amount;
        printf("Now your balance is %d.\n", balance);
        break;
    }
}

int main()
{
    int choice;
    int balance = 5000;

    printf("1 - Balance .\n 2 - Withdraw.\n 3 - Deposite.\n");
    printf("Enter choice:");
    scanf("%d" , &choice);

    bank(choice , balance);

    return 0;
}