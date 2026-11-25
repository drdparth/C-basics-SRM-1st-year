#include <stdio.h>

void count(int n){
    if(n == 0){
        return;
    }    

    printf("%d" , n);
    count(n -1);
    
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d" , &n);

    count(n);

    return 0;
}