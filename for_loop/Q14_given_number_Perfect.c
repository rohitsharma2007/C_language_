// C program to check a given number is Perfect or not using for loop.

#include <stdio.h>

int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d", &num);
    int perfect=0, original_num = num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            perfect += i;
        }

    }
    if (original_num == perfect)
    {
        printf("%d number is perfct", perfect);
    }
    else
    {
        printf("not perfect");
    }

    return 0;
}