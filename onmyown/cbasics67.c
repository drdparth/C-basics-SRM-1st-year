#include <stdio.h>

void checking(int n , int arr[] , int value){
    int i;

    for(i = 0 ; i < n ; i++){
        if(arr[i] == value){
            printf("The index at which the value is present is %d" , i+1);
        }
        else{
            printf("");
        }
    }
}

int main(){
    int i , n , value , arr[100];
    printf("Enter total elements in array:");
    scanf("%d" , &n);

    printf("Enter the elements of the array:");
    for(i = 0 ; i  < n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Enter the value you want to check on:");
    scanf("%d" , &value);

    checking(n , arr , value);

    return 0;
}    