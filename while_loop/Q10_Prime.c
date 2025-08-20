// C program to check whether a given number is Prime or not using while loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    int i = 1, count = 0;
    while (i <= num)
    {
        if (num % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("%d Number is Prime number.",num);
    }
    else
    {
        printf("%d Number is not prime.",num);
    }

    return 0;
}