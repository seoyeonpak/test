#include <stdio.h>

int main()
{
    int x, n;
    scanf("%d\n", &x);
    scanf("%d", &n);
    printf("%d", 1 & (x >> n));
}