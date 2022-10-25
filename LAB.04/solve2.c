#include <stdio.h>

int main() {
    unsigned long long N;
    int i, j=0, k=0;
    scanf("%llu", &N);
    while (N > 0) {
        if ((N & 1) == 0) {
            j++;
        }
        else {
            k++;
        }
        N = N >> 1;
    }
    printf("%d\n", k);
    printf("%d", j);
}