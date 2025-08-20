// C program to print all natural numbers in reverse order using while loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter last number : ");
    scanf("%d", &num);

    while (num >= 1)
    {
        printf("%d ", num);
        num = num - 1;
    }

    return 0;
}