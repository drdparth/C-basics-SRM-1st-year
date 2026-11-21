#include <stdio.h>
void printarray(int a[] , int n){
    int i;
    for(i = 0 ; i < n ; i++){
        printf("%d" , a[i]);
        printf("\n");
    }
}
int main(){
    int arr[] = {64,34,25,12,22,11,90};
    int n = 7, i , j , temp , swapped;


printf("Original: ");
printarray(arr , n);

for(i = 0 ; i < n -1 ; i++){
    swapped = 0;
    for(j = 0 ; j < n -1 ; j++){
        if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swapped = 1;
        }
    }
    printf("Pass %d:  " , i+1);
    printarray(arr , n);
    if(swapped == 0)
    break;
}
    printf("Sorted:  ");
    printarray(arr , n);
    return 0;
}
