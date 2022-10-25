#include <stdio.h>

void swap(int A[], int k, int j) {
    int t = A[k]; A[k] = A[j]; A[j] = t;
}

void bubblesort(int A[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, j, j + 1);
            }
        }
    }
}

int isanagram(int a, int b) {
    int A[9], B[9];
    for (int i = 0; i < 9; i++) {
        A[i] = a % 10;
        a /= 10;
    }
    for (int i = 0; i < 9; i++) {
        B[i] = b % 10;
        b /= 10;
    }
    bubblesort(A, 9);
    bubblesort(B, 9);
    for (int i = 0; i < 9; i++) {
        if (A[i] != B[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N, M, l, cnt = 0;
    scanf("%d\n%d", &N, &M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &l);
        if (isanagram(N, l)) {
            cnt++;
        }
    }
    printf("%d", cnt);
}