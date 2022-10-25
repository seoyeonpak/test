// 소수 카운팅(Hard)

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

int main() {
    int N, M, cnt = 0;
    scanf("%d %d", &N, &M);
    eratos(M);
    for (int i = N; i <= M; i++) {
        if (sieve[i] == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
}