// 2.	Write a C program to find diameter, circumference and area of circle using functions.

#include <stdio.h>
#include <math.h>

#define PI 3.14

double isdiameter(double num)
{
    return 2 * num;
}
double iscircumference(double num)
{
    return 2 * PI * num;
}
double isarea(double num)
{
    return PI * pow(num, 2);
}

int main()
{
    double radius, diameter, area, circumference;
    printf("enter radius of circle:");
    scanf("%lf", &radius);

    diameter = isdiameter(radius);
    circumference = iscircumference(radius);
    area = isarea(radius);

    printf("the diameterof cierle is %.2lf\n", diameter);
    printf("the circumference of cierle is %.2lf\n", circumference);
    printf("the area of cierle is %.2lf\n", area);

    return 0;
}