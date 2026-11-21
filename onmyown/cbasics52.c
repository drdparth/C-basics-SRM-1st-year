#include <stdio.h>
int main(){
    int i , n , sum , j;

    printf("Enter the number of inputs:\n");
    scanf("%d" , &n);

    printf("Enter the numbers:\n");
    for(i = 0 ;i < n ; i++){
        scanf("%d" , &j);

        sum += j;
    }
    printf("The sum of all the inputs are %d" , sum);
    return 0;
}