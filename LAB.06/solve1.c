#include <stdio.h>
#include <math.h>

int is_prime(unsigned int N) {
    if (N == 1) {
        return 2;
    }
    for (int i = 2; i <= (int)sqrt(N); i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned int N;
    scanf("%u", &N);
    if (is_prime(N) == 0) {
        printf("composite");
    }
    if (is_prime(N) == 1) {
        printf("prime");
    }
    if (is_prime(N) == 2) {
        printf("not prime");
    }
}