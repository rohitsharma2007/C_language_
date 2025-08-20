// •	Write a switch-case program to check whether a number is a perfect number.

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("enter any number:\n");
    scanf("%d", &num);

    switch (num)
    {
    default:
    {
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)
        {
            printf("%d is perfect number", num);
        }
        else
        {
            printf("not perfect number");
        }
    }
    break;
    }

    return 0;
}
