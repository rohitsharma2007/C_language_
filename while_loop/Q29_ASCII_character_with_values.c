// Write a program in C to print ASCII character with values using while loop. 
#include <stdio.h>


int main() 
{
    int i = 0,j = 255;
    printf("ASCII VALUE\t\tASCII CHARACTER");
    while(i<=j)
    {
        printf("%d\t\t\t%c\n",i,i);
        i++;
    }
    

    return 0;
}