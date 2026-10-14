#include <stdio.h>

void percentage(int a , int b, int c , int d, int e){
    float total;
    total = (a+b+c+d+e)/500;
    if(total >= 75){
        printf("Your are qua;ified for the scholarship.\n");
    }
    else{
        printf("Better luck next time.\n");
    }
    
}

int main(){
    int p, q , r , s , t;
    printf("Enter marks of all subjects out of 100 :\n");
    scanf("%d %d %d %d %d" , &p , &q , &r, &s , &t);

    percentage(p,q,r,s,t);

    return 0;
}