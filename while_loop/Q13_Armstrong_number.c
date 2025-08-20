// C program to check a given number is Armstrong or not using while loop.
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;

    
    while (temp != 0) {
        remainder = temp % 10;
        result += powf(remainder, n);
        temp = temp / 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}

