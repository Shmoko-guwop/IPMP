#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    int i;
    
    
    if (n % 2 == 1) {
        *min = *max = arr[0];
        i = 1; 
    } else {
     
        if (arr[0] > arr[1]) {
            *max = arr[0];
            *min = arr[1];
        } else {
            *max = arr[1];
            *min = arr[0];
        }
        i = 2;  
    }
    
   
    for (; i < n; i += 2) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > *max) *max = arr[i];
            if (arr[i + 1] < *min) *min = arr[i + 1];
        } else {
            if (arr[i + 1] > *max) *max = arr[i + 1];
            if (arr[i] < *min) *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 34, 5, 8, 0, 1, 2, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, &min, &max);

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}
