#include <stdio.h>

int main()

{
    int a = 10;
    float b = 20.0;
    char s = 'e';
    double q = 2.0000;

    printf("Size of integer variable is %d bytes, then the size of float variable %d bytes, also the size of character variable is %d bytes, and the size of long float variable is %d bytes", sizeof(a) , sizeof(b) , sizeof(s) , sizeof(q));
    return 0;



}