#include <stdio.h>

int main() {
    unsigned long long n, m;
    m = 0;
    scanf("%llu", &n);
    for (int i = 0; i < 7; i++) {
        m += n % 16;
        n /= 16;
        m *= 16;
    }
    m = m + n;
    printf("%llu", m);
}