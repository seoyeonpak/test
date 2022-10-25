// 여러 수의 최소공배수

#include <stdio.h>

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    if (m > 0) {
        return gcd(m, n % m);
    }
}

int lcm(int n, int m) {
    return (n * m) / gcd(n, m);
}

int main() {
    int N, k = 1;
    long long A[N];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        k = lcm(k, A[i]);
    }
    printf("%d", k);
}