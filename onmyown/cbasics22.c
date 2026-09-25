#include <stdio.h>

// Function to calculate the square of a number
int findSquare(int num ) {
    int sqr = num * num;
    return sqr;
}

int main() {
    int number, result;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Call function and store the returned value
    result = findSquare(number);
    
    printf("The square of %d is %d\n", number, result);
    return 0;
}