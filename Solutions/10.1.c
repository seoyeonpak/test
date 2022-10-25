#include <stdio.h>
typedef unsigned long long long_t;

long_t palin(long_t n) {
    long_t m = 0;
    for (long_t i = 0; i < 32; i++) {
        m += ((n >> i) & 1) << (31 - i);
    }
    return m;
}

int main() {
    int T;
    long_t N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%llu", &N);
        if (palin(N) == N) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
}