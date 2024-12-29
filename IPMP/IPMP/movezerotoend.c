#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int lastNonZeroFoundAt = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
           
            int temp = arr[i];
            arr[i] = arr[lastNonZeroFoundAt];
            arr[lastNonZeroFoundAt] = temp;

            
            lastNonZeroFoundAt++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 9, 2, 0, 3, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    printf("Array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
