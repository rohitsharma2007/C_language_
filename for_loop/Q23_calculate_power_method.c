// C program to find power of a number with using pow method using for loop. 
#include <stdio.h>

int main() {
    int base, powers;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter powers: ");
    scanf("%d", &powers);

    for (int i = 1; i <= powers; i++) {
        result = result * base;
    }

    printf("%d^%d = %1ld\n", base, powers,result );

    return 0;
}
