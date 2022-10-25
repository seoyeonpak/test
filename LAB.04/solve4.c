#include <stdio.h>

int main() {
    int N, i, j, k=1;
    scanf("%d", &N);
    for (i=1; i<=N; i++) {
        for (j=1; j<=i; j++) {
            printf("%d", k);
            if (j<i) {
                printf(" ");
            }
            k+=2;
        }
        printf("\n");
    }
}