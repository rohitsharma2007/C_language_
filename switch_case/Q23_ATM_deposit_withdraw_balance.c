// •	Develop a program for an ATM system with options to deposit, withdraw, and check balance.

#include <stdio.h>
int main()
{

    int deposit, withdraw, balance;
    printf("enter your deposit:\n");
    printf("enter your withdraw:\n");
    printf("enter your balance:\n");
    scanf("%d %d %d", &deposit, &withdraw, &balance);

    switch (deposit)
    {
    default:
    {
        if (deposit >= 0)
        {
            balance += deposit;
        }
    }
    break;
    }
    switch (withdraw)
    {
    default:
    {
        if (withdraw >= 0)
        {
            balance -= withdraw;
        }
    }
    break;
    }
    printf("total amount in bank is %d", balance);

    return 0;
}
