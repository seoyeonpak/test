#include <stdio.h>

int main() {
    int N, K, M, i, j, l;
    scanf("%d %d %d", &N, &K, &M);
    int A[N][K], B[K][M];
    int C[N][M];
    for (i=0; i<N; i++) {
        for (j=0; j<K; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<K; i++) {
        for (j=0; j<M; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    C[i][l]={0, 0};
    for (i=0; i<N; i++) {
        for (j=0; j<K; j++) {
            for (l=0; l<M; l++) {
                C[i][l] += A[i][j] * B[j][l];
                C[i][l]={0, 0};
            }
        }
    }
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%d", C[i][j]);
            if (i<N-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}