#include <stdio.h>

long long out[100][100];

int degree90rotate(int n, long long in[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            out[n - j - 1][i] = in[i][j];
        }
    }
}

void spiralarray(int n, long long arr[100][100]) {
    int k = 1, i = 0, j = 0;
    int ci, cj;
    while (k <= n * n) {
        ci = i;
        if (k == n * n) {
            printf("%lld\n", arr[i][j]);
            break;
        }
        for (cj = j; cj < n - j - 1; cj++) {
            printf("%lld\n", arr[ci][cj]);
            k++;
        }
        for (ci = i; ci < n - i - 1; ci++) {
            printf("%lld\n", arr[ci][cj]);
            k++;
        }
        for (cj = cj; cj > j; cj--) {
            printf("%lld\n", arr[ci][cj]);
            k++;
        }
        for (ci = ci; ci > i; ci--) {
            printf("%lld\n", arr[ci][cj]);
            k++;
        }
        i++; j++;
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
    spiralarray(N, out);
}