#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long n) {
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
    unsigned long long n;
    int N, M, k=0;
    scanf("%d %d", &N, &M);
    for (int j = N; j <= M; j++) {
        if (is_prime(j) == 0) {
            continue;
        }
        else {
            k++;
        }
    }
    printf("%d", k);
}