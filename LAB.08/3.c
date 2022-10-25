#include <stdio.h>
#include <ctype.h>

int main() {
    int N, cnt_alpha = 0, cnt_upper = 0, cnt_digit = 0;
    char k;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        scanf("%c", &k);
        if (isalpha(k)) {
            cnt_alpha++;
        }
        if (isupper(k)) {
            cnt_upper++;
        }
        if (isdigit(k)) {
            cnt_digit++;
        }
    }
    printf("%d\n%d\n%d", cnt_alpha, cnt_upper, cnt_digit);
}