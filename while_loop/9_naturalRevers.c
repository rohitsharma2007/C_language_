#include<stdio.h>
int main ()
{
    int n,a = 1;
    printf("wher you want to revere number start: ");
    scanf("%d",&n);

    while(a<=n)
    {
        printf(" %d\t",n);
        --n;
    }

    return 0;
}
