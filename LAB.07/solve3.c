#include <stdio.h>

int cnt = 0;

unsigned long long collatz(unsigned long long n) {
    cnt++;
    printf("%llu", n);
    if (n == 1) {
        return 1;
    }
    else {
        printf(" ");
        if (n % 2 == 0) {
            return collatz(n / 2);
        }
        else {
            return collatz(3*n + 1);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    collatz(N);
    printf("\n");
    printf("%d", cnt);
}