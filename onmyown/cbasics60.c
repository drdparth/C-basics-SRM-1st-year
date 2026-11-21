#include <stdio.h>
#include <string.h>

int main(){
    char username[20] , password[20];
    char correctusername[] = "admin" ;
    char correctpassword[] = "1234" ;
    int attempt = 0;
    int LogIn = 0;

    do{
        printf("Enter username:\n");
        scanf("%s" , &username);

        printf("Enter password:\n");
        scanf("%s" , &password);

        if(strcmp(username, correctusername) == 0 && strcmp(password , correctpassword ) == 0){
            printf("Login Successfull");
            LogIn = 1;
            break;
        }
        else{
            printf("Invalid username or password\n");
            attempt++;
        }
    }while(attempt <= 3);

    if(LogIn == 0){
        printf("Account locked");
    }
    return 0;
}