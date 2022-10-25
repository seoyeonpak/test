// 비트 검사

#include <stdio.h>

int main() {
    int x, n;
    scanf("%d\n%d", &x, &n);
    printf("%d", (x >> n) & 1);
}