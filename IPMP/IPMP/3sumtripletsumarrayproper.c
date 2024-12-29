#include <stdio.h>
#include <stdbool.h>

bool findTriplet(int* arr, int n, int sum) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 22;
    
    if (findTriplet(arr, n, sum)) {
        printf("Triplet found ");
    } else {
        printf("No triplet found");
    }

    return 0;
}
