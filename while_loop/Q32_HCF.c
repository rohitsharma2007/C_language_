// C program to print HCF (GCD) of two numbers using while loop.

#include <stdio.h>

int main()
{
    int num, num1, i = 1,hcf = 1;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Enter any number : ");
    scanf("%d", &num1);
    int min = (num < num1) ? num : num1;
    while (i <= min)
    {
        if (num % i == 0 && num1 % i == 0)
        {
            hcf = i;
        }
        i++;
    }
    printf("HCF (GCD) of %d and %d is: %d\n", num, num1, hcf);

    return 0;
}