#include <stdio.h>

int missingXOR(int arr[], int n) {
    int xorAll = 0, xorArray = 0;

    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }
    for (int i = 0; i < n - 1; i++) {
        xorArray ^= arr[i];
    }

    return xorAll ^ xorArray;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = 8;
    printf("The missing number is: %d\n", missingXOR(arr, n));
    return 0;
}
