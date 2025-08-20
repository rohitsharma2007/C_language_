// 22	C program to calculate power of a number without using pow method using for loop.
#include <stdio.h>

int ispower(int num, int power)
{
   
    for (int i =1; i < power; i++)
    {
        num *= num;
    }
    return num;
}

int main()
{
    int num; 
    printf("Enter number : ");
    scanf("%d", &num);
    int pow;
    printf("Enter power of number : ");
    scanf("%d", &pow);
    int x = ispower(num, pow);
    printf("%d", x);

    return 0;
}