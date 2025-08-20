// C Program to check number is palindrome or not using while loop.

#include <stdio.h>

int main()
{
    int num, result = 0,rem = 0;
    printf("Enter any number : ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        result = result * 10 + rem;
        temp /= 10;
       
    }
    if (result == num)
    {
        printf("%d is palindrome number ", num);
    }
    else
    {
        printf("%d is not palindrome number", num);
    }

    return 0;
}