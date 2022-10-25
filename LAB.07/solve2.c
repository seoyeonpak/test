#include <stdio.h>

long long gcd(long long n, long long m) {
    if (m == 0) {
        return n;
    }
    else {
        return gcd(m, n%m);
    }
}

long long lcm(long long n, long long m) {
    return (n * m)/gcd(n, m);
}

long long LCM(long long i, long long j, long long a[]) {
    if (i == j) {
        return a[i];
    }
    else {
        return lcm(a[i], LCM(i + 1, j, a));
    }
}

int main() {
    int N;
    scanf("%d", &N);
    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    printf("%lld", LCM(0, N-1, A));
}