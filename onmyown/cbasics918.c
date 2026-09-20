#include <stdio.h>

int modifyvalues(int a,int b)
{
    a = a* 10;
    b = b / 2;
    printf("Calculated values of a is %d and b is %d\n", a ,b);
}

int main()
{
    int x , y;
    printf("Enter your numbers a and b.\n");
    scanf("%d %d" , &x , &y);
    modifyvalues( x, y);
    printf("Original numbers are %d and %d\n", x , y);
    return 0;
}