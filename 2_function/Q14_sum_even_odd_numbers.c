// 14.	Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>

int iseven(int num, int m)
{
    if (num > m)
        return 0;
    if (num % 2 != 0)
        return iseven(num + 1, m);
    return num + iseven(num + 2, m);
}

int isodd(int num, int m)
{
    if (num > m)
        return 0;
    if (num % 2 == 0)
        return isodd(num + 1, m);
    return num + isodd(num + 2, m);
}

int main()
{
    int num;
    printf("enter any number: ");
    scanf("%d", &num);

    
    printf("\033[31m the odd number is :  \033[0m\n");
    printf("%d",isodd(1, num));

    printf("\033[31m \nthe even number is :  \033[0m\n");
    printf("%d",iseven(2, num));

    return 0;
}