// C Program to print Fibonacci series of a given number using while loop.
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    int i = 1;
    while (i <= num)
    {
        printf("%d ", fibonacci(i));
        i++;
    }

    return 0;
}
