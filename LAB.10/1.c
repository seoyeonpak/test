#include <stdio.h>

int ispalin(unsigned n) {
    unsigned m = 0;
    for (int i = 0; i < 32; i++) {
        m |= ((n >> i) & 1) << (31 - i);
    }
    return n == m;
}

int main() {
    unsigned T;
    scanf("%u", &T);
    while (T-- > 0) {
        int n;
        scanf("%u", &n);
        if (ispalin(n)) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
}