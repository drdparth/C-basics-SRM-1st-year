#include <stdio.h>
int sumeven(int n)
{
    int sum = 0;
    int evenNumbers = 2;
    for(int i =0 ; i < n ; i++){
    sum += evenNumbers;
    evenNumbers += 2;
    }
    return sum;
}
int main()
{
    int n , result;
    printf("Enter n:\n");
    scanf("%d", &n);

    result = sumeven(n);

    printf("The sum of %d even numbers is %d\n", n , result);
    return 0;
}