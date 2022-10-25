// 짝퉁 제곱수

#include <stdio.h>
#include <math.h>
typedef unsigned int int_u;

int cnt = 0;

int fakesquarecnt(int_u n) {
    int k = 0;
    while(n > 0) {
        k += n % 10;
        n /= 10;
    }
    if ((int_u)sqrt(k) * (int_u)sqrt(k) == k) {
        cnt++;
    }
}

int main() {
    int_u N, M;
    scanf("%u %u", &N, &M);
    for (int_u i = N; i <= M; i++) {
        if (i == 4294967295) {
            break;
        }
        fakesquarecnt(i);
    }
    printf("%d", cnt);
}