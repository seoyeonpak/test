#include <stdio.h>

/*int rotatearray(int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", arr[j][i]);
        }
    if (i < n - 1) {
        printf("\n");
    }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    rotatearray(N, arr);
}*/

int rotatearray(int n, int arr[n][n]) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    rotatearray(N, arr);
}