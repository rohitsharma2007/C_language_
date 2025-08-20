//  Write a program to calculate the average of numbers stored in an array of size n. Take array values from the user.

#include <stdio.h>


int main() 
{
    int num;
    printf("Enter index of number : ");
    scanf("%d",&num);

    int arr[num];
    double average = 0;
    int sum = 0;

    printf("Enter array element :\n ");

    for(int i = 0;i<num;i++)
    {
        printf("enter input %d index of number : ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
        
    }
    average = sum/num;
    printf("The average of number : %.2lf",average);

    return 0;
}