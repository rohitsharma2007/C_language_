// Implement a program to check and print Armstrong numbers in c using switch case.

#include <stdio.h>
int main()
{
    int choise;
    printf("enter 1 for Armstrong numbers :\n ");
    printf("choose your option :\t ");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
    {
        int num;
        printf("enter any number :\t ");
        scanf("%d", &num);

        int new_num = num, l = 0, arm = 1;
        for (int i = 1; i <= num; i++)
        {
            l = num % 10;
            arm = arm + l * l * l;
            num /= 10;
        }
        if (arm == new_num)
        {
            printf("the Armstrong number is %d", arm);
        }
        else
        {
            printf("not Armstrong numbers");
        }
    }
    break;
    default:
    {
        printf("invalid number");
    }
    break;
    }

    return 0;
}
