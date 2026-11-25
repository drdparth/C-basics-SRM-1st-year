#include <stdio.h>

struct Employee{
    int id;
    char name[30];
    float basic_salery , hra , da;
};

void calculateSalary(struct Employee e , float *total , float *average){

    *total = e.basic_salery + e.hra + e.da;
    *average = *total/ 3.0 ;
}

int main(){

    struct Employee e[3];
    float total;
    float average;
    int i;

    for(i = 0 ; i < 3 ; i++){

        printf("Details of Employee %d\n" , i + 1);

        printf("Enter ID: ");
        scanf("%d" , &e[i].id);

        printf("Enter Employee Name:");
        scanf("%s" , e[i].name);

        printf("Enter Basic , HRA and DA:");
        scanf("%f %f %f" , &e[i].basic_salery , &e[i].hra , &e[i].da);
    }

    for(i = 0 ; i < 3 ; i++)
        {
        calculateSalary(e[i], &total, &average);

        printf("\nEmployee Details\n");
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Total Salary: %.2f\n", total);
        printf("Average Salary: %.2f\n", average);
    }

    return 0;
}    

