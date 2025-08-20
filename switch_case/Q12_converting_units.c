// Implement a menu-driven program for converting units (km to miles, kg to pounds, etc.).

#include <stdio.h>
int main()
{
    int ch;
    float convert, kg, pounds;
    printf("enter 1 for converting kg to miles\n");
    printf("enter 2 for converting kg to pounds\n");
    printf("enter your choise:\t");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("enter kg amount\t");
        scanf("%f", &kg);
        convert = kg * 0.621;
        printf("conversion of %f into miles is %.1f\n", kg, convert);
    }
    break;
    case 2:
    {
        printf("enter kg amount\t");
        scanf("%f", &kg);
        convert = kg * 2.20;
        printf("conversion of %f into pounds is %.1f\n", kg, convert);
    }
    break;
    default:
    {
        printf("please input right input\n");
    }
    break;
    }

    return 0;
}
