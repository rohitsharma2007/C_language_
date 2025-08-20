// C program to print multiplication/table of any number using while loop.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}