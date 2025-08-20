// C program to find power of a number without using pow method using while loop.

#include <stdio.h>
int ispower(int num, int power)
{
    int  pow = 1, i = 1;
    while (i <= power)
    {
        pow *= num ;
        i++;
    }
    return pow;
}

int main()
{
    int num, power;
    printf("Enter any number : ");
    scanf("%d", &num);
    printf("Enter power of number : ");
    scanf("%d", &power);

    int x = ispower(num, power);
    printf("%d", x);

    return 0;
}