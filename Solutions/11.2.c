#include <stdio.h>
#include <math.h>
typedef long long long_t;

void factorization(long_t n) {
    long_t cnt;
    long_t sqrtn = (long_t)sqrt(n);
    for (long_t i = 2; i <= sqrtn; i++) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt != 0) {
            printf("%llu %llu\n", i, cnt);
        }
    }
    if (n != 1) {
        printf("%llu %d", n, 1);
    }
}

int main() {
    long_t N;
    scanf("%llu", &N);
    factorization(N);
}