#include <stdio.h>

int main()
{
    int n, a, b, c;
    int ctd=0;
    scanf("%d", &n);
    for (a=1; a<n; a++) {
        for (b=a; b<n; b++) {
            c = n - a - b;
            if (c >= b) {
                ctd ++;
            }
        }
    }
    printf("%d", ctd);
}