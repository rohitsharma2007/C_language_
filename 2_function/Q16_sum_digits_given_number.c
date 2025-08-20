// 16.	Write a C program to find sum of digits of a given number using recursion.

#include <stdio.h>
int is_sum_digit(int num)
{
    if (num == 0)
        return 0;
    return (num % 10) + is_sum_digit(num / 10);
}

int main()
{
    int num, sum;
    printf("enter any number:");
    scanf("%d", &num);

    sum = is_sum_digit(num);
    printf("%d", sum);

    return 0;
}