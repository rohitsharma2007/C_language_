#include <stdio.h>
int main()
{
    int i =1, n,count = 0;
    printf("Enter your number : ");
    scanf("%d",&n);

    while (i<=n)
    {
        n /=10;
        count++;

    }
    printf("%d",count);
    return 0;
}
