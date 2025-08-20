// Write a switch-case program for a student management system with options to add, delete, and update records.

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    while (1)
    {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Update Student\n");
        printf("4. Display Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            if (studentCount < MAX_STUDENTS)
            {
                printf("Enter Student ID: ");
                scanf("%d", &students[studentCount].id);
                getchar();

                printf("Enter Student Name: ");
                scanf(" %[^\n]", students[studentCount].name);

                printf("Enter Student Age: ");
                scanf("%d", &students[studentCount].age);

                studentCount++;
                printf("Student added successfully!\n");
            }
            else
            {
                printf("Student list is full!\n");
            }
            break;

        case 2:
        {
            int id, i, found = 0;
            printf("Enter Student ID to delete: ");
            scanf("%d", &id);

            for (i = 0; i < studentCount; i++)
            {
                if (students[i].id == id)
                {
                    found = 1;
                    for (int j = i; j < studentCount - 1; j++)
                    {
                        students[j] = students[j + 1];
                    }
                    studentCount--;
                    printf("Student deleted successfully!\n");
                    break;
                }
            }
            if (!found)
            {
                printf("Student ID not found!\n");
            }
        }
        break;

        case 3:
        {
            int id, i, found = 0;
            printf("Enter Student ID to update: ");
            scanf("%d", &id);
            getchar();

            for (i = 0; i < studentCount; i++)
            {
                if (students[i].id == id)
                {
                    found = 1;
                    printf("Enter new name: ");
                    scanf(" %[^\n]", students[i].name);

                    printf("Enter new age: ");
                    scanf("%d", &students[i].age);

                    printf("Student updated successfully!\n");
                    break;
                }
            }
            if (!found)
            {
                printf("Student ID not found!\n");
            }
        }
        break;

        case 4:
            if (studentCount == 0)
            {
                printf("No students to display!\n");
            }
            else
            {
                printf("\n--- Student Records ---\n");
                for (int i = 0; i < studentCount; i++)
                {
                    printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
                }
            }
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
