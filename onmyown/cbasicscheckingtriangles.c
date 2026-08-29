include <stdio.h>

int main()

{
    float a , b , c;
    printf("Whats the length of the 1st side of the triangle?\n");
    scanf("%f" , &a);

    printf("Whats the length of the 2nd side of the triangle?\n");
    scanf("%f" , &b);

    printf("Whats the length of the 3rd side of the triangle?\n");
    scanf("%f" , &c);

    if(a+b <= c || a+c <= b || c+b <= a){
        printf("The triangle can not be formed with sides of these length.\n");
    }
    else if(a == b && b == c && c == a){
        printf("The triangle is an equilateral triangle.\n");
    }
    else if(a == b || b == c || a == c){
        printf("The triangle  is an isosceles triangle.\n");
    }
    else {
        printf("The triangle is an scalene");
    }
    return 0;
}