#include <stdio.h>

int main()
{
    unsigned long long N, D=0, M;
    int check=0;
    scanf("%llu", &N);
    while (N > 0) {
        M = N % 10;
        N = N / 10;
        if (M==0&&check==0) {
            continue;
        }
        check=1;
        printf("%d", M);
    }
}