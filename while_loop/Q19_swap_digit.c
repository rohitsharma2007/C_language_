// Write a program in C to swap first and last digit of number using while loop.
#include <stdio.h>

int main()
{
    int num, n, first, last, count = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        product = product * 10;
        count++;
    }

    first = n;

    num = num - first * product;
    num = num - last;
    num = num + first;
    num = num + last * product;

    printf("Number after swapping: %d", num);

    return 0;
}