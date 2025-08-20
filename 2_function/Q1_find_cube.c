// 1.	Write a C program to find cube of any number using function.

#include <stdio.h>

int iscube(int n)
{
    n = n * n * n;
    return n;
}

int main()
{
    int num;
    printf("enter any nnumber:");
    scanf("%d", &num);

    printf("the cube of %d number is %d",num, iscube(num));

    return 0;
}