#include<stdio.h>
int main ()
{
    int n,sum =0;
    printf("Enter your digits: ");
    scanf("%d",&n);

    while (n != 0) 
    {
        sum +=n%10;
        n/=10;
    }
    printf("the sum of given number is : %d",sum);

    return 0;
}
