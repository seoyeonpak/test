#include <stdio.h>

int main() {
    int N, sum = 0, k = 0, l = 0, r = 1;
    scanf("%d", &N);
    long long A[100][100], B[10001];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            B[A[i][j]] = 1;
        }
    }
    for (int i = 1; i <= N * N; i++) {
        sum += B[i];
    }
    if (sum != N*N) {
        r = 0;
    }
    if (N % 2 == 0) {
        k = (A[N / 2][N / 2] + A[N / 2 + 1][N / 2 + 1]) / 2;
    }
    else {
        k = A[N / 2][N / 2];
    }
    k *= N;
    for (int i = 0; i < N; i++) {
        l = 0;
        for (int j = 0; j < N; j++) {
            l += A[i][j];
        }
        if (l != k) {
            r = 0;
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        l = 0;
        for (int j = 0; j < N; j++) {
            l += A[j][i];
        }
        if (l != k) {
            r = 0;
            break;
        }
    }
    if (r == 0) {
        printf("%d", 0);
    }
    else {
        printf("%d", k);
    }
}