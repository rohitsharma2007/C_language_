// C program to print all natural numbers from 1 to n using while loop.

#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter any number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}