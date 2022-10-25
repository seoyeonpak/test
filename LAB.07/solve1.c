#include <stdio.h>

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    else {
        return gcd(m, n%m);
    }
}

int lcm(int n, int m) {
    return (n * m)/gcd(n, m);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d\n%d", gcd(N,M), lcm(N,M));
}