// •	Implement a program that calculates electricity bill based on units consumed.

#include <stdio.h>
int main()
{
    int bill, units, amount;
    printf("please input how many units consumed by the electrical component : ");
    scanf("%d", &units);

    switch (units)
    {
    default:
    {
        bill = units * 7;
        printf("Amount of electricity bill consumed by the user \"%d\"", bill);
    }
    break;
    }

    return 0;
}
