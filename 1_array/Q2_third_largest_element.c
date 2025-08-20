// third largest element ?

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n;
    int first, second, third;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = second = third = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    if (third == INT_MIN)
    {
        printf("Third largest element does not exist.\n");
    }
    else
    {
        printf("Third largest element is: %d\n", third);
    }

    return 0;
}
