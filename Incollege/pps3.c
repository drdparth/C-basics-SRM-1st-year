#include <stdio.h>

int main()

{
    int a = 6;
    int b = 13;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Now a is %d and now b is %d. " , a , b);
    return 0;
}