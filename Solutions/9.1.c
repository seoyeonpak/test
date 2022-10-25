// 홀수 마방진 만들기

#include <stdio.h>
#define MAX 100

long long A[MAX][MAX];

void arrayset(int n, long long A[MAX][MAX]) {
    for (int l = 0; l < n; l++) {
        for (int m = 0; m < n; m++) {
            A[l][m] = 0;
        }
    }
}

int arrayprint(int n, long long A[MAX][MAX]) {
    for (int l = 0; l < n; l++) {
        for (int m = 0; m < n; m++) {
            printf("%lld", A[l][m]);
            if (m < n - 1) {
                printf(" ");
            }
        }
        if (l < n - 1) {
            printf("\n");
        }
    }
}

int magicsquare(int n) {
    int k = 1, i = 0, j = n / 2;
    while(k <= n * n) {
        A[i][j] = k++;

        i -= 1; j += 1;

        if (i < 0) {
            i = n - 1;
        }
        if (j > (n - 1)) {
            j = 0;
        }
        if (A[i][j] != 0) {

            i += 2; j -= 1;

            if (i > (n - 1)) {
                i = i % n;      // 이유 생각해보기
            }

            if (j < 0) {
                j = n - 1;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    arrayset(N, A);
    magicsquare(N);
    arrayprint(N, A);
}