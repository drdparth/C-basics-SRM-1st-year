#include <stdio.h>

int digitadd(int n){
    if(n == 0){
        return 1;
    }

    return n * 10 + digitadd(n / 10);
}
int main(){
    int n , result;
    printf("ENter a number:\n");
    scanf("%d" , &n);

    result = digitadd(n);

    printf("Sum = %d" , result);

    return 0;
}