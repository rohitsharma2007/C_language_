// Write a program that prints the Fibonacci sequence using switch-case

#include <stdio.h>

int main()
{
    int choice, n;

    printf("Choose an option:\n");
    printf("1. Print Fibonacci Sequence\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        if (n > 0)
        {

            {
                int a = 0, b = 1, next_fibonacci;
                printf("Fibonacci Sequence: ");
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", a);
                    next_fibonacci = a + b;
                    a = b;
                    b = next_fibonacci;
                }
                printf("\n");
            }
        }
        else
        {
            printf("Please enter a positive number.\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
