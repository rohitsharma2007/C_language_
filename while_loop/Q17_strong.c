// C program to check a given number is Strong number or not using while loop.

#include <stdio.h>
int isfactor(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d", &num);

    int sum = 0,temp = num;
    while(num!=0)
    {
        int rem = num %10;
        sum += isfactor(rem);
        num /= 10; 
    }
    if(sum == temp)
    {
        printf("%d is strong number ",temp);
    }
    else
    {
        printf("%d is not strong number ",temp);
    }


    return 0;
}