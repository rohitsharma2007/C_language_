// move all zero to end
#include <stdio.h>

int main()
{
    int num;
    printf("Enter index of number : ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("input %d index element of array : ", i);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    
    for (int i = 0; i < num; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }

    while (count < num)
    {
        arr[count++] = 0;
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}