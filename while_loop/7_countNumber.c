#include <stdio.h>

int main() {
    int n,rem , count = 0;

  
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n /= 10;
        count++;
       
    }
    printf("the count numeber is %d",count);
    return 0;
}
