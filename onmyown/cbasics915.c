#include <stdio.h>

int main()

{
    float a , b , c , d , e , f , g;
    printf("Whats your marks in subject a ??\n");
    scanf("%f" , &a);

     printf("Whats your marks in subject b ??\n");
    scanf("%f" , &b);

     printf("Whats your marks in subject c ??\n");
    scanf("%f" , &c);

     printf("Whats your marks in subject d ??\n");
    scanf("%f" , &d);

     printf("Whats your marks in subject e ??\n");
    scanf("%f" , &e);

     printf("Whats total marks of all subjects ??\n");
    scanf("%f" , &f);

    g = (a+b+c+d+e)/f * 100;

    if(a<32.99||b<32.99||c<32.99||d<32.99||e<32.99){
        printf("You have failed the test.\n");
    }
    else if(g<39.99){
        printf("You have failed the test.\n");
    }
    else{
        printf("You have passed the test.\n");
    }
    return 0;
}