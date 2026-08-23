#include <stdio.h>

int main()

{
    char ch;
    char s[100];
    char sem[100];

    scanf("%c\n" , &ch);
    scanf("%s\n" , s);
    scanf(" %[^\n]%*c\n" , sem);

    printf("%c\n" , ch);
    printf("%s\n" , s);
    printf("%s\n" , sem);
    return 0;
}
