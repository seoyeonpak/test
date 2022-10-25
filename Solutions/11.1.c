#include <stdio.h>
#include <math.h>
typedef long long long_t;

long_t isprime(long_t n) {
    if (n == 1) {
        return 1;
    }
    long_t sqrtn = (long_t)sqrt(n);
    for (long_t i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

long_t factorization(long_t n) {
    long_t sum = 0;
    long_t sqrtn = (long_t)sqrt(n);
    if (isprime(n)) {
        return 0;
    }
    for (long_t i = 2; i <= sqrtn; i++) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }
    if (n != 1) {
        sum += n;
    }
    return sum;
}

int main() {
    long_t n, m, k, l = 0, j = 0;
    scanf("%llu %llu", &n, &m);
    for (long_t i = n; i <= m; i++) {
        k = factorization(i);
        if (l < k) {
            l = k;
            j = i;
        }
    }
    printf("%llu\n%llu", j, l);
}