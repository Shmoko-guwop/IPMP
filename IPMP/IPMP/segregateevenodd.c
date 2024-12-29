#include <stdio.h>

void segregateEvenOdd(int arr[], int n) {
    int lo = 0, hi = n - 1;

    while (lo < hi) {
        while (arr[lo] % 2 == 0 && lo < hi) {
            lo++;
        }
        while (arr[hi] % 2 != 0 && lo < hi) {
            hi--;
        }

        if (lo < hi) {
            int temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
        }
    }
}

int main() {
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateEvenOdd(arr, n);

    printf("Array after segregation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
