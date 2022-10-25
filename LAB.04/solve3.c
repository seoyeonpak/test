#include <stdio.h>

int main() {
    unsigned long long N;
    int i, j=0, k=0;
    scanf("%llu", &N);
    for (i=1; i<=64; i++) {
        if (((N >> i) & 1) == 0) {
                j=0;
        }
        else {
            j++;
        }
        if (j>k) {
            k=j;
        }
    }
    printf("%d", k);
}