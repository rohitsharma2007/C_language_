#include<stdio.h>
int main ()
{
    int a = 1;
    int n;
    int sum =0;
    scanf("%d",&n);
    while (a<=n)
    {
        if (a % 2 == 0)
        {
            printf("%d\n",a);
            sum += a;
        }
        ++a;

    }
    printf("the number input by user : %d \nthe sum of even number : %d",n,sum);

    return 0;
}

//WAP TO PRINT SUM OF EVEN NUMBER FROM 1 TO INPUT USER USING WHILE LOOP?
