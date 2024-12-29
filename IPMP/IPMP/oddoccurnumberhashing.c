
#include <stdio.h>
#include <stdlib.h>

int Oddnum(int arr[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    int* hash = (int*)calloc(max + 1, sizeof(int));
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int oddNumber = -1;
    for (int i = 0; i <= max; i++) {
        if (hash[i] % 2 != 0) {
            oddNumber = i;
            break;
        }
    }

    free(hash);
    return oddNumber;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = 7;
    printf("The number occurring odd times is: %d\n", Oddnum(arr, n));
    return 0;
}
