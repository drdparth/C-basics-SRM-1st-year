#include <stdio.h>
int main()
{
    int i;
    do
    {
        printf("Enter a positive number:\n");
        scanf("%d" , &i);

        if(i == 0){
            printf("The number is zero.\n");
        }
        else if(i <= 0) {
            printf("The number is a negative number.\n");
        }
        else{
            printf("The number is a positive number.\n");
        }

    } while(i <= 0);

    return 0;
}