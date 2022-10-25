// 전치행렬

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    long long A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lld", A[j][i]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        if (i < M - 1) {
            printf("\n");
        }
    }
}