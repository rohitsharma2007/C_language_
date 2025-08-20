// 9.	Write a C program to print all perfect numbers between given interval using functions

#include <stdio.h>

int isperfect(int num)
{
    int perfect = 1;
    int org = num;
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            perfect += i;
        }

    
    }
return perfect ==num;
}

void rangperfect(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isperfect(i))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}
int main()
{
    int start, end;
    printf("enter lower limits:");
    scanf("%d", &start);
    printf("enter upper limits:");
    scanf("%d", &end);

    rangperfect(start, end);

    return 0;
}