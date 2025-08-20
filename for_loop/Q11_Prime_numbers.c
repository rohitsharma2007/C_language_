// C program to print all Prime numbers between 1 to n using for loop.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);

    int i, j, isPrime;
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
