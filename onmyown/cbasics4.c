#include <stdio.h>

int main()

{
    int motion = 1234;
    printf("His motion is %d and number of bytes is %d\n " , motion , sizeof(motion));

    float chubby = 124.56;
    printf("His chubbyness index is %f and number of bytes is %d\n " , chubby , sizeof(chubby));

    char alphabets = 'S';
    printf("The code letter is %c and number of bytes is %d\n" , alphabets , sizeof(alphabets));

    return 0;

}