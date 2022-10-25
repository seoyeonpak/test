#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    int x = 0x3FFFFFF;
    int y = 1 << (a - 'A'); 
    int z = 1 << (b - 'A');
    int w = 1 << (c - 'A');
    x = x & ~(y);
    x = x & ~(z);
    x = x & ~(w);
    printf("%d", x);
}