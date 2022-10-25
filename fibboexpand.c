#include <stdio.h>

/*int fibboexpand(int n) {
    if (n == -1) {
        return 1;
    }
    else if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n > 1) {
        return (fibboexpand(n - 1) + fibboexpand(n - 2)) % 1000000000;
    }
    else {
        return (fibboexpand(-n - 1) + fibboexpand(-n - 2)) % 1000000000;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("%d\n", 1);
    }
    else if (n == 0) {
        printf("%d\n", 0);
    }
    else {
        printf("%d\n", -1);
    }
    printf("%d",fibboexpand(n));
}*/
long long A[2000001];

int main() {
    int n;
    scanf("%d", &n);
    A[1000001] = A[1] = 1;
    A[0] = 0;
    for (int i = 2; i <= 1000000; i++) {
        A[i] = (A[i - 1] + A[i - 2]) % 1000000000;
    }
    for (int j = 2 + 1000000; j <= 2000001; j++) {
        if (n % 2 == 0) {
            A[j] = -(A[j - 1000001] + A[j - 1000002]) % 1000000000;
        }
        else {
            A[j] = (A[j - 1000001] + A[j - 1000002]) % 1000000000;
        }
    }

    if (n >= 0) {
        if (n == 0) {
            printf("%d\n", 0);
        }
        else {
            printf("%d\n", 1);
        }
        printf("%lld", A[n]);
    }
    else {
        if (n % 2 == 0) {
            printf("%d\n", -1);
            printf("%lld", -A[-n + 1000000]);
        }
        else {
            printf("%d\n", 1);
            printf("%lld", A[-n + 1000000]);
        }
    }
}