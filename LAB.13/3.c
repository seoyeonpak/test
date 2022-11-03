#include <stdio.h>

void reverse(int from, int to, int *ptr) {
    for (int i = from; i <= (from + to - 1) / 2; i++) {
        int t = *(ptr + i);
        *(ptr + i) = *(ptr + to + from - i);
        *(ptr + to + from - i) = t;
    }
}

int main()
{
    int n, from, to, arr[100];
    scanf("%d %d %d", &n, &from, &to);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    reverse(from, to, arr);
    for (int i = 0;i < n; i++)
        printf("%d ", arr[i]);
}