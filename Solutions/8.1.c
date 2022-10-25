// 랜덤과 소수

#include <stdio.h>
#include <math.h>
typedef unsigned int int_u;

int_u R;
int cnt = 0;

int isprime(int_u n) {
    int_u sqrtn = (int)sqrt(n);
    if (n == 1) {
        return 0;
    }
    for (int_u i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int rand_primesum(int N) {
    int_u r = R;
    for (int i = 0; i < N; i++) {
        r = (214013u * r + 2531011u) % 0xFFFFFFFFu;
        cnt += isprime(r);
    }
    return cnt;
}

int main() {
    int N;
    scanf("%u %d", &R, &N);
    printf("%d", rand_primesum(N));
}