// 21	C Program to swap values without using third variable using for loop. 
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Using for loop to perform swap only once
    for (int i = 0; i < 1; i++)
    {
        a = a + b;  // a now holds sum of a and b
        b = a - b;  // b is now original a
        a = a - b;  // a is now original b
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
