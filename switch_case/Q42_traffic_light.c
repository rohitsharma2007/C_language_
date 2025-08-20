// Develop a program for a traffic light simulation using switch-case.

#include <stdio.h>
int main()
{
    char traffic_light;
    printf("enter first name of traffic light \nY - Yellow\nG - Green\nR - Red\t");
    scanf("%s", &traffic_light);

    switch (traffic_light)
    {
    case 'r':
    case 'R':
    {
        printf("please wait!");
    }
    break;
    case 'y':
    case 'Y':
    {
        printf("please wait for sometime");
    }
    break;
    case 'g':
    case 'G':
    {
        printf("let\'s go ,signal is clear");
    }
    break;
    default:
    {
        printf("invalid input");
    }
    break;
    }

    return 0;
}
