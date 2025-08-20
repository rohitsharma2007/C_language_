//	C program to check whether a given number is Prime or not using for loop.

#include <stdio.h>


int main()
{
    while (1)
    {
        int num, isprime = 0;
        printf("enter any number:");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                isprime++;
            }
        }
        if (isprime == 2)
        {
            printf("the number is prime number\n");
        }
        else
        {
            printf("number is not prime number\n");
        }
        
    }

    return 0;
}