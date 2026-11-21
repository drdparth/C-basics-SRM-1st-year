#include <stdio.h>

int main(){
    int num = 4;
    int result;

    printf("Calculating factorial for: %d\n" , num);

    result = findFactorial(num);

    printf("Final Calculation Result: %d! = %d\n", num, result);
    return 0;
}

int findFactorial(int n){
    if(n == 1){
        return 1;
    }

        return n * findFactorial(n - 1);
    
}