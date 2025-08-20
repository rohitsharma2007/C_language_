// 8	C program to print the sum of digits of a given number using for loop.

#include <stdio.h>

int main()
{
    int num, sum = 0, last;
    printf("enter any name : ");
    scanf("%d", &num);
    int num2 = num;

    if (num < 0)
    {
        num = -num;
    }

    for (; num != 0; num /= 10)
    {
        last = num % 10;
        sum += last;
    }
    printf("sum of %d number is %d", num2, sum);

    return 0;
}