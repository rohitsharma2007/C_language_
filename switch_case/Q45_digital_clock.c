// Create a switch-case program that simulates a digital clock menu with alarm settings.

#include <stdio.h>

int main()
{
    int choice, hours, minutes, n;
    int alarmHours = -1, alarmMinutes = -1;

    printf("enter your loop terms:");
    scanf("%d",&n);

    while (1)
    {
        printf("\n--- Digital Clock Menu ---\n");
        printf("1. Set Time\n");
        printf("2. Set Alarm\n");
        printf("3. Display Time\n");
        printf("4. Display Alarm\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter hours and minutes (HH MM): ");
            scanf("%d %d", &hours, &minutes);
            printf("Time set to %02d:%02d\n", hours, minutes);
            break;

        case 2:
            printf("Enter alarm hours and minutes (HH MM): ");
            scanf("%d %d", &alarmHours, &alarmMinutes);
            printf("Alarm set for %02d:%02d\n", alarmHours, alarmMinutes);
            break;

        case 3:
            printf("Current Time: %02d:%02d\n", hours, minutes);
            break;

        case 4:
            if (alarmHours == -1)
                printf("No alarm set.\n");
            else
                printf("Alarm Time: %02d:%02d\n", alarmHours, alarmMinutes);
            break;

        case 5:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
