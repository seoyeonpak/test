#include <stdio.h>
#define SIZE 10

int *mmmax(int n, int m, int p, int *ptr, int *a, int *b, int *c) {
    int max = -2147483648;
    int *maxp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                if (*(ptr + i * 100 + j * 10 + k) > max) {
                max = *(ptr + i * 100 + j * 10 + k);
                maxp = (ptr + i * 100 + j * 10 + k);
                *a = i;
                *b = j;
                *c = k;
                }
            }
        }
    }
    return maxp;
}

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int A[SIZE][SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < p; k++)
                scanf("%d", &A[i][j][k]);
    int i, j, k;
    int *maxptr = mmmax(n, m, p, &A[0][0][0], &i, &j, &k);
    printf("%d %d %d %d %d", *maxptr, A[i][j][k], i, j, k);
}