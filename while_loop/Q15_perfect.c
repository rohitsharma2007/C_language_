// C program to check a given number is Perfect or not using while loop.

#include <stdio.h>

int main()
{
    int num, result = 0, i = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
    int temp = num;
    while (i < num)
    {
        if (num % i == 0)
        {
            result += i;
        }
        i++;
    }
    if (result == temp)
    {
        printf("number is perfect number");
    }
    else
    {
        printf("number is not perfect number");
    }

    return 0;
}