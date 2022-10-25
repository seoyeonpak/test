#include <stdio.h>

int main() {
    int N;
    long long sum = 0;
    long long A[2][2], B[2][2];
    scanf("%d", &N);
    scanf("%lld %lld\n%lld %lld", &A[0][0], &A[0][1], &A[1][0], &A[1][1]);
    for (int l = 0; l < 2; l++) {
        for (int m = 0; m < 2; m++) {
            B[l][m] = A[l][m];
        }
    }
    while (N > 1) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    sum += B[i][k] * A[k][j];
                }
                B[i][j] = sum;
                sum = 0;
            }   
        }
        N -= 1;
    }
    for (int l = 0; l < 2; l++) {
        for (int m = 0; m < 2; m++) {
            printf("%lld ", B[l][m]);
        }
        printf("\n");
    }
}