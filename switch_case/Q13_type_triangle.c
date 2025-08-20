// •	Develop a program to determine the type of triangle based on the user’s input sides.

#include <stdio.h>
int main()
{
    int triangle, side1, side2, side3, ch;
    printf("enter your choise:");
    scanf("%d", &ch);

    switch (ch)
    {
    default:
    {
        printf("please enter sides of triangle : ");
        scanf("%d %d %d", &side1, &side2, &side3);
        if (side1 == side2 && side2 == side3 && side3 == side1)
        {
            printf("%d side of triangle is equateral triangle", side1);
        }
        else if (side1 == side2 || side3== side1 || side2 == side3)
        {
            printf("triangle is isoceles triangle");
        }
        
        else
        {
            printf("triangle is scalen triangle");
        }
    }
    break;
    }

    return 0;
}
