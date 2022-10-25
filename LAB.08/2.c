#include <stdio.h>
#include <math.h>

int main() {
    unsigned int N, M;
    unsigned int k, j, cnt = 0;
    scanf("%u %u", &N, &M);
    for (unsigned int i = N; i <= M; i++) {
        if (i == 4294967295) {
            break;
        }
        j = i;
        k = 0;
        while(j > 0) {
            k += j % 10;
            j = j / 10;
        }
        if ((int)sqrt(k)*(int)sqrt(k) == k) {
            cnt++;
        }
    }
    printf("%d", cnt);
}