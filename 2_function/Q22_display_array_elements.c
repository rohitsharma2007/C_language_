// Write a C program to display all array elements using recursion. 

#include <stdio.h>

void displayArray(int arr[], int index, int size) {
    if (index >= size) {
        return; // Base case: end of array
    }

    printf("%d ", arr[index]); // Print current element
    displayArray(arr, index + 1, size); // Recursive call for next element
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are:\n");
    displayArray(arr, 0, size);

    return 0;
}