// 10.	Write a C program to find power of any number using recursion.

#include <stdio.h>
#include <math.h>

int ispower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }

    return base * ispower(base, power - 1);
}

int main()
{
    int base, power;
    printf("enter any number: ");
    scanf("%d", &base);
    printf("enter power of number: ");
    scanf("%d", &power);
    int result = ispower(base, power);
    printf("%d^%d = %d", base, power, result);

    return 0;
}