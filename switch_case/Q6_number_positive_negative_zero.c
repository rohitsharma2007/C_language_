// •	Write a C program to check whether a number is positive, negative or zero using switch case
#include <stdio.h>

int main()
{
    int ch, num;

    printf("enter any 1 for positive : \n");
    printf("enter any 2 for negative : \n");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("enter any number:");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("number is positive");
        }
        else if (num == 0)
        {
            printf("number is equal to zero");
        }
        else
        {
            printf("%d is negative", num);
        }
    }
    break;

    case 2:
    {
        printf("enter any number:");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("number is negative");
        }
        else if (num == 0)
        {
            printf("number is equal to zero");
        }
        else
        {
            printf("%d is positive", num);
        }
    }

    break;

    default:
    {
        printf("you enter wrong number");
    }
    break;
    }

    return 0;
}
