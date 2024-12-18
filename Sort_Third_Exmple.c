#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int *ptr1, *ptr2, temp;

    for (int i = 0; i < n - 1; i++) { // Outer loop: how many times to pass through the array
        for (ptr1 = arr; ptr1 < arr + n - i - 1; ptr1++) { // Inner loop: compare adjacent elements
            ptr2 = ptr1 + 1; // Pointer to the next element
            if (*ptr1 > *ptr2) { // If the value at ptr1 is greater than ptr2
                // Swap values
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {5, 2, 9, 1, 6}; // Array to be sorted
    int n = 5; // Number of elements in the array

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    bubbleSort(numbers, n); // Sort the array using pointers

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}