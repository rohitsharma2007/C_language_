// . Implement a program that prints a pattern based on the user's choice (e.g., pyramid, square, etc.).
#include <stdio.h>

int main()
{
    int choice, size;

    printf("Choose a pattern:\n");
    printf("press 1 for Square\npress 2 for Pyramid\npress 3 for Right-angled Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the size: ");
    scanf("%d", &size);

    switch (choice)
    {
    case 1:
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    break;
    case 2:
    {

        for (int i = 1; i <= size; i++)
        {
            for (int j = 0; j < size - i; j++)
            {
                printf("  ");
            }
            for (int k = 0; k < (2 * i - 1); k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    break;
    case 3:

    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    break;
    default:
    {

        printf("Invalid choice!\n");
    }
    break;
    }

    return 0;
}
