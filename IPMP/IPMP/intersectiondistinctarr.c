#include <stdio.h>

void intersectDist(int a[], int n, int b[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
}

int main() {
    int a[] = {1, 2, 4, 5, 6}, b[] = {2, 4, 7, 9};
    int n = 5, m = 4;
    intersectDist(a, n, b, m);
    return 0;
}
