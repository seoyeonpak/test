#include <stdio.h>
#include <math.h>

long long near0(int N, long long A[100000]) {
    long long a, b = 1000000000, c = -1000000000, d, e, f, g;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            a = A[i] + A[j];
            if (a > 0) {
                if (a < b) {
                    b = a;
                    d = i;
                    e = j;
                }
            }
            if else (a == 0) {
                return A[i], A[j];
            }
            else {
                if (a > c) {
                    c = a;
                    f = i;
                    g = j;
                }
            }
        }
    }
    if (abs(b) > abs(c)) {
        return f, g;
    }
    else {
        return d, e;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    printf("%lld %lld", near0(N, A));
}