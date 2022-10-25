// 최대공약수와 최소공배수

#include <stdio.h>

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    if (m > 0) {
        return gcd(m, n % m);
    }
}

int lcm(int n, int m) {
    return (n * m) / gcd(n, m);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d\n", gcd(N, M));
    printf("%d", lcm(N, M));
}