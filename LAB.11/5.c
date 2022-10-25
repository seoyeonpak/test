// 시험 응용 출제, 정방 행렬 아니게 출제 예정
#include <stdio.h>

int arr[100][100];

int spiral(int n) {
    int i = 0, j = 0, k = 1, ci, cj, cci, ccj;
    while(k <= n * n) {
        if (k == n * n) {
            arr[i][j] = n * n;
            break;
        }
        for (ci = i; ci < n - i - 1; ci++) {
            arr[ci][j] = k++;
        }
        for (cj = j; cj < n - j - 1; cj++) {
            arr[ci][cj] = k++;
        }
        for (cci = ci; cci > i; cci--) {
            arr[cci][cj] = k++;
        }
        for (ccj = cj; ccj >= j + 1; ccj--) {
            arr[cci][ccj] = k++;
        }
        i++; j++;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    spiral(N);
    for (int l = 0; l < N; l++) {
        for (int m = 0; m < N; m++) {
            printf("%d ", arr[l][m]);
        }
        if (l < N - 1) {
            printf("\n");
        }
    }
}