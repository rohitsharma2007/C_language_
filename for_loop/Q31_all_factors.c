// C program to print all factors of a number using for loop.
#include <stdio.h>

int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d", &num);

    printf("All factor of %d is : ", num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        else if (num ==0)
        {
           printf("0");
        }
        
    }

    return 0;
}