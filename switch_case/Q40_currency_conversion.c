//  Create a program that takes a choice of currency conversion (INR to USD, EUR to GBP).

#include <stdio.h>

int main() {
    int choice;
    float amount, converted_amount;

    printf("Press 1 for currency conversion USD to INR\n");
    printf("Press 2 for currency conversion EUR to GBP\n");
    printf("Press 3 for currency conversion INR to USD\n");
    printf("Press 4 for currency conversion GBP to EUR\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter your amount in USD: ");
            scanf("%f", &amount);
            converted_amount = amount * 85; // 1 USD = 85 INR
            printf("The amount in INR is: %.2f\n", converted_amount);
            break;
        case 2:
            printf("Enter your amount in EUR: ");
            scanf("%f", &amount);
            converted_amount = amount * 0.84; // 1 EUR = 0.84 GBP
            printf("The amount in GBP is: %.2f\n", converted_amount);
            break;
        case 3:
            printf("Enter your amount in INR: ");
            scanf("%f", &amount);
            converted_amount = amount / 85; //  1 USD = 85 INR
            printf("The amount in USD is: %.2f\n", converted_amount);
            break;
        case 4:
            printf("Enter your amount in GBP: ");
            scanf("%f", &amount);
            converted_amount = amount / 0.84; // 1 EUR = 0.84 GBP
            printf("The amount in EUR is: %.2f\n", converted_amount);
            break;
        default:
            printf("Invalid input. Please select a valid option.\n");
    }

    return 0;
}

