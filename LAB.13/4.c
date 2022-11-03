#include <stdio.h>

int *find_largest(int n, int *ptr) {
    for (int i = 0; i < n - 1; i++) {
        if (*(ptr + i) > *(ptr + i + 1)) {
            int t = *(ptr + i);
            *(ptr + i) = *(ptr + i + 1);
            *(ptr + i + 1) = t;
        }
    }
    return (ptr + n - 1);
}

int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int *p = find_largest(n, arr);
    printf("%d", *p);
}