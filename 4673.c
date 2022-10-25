#include <stdio.h>

int selfnumber(int n) {
    int k = n, j = 0;
    while (n > 0) {
        j += (n % 10);
        n /= 10;
    }
    return k + j;
}

int main() {
    int A[20000];
    for (int i = 0; i < 10000; i++) {
        A[i] = 1;
    }
    for (int i = 1; i <= 10000; i++) {
        A[selfnumber(i)] = 0;
    }
    for (int i = 1; i <= 10000; i++) {
        if (A[i]) {
            printf("%d\n", i);
        }
    }
}