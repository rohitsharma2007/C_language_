// C program to print HCF (GCD) of two numbers using for loop.
#include <stdio.h>

int main()
{
    int num1, num2, HCF;
    printf("Enter any number : ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, HCF);

    return 0;
}