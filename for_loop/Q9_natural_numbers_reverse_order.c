// C program to print n natural numbers in reverse order using for loop.

#include <stdio.h>

int main()
{
    int num, reverse;
    printf("enter any number:");
    scanf("%d", &num);

    for (int i = num; i != 0; i--)
    {
        printf("%d\t", i);
    }

    return 0;
}