// 24.	Write a C program to find maximum and minimum elements in array using recursion. 

#include <stdio.h>

// Function to find the maximum element recursively
int findMax(int arr[], int index, int size) {
    if (index == size - 1) {
        return arr[index]; // Base case
    }

    int maxRest = findMax(arr, index + 1, size);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

// Function to find the minimum element recursively
int findMin(int arr[], int index, int size) {
    if (index == size - 1) {
        return arr[index]; // Base case
    }

    int minRest = findMin(arr, index + 1, size);
    return (arr[index] < minRest) ? arr[index] : minRest;
}

int main() {
    int arr[] = {12, 45, 2, 19, 8, 33};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, 0, size);
    int min = findMin(arr, 0, size);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}