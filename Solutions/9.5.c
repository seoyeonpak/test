// 골드바흐의 추측

#include <stdio.h>
#include <math.h>

int sieve[10000000];

void eratos(int n) {
    for (int i = 2; i <= n; i++) {
        sieve[i] = 1;
    }
    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (sieve[i] == 1) {
            for (int j = i * i; j <= n; j += i) {  // 왜 i * i를  사용할까? i(i-1)까지는 다른 i로 표현할 수 있다.
                sieve[j] = 0;
            }
        }
    }
}

int goldbach(int n) {
    for (int i = 3; i <= (n / 2); i++) {
        if (sieve[i] && sieve[n-i]) {
            printf("%d %d \n", i, n-i);
        }
    }
}

int cnt = 0;

int goldbachcnt(int n) {
    for (int i = 3; i <= (n / 2); i++) {
        if (sieve[i] && sieve[n-i]) {
                cnt++;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    eratos(N);
    goldbachcnt(N);
    if (cnt >= 100) {
        printf("%d", cnt);
    }
    else {
        goldbach(N);
    }
}