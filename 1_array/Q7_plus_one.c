// plus one 

#include <stdio.h>

int main() {
    int digits[100], n, i, carry = 1;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter the digits (each between 0-9):\n");
    for (i = 0; i < n; i++)
        scanf("%d", &digits[i]);

    
    for (i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    printf("Result after adding one:\n");
    if (carry == 1)
        printf("1 ");
    for (i = 0; i < n; i++)
        printf("%d ", digits[i]);

    return 0;
}
