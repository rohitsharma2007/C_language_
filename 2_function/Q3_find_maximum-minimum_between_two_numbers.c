// 3.	Write a C program to find maximum and minimum between two numbers using functions.

#include <stdio.h>

int ismax(int n1, int n2)
{
    return (n1 > n2) ? n1 : n2;
}
int ismin(int n1, int n2)
{
    return (n1 < n2) ? n1 : n2;
}

int main()
{
    int num, num1;
    printf("enter any two number:");
    scanf("%d %d", &num, &num1);

    int maximum = ismax(num, num1);
    int minimum = ismin(num, num1);

    printf("the gratest number is %d\n", maximum);
    printf("the smallest number is %d", minimum);

    return 0;
}