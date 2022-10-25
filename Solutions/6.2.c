// 소수로 만든 숫자

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
    int N, M, k = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        k += isprime(M) * pow(2, N - i - 1);
    }
    printf("%0X", k);
}