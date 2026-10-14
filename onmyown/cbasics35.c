#include <stdio.h>

void leap(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("The year is a leap year");
    }
    else{
        printf("The year isnt a leap year.");
    }
}

int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d" , &year);

    leap(year);

    return 0;
}