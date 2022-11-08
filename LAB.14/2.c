#include <stdio.h>
#define SIZE 100

void madd(int n, int m, int (*x)[SIZE], int (*y)[SIZE], int *z) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a = x[i][j];
            int b = y[i][j];
            *(z + 100 * i + j) = a + b;
        }
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &B[i][j]);
    madd(n, m, A, B, &C[0][0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}