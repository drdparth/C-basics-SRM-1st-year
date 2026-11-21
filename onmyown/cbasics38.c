#include <stdio.h>

float water(float choice, float consumed){

    float surecharge = 200 , totalbill ;

    char recyclebill;

    switch ((int)choice) {
        case 1:
        if(consumed > 100){
            totalbill = (consumed * 5) + surecharge;
        }
        else{
            totalbill = consumed * 5;
        }
        break;

        case 2:
        if(consumed > 100){
            totalbill = (consumed * 10) + surecharge;
        }
        else{
            totalbill = consumed * 10;
        }
        break;
        case 3:
        if(consumed > 100){
            totalbill = (consumed * 15) + surecharge;
        }
        else{
            totalbill = consumed * 15;
        }
        printf("If recycling system is intsalled (Y/N):\n");
        scanf(" %c" , &recyclebill);

        if(recyclebill == 'Y' || recyclebill == 'y'){
            totalbill = totalbill;
        }
        else if(recyclebill == 'N' || recyclebill == 'n'){
            totalbill = totalbill + 300;
        }
        else{
            printf("!!ERROR!!");
        }
        break;

    }
    return totalbill;
}

int main()
{
    float choice , consumed , result;
    printf("Enter the units of water consumed:\n");
    scanf("%f" , &consumed);

    printf("1.Domestic\n2.Commercial\n3.Industrial\n");
    printf("Enter the option:\n");
    scanf("%f" , &choice);

    result = water(choice, consumed);

    printf("Your water bill is %.2f" , result);

    return 0;

}