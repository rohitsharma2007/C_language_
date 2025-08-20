// C program to print the sum of digits of a given number using while loop.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    int temp = num;
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("the sum of %d of all digit is %d", temp, sum);

    return 0;
}