#include <stdio.h>
int main()
{
    int n , num , largest = 0;
    printf("Enter a number: \n");
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++){
        printf("Enter %d number: \n" , i);
        scanf("%d" , &num);
        if(num > largest){
            largest = num;
        }
        else{
            largest = largest;
        }

    }
    printf("The largest number of the following is %d \n" , largest);
    return 0;
}