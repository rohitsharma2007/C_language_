#include<stdio.h>
int main ()
{
    int i =1,n, r =1,num ;
    printf("Enter your digit : ");
    scanf("%d",&n);
    num = n;
    while(i<=n)
    {
        n =n % 10;
        r = (n*10) + r;
        n/=10;
    }

    printf("the reverse number is : %d\n",r);
    if ( num == r)
    {
        printf("%d is plantom number ",r);
    }
    else 
    {
        printf("not");
    }
    return 0;
}
