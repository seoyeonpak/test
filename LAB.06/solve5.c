#include <stdio.h>
#include <math.h>

long long divisor_count(long long b) {
    long long k=0;
    long long i;
    for (i = 1; i <= sqrt(b); i++) {
        if (b % i == 0) {
                k += 2;
        }
    }
    if (i == sqrt(b)) {
        k -= 1;
    }
    return k;
}

int main() {
    long long m=0, s=0, t=0;
    long long N, M;
    scanf("%lld %lld", &N, &M);
    long long j;
    for (j = N; j <= M; j++) {
        m = divisor_count(j);
        if (s <= m) {
            s = m;
            t = j;
        }
    }
    printf("%lld\n%lld", t, s);
}