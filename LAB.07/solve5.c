#include <stdio.h>

int cnt=0, depth=1;

int Ack(int n, int m, int d) {
    cnt++;
    if (d > depth) {
        depth = d;
    }
    if (n == 0) {
        return m + 1;
    }
    else if (n > 0 && m == 0) {
        return Ack(n - 1, 1, d + 1);
    }
    else {
        return Ack(n-1, Ack(n, m-1, d + 1), d + 1);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    cnt = 0, depth = 1;
    printf("%d\n", Ack(n, m, 1));
    printf("%d\n", cnt);
    printf("%d", depth);
}