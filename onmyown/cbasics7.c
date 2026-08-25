#include <stdio.h>

int main()

{
    float m , p , c , t;

    printf("Enter your marks in Maths:\n");
    scanf("%f" , &m);

    printf("Enter your marks in Physics:\n");
    scanf("%f" , &p);

    printf("Enter your marks in Chemistry:\n");
    scanf("%f" , &c);

    printf("Enter max marks possible to obtain:\n");
    scanf("%f" , &t);

    float pp;

    pp = (m + c +p)/t * 100;

    printf("Your percentage in PCM %.1f\n" , pp);
    if(pp>75.0){
        printf("Your percentage crosses the cot off of the exam, you can apply for this college");
    }
    if(pp<75.0){
        printf("Your percentage dosent crosses the cut off for this so you arent applicable for this college");
    }
return 0;
}    