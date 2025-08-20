// reverse array

#include <stdio.h>

int main()
{
    int num;
    printf("Enter index of number :");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("%d index of array are : ",i);
        scanf("%d", &arr[i]);
    }
     for (int i = num-1; i >= 0; i--)
    {
        printf("%d\t ", arr[i]);
    }
    return 0;
}