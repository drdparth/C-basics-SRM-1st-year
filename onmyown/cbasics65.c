#include <stdio.h>

int sumarray(int arr[] ,int n){
    int i , sum = 0 ;

    for(i = 0 ; i < n ; i++ ){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int i , arr[100] , n , sum;
    printf("Total input elements:");
    scanf("%d" , &n);

    printf("Enter the lemements of the array:\n");
    for(i = 0 ; i < n ; i++ ){
        scanf("%d" , &arr[i]);
    }
    
    sum = sumarray(arr , n);

    printf("The sum of elements are %d" , sum);

    return 0;
}