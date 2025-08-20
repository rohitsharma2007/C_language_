// C program to print all Armstrong numbers between 1 to n using for loop.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, temp, remainder, count, sum;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++)
    {
        temp = num; 
        count = 0;
        sum = 0;

        while (temp > 0)
        {
            temp /= 10;
            count++;
        }

        temp = num;

        while (temp > 0)
        {
            remainder = temp % 10;
            sum += pow(remainder, count);
            temp /= 10;
        }

        
        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
