#include <stdio.h>

int main()
{
    int i, j, cnt = 0;

    for (i=1; i<10; i++) {
        if (i % 2 == 0)
            continue;
        for (j=i; j<10;j++) {
            if (j % 5 ==0)
                break;
            cnt += 1;
        }
        // cnt = 10
        // cnt += 1
    }
    printf("%d %d %d", i, j , cnt);
}