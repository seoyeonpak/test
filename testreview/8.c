#include <stdio.h>

int arr[10000];

int notcollatz(int n) {
    int len = 0;
    arr[len++] = n;
    while (n != 1) {
        n = n % 2 ? 3 * n - 1 : n / 2;
        arr[len++] = n;
        for (int i = 0; i < len - 1; i++) {
            if (arr[i] == n) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int N, M, cnt = 0;
    scanf("%d %d", &N, &M);
    for (int i = N; i <= M; i++) {
        cnt += notcollatz(i);
    }
    printf("%d", cnt);
}