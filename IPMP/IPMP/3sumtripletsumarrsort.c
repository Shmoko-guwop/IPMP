#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool findTriplet(int* arr, int n, int sum) {
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n - 2; i++) {
        int target = sum - arr[i];
        int left = i + 1, right = n - 1;
        while (left < right) {
            int currentSum = arr[left] + arr[right];
            if (currentSum == target) {
                return true;
            } else if (currentSum < target) {
                left++;
            } else {
                right--;
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
        printf("Triplet found with the given sum\n");
    } else {
        printf("No triplet found with the given sum\n");
    }

    return 0;
}
