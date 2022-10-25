#include <stdio.h>

void swap(int A[], int k, int j) {
    int t = A[k]; A[k] = A[j]; A[j] = t;
}

int bubblesort(int A[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, j, j + 1);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("%d\n", bubblesort(A, n));
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}