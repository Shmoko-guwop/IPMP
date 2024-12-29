#include <stdio.h>

void unionDist(int a[], int n, int b[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            printf("%d ", a[i++]);
        } else if (a[i] > b[j]) {
            printf("%d ", b[j++]);
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    while (i < n) printf("%d ", a[i++]);
    while (j < m) printf("%d ", b[j++]);
}

int main() {
    int a[] = {1, 2, 3}, b[] = {2, 5, 7};
    int n = 3, m = 3;
    unionDist(a, n, b, m);
    return 0;
}
