/*char *str;
char str[100];
char *p = str;
scanf("%s", str);*/

#include <stdio.h>
#define SIZE 100

int *mmax(int n, int m, int *x, int *a, int *b) {
    int max = -2147483648;
    int *maxp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (*(x + i * 100 + j) > max) {
                max = *(x + i * 100 + j);
                maxp = (x + i * 100 + j);
                *a = i;
                *b = j;
            }
        }
    }
    return maxp;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    int i, j;
    int *maxptr = mmax(n, m, &A[0][0], &i, &j);
    printf("%d %d %d %d", *maxptr, A[i][j], i, j);
}