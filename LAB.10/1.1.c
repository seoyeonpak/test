#include <stdio.h>

int ispal(unsigned n) {
    unsigned m = 0;
    for (int i = 0; i < 32; i++)
        m |= (n >> i) & 0x1 << (31 - i);
    return n == m;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T-- > 0) {
        unsigned n;
        scanf("%u", &n);
        if (ispal(n))
            printf("yes\n");
        else
            printf("no\n");
    }
}