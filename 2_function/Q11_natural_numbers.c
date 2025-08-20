// 11.	Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>
void isnatural(int num)
{
    if (num <= 0)
    {
        return;
    }
    isnatural(num - 1);
    printf("%d\t", num);
}

int main()
{
    int end;
    printf("enter upper limits: ");
    scanf("%d", &end);

    isnatural(end);

    return 0;
}