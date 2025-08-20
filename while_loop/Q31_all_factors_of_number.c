// C program to print all factors of a number using while loop.

#include <stdio.h>

int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d", &num);
    int i = 1;

    while (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}