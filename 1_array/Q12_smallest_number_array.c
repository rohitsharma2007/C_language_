// Write a program to find the smallest number stored in an array of size n. Take array values from the user.

#include <stdio.h>

int main()
{
    int num, first;
    printf("Enter index of array : ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("input %d index of array : ", i);
        scanf("%d", &arr[i]);
    }
    if (arr[0] < arr[1])
    {
        first = arr[0];
        }
    else
    {
        first = arr[1];
        
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < first)
        {
            first = arr[i];
        }
    }
    printf("The smallest number of array is  %d", first);
    return 0;
}