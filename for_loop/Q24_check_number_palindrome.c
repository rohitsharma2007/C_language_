// 25	C Program to check number is palindrome or not using for loop.
#include <stdio.h>

int ispalindrome(int num)
{
    int reversed = 0, remainder, original = num;

    for (; num != 0; num /= 10)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int x = ispalindrome(num);

    if (x == 1)
    {
        printf("%d is a palindrome number.\n", num);
    }
    else
    {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
