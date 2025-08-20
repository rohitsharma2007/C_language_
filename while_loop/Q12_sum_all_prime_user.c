// C program to find sum of all prime numbers between 1 to n using while loop.

#include <stdio.h>

int main()
{
    int num,i = 2, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &num);

    
    printf("\nThe all prime number between 1 to %d is : ",num);
    while (i <= num)
    {
        int j = 2, isprime = 1;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
            j++;
        }
        if (isprime)
        {
            printf("%d ", i);
            sum =sum + i;
        }
        i++;
    }
    printf("\nThe sum of all prime number between 1 to %d is %d ", num, sum);

    return 0;
}