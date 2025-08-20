// 3	C program to print all odd number between 1 to 100 using for loop. 

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            if (i ==99)
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