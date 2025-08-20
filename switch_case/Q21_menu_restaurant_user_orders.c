// Create a program to print a menu for a restaurant and take user orders using switch-case.

#include <stdio.h>
int main()
{

    int choise;
    printf("please enter any option:\n1 for coffee:\n2 for tea:\n3 for waiting:\n");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
    {
        printf("please wait !! coffee is being made.");
    }
    break;
    case 2:
    {
        printf("that nice your choise is awasome, tea ready,waiter please server in cup");
    }
    break;
    case 3:
    {
        printf("please waiting for sometime,The ownwer of the shop is not avilable");
    }
    break;
    }

    return 0;
}
