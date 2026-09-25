#include <stdio.h>
int subjects(int n){
    int marks;
    int totalmarks = 0;
    for(int i = 1; i <= n; i++){
        printf("Enter the marks of subject %d:\n", i);
        scanf("%d" ,&marks);

        totalmarks += marks;
    }
    return totalmarks;
}
float subpercentage(int precentage){
    int maxmarks;
    printf("Enter Maximum marks:\n");
    scanf ("%d", &maxmarks);

    return (precentage/maxmarks) * 100;     
}

int grades(float percsub){
    if(percsub > 85.0){
        printf("A grade");
    }
    else if(percsub < 85.0 && percsub > 70.0){
        printf("B grade");
    }
    else if(percsub < 70.0 && percsub > 55.0){
        printf("C grade");
    }
    else{
        printf("You Failed");
    }
    return 0;
}

int main()
{
    int n, totalsub;
    float percsub;
    printf("Enter the number of sumjects");
    scanf("%d", &n);
    totalsub = subjects(n);
    percsub = subpercentage(totalsub);
    grades(percsub);

    return 0;
}