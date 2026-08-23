#include <stdio.h>
#include <math.h>

int main()

{
    int age;
    float height, weight;
    char sen[100];
    double exponents= 2.0;
    double bmi;

    printf("Whats your age ??\n");
    scanf("%d" , &age);

    printf("Whats Your weight ??\n");
    scanf("%f" , &weight);

    printf("Whats your Height ??\n");
    scanf("%f" , &height);

    printf("Whats Your name ??\n");
    scanf(" %[^\n]%*c" , sen);

    bmi = weight / (pow(height, exponents));

    printf("Hi %s your BMI is %f" , sen , bmi);

    return 0;
    
}