#include <stdio.h>

int secondmax(int arr[] , int n){

    int max , max2 , i , temp ;

    for(i = 0 ; i < 1 ; i++){
        max = arr[i];
        max2 = arr[i+1];

        if(max2 > max){
            temp = max;
            max = max2;
            max2 = temp;
        }
    }

    for(i = 2 ; i < n ; i++){
        if(arr[i] > max2){
            if(arr[i] > max){
                max2 = max;
                max = arr[i];
            }
            else{
                max2 = arr[i];
            }
        }
    }

    return max2;
} 

int main(){
    int arr[100] , n , i ,  secmax;
    printf("Enter the no of elements:");
    scanf("%d" , &n);

    printf("Enter the elements:");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    secmax = secondmax(arr , n);

    printf("The second largest number is %d" , secmax);

    return 0;
}