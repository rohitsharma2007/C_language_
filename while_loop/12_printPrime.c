#include<stdio.h>
int main()
{
    int i = 1,n;
    printf("Enter your number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i++;
    }
}