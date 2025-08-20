// Develop a program that calculates compound interest using switch-case.

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, amount, compound_interest;
    int choice;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time period in years: ");
    scanf("%lf", &time);

    printf("Choose compounding frequency:\n");
    printf("press 1 for Annually\npress 2 for Semi-Annually\npress 3 for Quarterly\npress4 for Monthly\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        amount = principal * pow((1 + rate / 100), time);
    }
    break;
    case 2:
    {
        amount = principal * pow((1 + (rate / 2) / 100), 2 * time);
    }
    break;
    case 3:
    {
        amount = principal * pow((1 + (rate / 4) / 100), 4 * time);
    }
    break;
    case 4:
    {
        amount = principal * pow((1 + (rate / 12) / 100), 12 * time);
    }
    break;
    default:
    {
        printf("Invalid choice. Please enter a valid option (1-4).\n");
    }
        break;
    }

    compound_interest = amount - principal;
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount: %.2lf\n", amount);

    return 0;
}
