// 양의 정수 뒤집기

#include <stdio.h>
typedef unsigned long long long_t;

long_t reverse(long_t n) {
    long_t r = 0, k = 0;
    int check = 0;
    while (n > 0) {
        r = n % 10;
        n /= 10;
        if (r == 0 && check == 0) {
            continue;
        }
        check = 1;
        printf("%d",r);
    }
}

int main() {
    long_t N;
    scanf("%llu", &N);
    reverse(N);
}