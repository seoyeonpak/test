#include <stdio.h>

int main() {
    int N, x, i, j, k;
    scanf("%d", &N);
    long long A[N], B[N];
    for (j=0; j < N; j++) {
        scanf("%lld", &A[j]);
    }
    for (k=0; k < N; k++) {
        scanf("%lld", &B[k]);
    }
    for (i = 0; i < N; i++) {
        printf("%lld", A[i] + B[i]);
        if (i < N-1) {
            printf(" ");
        }
    }
}