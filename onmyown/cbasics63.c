#include <stdio.h>
int main(){
    int i , smallest , n , arr[100];
    printf("Enter total inputs:");
    scanf("%d" , &n);

    printf("Enter the elements");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    smallest = arr[0];

    for(i = 0 ; i < n ; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("The smallest number in the array is %d" , smallest);
    return 0;
}    