// Implement a program to check if a given string is a palindrome using switch-case.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        switch (str[i] == str[len - i - 1])
        {
        case 0:
            flag = 0;
            break;
        case 1:
            continue;
        }
        if (flag == 0)
            break;
    }

    switch (flag)
    {
    case 1:
        printf("The string is a palindrome.\n");
        break;
    case 0:
        printf("The string is not a palindrome.\n");
        break;
    }

    return 0;
}
