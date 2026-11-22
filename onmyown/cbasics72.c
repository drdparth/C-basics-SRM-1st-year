#include <stdio.h>
#include <string.h>

void countvowels(char str[]){
    int i , count = 0;
    for(i = 0 ; i < strlen(str) ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    printf("Total number of vowels are %d" , count);
}

int main(){
    char str[100];
    
    printf("Enter a string:\n");
    scanf("%s" , str);

    countvowels(str);

    return 0;
}