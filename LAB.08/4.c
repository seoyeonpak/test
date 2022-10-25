#include <stdio.h>

unsigned long long fib_str(int N) {
    unsigned long long a = 1, b = 1, t;
    for (int i = 3; i <= N; i++) {
        t = (a + b) % (4294967295);
        a = b;
        b = t;
    }
    return b;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%llu", fib_str(N));
}