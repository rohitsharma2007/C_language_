// Develop a switch-case program that simulates a lottery system with random number generation.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice, userNumber, lotteryNumber;
    srand(time(0));

    while (1)
    {
        printf("\n--- Lottery System ---\n");
        printf("1. Generate Lottery Number\n");
        printf("2. Enter Your Lottery Number\n");
        printf("3. Check Result\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n')

                continue;
        }

        switch (choice)
        {
        case 1:
            lotteryNumber = rand() % 100 + 1;
            printf("Lottery Number Generated! Try your luck!\n");
            break;

        case 2:
            printf("Enter your lottery number (1-100): ");
            if (scanf("%d", &userNumber) != 1 || userNumber < 1 || userNumber > 100)
            {
                printf("Invalid input. Please enter a number between 1 and 100.\n");
                while (getchar() != '\n')
                    ;
                continue;
            }
            printf("Your lottery number is %d\n", userNumber);
            break;

        case 3:
            if (userNumber == lotteryNumber)
                printf("Congratulations! You won the lottery!\n");
            else
                printf("Better luck next time! The winning number was %d.\n", lotteryNumber);
            break;

        case 4:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
