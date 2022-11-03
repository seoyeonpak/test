#include <stdio.h>

int add(int n, int m, int a, int b, int c, int d, int *ptr) {
    return *(ptr + m * a + b) + *(ptr + m * c + d);
}

int main()
{
    int n, m, a, b, c, d, arr[100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n * m; i++)
            scanf("%d", &arr[i]);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", add(n, m, a, b, c, d, arr));
}