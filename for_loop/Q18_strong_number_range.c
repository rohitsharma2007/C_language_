// C program to print all Strong numbers between 1 to n using for loop.
#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum = 0;

        // Extract digits and calculate factorial sum
        for (int temp = num; temp != 0; temp /= 10)
        {
            int digit = temp % 10;
            sum += factorial(digit);
        }

        // Check if number is Strong
        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
