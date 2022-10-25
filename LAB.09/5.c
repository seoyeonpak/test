#include <stdio.h>
#include <math.h>
#define MAX 1000000

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

int goldbah(int n) {
    for (int i = 3; i <= n/2; i++) {
        if (sieve[i] && sieve[n-i]) {
            printf("%d %d \n", i, n-i);
        }
    }
}

int cnt = 0;

int goldbahcnt(int n) {
    for (int i = 3; i <= n/2; i++) {
        if (sieve[i] && sieve[n-i]) {
            cnt++;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    eratosthenes(N);
    goldbahcnt(N);
    if (cnt >= 100) {
        printf("%d", cnt);
    }
    else {
        goldbah(N);
    }
}