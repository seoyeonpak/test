// 비트 카운팅

#include <stdio.h>
typedef unsigned long long long_t;

int bit_cnt(long_t n) {
    int i = 0, j = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            i++;
        }
        else {
            j++;
        }
        n = n >> 1;
    }
    printf("%d\n%d", i, j);
}

int main() {
    long_t N;
    scanf("%llu", &N);
    bit_cnt(N);
}