// 13	C program to check a given number is Armstrong or not using for loop.

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("enter any number:");
    scanf("%d", &num);
    int original_num = num, reverse, arm = 0, i;
    for (i = 1; i <= num; num /= 10)
    {
        reverse = num % 10;
        arm += reverse * reverse * reverse;
      
    }
    if (arm == original_num)
    {
        printf("%d number is armstrong number", original_num);
    }
    else
    {
        printf("not armstrong number");
    }

    return 0;
}