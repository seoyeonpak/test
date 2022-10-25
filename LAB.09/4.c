#include <stdio.h>
#include <math.h>
#define MAX 10000000

int sieve[MAX];

void eratosthenes(int n) {
    for (int i = 2; i <= n; i++) {
        sieve[i] = 1;
    }
    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (sieve[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = 0;
            }
        }
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    eratosthenes(M);
    int cnt = 0;
    for (int i = N; i <= M; i++) {
        if (sieve[i] == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
}