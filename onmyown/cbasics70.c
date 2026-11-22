#include <stdio.h>

void reversearray(int arr[] , int n){
    int i , j , temp ;

    for(i = 0 , j = n - 1 ; i < j ; i++ , j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }

}

int main(){
    int n , arr[100] , i ;
    printf("Enter total ememnets:");
    scanf("%d" , &n);

    printf("Enter elements:");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    reversearray(arr , n);

    return 0;
}