#include <stdio.h>

void intersectDupli(int a[], int n, int b[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
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
    int a[] = {1, 1, 2, 2, 2, 4}, b[] = {2, 2, 4, 4};
    int n = 6, m = 4;
    intersectDupli(a, n, b, m);
    return 0;
}
