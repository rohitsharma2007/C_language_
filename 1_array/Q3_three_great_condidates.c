// three great condidates .
#include <stdio.h>
#include <limits.h>

int main()
{
    int num;
    printf("Enter index of array : ");
    scanf("%d", &num);
    int arr[num], first, second, third;
    first = second = third = INT_MIN;

    for (int i = 0; i < num; i++)
    {
        printf("the %d element of array input : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > first)
        
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }
    if (num == INT_MIN)
    {
        printf("not available 3rd element ");
    }
    else if (num == INT_MIN)
    {
        printf("not available 2rd element ");
    }
    else if (num == INT_MIN)
    {
        printf("not available 1rd element ");
    }
    else
    {
        printf("%d %d %d are the great candidates", first, second, third);
    }

    return 0;
}