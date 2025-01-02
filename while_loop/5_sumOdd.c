#include<stdio.h>
int main ()
{
    int a = 1,n,sum=0;
    scanf("%d",&n);

    while(a<=n)
    {
        if(a % 2 != 0)
        {
            printf("%d\t",a);
            sum += a;
        }
        ++a;
    }
    printf("\nThe number input by user:%d \nThe sum of odd number : %d",n,sum);

    return 0;
}

//WAP TO PRINT SUM OF ODD NUMBER FROM 1 TO INPUT USER USING WHILE LOOP?
