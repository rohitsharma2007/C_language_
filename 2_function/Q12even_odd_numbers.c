// 12.	Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>
void isodd(int num, int current)
{
    if (current > num)
        return;
    printf("%d\t", current);
    isodd(num, current + 2);
}

void iseven(int num, int current)
{
    if (current > num)
        return;
    printf("%d\t", current);
    iseven(num, current + 2);
}

int main()
{
    int num;
    printf("enter any number: ");
    scanf("%d", &num);

    printf("\033[31m the odd number is :\033[0m\n");
    isodd(num, 1);

    printf("\033[31m \nthe even number is :  :\033[0m\n");
    iseven(num, 2);

    
    return 0;
}