#include <stdio.h>

int main()

{
    float radius, height;
    printf("Enter radius:\n");
    scanf("%f", &radius);

    printf("Enter Height:\n");
    scanf("%f", &height);

    printf("Your Cylinder Volume is %f\n" , radius*radius*3.14*height);
    return 0;

    
}