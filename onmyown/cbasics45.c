#include <stdio.h>
int main()
{
    int arr[100] , n , i , max = 0 , max2;
    printf("Total number of inputs:\n");
    scanf("%d" , &n);

    if(n < 2 || n > 100){
        printf("ERROR");
    }


    for(i = 0 ; i < n; i++){
        printf("Enter the number:\n");
        scanf("%d" , &arr[i]);
    }

    max = arr[0];
    max2 = arr[0];

    for(i = 1; i < n ; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max){
            max2 = arr[i];
        }
    }

    printf("Largest = %d\n" , max);
    printf("Second largest = %d" , max2);

    return 0;
}    