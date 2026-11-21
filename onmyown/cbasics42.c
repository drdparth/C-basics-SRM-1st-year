#include <stdio.h>

int fibonacci(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }

    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main(){
    int result , n ;
    printf("Enter a number:\n");
    scanf("%d" , &n);

    result = fibonacci(n);

    printf("Answer of fibonacci is %d \n" , result);

    return 0;
}