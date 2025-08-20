// C program to print all Prime numbers between 1 to n using while loop.
#include <stdio.h>

int main()
{
    int num, i = 2;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    while (i <= num)
    {
        int j = 2, isPrime = 1;

        while (j * j <= i)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
