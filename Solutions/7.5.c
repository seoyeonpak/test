// Ackermann 함수

#include <stdio.h>

int cnt = 0, depth = 0;

int Ackermann(int n, int m, int d) {
    cnt++;
    if (depth < d) {
        depth = d;
    }
    if (n == 0) {
        return m + 1;
    }
    else if (n > 0 && m == 0) {
        return Ackermann(n - 1, 1, d + 1);
    }
    else {
        return Ackermann(n - 1, Ackermann(n, m - 1, d + 1), d + 1);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", Ackermann(n, m, 1));
    printf("%d\n", cnt);
    printf("%d", depth);
}