#include <stdio.h>

int main()

{
    int m;

    printf("Your Input :\n");
    scanf("%d" , &m);

    switch(m){
        case 1:
            printf("You are dumbass");
            break;
        case 2:
            printf("You are noob");
            break;
        case 3:
            printf("You are poop");
            break;
        case 4:
            printf("you are intelligent");
            break;
        default:
            printf("These stupid line");
    }
    return 0;
}    