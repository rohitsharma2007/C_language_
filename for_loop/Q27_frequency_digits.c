// C Program to print the frequency of digits in given number using for loop. 

#include <stdio.h>

int main() {
    int num, digit, temp;
    int freq[10] = {0}; 
    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (; temp > 0; temp /= 10) {
        digit = temp % 10;
        freq[digit]++;
    }

    printf("Digit frequencies in %d are:\n", num);
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Digit %d: %d times\n", i, freq[i]);
        }
    }

    return 0;
}
