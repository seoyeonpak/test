#include <stdio.h>

long long fibbo(int n) {
    long long a = 1, b = 2, c = 3, t;
    for (int i = 4; i <= n; i++) {
        t = (a + b + c) % 0xFFFFFFFF;
        a = b;
        b = c;
        c = t;
    }
    return t;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%lld", fibbo(N));
}