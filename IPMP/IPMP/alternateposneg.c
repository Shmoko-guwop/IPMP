#include <stdio.h>

void rearrange(int arr[], int n) {
    int pos[n], neg[n];
    int posCount = 0, negCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[posCount++] = arr[i];
        } else {
            neg[negCount++] = arr[i];
        }
    }

    int i = 0, j = 0, k = 0;

    while (i < posCount && j < negCount) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < posCount) {
        arr[k++] = pos[i++];
    }

    while (j < negCount) {
        arr[k++] = neg[j++];
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
