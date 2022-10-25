// 출석 번호

#include <stdio.h>

int main() {
    char a, b, c;
    int p, x, y, z;
    scanf("%c %c %c", &a, &b, &c);
    p = 0x3FFFFFF;
    x = 1 << (a - 'A');
    y = 1 << (b - 'A');
    z = 1 << (c - 'A');
    p = p & ~(x);
    p = p & ~(y);
    p = p & ~(z);
    printf("%d", p);
}