// 세 자연수의 합

#include <stdio.h>

int three_sum(int n) {
    int a, b, c, cnt = 0;
    for (a = 1; a < n; a++) {
        for (b = a; b < n; b++) {
            c = n - (a + b);
            if (b <= c) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", three_sum(n));
}