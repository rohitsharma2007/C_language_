// Create a program that reverses a given number using switch-case

#include <stdio.h>
int main()
{
    int chiose, n;
    printf("enter press 1 for reverse number :");
    printf("enter your choise :");
    scanf("%d", &chiose);

    switch (chiose)
    {
    case 1:
    {
        printf("enter number : ");
        scanf("%d", &n);
        int last = 0, reverse = 0;
        while (n > 0)
        {
            last = n % 10;
            n /= 10;
            reverse = reverse * 10 + last;
        }
        printf("the reverse number is %d", reverse);
    }
    break;
    }

    return 0;
}
