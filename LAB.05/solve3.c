#include <stdio.h>

int main() {
    int N, M, i, j, k, l, m;
    scanf("%d %d\n", &N, &M);
    int A[N][M], B[M][N];
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (k=0; k<N; k++) {
        for (m=0; m<M; m++) {
            B[m][k] = A[k][m];
        }
    }
    for (l=0; l<M; l++) {
        for (m=0; m<N; m++) {
            printf("%d", B[l][m]);
            if (m < N-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}