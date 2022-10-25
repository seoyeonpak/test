#include <stdio.h>
int A[100][100];
int rotatearray(int n, int arr[100][100]) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
               for (int m = 0; m < n; m++) {
                A[j][k] = arr[j][i];
                }
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    rotatearray(N, arr);
    for (int k = 0; k < N; k++) {
            for (int m = 0; m < N; m++) {
            printf("%d\n", A[k][m]);
        }
    }
}