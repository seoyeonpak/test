// 자연수의 합

#include <stdio.h>

int main() {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", (n * (n + 1)) / 2);
}