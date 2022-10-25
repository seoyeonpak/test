#include <stdio.h>
#include <math.h>

void swap(int A[], int i, int j) {
    int t = A[i]; A[i] = A[j]; A[j] = t;
}

int bubblesort(int A[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, j, j + 1);
            }
        }
    }
}

int isanagram(unsigned n, unsigned m) {
    int A[9], B[9];
    for (int i = 0; i < 9; i++) {
        A[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < 9; i++) {
        B[i] = m % 10;
        m /= 10;
    }
    bubblesort(A, 9);
    bubblesort(B, 9);
    for (int i = 0; i < 9; i++) {
        if (A[i] != B[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned N, M, cnt = 0;
    scanf("%u\n%u", &N, &M);
    for (unsigned i = 0; i < M; i++) {
        unsigned temp;
        scanf("%u", &temp);
        cnt += isanagram(N, temp);
    }
    printf("%u", cnt);
}