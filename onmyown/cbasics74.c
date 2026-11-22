#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] , str2[100];
    char copy[100];
    char ch;
    int result;

    printf("Enter 1st string: ");
    scanf("%s" , str1);

    printf("enter 2nd string: ");
    scanf("%s" , str2);

    printf("The total number of words in 1st string and 2nd string is %d and %d" , (int)strlen(str1) , (int)strlen(str2));       //strlen is for finding the length of a string or in simple words how many words does the strings contains.

    strcpy(copy , str2);                                    //strcpy is for copying one string into another.
    printf("The copied part of str2 is %s" , copy);

    strcat(str1 , str2);                                          //strcat is for joining 2 strings.
    printf("When string 1 and string2 are joined %s" , str1);

    printf("Enter a character you want to find:\n");
    scanf("%c" , &ch);

    if(strchr(str2 , ch) != NULL){          //strchr is for finding a character in a string.
        printf("character found");   
    }
    else{
        printf("Character not found");
    }

    if(strstr(copy , str2) != NULL){                                           //strstr is for finding a substring in a determined string.
        printf("Copied string from string 2 is a substring of string2. ");
    }
    else{
        printf("Coppied string from str2 isnt a substring of string2. ");
    }

    result = strcmp(copy , str2);                          //strcmp is a string to compare 2 or more strings.

    if(result == 0){
        printf("String are equals.");

    }
    else{
        printf("Strings arent equal.");
    }

    return 0;



}