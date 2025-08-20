// 7	C program to count the digits of a given number using for loop.

#include <stdio.h>
int main()
{
    int count = 0, num;
    printf("enter any number:");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }

    else
    {
        for (; num != 0; num /= 10)
        {
            count++;
        }
    }
    printf("There are %d  digits in a given number", count);

    return 0;
}
