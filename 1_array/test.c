#include <stdio.h>

int main() 
{
    int num = 10;  // As per question, size of array is 10
    int arr[num];
    double average = 0;
    int sum = 0;

    printf("Enter %d array elements:\n", num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (double)sum / num;  // Correct average calculation

    printf("The average of the numbers: %.2lf\n", average);

    return 0;
}
