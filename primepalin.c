#include <stdio.h>
#include <math.h>
typedef unsigned long long long_t;

long_t palin(long_t n) {
    long_t m = 0, j = n;
    while (j > 0) {
        m = (j % 10) + (10 * m);
        j /= 10;
    }
    return m == n;
}

long_t isprime(long_t n) {
    long_t sqrtn = (long_t)sqrt(n);
    if (n == 1 || n == 0) {
        return 0;
    }
    for (long_t i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long_t N;
    int check = 0;
    scanf("%lld", &N);
    while (check == 0) {
        if (palin(N) && isprime(N)) {
            check = 1;
            printf("%lld", N);
        }
    N++;
    }
}