// 20	C Program to swap values using third variable using for loop. 
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Using a for loop to execute swap only once
    for (int i = 0; i < 1; i++)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
