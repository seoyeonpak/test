#include <stdio.h>
#include <math.h>
typedef unsigned long long long_t;

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

long_t strangesosu(long_t n, int t) {
    int check = 1;
    long_t m = n;
    while (t > 0) {
        if (isprime(n) == 0) {
            check = 0;
        }
        n /= 10;
        t--;
    }
    if (check) {
        printf("%lld\n", m);
    }
}

int main() {
    int N, k, j;
    scanf("%d", &N);
    k = 1 * pow(10, N - 1);
    j = 1 * pow(10, N);
    for (int i = k; i < j; i++) {
        strangesosu(i, N);
    }
}