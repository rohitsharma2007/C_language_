// •	Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
int main()
{

    char vowel, consonant, alphabet;
    printf("enter alphabet : ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c  is vowels", alphabet);
        break;
    default:
    {
        printf("%c is consonent", alphabet);
    }
    break;
    }

    return 0;
}
