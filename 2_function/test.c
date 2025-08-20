#include <stdio.h>
#include <math.h>

int digi_count(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int armstrong(int num)
{
    int last = 0, arm = 0, org = num;

    int count = digi_count(num);

    for (int i = 0; i < num; i++)
    {
        last = num % 10;
        arm += pow(last, count);
        num = num / 10;
        if(num==1)
        {
            arm += 1;
        }
    }
    return arm;
}

void armrange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {

        if (armstrong(i) == i)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int start, end;
    printf("Enter lower limits : ");
    scanf("%d", &start);
    printf("Enter upper limits : ");
    scanf("%d", &end);

    armrange(start, end);

    return 0;
}