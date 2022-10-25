// 약수의 합

#include <stdio.h>
#include <math.h>
typedef long long long_t;
long_t factorsum(long_t n) {
    int sqrtn = (int)sqrt(n);
    long_t sum = 0;
    for (long_t i = 1; i <= sqrtn; i++) {
        if (n % i == 0) {
            sum += i;
            sum += (n / i);
        }
    }
    if (sqrtn * sqrtn == n) {
        sum -= sqrtn;
    }
    return sum;
}

int main() {
    long_t N;
    scanf("%lld", &N);
    printf("%lld", factorsum(N));
}