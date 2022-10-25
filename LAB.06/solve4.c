#include <stdio.h>
#include <math.h>

unsigned long long divisor_sum(unsigned long long N) {
    unsigned long long k=0;
    unsigned int sqrtn = (int)sqrt(N);
    for (int i = 1; i <= sqrtn; i++) {
        if (N % i == 0) {
                k += i;
                k += (N / i);
        }
    }
    if (sqrtn*sqrtn == N) {
        k -= sqrtn;
    }
    return k;
}

int main() {
    unsigned long long N;
    scanf("%llu", &N);
    printf("%llu", divisor_sum(N));
}