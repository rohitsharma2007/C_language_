
#include <stdio.h>
int main()
{
    int n, i = 1, fact = 1;
    printf("Enter you number ");
    scanf("%d", &n);
    while (i <= n)
    {
        
        fact = fact * i;
        i++;
    }
    printf("ther factor of number is %d", fact);

    return 0;
}
