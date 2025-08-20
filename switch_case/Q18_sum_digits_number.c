// •	Develop a program to find the sum of digits of a number using switch-case.

#include <stdio.h>
int main()
{
    int ch, num1, num2;
    printf("enter any numbr : ");
    scanf("%d", &ch);

    switch (ch)
    {
    default:
    {
        printf("enter any 2 number ");
        scanf("%d %d", &num1, &num2);
        printf("sum of two number is %d", num1 + num2);
    }
    break;
    }
    return 0;
}
