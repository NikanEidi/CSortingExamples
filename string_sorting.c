#include <stdio.h>
#include <string.h>

void bubbleSortString(char *str) {
    char *ptr1, *ptr2, temp;
    int n = strlen(str); // Length of the string

    for (int i = 0; i < n - 1; i++) { // Outer loop: number of passes
        for (ptr1 = str; ptr1 < str + n - i - 1; ptr1++) { // Inner loop: compare adjacent characters
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
    char str[] = "programming"; // The string to be sorted

    printf("Before sorting: %s\n", str);

    bubbleSortString(str); // Sort the string alphabetically

    printf("After sorting: %s\n", str);

    return 0;
}