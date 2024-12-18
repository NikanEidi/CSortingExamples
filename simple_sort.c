#include<stdio.h>
void bubbleSort(int arr[],int number){
    int i, j , temp;
    for ( i = 0; i < number-1; i++){
        for ( j = 0; j < number-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j + 1] = temp;
            }   
        }   
    } 
}
int main(){
    int number;
    printf("How many numbers do you want to sort? ");
    scanf("%d", &number); // Get the size of the array

    int arr[number]; // Define the array

    printf("Please enter %d numbers:\n", number);
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]); // Get the elements of the array
    }

    printf("Array before sorting: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, number); // Sort the array

    printf("Array after sorting: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}