#include <stdio.h>

void checkbalance(int bal);

int withdrawacc(int bal , int amount);

int depositeacc(int bal , int amount);

int main(){
    int  balance = 5000 , choice;
    printf("1-Balance\n2-Withdraw\n3-Deposite\n4-Exit\n Enter your choice:");
    scanf("%d" , &choice);
    
    switch (choice){
        case 1:
        checkbalance(balance);
        break;

        case 2:
        balance = withdrawacc(balance);
        printf("Now your current balance is %d\n" , balance);
        break;

        case 3:
        balance = depositeacc(balance);
        printf("Now your current balance is %d\n" , balance);
        break;

        case 4:
        printf("EXIT\n");

        default:
        printf("ERROR\n");
        break;
    }
    return 0;

}

int checkbalance(int bal){
    printf("Your balance is %d\n" , bal);
}

int withdrawacc(int bal){
    int amount;
    printf("Enter amount to be withdrawed : \n");
    scanf("%d" , &amount);

    if(amount > bal){
        printf("You dont have enough balance.\n");
    }
    else{
        bal = bal - amount;
    }

    return bal;
}

int depositeacc(int bal){
    int amount;
    printf("Enter amount to be deposited :\n");
    scanf("%d" , &amount);

    bal = bal + amount;

    return bal;
}