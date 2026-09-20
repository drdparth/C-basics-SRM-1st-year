#include <stdio.h>

void addFive(int x)
{
    x = x + 5;
    printf("Value of x is %d\n", x);
}

int main()
{
    int num = 10;
    addFive(num);
    printf("the value is %d", num);
    return 0;
}