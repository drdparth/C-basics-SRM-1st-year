#include <stdio.h>

struct Student{

    int regno;
    char name[30];
    int marks[3];

};

void calculatetotalavg(struct Student s , int *total, float *avarage)
{
    *total = s.marks[0] + s.marks[1] + s.marks[2];

    *avarage = *total / 3.0;
}

int main(){
    struct Student s;

    int total;
    float avarage;

    printf("Enter register number:");
    scanf("%d" , &s.regno);

    printf("Enter name: ");
    scanf("%s" , &s.name);

    printf("Enter marks in the three subject: ");
    scanf("%d %d %d" , &s.marks[0] , &s.marks[1] , &s.marks[2]);

    calculatetotalavg(s , &total , &avarage);

    printf("\nStudent Details\n");
    printf("Register Number: %d\n" , s.regno);
    printf("Name: %s\n", s.name);

    printf("Subject 1: %d\n", s.marks[0]);
    printf("Subject 2: %d\n", s.marks[1]);
    printf("Subject 3: %d\n", s.marks[2]);

    printf("Total: %d\n" , total);
    printf("Avarage: %.2f\n", avarage);

    return 0;
}