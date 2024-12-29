#include <stdio.h>

void unionDupli(int a[], int n, int b[], int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1]) {
            j++;
            continue;
        }
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
    while (i < n) {
        if (i > 0 && a[i] != a[i - 1]) printf("%d ", a[i]);
        i++;
    }
    while (j < m) {
        if (j > 0 && b[j] != b[j - 1]) printf("%d ", b[j]);
        j++;
    }
}

int main() {
    int a[] = {1, 1, 2, 2, 2, 4}, b[] = {2, 2, 4, 4};
    int n = 6, m = 4;
    unionDupli(a, n, b, m);
    return 0;
}
