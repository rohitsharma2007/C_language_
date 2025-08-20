#include <stdio.h>

int Sumarray(int arr[], int index)
{
    int sum = 0;
    for (int i = 0; i < index; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int index;
    printf("Enter index of array : ");
    scanf("%d", &index);

    int arr[index];
    printf("Enter element of array : ");
    for (int j = 0; j < index; j++)
    {
        scanf("%d", &arr[j]);
    }
    for (int i = 0; i < index; i++)
    {
        printf("%d", arr[i]);
    }
    printf("sum of array is : ");
    int x = Sumarray(arr, index);
    printf("%d", x);
}