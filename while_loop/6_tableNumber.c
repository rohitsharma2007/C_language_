#include<stdio.h>
int main ()
{
    int a=1,n;
    scanf("%d",&n);
    
    while(a<=10)
    {
        printf("%d x %d = %d\n",n,a,a*n);
        ++a;
    }


    return 0;
}



//WAP TO PRINT ANY NUMBER OF TABLE USING WHOLE LOOP?