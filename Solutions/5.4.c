// 행렬의 덧셈과 뺄셈

#include <stdio.h>
typedef long long ll;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    ll A[N][M], B[N][M], C[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &B[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lld", &C[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%lld", A[i][j] + B[i][j] -C[i][j]);
            if (j < M - 1) {
                printf(" ");
            }
        }
        if (i < N - 1) {
            printf("\n");
        }
    }
}