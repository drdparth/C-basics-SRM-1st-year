#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age:\n");
    scanf("%d" , &age);

    if(age>21){
        printf("Your elligible to enter the club");
    }
    if(age==21){
        printf("Your just elligible to enter the bar, but arent permited to drink high concrated alcohol");
    }
    if(age<21){
        printf("You arent elligible for the bar kiddo");
    }
    return 0;
}