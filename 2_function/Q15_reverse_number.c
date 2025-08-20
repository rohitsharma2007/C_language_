// 15.	Write a C program to find reverse of any number using recursion.

#include <stdio.h>
int isreverse(int num, int rev)
{
    if (num == 0)
        return rev;
    return isreverse(num / 10, rev * 10 + num % 10);
}

int main()
{
    int num, reversed;
    printf("enter any number:");
    scanf("%d", &num);

    reversed = isreverse(num, 0);
    printf("%d", reversed);

    return 0;
}