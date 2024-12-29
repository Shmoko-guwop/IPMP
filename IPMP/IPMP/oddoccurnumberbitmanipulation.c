#include <stdio.h>

int oddnum(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = 7;
    printf("The number occurring odd times is: %d\n", oddnum(arr, n));
    return 0;
}
