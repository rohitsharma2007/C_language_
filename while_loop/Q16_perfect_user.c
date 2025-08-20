// C program to check all Perfect numbers between 1 to n using while loop.

#include <stdio.h>

int main()
{
    int n, num = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    while (num <= n)
    {
        int i = 1, sum = 0;

        while (i < num)
        {
            if (num % i == 0)
            {
                sum += i;
            }
            i++;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}
