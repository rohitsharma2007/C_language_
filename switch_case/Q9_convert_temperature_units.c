// •	Write a program to convert temperature units (Celsius to Fahrenheit, Fahrenheit to Celsius).
#include <stdio.h>
int main()
{
    int ch;
    float convert, celcius, fahrenheit;
    printf("1 for convert Fahrenheit to Celsius\n");
    printf("2 for convert Celsius to Fahrenheit\n");

    printf("enter your choise");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("please input fahrenheit :");
        scanf("%f", &fahrenheit);
        convert = (fahrenheit - 32)*5/9;
        printf("%.2f", convert);
    }
    break;
    case 2:
    {
        printf("please input celcius :");
        scanf("%f", &celcius);
        convert = (celcius*9/5) + 32;
        printf("%.2f", convert);
    }
    break;

    default:
    {
        printf("you enter invalid input");
    }
    break;
    }

    return 0;
}
