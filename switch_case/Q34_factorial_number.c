// Develop a program that finds the factorial of a number using switch-case.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    switch (num < 0)
    {
    default:
    {
printf("number is negative value,please enter +ve value ");
    }
    break;
    }

    switch (num)
    {
    default:

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("factorial of number is %d\n ", i);
            }
        }

        break;
    }

    return 0;
}
