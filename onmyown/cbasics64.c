#include <stdio.h>

void reversearray( int n){
    int i, j , temp  , arr[100] ;
    printf("Enter the elements of array:");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Reversing the array:");

    for(i = 0,j = n - 1 ; i < j ; j-- , i++ ){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(i = 0; i < n ; i++){
        printf("%d " , arr[i]);
    }


}

int main(){
    int arr[100] , n , reverse;

    printf("ENter the total input:");
    scanf("%d" , &n);

    reversearray(n);

   return 0;
}