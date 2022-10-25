// 마방진인가?

#include <stdio.h>

void arrayset(int n, long long A[100][100]) {
    for (int l = 0; l < n; l++) {
        for (int m = 0; m < n; m++) {
            scanf("%lld", &A[l][m]);
        }
    }
}

int ismagicsquare(int N, long long A[100][100]) {

    int sum = 0, check = 1, k, l = 0;
    long long B[10001];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            B[A[i][j]] = 1;
        }
    }
    for (int i = 1; i <= N * N; i++) {
        sum += B[i];
    }
    if (sum != N * N) {
        check = 0;
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
            check = 0;
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        l = 0;
        for (int j = 0; j < N; j++) {
            l += A[j][i];
        }
        if (l != k) {
            check = 0;
            break;
        }
    }
    if (check == 1) {
        printf("%d", k);
    }
    else {
        printf("%d", 0);
    }
}

int main() {
    int N; long long A[100][100];
    scanf("%d", &N);
    arrayset(N, A);
    ismagicsquare(N, A);
}