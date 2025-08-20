// 21.	Write a C program to find LCM of two numbers using recursion.
#include <stdio.h>
int isgcd(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
        return isgcd(n2, n1 % n2);
}
int isLCM(int a,int b)
{
    return a*b/isgcd(a,b);
}

int main()
{
    int num, num1;
    printf("enter any two number:");
    scanf("%d %d", &num, &num1);
    
    printf("the lcm of two number is :- %d", isLCM(num1, num));

    return 0;
}