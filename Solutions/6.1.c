// 소수 판별하기

#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n == 1) {
        return 2;
    }
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    if(isprime(N) == 2) {
        printf("not prime");
    }
    else if (isprime(N) == 0) {
        printf("composite");
    }
    else {
        printf("prime");
    }
}