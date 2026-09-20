#include <stdio.h>

int main()

{
   int a;
   printf("write the number in 3-digit:");
   scanf("%d", &a);

   printf("here %d/10 is %d then %d-%d is %d",a , a/10 , a , a/10 * 10 , a - a/10 * 10);
   return 0;
}   
