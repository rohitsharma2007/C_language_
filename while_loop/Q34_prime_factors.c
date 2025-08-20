// Write a C program to find all prime factors of a number using while loop. 

#include <stdio.h>

int main()
{
    int num, i = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    while (num > 1)
    {
        if (num % i == 0)
        {
            printf("%d*", i);
            num = num / i;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
