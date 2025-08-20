// C program to print all even numbers between 1 to 100 using for loop.

#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            if (i == 100)
            {
                printf(" ");
            }
            else
            {
                printf(",");
            }
        }
    }

    return 0;
}
