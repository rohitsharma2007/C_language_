// •	Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>
int main()
{
    int odd, even, ch, n;
    printf("enter 1 for even number : \n");
    printf("enter 2 for odd number : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("enter any number : ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("%d is even number", n);
        }
        else
        {
            printf("%d id odd number",n);
        }
    }
    break;

    case 2:
    {
        printf("enter any number : ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("%d is odd number", n);
        }
        else
        {
            printf("%d id even number",n);
        }
    }
    break;

    default:
    {
        printf("you enter wrong number !!rerun your program..");
    }
    break;
    }

    return 0;
}
