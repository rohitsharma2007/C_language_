// •	Implement a switch-case program that converts lowercase letters to uppercase and vice versa.

#include <stdio.h>
int main()
{
    int ch;
    char convert, lower, upper;
    printf("select option\n1 for convert lowercase to uppercase.\n2 for convert uppercase to lowercase\t");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        printf("enter alphabet in lowercase :\t");
        scanf("%s", &lower);

        if (lower >= 97 && lower <= 122)
        {
            convert = lower - 32;
            printf("%c", convert);
        }
    }
    break;
    case 2:
    {
        printf("enter alphabet in lowercase :\t");
        scanf("%s", &upper);

        if (upper >= 65 && upper <= 90)
        {
            convert = lower + 32;
            printf("%c", convert);
        }
    }
    break;
    default:
    {
        printf("invalid input");
    }
    break;
    }

    return 0;
}
