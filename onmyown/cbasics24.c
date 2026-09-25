#include <stdio.h>
int avaragetotal(int a, int b, int c){
    return a+b+c;
}
float avargaedivide(int total){
    return total/3.0;
}
int main(){
    int a , b ,c, total;
    float result;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d" , &a,&b,&c);
    total = avaragetotal(a,b,c);
    result = avargaedivide(total);
    printf("Avarage of the %d ,%d ,%d is %f", a , b , c , result);
    return 0;
}