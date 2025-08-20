// •	Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>
int main()
{
    int root1, root2, a, b, c, ch;
    printf("enter cofficient of ax^2 + bx + c = 0:  ");
    scanf("%d %d %d",&a,&b,&c);

    printf("your quadratic equation is %dx^2 + %dx + %d = 0\n", a, b, c);

    double d;
    d = (b * b) - 4 * a * c;
    printf("%.2f is descrimenant\n", d);

    printf("enter your choise 1 for d>0\n, 2 for d=0\n,3 for d<0:\t");
    scanf("%d\n", &ch);
    switch (ch)
    {
    case 1:
    {
        if (d > 0)
        {
            root1 = ((-b + sqrt(d)) / 2 * a);
            root2 = ((-b - sqrt(d)) / 2 * a);
            printf("%d %d\n", root1, root2);
        }
    }
    break;
    case 2:
    {
        if (d == 0)
        {
            root1 = ((-b + sqrt(d)) / 2 * a);
            root2 = ((-b - sqrt(d)) / 2 * a);
            printf("%d %d\n", root1, root2);
        }
    }
    case 3:
    {
        if (d < 0)
        {
            root1 = -b / (2 * a);
            root2 = sqrt(-d) / (2 * a);
            printf("%d %d\n", root1, root2);
        }
    }
    break;
    }

    return 0;
}
