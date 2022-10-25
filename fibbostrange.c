#include <stdio.h>

long long fibbostrange(long long n) {
    long long A[117];
    A[0] = A[1] = A[2] = 1;
    for (int i = 3; i < n; i++) {
        A[i] = A[i - 1] + A[i - 3];
    }
    return A[n - 1];
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", fibbostrange(n));
}