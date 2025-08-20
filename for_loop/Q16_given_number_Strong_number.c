
// •	C program to check a given number is Strong number or not using for loop.

#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, temp, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    
    for (; temp > 0; temp /= 10)
    {
        remainder = temp % 10;
        sum += factorial(remainder);
    }

     if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}
