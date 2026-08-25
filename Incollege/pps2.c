#include <stdio.h>

int main()

{
    int m , n , temp;
     m=10;
     n=5;

     temp = m;
     m = n;
     n = temp;

     printf("therefore %d and %d" , m , n);
     return 0;
}