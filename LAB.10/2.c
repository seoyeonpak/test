#include <stdio.h>
#include <math.h>
typedef long long long_t;

long_t ispalin(long_t n) {
    long_t l = 0, k;
    k = n;
    while(n > 0) {
        l = (l * 10) + (n % 10);
        n = n / 10;
    }
    if (k == l) {
        return 1;
    }
    else {
        return 0;
    }
}

long_t is_prime(long_t n) {
    if (n <= 1) {
        return 0;
    }
    long_t sqrtn = (long_t)sqrt(n);
    for (long_t i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long_t N, M;
    long_t cnt = 0;
    scanf("%lld %lld", &N, &M);
    for (long_t i = N; i <= M; i++) {
        if (ispalin(i) == 1 && is_prime(i) == 1) {
        cnt++;
        }
    }
    printf("%lld", cnt);
}