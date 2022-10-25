// 중요
#include <stdio.h>

long long out[100][100];

/*int degree90rotate(int n, long long in[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            out[n - j - 1][i] = in[i][j];
        }
    }
}*/

int degree90rotate(int n, long long in[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            out[j][n - i - 1] = in[i][j];
        }
    }
}

int main() {
    int N;
    long long in[100][100];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lld", &in[i][j]);
        }
    }
    degree90rotate(N, in);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lld ", out[i][j]);
        }
        if (i < N - 1) {
            printf("\n");
        }
    }
}