#include <stdio.h>

int main()
{
    int n = 0;

    while (n <= 0)
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }

    printf("Accepted: %d", n);

    return 0;
}
