// 연속된 1비트의 최장 길이

#include <stdio.h>
typedef unsigned long long long_t;

int longbit(long_t n) {
    int i = 0, k = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            i++;
            if (i > k) {
                k = i;
            }
        }
        else {
            i = 0;
        }
        n = n >> 1;
    }
    return k;
}

int main() {
    long_t N;
    scanf("%llu", &N);
    printf("%d", longbit(N));
}