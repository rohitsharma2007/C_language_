// Write a program in C to print ASCII character with values using for loop.

#include <stdio.h>

int main()
{
    printf("\n\nASCII Table:\n");
    printf("Character\tASCII Value\n");

    for (int i = 0; i <= 127; i++)
    {
        printf("%c\t\t%d\n", i, i);
    }

    return 0;
}
