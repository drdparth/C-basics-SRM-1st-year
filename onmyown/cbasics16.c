#include <stdio.h>

int main()

{
    int choice, a , b;
    printf("1-Add , 2-Subtract, 3-Multiply, 4-Divide , 5- Mod\n");
    scanf("%d", &choice);
    printf("eNTER the integer:\n ");
    scanf("%d %d", &a , &b);

    switch(choice){

        case 1:
        printf("Add %d", a + b);
        break;

        case 2:
        printf("Subtract %d", a - b);
        break;

        case 3:
        printf("Multiply %d", a * b);
        break;

        case 4:
        printf("Divide %d", a / b);
        break;

        case 5:
        printf("mod %d", a % b);
        break;

    }
    return 0;
}

