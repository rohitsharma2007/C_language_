// C program to print all Armstrong numbers between 1 to n using while loop.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    while (i <= n)
    {
        int temp = i, digits = 0, sum = 0; 
        int countDigits = temp;

        while (countDigits != 0)
        {
            countDigits /= 10;
            digits++;
        }

        countDigits = temp;

        while (countDigits != 0)
        {
            int remainder = countDigits % 10;
            sum += (int)powf(remainder, digits);
            countDigits /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
