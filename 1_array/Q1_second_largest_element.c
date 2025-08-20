// Second largest element ??

#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest, second;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (n < 1 || largest == second)
    {
        printf("Second largest does not exist or all elements are equal.\n");
    }
    else
    {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
