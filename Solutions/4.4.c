// 홀수 피라미드

#include <stdio.h>

int oddp(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", k);
            if (i > j) {
                printf(" ");
            }
            k += 2;
        }
        if (n > i) {
            printf("\n");
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    oddp(N);
}