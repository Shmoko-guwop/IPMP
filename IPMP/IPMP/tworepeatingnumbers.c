#include <stdio.h>
#include <stdlib.h>

void repeats(int arr[], int n) {
    printf("The two repeating numbers are: ");
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
            printf("%d ", abs(arr[i]));
        } else {
            arr[index] = -arr[index];
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = 7;
    repeats(arr, n);
    return 0;
}
