// C program to print sum of all even numbers between 1 to n using while loop.
#include <stdio.h>

int main()
{
    int i = 1, last;
    printf("Enter last number : ");
    scanf("%d", &last);
    while (i <= last)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}