#include <stdio.h>

int isdivisibleby(int c)
{
    if(c % 5 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main() 
{
    int d;
    printf("Enter a number :\n");
    scanf("%d", &d);

    // Main checks the answer handed back by the function
    if (isdivisibleby(d) == 1) {
        printf("Number is divisible with 5.\n");
    } else {
        printf("Rubbish\n");
    }

    return 0;
}