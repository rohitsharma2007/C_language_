// •	Create a program that takes a grade (A, B, C, D, F) and prints the corresponding remark.

#include <stdio.h>
int main()
{
    char A, B, C, D, F, ch;
    printf("enter grade in capital letter :");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
    {
        printf("your remarks is excelent");
    }
    break;
    case 'B':
    {
        printf("your remarks is very good");
    }
    break;
    case 'C':
    {
        printf("your remarks is good");
    }
    break;
    case 'D':
    {
        printf("your remarks is poor");
    }
    break;
    case 'F':
    {
        printf("your remarks is very bad");
    }
    break;
    default:
    {
        printf("enter invalid letter");
    }
    }
    return 0;
}
