#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", (n*(n+1)) / 2);
}

typedef unsigned long long long_t;

int main()
{
    long_t n;
    scanf("%llu", &n);
    long_t s = n * (n + 1) / 2;
    printf("%llu", s);
}