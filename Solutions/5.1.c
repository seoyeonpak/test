// 두 배열의 합

#include <stdio.h>
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);
    ll A[N], B[N];
    ll C[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%lld", &B[i]);
    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
        printf("%lld", C[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
}