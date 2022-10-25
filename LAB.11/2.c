#include <stdio.h>
#include <math.h>

void factorize(unsigned n) {
    int k;
    unsigned sqrtn = (unsigned)sqrt(n);
    for (unsigned i = 2; i <= sqrtn; i++) {
        k = 0;
        while (n % i == 0) {
            k++;
            n = n / i;
        }
        if (k != 0) {
            printf("%u %d\n", i, k);
        }
    }
    if (n != 1) {
        printf("%u %d", n, 1);
    }
}

int main() {
    unsigned N;
    scanf("%u", &N);
    factorize(N);
}