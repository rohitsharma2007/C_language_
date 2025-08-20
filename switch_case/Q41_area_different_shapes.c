// Implement a switch-case based program to calculate area of different shapes (circle, square, rectangle).

#include <stdio.h>
#include <string.h>

int main()
{

    char shape_name;
    int area, r, pi = 3.14;
    printf("enter first name of shape like\nc - CIRCLE\nr - RECTANGLE\ns - SQUARE\t");
    scanf("%s", &shape_name);

    switch (shape_name)
    {
    case 'c':
    case 'C':
    {
        printf("enter radius of circle:");
        scanf("%d", &r);
        area = 2 * r * r * pi;
        printf("area of circle is %d", area);
    }
    break;
    case 'r':
    case 'R':
    {
        int l, b;
        printf("enter length and breadth");
        scanf("%d %d", &l, &b);
        area = l * b;
        printf("the area of rectangle is %d", area);
    }
    break;
    case 's':
    case 'S':
    {
        int a;
        printf("enter side of square:");
        scanf("%d", &a);
        area = a * a;
        printf("the area of square is %d", area);
    }
    break;

    default:
    {
        printf("invalid input!!!");
    }
    break;
    }

    return 0;
}
