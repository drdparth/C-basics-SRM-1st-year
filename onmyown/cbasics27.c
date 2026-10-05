#include <stdio.h>

int main()
{
    int n;
    int total = 0;
    printf("Enter a number : \n");
    scanf("%d", &n);
    for(int i = 0 ; i <= n ; i++){
        total += i;
    }
    printf("The total is %d \n" , total);
    return 0;
}    