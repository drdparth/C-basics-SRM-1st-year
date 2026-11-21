#include <stdio.h>
int main(){
    int i ,largest ,n , arr[100];
    printf("Enter total inputs:");
    scanf("%d" , &n);

    printf("Enter the elements");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    largest = arr[0];

    for(i = 0 ; i < n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("The largest number in the array is %d" , largest);
    return 0;
}    