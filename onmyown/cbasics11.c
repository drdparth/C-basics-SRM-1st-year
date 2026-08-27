#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age:\n");
    scanf("%d" , &age);

    if(age >= 60) {
        printf("Your are permitted to drive but drive slow.\n");
    }
    else if(age >= 18) {
        printf("You are permitted to drive.\n");
    }
    else {
        printf("You arent permitted to drive.\n");
    }
    return 0;
}