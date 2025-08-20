// 1	C program to print all natural numbers from 1 to n using for loop.

#include <stdio.h>
int main()
{
    int start, end, i;
    printf("enter starting value : ");
    scanf("%d", &start);
    printf("enter ending value : ");
    scanf("%d", &end);
    printf("the natural number is ", i);

    for (i = start; i <= end; i++)
    {

        printf("%d",i);
        if (i == end)
        {
            printf(" ");
        }
        else
        {
            printf(",");
        }
    }

    return 0;
}
