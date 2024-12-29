#include <stdio.h>

int missing(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = 8;
    printf("The missing number is: %d\n", missing(arr, n));
    return 0;
}
