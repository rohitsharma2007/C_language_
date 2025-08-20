// C program to print all alphabets from a to z using while loop.
#include <stdio.h>

int main()
{
    int i = 'a', j = 'z';
    printf(" print all alphabets from a to z: ");
    while (i <= j)
    {
        printf("%c ", i);
        i++;
    }

    i = 'A', j = 'Z';
    printf("\n print all alphabets from A to Z: ");
    while (i <= j)
    {
        printf("%c ", i);
        i++;
    }

    return 0;
}