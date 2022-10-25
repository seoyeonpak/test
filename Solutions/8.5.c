// 가장 긴 콜라츠 수열

#include <stdio.h>

int cnt = 0;

int collatz(int n) {
    printf("%d", n);
    if (n != 1) {
        printf(" ");
    }
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        collatz(n / 2);
    }
    else {
        collatz(3 * n + 1);
    }
}

int collatz_cnt(int n) {
    cnt++;
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        collatz_cnt(n / 2);
    }
    else {
        collatz_cnt(3 * n + 1);
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++) {
        
    }
}