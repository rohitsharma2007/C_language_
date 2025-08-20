// •	Write a C program to find maximum between two numbers using switch case. /

#include <stdio.h>
int main()
{
    int max, first, last;

    printf("enter your first number : ");
    scanf("%d", &first);
    printf("enter your last number : ");
    scanf("%d", &last);

    switch (first > last)
    {
    case 1:
    {
        printf("%d is maximum number", first);
    }
    break;

    case 0:
        switch (last > first)
        {
            case 1:
            {
                printf("%d is maximum number", last);
            }
            break;
            case 0:
            {
                printf("number is equal");
            }
            break;
        }
    }
    return 0;
}
