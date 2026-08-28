#include <stdio.h>

int main()

{
    int x;
    printf("Whats your age:\n");
    scanf("%d" , &x);

    if(x>25 && x<65){
        printf("You need to pay the full price for the movie ticket.\n");
    }
    else if(x>=65){
        printf("You will get an older discount movie ticket.\n");
    }
    else if(x>= 18 && x<=25 ){
        printf("You will get student discount for movie ticket.\n");
    }
    else if(x>5 && x<18){
        printf("You will get kids discount.\n");
    }
    else{
        printf("Your ticket is free.\n");
    }
    return 0;
}