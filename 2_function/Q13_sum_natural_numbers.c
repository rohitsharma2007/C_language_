// 13.	Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include <stdio.h>
int isnatural(int num)
{
    int sum = 0;
    if (num <= 0)
    {
        return 0;
    }
    return num + isnatural(num - 1);
    // printf("%d\t", num);
}

int main()
{
    int end,result;
    printf("enter upper limits: ");
    scanf("%d", &end);

    result = isnatural(end);
    printf("%d",result);

    return 0;
}