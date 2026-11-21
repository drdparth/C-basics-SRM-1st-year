#include <stdio.h>

// Function declarations (Prototypes)
int checkMarks(double marks);
int checkIncome(double income);
int checkEligibility(int marksValid, int incomeValid);

int main() {
    double marks, income;
    int marksValid, incomeValid, isEligible;

    // 1. Inputs
    printf("Enter student's marks percentage: ");
    scanf("%lf", &marks);

    printf("Enter annual family income (in Rs): ");
    scanf("%lf", &income);

    // 2. Function calls to process conditions
    marksValid = checkMarks(marks);
    incomeValid = checkIncome(income);
    isEligible = checkEligibility(marksValid, incomeValid);

    // 3. Outputs
    printf("\n--- Scholarship Status ---\n");
    if (isEligible == 1) {
        printf("Status: Eligible for Scholarship\n");
    } else {
        printf("Status: Not Eligible for Scholarship\n");
    }

    return 0;
}

// Function to check if marks meet the criteria
int checkMarks(double marks) {
    if (marks >= 85.0) {
        return 1; // True
    } else {
        return 0; // False
    }
}

// Function to check if income meets the criteria
int checkIncome(double income) {
    if (income <= 250000.0) {
        return 1; // True
    } else {
        return 0; // False
    }
}

// Function to determine final eligibility based on both criteria
int checkEligibility(int marksValid, int incomeValid) {
    if (marksValid == 1 && incomeValid == 1) {
        return 1; // Eligible
    } else {
        return 0; // Not eligible
    }
}
