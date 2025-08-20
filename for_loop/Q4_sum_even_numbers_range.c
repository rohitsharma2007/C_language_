// C program to print sum of all even numbers between 1 to n using for loop.

#include <stdio.h>
int main()
{
    int end, sum = 0;
    printf("enter ending number : ");
    scanf("%d", &end);
    printf("the even number from 1 to %d\n", end);

    for (int i = 1; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            sum += i;
            if (i == end)
            {
                printf(" ");
            }

            else
            {
                printf(",");
            }
        }
    }
    printf("\nthe sum of all even number from 1 to %d is %d", end, sum);

    return 0;
}
