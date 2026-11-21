#include <stdio.h> 

void checkrepeated(int arr[] , int n){
    int i , j , count;
    int varity[100] = {0};

    for(i = 0; i < n; i++){
        if(varity[i] == 1){
            continue;
        }

        count = 1;
        for(j = i + 1; j <= n ; j++){
            if(arr[i] == arr[j]){
                count++;
                varity[j] = 1;
            }
        }
        printf("%d was repeated %d times" , arr[i] , count);
    }
}
int main(){
    int n ,arr[100] , i;
    printf("Enter total inputs");
    scanf("%d" , &n);

    printf("Enter array eleement:\n");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }

    checkrepeated( arr , n);

    return 0;
}