#include <stdio.h>

void repeatsXOR(int arr[], int n) {
    int xorAll = 0, x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
    }
    for (int i = 1; i <= n - 2; i++) {
        xorAll ^= i;
    }

    int setBit = xorAll & ~(xorAll - 1);

    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            x ^= arr[i];
        } else {
            y ^= arr[i];
        }
    }
    for (int i = 1; i <= n - 2; i++) {
        if (i & setBit) {
            x ^= i;
        } else {
            y ^= i;
        }
    }

    printf("The two repeating numbers are: %d and %d\n", x, y);
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = 7;
    repeatsXOR(arr, n);
    return 0;
}
