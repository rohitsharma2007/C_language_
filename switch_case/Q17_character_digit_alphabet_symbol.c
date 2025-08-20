// •	Write a program that checks whether an input character is a digit, alphabet, or special character.
#include <stdio.h>
int main()
{

    int choise;
    printf("input a digit, alphabet, or special character:\n");
    scanf("%d", &choise);

    switch (choise)
    {
    default:
    {
        printf("invalid input");
        {
            char ch;
            printf("input character is a digit, alphabet, or special character:\n");
            scanf("%s", &ch);
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                printf("your input is alphabet");
            }

            else if (ch >= '0' && ch <= '9')
            {
                printf("your input is digit");
            }
            else
            {
                printf("your input is symbol");
            }
        }
    }
    break;
    }

    return 0;
}
