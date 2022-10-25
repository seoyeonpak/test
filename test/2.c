#include <stdio.h>

int main() {
    unsigned long long N, j, k = 0;
    scanf("%llu", &N);
    j = N;
    while(j > 0) {
        k = 10 * k + (j % 10);
        j /= 10;
    }
    printf("%llu", k);
}