#include <stdio.h>
#define MAX 1000

void swap(int A[], int i, int j) {
    int t = A[i]; A[i] = A[j]; A[j] = t;
}

int cnt = 0;

int bubblesort(int A[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, j, j + 1);
                cnt++;
            }
        }
    }
}

int main() {
    int n, A[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    bubblesort(A , n);
    printf("%d\n", cnt);
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
}