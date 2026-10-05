#include <stdio.h>

int main()
{
    float n , num;
    float sum = 0;
    printf("Enter the number : \n");
    scanf("%f" , &n);
    for( float i = 1 ; i <= n ; i++){
        printf("Enter %.0f number:\n", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("The sum of total numbers is %.2f \n" , sum / n);
    return 0;
}