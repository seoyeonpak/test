#include <stdio.h>
#include <math.h>
#define MAX 1000000

int sieve[MAX];

void eratosthenes(int n) {
    // 2부터 n까지 초기화
    for (int i = 2; i <= n; i++) {
        sieve[i] = 1;
    }
    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (sieve[i] == 1) {
            // i는 소수임.
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = 0;
            }
        }
    }
}

int main() {
    int n = 100;
    eratosthenes(n);

    for (int i = 2; i <= n; i++) {
        if (sieve[i] == 1) {
            printf("%d ", i);
        }
    }

}