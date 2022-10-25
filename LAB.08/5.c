#include <stdio.h>

int cnt = 0;

unsigned long long collatz(unsigned long long n) {
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

unsigned long long collatz_print(unsigned long long n) {
    printf("%llu", n);
    if (n == 1) {
        return 1;
    }
    else {
        printf(" ");
        if (n % 2 == 0) {
            return collatz_print(n / 2);
        }
        else {
            return collatz_print(3*n + 1);
        }
    }
}

int main() {
    unsigned long long a = 0;
    unsigned long long b = 0;
    unsigned long long N, M;
    scanf("%llu %llu", &N, &M);
    for (unsigned long long i = N; i <= M; i++) {
        cnt = 0;
        collatz(i);
        if (a <= cnt) {
            a = cnt;
            b = i;
        }
    }
    printf("%llu\n", b);
    printf("%llu\n", a);
    collatz_print(b);
}