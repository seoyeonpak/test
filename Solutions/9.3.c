// 행렬의 거듭제곱

#include <stdio.h>

void arrproduct(long long in[2][2], int n) {
    long long accum[2][2], out[2][2];
    long long sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            accum[i][j] = in[i][j];
        }
    }
    while(n > 1) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                sum = 0;
                for (int k = 0; k < 2; k++) {
                    sum += accum[i][k] * in[k][j];
                }
                out[i][j] = sum;
            }
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                accum[i][j] = out[i][j];
            }
        }
    n--;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%lld", out[i][j]);
            if (j < 1) {
                printf(" ");
            }
        }
        if (i < 1) {
            printf("\n");
        }
    }
}

int main() {
    int N;
    long long A[2][2];
    scanf("%d", &N);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    arrproduct(A, N);
}