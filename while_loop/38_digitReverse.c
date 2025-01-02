#include<stdio.h>
int main ()
{
    int i =1,n, r ,rem ;
    printf("Enter your digit : "),
    scanf("%d",&n);

    while(i<=n)
    {
        rem =n % 10;
        r = (rem*10) + r;
        n/=10;
    }
    printf("the reverse number is : %d",r);
    return 0;
}
