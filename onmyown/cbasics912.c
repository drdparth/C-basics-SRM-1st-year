#include <stdio.h>

int main()

{
    int age;
    printf("Input your age:");
    scanf("%d" , &age);

    if(age < 18 || age <= 60){
        printf("You arent permitted to drive.\n");
    }
    else if(age > 60 && age <= 95){
        printf("You are too old to drive.\n");
    }
    else if(age>95){
        printf("You arent permitted to drive.\n");
    }
    else{
        printf("You are too young to drive.\n");
    }
    return 0;
}    