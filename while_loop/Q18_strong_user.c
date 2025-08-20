// C program to check a given number is Strong number or not using while loop.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    while (n > 1)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int n, num = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    while (num <= n)
    {
        int temp = num;
        int sum = 0, digit;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}
