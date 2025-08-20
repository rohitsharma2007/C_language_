// •	Write a C program to create Simple Calculator using switch case

#include <stdio.h>
#include <conio.h>
int main()
{
    
    int add, sub, mult, div, num1, num2, ch;
    printf("enter any two number:");
    scanf("%d %d", &num1, &num2);
    printf("enter 1 for add\n");
    printf("enter 2 for sub\n");
    printf("enter 3 for mult\n");
    printf("enter 4 for div\n");
    printf("enter your choise:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("sum of two number is %d", num1 + num2);
    }
    break;
    case 2:
    {
        if (num1 > num2)
        {
            printf("difference of two number is %d", num1 - num2);
        }
        else if (num2 > num1)
        {
            printf("difference of two number is %d", num2 - num1);
        }
    }
    break;
    case 3:
    {
        printf("sum of two number is %d", num1 * num2);
    }
    break;
    case 4:
    {
        if (num1 > num2)
        {
            printf("division of two number is %d", num1 / num2);
        }
        else if (num2 > num1)
        {
            printf("division of two number is %d", num2 / num1);
        }
    }
    break;

    default:
    {
        printf("you enter wrong input");
    }
    }
    
    return 0;
}
