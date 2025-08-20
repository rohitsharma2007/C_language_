// •	Write a C program print total number of days in a month using switch case.

#include <stdio.h>
int main()
{
    int month, number_Of_Day;
    printf("enter month(1-12) :  ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    {
        printf("janbuary month has 31 day \n");
    }
    break;
    case 2:
    {
        printf("ferbuary has 29 day in leap year & 28 day in without leapyear \n");
    }
    break;
    case 3:
    {
        printf("march month has 31 day   \n");
    }
    break;
    case 4:
    {
        printf("april month has 30 day \n");
    }
    break;
    case 5:
    {
        printf("may month has 31 day  \n");
    }
    break;
    case 6:
    {
        printf("june month has 30 day\n");
    }
    break;
    case 7:
    {
        printf("july month has 31 day\n");
    }
    break;
    case 8:
    {
        printf("august month has 30 day \n");
    }
    break;
    case 9:
    {
        printf("september month has 30 day\n");
    }
    break;
    case 10:
    {
        printf("octuber month has 31 day \n");
    }
    break;
    case 11:
    {
        printf("november month has 30 day \n");
    }
    break;
    case 12:
    {
        printf("december month has 31 day \n");
    }
    break;
    default:
    {
        printf(" invalid input  \n");
    }
    break;
    }

    return 0;
}
