// •	Create a program that takes a number and prints its spelling (e.g., 5 ? "Five"). 

#include<stdio.h>
int main ()
{
    int n;
    printf("enter your number : ");
    scanf("%d",&n);

    switch(n)
    {
        case  1 : 
        {
            printf("%d is ONE",n);
        }
        break;
        case  2 : 
        {
            printf("%d is TWO",n);
        }
        break;
        case  3 : 
        {
            printf("%d is THREE",n);
        }
        break;
        case  4 : 
        {
            printf("%d is FOUR",n);
        }
        break;
        case  5 : 
        {
            printf("%d is FIVE",n);
        }
        break;
        case  6 : 
        {
            printf("%d is SIX",n);
        }
        break;
        case  7 : 
        {
            printf("%d is SEVEN",n);
        }
        break;
        case  8 : 
        {
            printf("%d is EIGHT",n);
        }
        break;
        case  9 : 
        {
            printf("%d is NINE",n);
        }
        break;
        case 0  : 
        {
            printf("%d is ZERO",n);
        }
        break;
        default:
        {
            printf("invalid input by you");
        }
        break;
    }


    return 0;
}
