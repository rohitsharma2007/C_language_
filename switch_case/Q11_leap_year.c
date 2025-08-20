// •	Write a program to determine whether a year is a leap year using switch-case
#include <stdio.h>
int main()
{
    int leap_year, year, ch;
    printf("enter  any number \t");
    scanf("%d", &ch);

    switch (ch)

    default:
    {
        {
            printf("please enter year :");
            scanf("%d", &year);
            if (year % 4 == 0)
            {
                printf("year is leap year\n");
            }
            else
            {
                printf("year is non leap year\n");
            }
        }
        break;
    }

        return 0;
}
