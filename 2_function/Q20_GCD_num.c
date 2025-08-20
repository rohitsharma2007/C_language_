// 20.{
    if (num2 == 0)
        return num1;
    else
        return isGCD(num2, num1 % num2);
}
	Write a C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>
int isGCD(int num1, int num2)

int main()
{
    int num1, num2;
    printf("enter 1st number:");
    scanf("%d", &num1);
    printf("enter 2st number:");
    scanf("%d", &num2);

    int result = isGCD(num1, num2);
    printf("GCD of two number is %d", result);

    return 0;
}
