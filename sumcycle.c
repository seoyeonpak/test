#include <stdio.h>

int main() {
    int n, k = 0, j, cnt = 0;
    scanf("%d", &n);
    j = n;
    if (j < 10) {
        j *= 11;
    }
    else {
        k = (j % 10) + ((j / 10) % 10);
        j = (j % 10) * 10 + (k % 10);
    }
    cnt++;
    while (j != n) {
        //printf("%d\n", j);
        if (j < 10) {
            j *= 11;
        }
        else {
            k = (j % 10) + ((j / 10) % 10);
            j = (j % 10) * 10 + (k % 10);
        }
        cnt++;
    }
    printf("%d", cnt);
}