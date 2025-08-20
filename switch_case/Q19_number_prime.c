// •	Implement a program to determine if a number is prime using switch-case.

#include <stdio.h>
int main()
{
    int n;
    int last, factor = 0, r;
    printf("enter any number : ");
    scanf("%d", &n);

    switch (n)
    {
    default:
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factor++;
            }
        }
        if (factor == 2)
        {
            printf("number is prime number");
        }
        else
        {
            printf("%d is not prime number", n);
        }

        break;
    }
    }

    return 0;
}
