// 4.	Write a C program to check whether a number is even or odd using functions.

#include <stdio.h>
int iseven(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
        return 1 ;
    }
    
    else
    {
        printf("%d number is odd\n",n);
        return 0;
    }
}

int main()
{
    int num, even1;
    printf("enter any number:");
    scanf("%d", &num);

    even1 = iseven(num);

    printf("Return value from function: %d\n", even1);

    return 0;
}