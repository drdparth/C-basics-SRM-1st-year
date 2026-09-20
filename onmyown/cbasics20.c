#include <stdio.h>
int percentage(int w,int a,int s)
{
    int result = (w+a+s)*100 /300;
    if(result >= 75){
        printf("U have secured %d. \n", result);
        return 1;
    }
    else{
        printf("You arent elligible for this exam.");
        return 0;
    }

}
int main()
{
    int z ,b ,c , d;
    printf("Enter your marks out of hundred:\n", z,b,c);
    scanf("%d %d %d", &z , &b, &c);
    d = percentage(z,b,c); 
    
    if(d == 1){
        printf("You can write this exam");
    }
    else if(d == 0){
        printf("Better luck next time");
    }
    return 0;
}