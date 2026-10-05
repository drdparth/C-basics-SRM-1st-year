#include <stdio.h>

int main()
{
    int n, num, odd = 0, even = 0;
    printf("Enter a number:\n");
    scanf("%d" , &n);
    for(int i = 1; i <= n ; i++){
        printf("Enter %d number:\n" , i);
        scanf("%d" , &num);
        if(num % 2 == 0){
            even += 1;
        }
        else{
            odd += 1;
        }

    }
    printf("Total number of even integer is %d \n", even);
    printf("Total number of odd integer is %d \n", odd);
    return 0;
}