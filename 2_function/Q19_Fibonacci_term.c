// 19.	Write a C program to generate nth Fibonacci term using recursion.

#include <stdio.h>

int isFibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return isFibonacci(num - 1) + isFibonacci(num - 2);
}

int main()
{
    int term;
    printf("enter Fibonacci term :");
    scanf("%d", &term);

    int result;
    result = isFibonacci(term);
    printf("%d", result);

    return 0;
}