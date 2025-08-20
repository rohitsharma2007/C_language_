// Implement a program to check if a number is a palindrome

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
        int new_number = n;
        int last = 0, reverse = 0;
        while (n > 0)
        {
            last = n % 10;
            n /= 10;
            reverse = reverse * 10 + last;
        }
        if (new_number == reverse)
        {
            printf("the palindrome number is %d", new_number);
        }
        else
        {
            printf("number is not palindrome");
        }
    }
    break;
    }

    return 0;
}
