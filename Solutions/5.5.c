// 행렬의 곱셈

#include <stdio.h>
typedef long long ll;

int main() {
    int N, K, M;
    scanf("%d %d %d", &N, &K, &M);
    ll A[N][K], B[K][M], C[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &B[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < K; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%lld", C[i][j]);
            if (j < M - 1) {
                printf(" ");
            }
        }
        if (i < N -1) {
            printf("\n");
        }
    }
}