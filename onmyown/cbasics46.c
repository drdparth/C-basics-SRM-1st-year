#include <stdio.h>
int main()
{
    int arr[100] , n , i , j, temp ;

    printf("Enter the inputs:\n");
    scanf("%d" , &n);

    printf("Enter array element:");

    for(i = 0 ; i < n; i++){
        scanf("%d" , &arr[i]);
    }

    for(i = 0 ; i < n/2 ; i++){
        j = n -1 - i;

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array: ");

    for(i = 0 ; i < n ; i++)
    {
        printf("%d " , arr[i]);
    }

    return 0;
    
}