#include <stdio.h>

int main()

{
    int chapter;
    float Temp;
    char ch;

    printf("No. of chapter??\n");
    scanf("%i" , &chapter);

    printf("Whats the temprature there?\n");
    scanf("%f" , &Temp);

    printf("First character of your city??\n");
    scanf(" %c" , &ch);

    printf("Number of chapter in your book is %i , the temprature there %.1f , the first letter of your city is %c\n" , chapter , Temp , ch);
    return 0;


}