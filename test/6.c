#include <stdio.h>
#include <math.h>
typedef unsigned long long long_t;

long_t isprime(long_t n) {
    long_t sqrtn = (long_t)sqrt(n);
    if (n == 1) {
        return 0;
    }
    for (long_t i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

long_t factorize(long_t n) {
    long_t sum = 0;
    long_t sqrtn = (long_t)sqrt(n);
    if (isprime(n)) {
        return 0;
    }
    for (long_t i = 2; i <= sqrtn; i++) {
        while (n % i == 0) {
            sum += i;
            n = n / i;
        }
    }
    if (n != 1) {
        sum += n;
    }
    return sum;
}

int main() {
    long_t N, M, cnt = 0;
    scanf("%llu %llu", &N, &M);
    for (long_t i = N; i <= M; i++) {
        if (isprime(factorize(i))) {
            cnt++;
        }
    }
    printf("%llu", cnt);
}