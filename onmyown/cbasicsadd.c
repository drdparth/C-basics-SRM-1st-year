#include <stdio.h>

int main()

{
    float number1, number2, number3, number4, Calculation;

    printf("Whats the first num ?\n");
    scanf("%f" , &number1);


    printf("Whats the second num ?\n");
    scanf("%f" , &number2);

    printf("Whats the third num ?\n");
    scanf("%f" , &number3);

    printf("Whats the fourth num ?\n");
    scanf("%f" , &number4);

    Calculation = number1 / number2 - number3 * number4;
    
    printf("The calculation result is %f\n" , Calculation);

    return 0;

}