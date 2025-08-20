// •	Write a C program to print day of week name using switch case.

#include <stdio.h>
int main()
{

    int day, week;
    printf("enter day of week name (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
    {
        printf("sunday\n");
    }
    break;
    case 2:
    {
        printf("monday\n");
    }
    break;
    case 3:
    {
        printf("tuesday\n");
    }
    break;
    case 4:
    {
        printf("wednesday");
    }
    break;
    case 5:
    {
        printf("thrusday\n");
    }
    break;
    case 6:
    {
        printf(" friday\n");
    }
    break;
    case 7:
    {
        printf("saturday\n");
    }
    break;
    }

    return 0;
}
