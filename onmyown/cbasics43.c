#include <stdio.h>

int sumDigits(int n){
    if(n == 0){
        return 0;
    }
    return (n%10) + sumDigits(n/10);
}

int main(){
    int num , result;
    printf("Enter a number:\n");
    scanf("%d" , &num);

    result = sumDigits(num);

    printf("Answer is %d" , result);

    return 0;
}