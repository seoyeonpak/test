#include <stdio.h>

#define MAX 100

void print_matrix(int N, int A[][MAX]) {
    for (int l = 0; l < N; l++) {
        for (int m = 0; m < N; m++) {
            printf("%d ", A[l][m]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int N;
    int A[MAX][MAX];
    scanf("%d", &N);
    int k = 1, i = 0, j = N/2;
    for (int l = 0; l < N; l++) {
        for (int m = 0; m < N; m++) {
            A[l][m] = 0;
        }
    }
    // print_matrix(N, A);
    // printf("\n");
    while (k <= (N * N)) {
        // printf("%d %d %d\n", k, i, j);
        
        A[i][j] = k++;
        
        i -= 1; j += 1;
        if (i < 0) {
            i = N - 1;
        }
        if (j > (N - 1)) {
            j = 0;
        }

        if (A[i][j] != 0) {

            // printf("\t%d %d %d %d\n", A[i][j], k, i, j);
            i += 2; j -= 1;
            if (i > (N - 1)) {
                i = i % N;
            }
            if (j < 0) {
                j = N - 1;
            }
        }
    }
    for (int l = 0; l < N; l++) {
        for (int m = 0; m < N; m++) {
            printf("%d ", A[l][m]);
        }
        printf("\n");
    }
}