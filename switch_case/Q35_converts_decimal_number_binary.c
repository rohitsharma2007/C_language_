// Create a program that converts a decimal number to binary using switch-case

#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("Binary number: 0\n");
        return 0;
    case 1:
        printf("Binary number: 1\n");
        return 0;
    default:
        while (num > 0) {
            binary[i] = num % 2;
            num /= 2;
            i++;
        }
        break;
    }

    printf("decimal number into Binary number: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
