// 콜라츠 수열

#include <stdio.h>

int cnt = 0;

int collatz(int n) {
    cnt++;
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

int main() {
    int N;
    scanf("%d", &N);
    collatz(N);
    printf("\n%d", cnt);
}