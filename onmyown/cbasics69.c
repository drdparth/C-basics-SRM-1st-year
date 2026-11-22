#include <stdio.h>

void countfreq(int arr[] , int n){
    int count , i , j , visited[100] = {0} ;

    for(i = 0 ; i < n; i++){
        if(visited[i] == 1){
            continue;
        }
        else{
            count = 1;
        }

        for(j = i + 1 ; j < n ; j++){
            if(arr[i] == arr[j]){
                visited[j] = 1;
                count++ ;
            }
        }
        printf("%d was repeated %d times.\n" , arr[i] , count);
    }
}

int main(){
    int n , arr[100] , count , i ;

    printf("Enter the total elements of array:\n");
    scanf("%d" , &n);

    printf("Enter the elements of array:\n");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    countfreq(arr , n);

    return 0;

}