#include <stdio.h>
#include <math.h>

void factorize(unsigned n) {
    unsigned sqrtn = (unsigned)sqrt(n);
    for (unsigned i = 2; i <= sqrtn; i++) {
        while (n % i == 0) {
            printf("%u ", i);
            n = n / i;
        }
    }
    if (n != 1) {
        printf("%u ", n);
    }
}

int main() {
    unsigned N;
    scanf("%u", &N);
    factorize(N);
}