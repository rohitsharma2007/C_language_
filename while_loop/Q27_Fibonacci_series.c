// C Program to print Fibonacci series of a given number using while loop.

#include <stdio.h>

void printFibonacci(int num)
{
    int first = 0, second = 1, next, i = 1;

    if (num >= 1)
        printf("%d ", first);
    if (num >= 2)
        printf("%d ", second);

    while (i <= num - 2)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        i++;
    }
}

int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    printFibonacci(num);

    return 0;
}
