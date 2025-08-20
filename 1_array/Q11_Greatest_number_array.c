//  Write a program to find the greatest number stored in an array of size n. Take array values from the user.

#include <stdio.h>

int main()
{
    int num, first, second;
    printf("Enter index of array : ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter element of array :\n");

    for (int i = 0; i < num; i++)
    {
        printf("input %d index of array : ", i);
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first || arr[i] != second)
        {
            second = arr[i];
        }
    }
    printf("The greatest of array number is %d", first);
    return 0;
}
