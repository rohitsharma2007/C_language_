// 23.	Write a C program to find sum of elements of array using recursion. 

#include <stdio.h>

int sumArray(int arr[], int index, int size) {
    if (index >= size) {
        return 0; // Base case: no more elements
    }
    return arr[index] + sumArray(arr, index + 1, size); // Recursive case
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArray(arr, 0, size);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}