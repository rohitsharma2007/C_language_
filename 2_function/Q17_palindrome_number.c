// 16.	Write a C program to check whether a number is palindrome or using recursion.

#include <stdio.h>

int reverseNumber(int num, int rev)
{
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int isPalindrome(int num)
{
    return num == reverseNumber(num, 0);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
