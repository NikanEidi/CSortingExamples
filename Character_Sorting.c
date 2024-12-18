#include <stdio.h>

void bubbleSort(char *arr, int n) {
    char *ptr1, *ptr2, temp;

    for (int i = 0; i < n - 1; i++) { // Outer loop: number of passes
        for (ptr1 = arr; ptr1 < arr + n - i - 1; ptr1++) { // Inner loop: compare adjacent characters
            ptr2 = ptr1 + 1; // Pointer to the next character
            if (*ptr1 > *ptr2) { // If the current character is greater than the next
                // Swap the characters
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    char letters[] = {'z', 'a', 'u', 'b', 'm'}; // Array of characters
    int n = 5; // Number of characters in the array

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");

    bubbleSort(letters, n); // Sort the array of characters using pointers

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");

    return 0;
}