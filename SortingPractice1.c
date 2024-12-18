#include<stdio.h>
/* 1. Bubble Sort for Reverse Order
Write a program to sort an array of integers in descending order using Bubble Sort.
*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped; // Flag to track if a swap occurred

    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Reset the flag 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Compare  elements
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; //  swap occurred
            }
        }
        if (!swapped) break; // Exit early if no swaps made
    }
}

int main() {
    int arr[] = {3, 1, 4, 28, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}