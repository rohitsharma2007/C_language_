// 19	Write a program in C to swap first and last digit of a number using for loop. #include <stdio.h>
#include <math.h>

int main()
{
    int num, n, firstDigit, lastDigit, digits = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    n = num; // Make a copy of the number

    lastDigit = n % 10; // Extract last digit

    // Count number of digits and get first digit
    for (; n != 0; n /= 10)
    {
        firstDigit = n;
        digits++;
    }

    // If number has only one digit, no need to swap
    if (digits == 1)
    {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    // Remove first and last digits and extract middle part
    int middlePart = (num % (int)pow(10, digits - 1)) / 10;

    // Construct the new number
    int swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
