// Write a switch-case program that prints multiplication tables of a given number.

#include <stdio.h>
int main()
{
    int choise;
    printf("enter your choise\n press 1 for multiplication tables : ");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
    {
        int n;
        printf("enter any number : ");
        scanf("%d", &n);
        printf("the multiplication table of %d numbe is:", n);

        for (int i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    break;

    default:
    {
        printf("please press right option");
    }
    break;
    }

    return 0;
}
