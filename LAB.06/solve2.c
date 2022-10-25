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
    int N, B = 0;
    scanf("%d", &N);
    for (int j = 0; j < N; j++) {
        scanf("%llu", &n);
        B += is_prime(n)*pow(2, N - j - 1);
    }
    printf("%0X", B);
}