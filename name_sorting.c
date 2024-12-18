#include <stdio.h>
#include <string.h>

void bubbleSortNames(char names[][50], int n) {
    char temp[50]; // Temporary string for swapping

    for (int i = 0; i < n - 1; i++) { // Outer loop: number of passes
        for (int j = 0; j < n - i - 1; j++) { // Inner loop: compare adjacent names
            if (strcmp(names[j], names[j + 1]) > 0) { // Compare strings
                // Swap names
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[5][50] = {"Zara", "Alice", "Bob", "Molly", "Charlie"}; // Array of names
    int n = 5; // Number of names

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    bubbleSortNames(names, n); // Sort the names alphabetically

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}