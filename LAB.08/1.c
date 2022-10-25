#include <stdio.h>
#include <math.h>

int is_prime(unsigned int N) { //int도 가능
    if (N == 1) {
        return 0;
    }
    for (int i = 2; i <= (int)sqrt(N); i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned int R, r;
    int N, cnt = 0;
    scanf("%u %d", &R, &N);
    r = R;
    for (int i = 0; i < N; i++) {
        r = (214013u * r + 2531011u) % 0xFFFFFFFFu;
        cnt += is_prime(r);
    }
    printf("%d", cnt);
}