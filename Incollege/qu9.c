#include <stdio.h>
int square(int a)
{
    int result;
    result = a * a;
    printf("Value is %d\n", result);
}

int main()
{
    int b;
    printf("Whats the number for which u want a square\n");
    scanf("%d" , &b);
    square(b);
    return 0;
}