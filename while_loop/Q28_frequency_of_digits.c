// C Program to print the frequency of digits in given number using while loop.
#include <stdio.h>

int main()
{
    int num, digit,i = 0;
    int freq[10] = {0}; 

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
    {
        digit = temp % 10;    
        freq[digit]++;        
        temp = temp / 10;      
    }

    printf("Digit frequencies in %d:\n", num);
    while(i<10)
    {
        if (freq[i] != 0)
        {
            printf("Digit %d occurs %d times\n", i, freq[i]);
        }
        i++;
    }

    return 0;
}
