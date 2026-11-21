#include <stdio.h>
int main()
{
    int i, j , n;

    printf("Enter a number:\n");
    scanf("%d" , &n);

    for(i = 1 ; i <= n ; i++ ){

        for(j = 1 ; j <= n-(n-i) ; j++){
            printf("%d" , i);
        }

        printf("\n");
    }

    return 0;
}