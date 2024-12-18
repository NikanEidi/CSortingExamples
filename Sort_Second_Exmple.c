#include <stdio.h>
void BubbleSort(int arr[], int number){
    int i, j, temp;
    for ( i = 0; i < number-1; i++){
        for ( j = 0; j < number-i-1 ; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int numbers[] = {0,12,22,3,6,4};
    int number= 6; // number of values in array 
    printf("Before sorting: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    BubbleSort(numbers, number);
    printf("After sorting: ");
    for (int i = 0; i < number; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}