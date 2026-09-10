#include <stdio.h>

int main()

{
    int balance , money , choice;

    balance = 12350;

    printf("Welcome what u want to do:\n");
    printf("Press 1 for Depositing\n");
    printf("Press 2 for Withdrawing\n");
    printf("Press 3 for checking balance:\n");
    
    printf("Enter your choice:");
    scanf("%d", &choice);

switch(choice){
    case 1:
    printf("Enter money to deposite:\n");
    scanf("%d", &money);

    printf("Now your balance is %d", balance + money);

    break;

    case 2:
    printf("Enter money to withdraw:\n");
    scanf("%d", &money);

    printf("Now your balance is %d", balance - money);

    break;

    case 3:

    printf("Your balance is %d", balance);

    break;
}

return 0;

}