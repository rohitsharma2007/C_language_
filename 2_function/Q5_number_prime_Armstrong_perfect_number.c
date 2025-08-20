// 5.	Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

int isprime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
}

int isarmstrong(int num)
{
    int original_num = num, sum = 0, remender;
    int temp = num;
    for (int i = 1; i <= temp; temp /= 10)
    {
        remender = temp % 10;
        sum += remender * remender * remender;
    }
    return (sum == original_num);
}

int isperfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int num;
    printf("enter any number:");
    scanf("%d", &num);

    if (isprime(num))
    {
        printf("%d is a Prime number.\n", num);
    }
    else
    {
        printf("%d is not a Prime number.\n", num);
    }

    if (isarmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isperfect(num))
    {
        printf("%d is a Perfect number.\n", num);
    }
    else
    {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
