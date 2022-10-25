// 약수의 개수

#include <stdio.h>
#include <math.h>
typedef long long long_t;

long_t factorcnt(long_t n) {
    int sqrtn = (int)sqrt(n);
    long_t cnt = 0;
    for (long_t i = 1; i <= sqrtn; i++) {
        if (n % i == 0) {
            cnt += 2;
        }
    }
    if (sqrtn * sqrtn == n) {
        cnt--;
    }
    return cnt;
}

int main() {
    long_t N, M, k = 0, l = 0, m;
    scanf("%lld %lld", &N, &M);
    for (long_t j = N; j <= M; j++) {
        k = factorcnt(j);
        if (l <= k) {
            l = k;
            m = j;
        }
    }
    printf("%lld\n%lld", m, l);
}