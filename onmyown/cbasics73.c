#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i , j , palindrome ;

    printf("Enter a string:\n");
    scanf("%s" , str);

    j = strlen(str) - 1 ;

    for(i = 0 ; i < j ; i++ , j--){
        if(str[i] != str[j]){
            palindrome = 0;
            break;
        }
        else{
            palindrome = 1 ;
        }
    }
    if(palindrome == 1){
        printf("The string is a palindrome.");
    }
    else{
        printf("The string isnt a palindrome.");
    }

    return 0;
}