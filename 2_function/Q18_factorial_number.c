// 1.	Write a C program to find factorial of any number using recursion.

#include <stdio.h>
int isfactorial(int num)
{

    if (num == 0 || num == 1)
        return 1;
    else
        return num * isfactorial(num - 1);
}

int main()
{
    int num;
    printf("enter any number:");
    scanf("%d", &num);
    int result;
    result = isfactorial(num);
    printf("%d", result);

    return 0;
}