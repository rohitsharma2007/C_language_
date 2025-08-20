// Write a program to calculate the sum of numbers stored in an array of size n. Take array values from the user.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter index of number : ");
    scanf("%d", &num);

    int arr[num];

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        printf("enter input of %d index of element : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nThe sum of whole array is : %d", sum);

    return 0;
}