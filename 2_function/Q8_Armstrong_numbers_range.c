// 8.	Write a C program to print all Armstrong numbers between given interval using functions.

#include <stdio.h>

int countDigits(int num)
{
    int count = 0;
    for (count = 0; num != 0; count++)
    {
        num = num / 10;
    }
    return count;
}

int isArmstrong(int num)
{
    int rem, temp = num, sum = 0;
    int count = countDigits(num);

    for (; temp != 0; temp = temp / 10)
    {
        rem = temp % 10;

        int power = 1;

        for (int i = 0; i < count; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
    }

    return (sum == num);
}

void Armstrong(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int first, last;

    printf("Enter 1st Number: ");
    scanf("%d", &first);

    printf("Enter Last Number: ");
    scanf("%d", &last);

    printf("Armstrong numbers in the given range:\n");
    Armstrong(first, last);

    return 0;
}