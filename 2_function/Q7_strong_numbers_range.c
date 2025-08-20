// 7.	Write a C program to print all strong numbers between given interval using functions.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrong(int num)
{
    int originalNum = num, sum = 0, lastdigit;

    while (num > 0)
    {
       lastdigit = num % 10;
        sum += factorial(lastdigit);
        num /= 10;
    }

    return (sum == originalNum);
}

void printStrongNumbers(int start, int end)
{
    printf("Strong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isStrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printStrongNumbers(start, end);

    return 0;
}
