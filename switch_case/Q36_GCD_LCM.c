// Write a program to find the GCD(HCF) and LCM of two numbers using switch-case.

#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose any option:\n");
    printf("1. Find GCD (HCF)\n");
    printf("2. Find LCM\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // GCD(HCF)
    {
        int a = num1, b = num2;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        printf("GCD (HCF) of %d and %d is: %d\n", num1, num2, a);
    }
    break;

    case 2: // lcm
    {
        int a = num1, b = num2;
        int original_a = a, original_b = b;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;
        int lcm = (original_a * original_b) / gcd;
        printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    }
    break;

    default:
        printf("Invalid choice!!! Please enter 1 or 2.\n");
    }

    return 0;
}
