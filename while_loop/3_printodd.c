#include<stdio.h>
int main ()
{
    int a =1;
    int n;
    scanf("%d",&n);

    while(a<=n)
    {
        if(a%2 !=0)
        {
            printf("%d\n",a);
        }
        ++a;
    }

    return 0;
}

//WAP TO PRINT ALL ODD NUMBER FROM 1 TO USER INPUT NUMBER USING WHILE LOOP?
