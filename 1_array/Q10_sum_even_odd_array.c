//  Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter index of number : ");
    scanf("%d", &num);

    int arr[num], sum_even = 0, sum_odd = 0;

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d index of array input : ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }
    printf("The sum of even number is : %d\n", sum_even);
    printf("The sum of odd number is : %d", sum_odd);

    return 0;
}