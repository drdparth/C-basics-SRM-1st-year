#include <stdio.h>

int main()

{
    int m;
    printf("Tell your marks:\n");
    scanf("%d" , &m);

    if(m>75){
        printf("You are elligible for this exam.");
    }
    else{
        printf("You arent elligible for this exam.");
    }
    return 0;                 
}