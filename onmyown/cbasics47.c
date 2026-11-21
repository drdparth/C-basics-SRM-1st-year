#include <stdio.h>
int main(){
    int i ,even = 0, odd = 0 , n , arr[100];

    printf("Enter the number of inputs: \n");
    scanf("%d" , &n);

    printf("Enter the input: \n");

    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);

        if(arr[i] % 2 == 0){
            even += 1; 
        }
        else{
            odd += 1;
        }
    }

    printf("Even elements = %d \n Odd elements = %d \n" , even , odd);

    return 0;
    
}