// •	Write a switch-case program to check whether a number is a perfect square.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, perfect_square;
    printf("enter any number:");
    scanf("%d", &num);

    switch (num)
    {
    default:
    {
        perfect_square = sqrt(num);
        if (perfect_square * perfect_square == num)
        {
            printf("%d is perfect square of %d",num,perfect_square);
        }
        else
        {
            printf("number is not perfect square");
        }
    }
    break;
    }

    return 0;
}
