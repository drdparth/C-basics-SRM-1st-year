#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i +=2){
        sum += i;
    }
    printf("The sum of odd numbers is %d \n" , sum);
    return 0;
}
