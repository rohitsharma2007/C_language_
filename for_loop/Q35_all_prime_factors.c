// Write a C program to find all prime factors of a number using for loop.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    while (num % 2 == 0)
    {
        printf("2 ");
        num = num / 2;
    }

    for (int i = 3; i <= num; i += 2)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }

    return 0;
}
