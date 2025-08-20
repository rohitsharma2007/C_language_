// C program to calculate power of a number using pow method using while loop.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, power;
    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Enter power of number : ");
    scanf("%d", &power);
    int result = powf(num, power);
    printf("%d", result);

    return 0;
}