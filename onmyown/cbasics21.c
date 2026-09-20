#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    printf("Enter a nuumber:\n");
    scanf("%d", &i);
    for(int n = 1; n <= i; n ++ )
    {
       sum = sum + n;
    }
    printf("The sum is %d\n", sum);
    return 0;
}