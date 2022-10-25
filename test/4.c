#include <stdio.h>

long long fibbo(int n) {
    long long A[100000] = {0};
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
    for (int i = 4; i <= n; i++) {
        A[i] = (A[n-1]+A[n-2]+A[n-3]) % 4294967295;
    }
    return A[n];
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%lld", fibbo(N));
}