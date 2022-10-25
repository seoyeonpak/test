#include <stdio.h>
#include <math.h>

int isprime(int n) {
    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T, N, k;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        k = 0;
        for (int i = 2; i <= N / 2; i++) {
            if (isprime(i) && isprime(N - i)) {
                if (k < i) {
                    k = i;
                }
            }
        }
    printf("%d %d\n", k, N - k);
    }
}