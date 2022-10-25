#include <stdio.h>

int main()
{
    char a, b, x;
    int y = 0;
    scanf("%c %c", &a, &b);
    x = a ^ b;
    y += ((x >> 0) & 1);
    y += ((x >> 1) & 1);
    y += ((x >> 2) & 1);
    y += ((x >> 3) & 1);
    y += ((x >> 4) & 1);
    y += ((x >> 5) & 1);
    y += ((x >> 6) & 1);
    y += ((x >> 7) & 1);
    printf("%d", y);
}