// 피보나치 수

#include <stdio.h>

int fibo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", fibo(N));
}