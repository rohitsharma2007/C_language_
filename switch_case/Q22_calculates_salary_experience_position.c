// •	Write a program that calculates salary based on experience and position.

#include <stdio.h>

int main()
{
    int experience;
    char position;
    int salary = 0;

    printf("Enter your position (M for Manager, E for Engineer, T for Technician): ");
    scanf(" %c", &position);

    switch (position)
    {
    case 'M': // Manager

    {
        salary = 50000;
    }
    break;
    case 'E': // Engineer
    {
        salary = 40000;
    }
    break;
    case 'T': // Technician
    {
        salary = 30000;
    }
    break;
    default:
    {
        printf("Invalid position! Please enter M, E, or T.\n");
    }
    break;
    }
    printf("%d\n",salary);
    printf("entr your experience: ");
    printf("Enter your years of experience: ");
    scanf("%d", &experience);

    switch (experience)
    {
    case 0:
    {
        salary *= 2;
    }
    break;
    case 1:
    {
        salary *= 3;
    }
    break;
    default:
    {
        salary *= 5;
    }
    break;
    }

    printf("Your calculated final salary is: %d\n", salary);

    return 0;
}
