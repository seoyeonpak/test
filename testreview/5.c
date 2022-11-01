#include <stdio.h>

unsigned long long cnt = 0, k;

unsigned long long collatz(unsigned long long n) {
    if (k < n) {
        k = n;
    }
    cnt++;
    if (n == 1) {
        return 1;
    }
    else {
        if (n % 2 == 0) {
            return collatz(n / 2);
        }
        else {
            return collatz(3*n + 1);
        }
    }
}

int main() {
    unsigned long long a = 0;
    unsigned long long b = 0;
    unsigned long long N, M, l = 0;
    scanf("%llu %llu", &N, &M);
    for (unsigned long long i = N; i <= M; i++) {
        k = 0;
        cnt = 0;
        collatz(i);
        if (a < cnt) {
            a = cnt;
            b = i;
            l = k;
        }
    }
    printf("%llu\n", b);
    printf("%llu", l);
}