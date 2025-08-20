// Develop a program that prints prime numbers in a given range using switch-case.

#include <stdio.h>

int main()
{
    int start, end, choice;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Choose an option:\n");
    printf("press 1. Print prime numbers in the range\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        
        printf("Prime numbers between %d and %d are: ", start, end);
        for (int num = start; num <= end; num++)
        {
            if (num < 2)
                continue;

            int Prime = 1;
            for (int k = 2; k * k <= num; k++)
            {
                if (num % k == 0)
                {
                    Prime = 0;
                    break;
                }
            }

            if (Prime)
            {
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    break;

    default:
        printf("Invalid choice! Please enter 1.\n");
    }

    return 0;
}
