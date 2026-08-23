#include <stdio.h>

int main()

{
   float Maths , Physics , Chemistry , PhysicalEducation , English , Percentage , Total;

   printf("Enter the marks in Maths:\n");
   scanf("%f" , &Maths);

   printf("Enter the marks in Physics:\n");
   scanf("%f" , &Physics);

   printf("Enter the marks in Chemistry:\n");
   scanf("%f" , &Chemistry);

   printf("Enter the marks in English:\n");
   scanf("%f" , &English);

   printf("Enter the marks in Physical Education:\n");
   scanf("%f" , &PhysicalEducation);

   printf("Enter Total Marks:\n");
   scanf("%f" , &Total);

   Percentage = ((Maths + PhysicalEducation + Chemistry + Physics + English)/Total) * 100;

   printf("Your total percentage is %.2f" , Percentage);
   return 0;

   
}