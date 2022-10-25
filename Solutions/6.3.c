// 소수 카운팅(Easy)

#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n == 1) {
        return 0;
    }
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N, M, k = 0, cnt = 0;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++) {
        k = isprime(i);
        cnt += k;
    }
    printf("%d", cnt);
}