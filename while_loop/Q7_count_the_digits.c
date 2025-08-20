// C program to count the digits of a given number using while loop.

#include <stdio.h>
int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d", &num);
    int temp = num;
    int digit = 0;

    while (num != 0)
    {
        num = num / 10;
        digit++;
    }
    printf("there are %d digit in %d", digit, temp);

    return 0;
}